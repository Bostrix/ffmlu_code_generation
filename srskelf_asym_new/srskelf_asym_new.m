function F = srskelf_asym_new(A_func_id, x, occ, rank_or_tol, pxyfun_func_id, opts)
    % SRSKELF_ASYM   Asymmetric strong recursive skeletonization factorization.
    %
    %    F = SRSKELF_ASYM(A_func_id, X, OCC, RANK_OR_TOL, PXYFUN_func_id, OPTS) 
    %    produces a factorization F of the interaction matrix A on the points X 
    %    using tree occupancy parameter OCC, local precision parameter RANK_OR_TOL, 
    %    and proxy function PXYFUN to capture the far field. This is a function 
    %    of the form
    %
    %      [KPXY, NBR] = PXYFUN(X, SLF, NBR, proxy, L, CTR)
    %
    %    that is called for every block, where
    %
    %      - KPXY: interaction matrix against artificial proxy points
    %      - NBR:  block neighbor indices (can be modified)
    %      - X:    input points
    %      - SLF:  block indices
    %      - proxy: proxy points on the unit sphere
    %      - L:    block size
    %      - CTR:  block center
    %
    %    See the examples for further details.
    %
    %    F = SRSKELF_ASYM(A_func_id, X, OCC, RANK_OR_TOL, PXYFUN_func_id, OPTS) 
    %    also passes various options to the algorithm. Valid options include:
    %
    %      - EXT: set the root node extent to [EXT(I,1) EXT(I,2)] along 
    %             dimension I.  If EXT is empty (default), then the root extent
    %             is calculated from the data.
    %
    %      - LVLMAX: maximum tree depth (default: LVLMAX = Inf).
    %
    %      - SYMM: assume that the matrix is asymmetric if SYMM = 'N' and 
    %              Hermitian positive definite if SYMM = 'P' (default: SYMM = 
    %              'N'). If SYMM = 'N', then local factors are computed using 
    %              the LU decomposition; if SYMM = 'P', the Cholesky 
    %              decomposition.
    %
    %      - VERB: display status of the code if VERB = 1 (default: VERB = 0).
    %

    start = tic;

    % Ensure opts has the necessary fields
    requiredFields = {'nu', 'area', 'P', 'qcorr', 'contrast', 'wuse'};
    for k = 1:length(requiredFields)
        if ~isfield(opts, requiredFields{k})
            error(['Missing field in opts: ', requiredFields{k}]);
        end
    end

    % Dispatch function handles based on identifiers
    switch A_func_id
        case 1
            A = @(i, j) Afun_lap_te(i, j, x, opts.nu, opts.area, opts.P, opts.qcorr, opts.contrast, opts.wuse);
        % Add more cases as needed for other functions
        otherwise
            error('Invalid function identifier for A.');
    end

    switch pxyfun_func_id
        case 1
            pxyfun = @(x, slf, nbr, proxy, l, ctr) pxyfun_lap_neumann(x, slf, nbr, proxy, l, ctr, opts.area);
        % Add more cases as needed for other functions
        otherwise
            error('Invalid function identifier for pxyfun.');
    end

    if opts.verb
        disp('This is standard asymmetric srskelf (RS-S).');
    end

    % Check inputs are sensible
    assert(strcmpi(opts.symm, 'p') || strcmpi(opts.symm, 'n'), ...
           'RSS:srskelf_asym:invalidSymm', ...
           'Symmetry parameter must be ''p'' or ''n''.');

    % Build tree to hold the discretization points
    N = size(x, 2);
    tic
    t = shypoct(x, occ, opts.lvlmax, opts.ext);

    if opts.verb
        fprintf(['-' * ones(1, 80) '\n'])
        fprintf('%3s | %6s | %8s | %8s | %8s | %8s | %10s (s)\n', ...
                'lvl', 'nblk', 'nRemIn', 'nRemOut', 'inRatio', 'outRatio', 'time')
        % Print summary information about tree construction
        fprintf(['-' * ones(1, 80) '\n'])
        fprintf('%3s | %63.2e (s)\n', '-', toc)

        % Count the nonempty boxes at each level
        pblk = zeros(t.nlvl + 1, 1);
        for lvl = 1:t.nlvl
            pblk(lvl + 1) = pblk(lvl);
            for i = t.lvp(lvl) + 1:t.lvp(lvl + 1)
                if ~isempty(t.nodes(i).xi)
                    pblk(lvl + 1) = pblk(lvl + 1) + 1;
                end
            end
        end
    end

    % Initialize the data structure holding the factorization
    nbox = t.lvp(end);

    % Initialize struct fields as empty arrays
    e = repmat(struct('sk', zeros(0, 1), 'rd', zeros(0, 1), 'nbr', zeros(0, 1), 'T', zeros(0, 0), ... % Modified
                      'E', zeros(0, 0), 'F', zeros(0, 0), 'L', zeros(0, 0), 'U', zeros(0, 0), ... % Modified
                      'C', zeros(0, 0), 'D', zeros(0, 0)), nbox, 1); % Modified

    F = struct('N', N, 'nlvl', t.nlvl, 'lvp', zeros(1, t.nlvl + 1), 'factors', e, 'symm', opts.symm);
    nlvl = 0;
    n = 0;
    rem = true(N, 1);
    lookup_list = zeros(nbox, 1);
    rng(1);

    % Loop over the levels of the tree from bottom to top
    for lvl = t.nlvl:-1:1
        time = tic;
        nlvl = nlvl + 1;
        nrem1 = sum(rem);

        for i = t.lvp(lvl) + 1:t.lvp(lvl + 1)
            if ~isempty(t.nodes(i).chld)
                xi_child = [];
                for k = 1:length(t.nodes(i).chld)
                    xi_child = [xi_child, t.nodes(t.nodes(i).chld(k)).xi];
                end
                t.nodes(i).xi = [t.nodes(i).xi, xi_child];
            end
        end

        boxsize = t.lrt / 2^(lvl - 1);
        tol = rank_or_tol;

        use_lproxy = true;

        if use_lproxy
            nterms = log(1.0 / tol) / log(1.0 / sqrt(3.0));
            nterms = max(nterms, 3);
        % else
        %     nterms = h3dterms(boxsize, opts.zk, tol);
        end
        p = (nterms + 1)^2;
        proxy = randn(3, p);
        proxy = 1.5 * bsxfun(@rdivide, proxy, sqrt(sum(proxy.^2)));

        for i = t.lvp(lvl) + 1:t.lvp(lvl + 1)
            slf = t.nodes(i).xi;
            
            % Preallocate nbr to handle size mismatch
            nbr_size = sum(cellfun(@(x) length(t.nodes(x).xi), num2cell(t.nodes(i).nbor))); % Modified
            nbr = zeros(1, nbr_size); % Modified
            nbr_idx = 1;
            for k = 1:length(t.nodes(i).nbor)
                xi_nbor = t.nodes(t.nodes(i).nbor(k)).xi;
                nbr(nbr_idx:nbr_idx+length(xi_nbor)-1) = xi_nbor;
                nbr_idx = nbr_idx + length(xi_nbor);
            end

            nslf = length(slf);
            slf = sort(slf);
            nnbr = length(nbr);
            nbr = sort(nbr);

            if lvl == 2
                lst = [];
                l = t.lrt / 2^(lvl - 1);
            else
                % Preallocate lst to handle size mismatch
                ilist_size = sum(cellfun(@(x) length(t.nodes(x).xi), num2cell(t.nodes(i).ilist))); % Modified
                lst = zeros(1, ilist_size); % Modified
                lst_idx = 1;
                for k = 1:length(t.nodes(i).ilist)
                    xi_ilist = t.nodes(t.nodes(i).ilist(k)).xi;
                    lst(lst_idx:lst_idx+length(xi_ilist)-1) = xi_ilist;
                    lst_idx = lst_idx + length(xi_ilist);
                end
                l = t.lrt / 2^(lvl - 1) * 3 / 2;
            end

            Kpxy = zeros(0, nslf, 'double');
            if lvl > 2
                [Kpxy, lst2] = pxyfun(x, slf, lst, proxy, l, t.nodes(i).ctr);
            end

            nlst = length(lst);
            lst = sort(lst);

            K1 = full(A(lst, slf));
            if strcmpi(opts.symm, 'n')
                K1 = [K1; conj(full(A(slf, lst)))'];
            end

            K2 = spget('lst', 'slf');
            if strcmpi(opts.symm, 'n')
                K2 = [K2; conj(spget('slf', 'lst'))'];
            end
            if lvl > 2
                K = [K1 + K2; Kpxy];
            else
                K = [K1 + K2; Kpxy];
            end

            [sk, rd, T] = id(K, rank_or_tol);

            if isempty(rd)
                continue
            end

            K = full(A(slf, slf)) + spget('slf', 'slf');
            K2 = full(A(nbr, slf)) + spget('nbr', 'slf');
            if strcmpi(opts.symm, 'n')
                K3 = full(A(slf, nbr)) + spget('slf', 'nbr');
            end

            K(rd, :) = K(rd, :) - conj(T)' * K(sk, :);
            K(:, rd) = K(:, rd) - K(:, sk) * T;
            K2(:, rd) = K2(:, rd) - K2(:, sk) * T;
            if strcmpi(opts.symm, 'n')
                K3(rd, :) = K3(rd, :) - conj(T)' * K3(sk, :);
            end

            if strcmpi(opts.symm, 'p')
                L = chol(K(rd, rd), 'lower');
                U = [];
                E = K(sk, rd) / conj(L)';
                G = [];
                C = K2(:, rd) / conj(L)';
                D = [];
            elseif strcmpi(opts.symm, 'n')
                [L, U] = lu(K(rd, rd));
                E = K(sk, rd) / U;
                G = L \ K(rd, sk);
                C = K2(:, rd) / U;
                D = L \ K3(rd, :);
            end

            n = n + 1;

            % Ensure slf and sk are not empty and have consistent dimensions
            if isempty(slf) || isempty(sk)
                F.factors(n).sk = zeros(0, 1); % Use an empty column vector for consistency (Modified)
            else
                F.factors(n).sk = double(slf(sk));
            end

            if isempty(slf) || isempty(rd)
                F.factors(n).rd = zeros(0, 1); % Use an empty column vector for consistency (Modified)
            else
                F.factors(n).rd = double(slf(rd));
            end

            F.factors(n).nbr = double(nbr);
            F.factors(n).T = double(T);
            F.factors(n).E = double(E);
            F.factors(n).F = double(G);
            F.factors(n).L = double(L);
            F.factors(n).U = double(U);
            F.factors(n).C = double(C);
            F.factors(n).D = double(D);
            lookup_list(i) = n;

            if ~isempty(slf) && ~isempty(sk)
                t.nodes(i).xi = slf(sk);
            end
            rem(slf(rd)) = 0;
        end
        F.lvp(nlvl + 1) = n;

        if opts.verb
            nrem2 = sum(rem);
            nblk = pblk(lvl) + t.lvp(lvl + 1) - t.lvp(lvl);
            fprintf('%3d | %6d | %8d | %8d | %8.2f | %8.2f | %10.2e (s)\n', ...
                    lvl, nblk, nrem1, nrem2, nrem1 / nblk, nrem2 / nblk, toc(time))
        end
    end

    F.factors = F.factors(1:n);
    if opts.verb
        fprintf(['-' * ones(1, 80) '\n'])
        toc(start)
    end

    function A = spget(Ityp, Jtyp)
        if strcmpi(Ityp, 'slf')
            I_ = slf;
            m_ = nslf;
        elseif strcmpi(Ityp, 'nbr')
            I_ = nbr;
            m_ = nnbr;
        elseif strcmpi(Ityp, 'lst')
            I_ = lst;
            m_ = nlst;
        end

        if strcmpi(Jtyp, 'slf')
            J_ = slf;
            n_ = nslf;
        elseif strcmpi(Jtyp, 'nbr')
            J_ = nbr;
            n_ = nnbr;
        elseif strcmpi(Jtyp, 'lst')
            J_ = lst;
            n_ = nlst;
        end

        A = zeros(m_, n_, 'like', double(lst)); % Ensure A has the same type as lst (Modified)
        update_list = false(nbox, 1);
        get_update_list_iterative(i);
        update_list_indices = find(update_list);
        lookup_indices = lookup_list(update_list_indices);
        lookup_indices = lookup_indices(lookup_indices ~= 0)';
        for idx = 1:length(lookup_indices)
            jj = lookup_indices(idx);
            g = F.factors(jj);
            xj = [g.sk, g.nbr];
            f = length(g.sk);

            if strcmpi(Ityp, Jtyp)
                idxI = find_locations_t(xj, I_);
                tmp1 = double(idxI ~= 0);
                subI = idxI(tmp1);
                idxI1 = tmp1(1:f);
                idxI2 = tmp1(f + 1:end);
                tmp1 = [g.E(idxI1, :); g.C(idxI2, :)];
                if strcmpi(opts.symm, 'p')
                    A(subI, subI) = A(subI, subI) - tmp1 * tmp1';
                elseif strcmpi(opts.symm, 'n')
                    tmp2 = [g.F(:, idxI1), g.D(:, idxI2)];
                    A(subI, subI) = A(subI, subI) - tmp1 * tmp2;
                end
            else
                idxI = find_locations_t(xj, I_);
                idxJ = find_locations_t(xj, J_);

                tmp1 = double(idxI ~= 0);
                tmp2 = double(idxJ ~= 0);

                subI = idxI(tmp1);
                subJ = idxJ(tmp2);
                idxI1 = tmp1(1:f);
                idxI2 = tmp1(f + 1:end);
                idxJ1 = tmp2(1:f);
                idxJ2 = tmp2(f + 1:end);

                tmp1 = [g.E(idxI1, :); g.C(idxI2, :)];
                if strcmpi(opts.symm, 'p')
                    tmp2 = [g.E(idxJ1, :); g.C(idxJ2, :)]';
                elseif strcmpi(opts.symm, 'n')
                    tmp2 = [g.F(:, idxJ1), g.D(:, idxJ2)];
                end
                A(subI, subJ) = A(subI, subJ) - tmp1 * tmp2;
            end
        end

        function get_update_list_iterative(node_idx)
            stack = zeros(nbox, 1, 'logical'); % Ensure stack is logical (Modified)
            stack_ptr = 1;
            stack(stack_ptr) = node_idx;
            while stack_ptr > 0
                current_node = stack(stack_ptr);
                stack_ptr = stack_ptr - 1;
                update_list(current_node) = true;
                snbor = t.nodes(current_node).snbor;
                for k = 1:length(snbor)
                    update_list(snbor(k)) = true;
                end
                chld = t.nodes(current_node).chld;
                for k = 1:length(chld)
                    stack_ptr = stack_ptr + 1;
                    stack(stack_ptr) = chld(k);
                end
            end
        end
    end
end

function locs = find_locations_t(big_sorted_list, elements_to_find)
    % Initialize an empty array to store the locations
    locs = zeros(size(big_sorted_list), 'like', double(big_sorted_list)); % Ensure locs has the same type as big_sorted_list (Modified)
    
    % Iterate over each element to find
    for i = 1:length(elements_to_find)
        element = elements_to_find(i);
        % Use the local function binary_search to find the location of the element
        loc = binary_search_t(big_sorted_list, element);
        
        % If the element is found (location is not -1), add it to the locs array
        if loc ~= -1
            locs(loc) = i;
        end
    end
    
    % Local function to perform binary search
    function loc = binary_search_t(arr_, target_)
        % Initialize the bounds for the search
        left = 1;
        right = length(arr_);
        
        % Perform the binary search
        while left <= right
            % Calculate the midpoint
            mid = floor((left + right) / 2);
            
            % Check if the target is found
            if arr_(mid) == target_
                loc = mid;
                return;
                % Found, return
            elseif arr_(mid) < target_
                left = mid + 1;
            else
                right = mid - 1;
            end
        end
        
        % If the element is not found, return -1
        loc = -1;
    end
end
