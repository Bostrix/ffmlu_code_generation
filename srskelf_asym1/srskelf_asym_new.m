function F = srskelf_asym_new(A_func_id, x, occ, rank_or_tol, pxyfun_func_id, opts)
    %#codegen
    start = tic;

    % Ensure opts has the necessary fields
    requiredFields = {'nu', 'area', 'P', 'qcorr', 'contrast', 'wuse', 'verb', 'symm', 'lvlmax', 'ext'};
    for k = 1:length(requiredFields)
        if ~isfield(opts, requiredFields{k})
            error(['Missing field in opts: ', requiredFields{k}]);
        end
    end

    % Dispatch function handles based on identifiers
    switch A_func_id
        case 1
            A = @(i, j) Afun_lap_te(i, j, x, opts.nu, opts.area, opts.P, opts.qcorr, opts.contrast, opts.wuse);
        otherwise
            error('Invalid function identifier for A.');
    end

    switch pxyfun_func_id
        case 1
            pxyfun = @(x, slf, nbr, proxy, l, ctr) pxyfun_lap_neumann(x, slf, nbr, proxy, l, ctr, opts.area);
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
    assert(numel(t.nodes) <= 10000); % Assuming an upper bound for nodes for codegen

    if opts.verb
        fprintf(['-' * ones(1, 80) '\n'])
        fprintf('%3s | %6s | %8s | %8s | %8s | %8s | %10s (s)\n', ...
                'lvl', 'nblk', 'nRemIn', 'nRemOut', 'inRatio', 'outRatio', 'time')
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
    e = repmat(struct('sk', zeros(0,1,'double'), 'rd', zeros(0,1,'double'), 'nbr', zeros(0,1,'double'), 'T', zeros(0,0,'double'), 'E', zeros(0,0,'double'), 'F', zeros(0,0,'double'), 'L', zeros(0,0,'double'), 'U', zeros(0,0,'double'), 'C', zeros(0,0,'double'), 'D', zeros(0,0,'double')), nbox, 1);
    F = struct('N', N, 'nlvl', t.nlvl, 'lvp', zeros(1, t.nlvl + 1, 'double'), 'factors', e, 'symm', opts.symm);
    nlvl = 0;
    n = 0;
    rem = true(N, 1); % Initialize rem as logical
    lookup_list = zeros(nbox, 1, 'double'); % Ensure lookup_list is double
    rng(1);

    % Declare variable-size arrays with upper bounds
    coder.varsize('tmp2', [10000, 10000]); % Set an upper bound for tmp2
    coder.varsize('tmp1', [10000, 1]); % Set an upper bound for tmp1
    coder.varsize('lst', [10000, 1]); % Set an upper bound for lst
    coder.varsize('update_list', [10000, 1]); % Declare update_list as variable-size array with upper bound
    coder.varsize('F.factors', [10000, 1]); % Declare the entire factors field as variable-size

    for lvl = t.nlvl:-1:1
        time = tic;
        nlvl = nlvl + 1;
        nrem1 = sum(rem);

        for i = t.lvp(lvl) + 1:t.lvp(lvl + 1)
            if ~isempty(t.nodes(i).chld)
                xi_child = [t.nodes(t.nodes(i).chld).xi];
                t.nodes(i).xi = [t.nodes(i).xi, xi_child(:)'];
            end

            boxsize = t.lrt / 2^(lvl - 1);
            tol = rank_or_tol;
            use_lproxy = true;

            if use_lproxy
                nterms = log(1.0 / tol) / log(1.0 / sqrt(3.0));
                nterms = max(nterms, 3);
            end
            p = (nterms + 1)^2;
            proxy = randn(3, p);
            proxy = 1.5 * bsxfun(@rdivide, proxy, sqrt(sum(proxy.^2)));

            for j = t.lvp(lvl) + 1:t.lvp(lvl + 1)
                slf = t.nodes(j).xi;
                nbr = [t.nodes(t.nodes(j).nbor).xi];

                nslf = length(slf);
                slf = sort(slf);
                nnbr = length(nbr);
                nbr = sort(nbr);

                if lvl == 2
                    lst = zeros(0, 1, 'double');
                    l = t.lrt / 2^(lvl - 1);
                else
                    lst = reshape([t.nodes(t.nodes(j).ilist).xi], [], 1); % Ensure lst is a column vector
                    l = t.lrt / 2^(lvl - 1) * 3 / 2;
                end

                Kpxy = zeros(0, nslf, 'double');
                if lvl > 2
                    [Kpxy, lst2] = pxyfun(x, slf, lst, proxy, l, t.nodes(j).ctr);
                end

                nlst = length(lst);
                lst = sort(lst);

                K1 = full(A(lst, slf));
                if strcmpi(opts.symm, 'n')
                    K1 = [K1; conj(full(A(slf, lst)))'];
                end

                K2 = spget('lst', 'slf', nbox, lst, slf); % Pass nbox, lst, slf to spget function
                if strcmpi(opts.symm, 'n')
                    K2 = [K2; conj(spget('slf', 'lst', nbox, slf, lst))];
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

                K = full(A(slf, slf)) + spget('slf', 'slf', nbox, slf, slf);
                K2 = full(A(nbr, slf)) + spget('nbr', 'slf', nbox, nbr, slf);
                if strcmpi(opts.symm, 'n')
                    K3 = full(A(slf, nbr)) + spget('slf', 'nbr', nbox, slf, nbr);
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

                % Ensure each variable-size array field is dynamically sized
                coder.varsize('sk_var', [10000, 1]); % Set an upper bound for sk_var
                coder.varsize('rd_var', [10000, 1]); % Set an upper bound for rd_var
                coder.varsize('nbr_var', [10000, 1]); % Set an upper bound for nbr_var
                coder.varsize('T_var', [10000, 10000]); % Set an upper bound for T_var
                coder.varsize('E_var', [10000, 10000]); % Set an upper bound for E_var
                coder.varsize('F_var', [10000, 10000]); % Set an upper bound for F_var
                coder.varsize('L_var', [10000, 10000]); % Set an upper bound for L_var
                coder.varsize('U_var', [10000, 10000]); % Set an upper bound for U_var
                coder.varsize('C_var', [10000, 10000]); % Set an upper bound for C_var
                coder.varsize('D_var', [10000, 10000]); % Set an upper bound for D_var

                % Allocate arrays with coder.nullcopy
                sk_var = coder.nullcopy(zeros(10000, 1, 'double'));
                rd_var = coder.nullcopy(zeros(10000, 1, 'double'));
                nbr_var = coder.nullcopy(zeros(10000, 1, 'double'));
                T_var = coder.nullcopy(zeros(10000, 10000, 'double'));
                E_var = coder.nullcopy(zeros(10000, 10000, 'double'));
                F_var = coder.nullcopy(zeros(10000, 10000, 'double'));
                L_var = coder.nullcopy(zeros(10000, 10000, 'double'));
                U_var = coder.nullcopy(zeros(10000, 10000, 'double'));
                C_var = coder.nullcopy(zeros(10000, 10000, 'double'));
                D_var = coder.nullcopy(zeros(10000, 10000, 'double'));

                if ~isempty(sk)
                    F.factors(n).sk = sk_var(1:length(slf(sk)));
                    F.factors(n).sk(1:length(slf(sk))) = double(slf(sk));
                end
                if ~isempty(rd)
                    F.factors(n).rd = rd_var(1:length(slf(rd)));
                    F.factors(n).rd(1:length(slf(rd))) = double(slf(rd));
                end
                if ~isempty(nbr)
                    F.factors(n).nbr = nbr_var(1:length(nbr));
                    F.factors(n).nbr(1:length(nbr)) = double(nbr);
                end
                if ~isempty(T)
                    F.factors(n).T = T_var(1:size(T, 1), 1:size(T, 2));
                    F.factors(n).T(1:size(T, 1), 1:size(T, 2)) = double(T);
                end
                if ~isempty(E)
                    F.factors(n).E = E_var(1:size(E, 1), 1:size(E, 2));
                    F.factors(n).E(1:size(E, 1), 1:size(E, 2)) = double(E);
                end
                if ~isempty(G)
                    F.factors(n).F = F_var(1:size(G, 1), 1:size(G, 2));
                    F.factors(n).F(1:size(G, 1), 1:size(G, 2)) = double(G);
                end
                if ~isempty(L)
                    F.factors(n).L = L_var(1:size(L, 1), 1:size(L, 2));
                    F.factors(n).L(1:size(L, 1), 1:size(L, 2)) = double(L);
                end
                if ~isempty(U)
                    F.factors(n).U = U_var(1:size(U, 1), 1:size(U, 2));
                    F.factors(n).U(1:size(U, 1), 1:size(U, 2)) = double(U);
                end
                if ~isempty(C)
                    F.factors(n).C = C_var(1:size(C, 1), 1:size(C, 2));
                    F.factors(n).C(1:size(C, 1), 1:size(C, 2)) = double(C);
                end
                if ~isempty(D)
                    F.factors(n).D = D_var(1:size(D, 1), 1:size(D, 2));
                    F.factors(n).D(1:size(D, 1), 1:size(D, 2)) = double(D);
                end

                lookup_list(j) = double(n); % Ensure lookup_list is double

                t.nodes(j).xi = slf(sk);
                rem(slf(rd)) = false; % Ensure rem is logical
            end
            F.lvp(nlvl + 1) = double(n); % Ensure F.lvp is double

            if opts.verb
                nrem2 = sum(rem);
                nblk = pblk(lvl) + t.lvp(lvl + 1) - t.lvp(lvl);
                fprintf('%3d | %6d | %8d | %8d | %8.2f | %8.2f | %10.2e (s)\n', ...
                        lvl, nblk, nrem1, nrem2, nrem1 / nblk, nrem2 / nblk, toc(time))
            end
        end
    end

    F.factors = F.factors(1:n);
    if opts.verb
        fprintf(['-' * ones(1, 80) '\n'])
        toc(start)
    end

    % Nested function to get update list iteratively
    function get_update_list_iterative(node_idx, update_list)
        stack = false(nbox, 1); % Ensure stack is logical
        stack_ptr = 1;
        stack(stack_ptr) = node_idx;
        while stack_ptr > 0
            current_node = stack(stack_ptr);
            stack_ptr = stack_ptr - 1;
            update_list(current_node) = true;

            % Extract snbor field
            snbor_list = t.nodes(current_node).snbor;
            for k = 1:length(snbor_list)
                update_list(snbor_list(k)) = true;
            end

            % Update children
            chld = t.nodes(current_node).chld;
            for k = 1:length(chld)
                stack_ptr = stack_ptr + 1;
                stack(stack_ptr) = chld(k);
            end
        end
    end

    % Nested function to calculate spget
    function A = spget(Ityp, Jtyp, nbox, lst, slf)
        coder.varsize('tmp2', [10000, 10000]); % Declare tmp2 as variable-size array

        if strcmpi(Ityp, 'slf')
            I_ = double(slf);
            m_ = double(length(slf));
        elseif strcmpi(Ityp, 'nbr')
            I_ = double(nbr);
            m_ = double(length(nbr));
        elseif strcmpi(Ityp, 'lst')
            I_ = double(lst);
            m_ = double(length(lst));
        end

        if strcmpi(Jtyp, 'slf')
            J_ = double(slf);
            n_ = double(length(slf));
        elseif strcmpi(Jtyp, 'nbr')
            J_ = double(nbr);
            n_ = double(length(nbr));
        elseif strcmpi(Jtyp, 'lst')
            J_ = double(lst);
            n_ = double(length(lst));
        end

        A = zeros(m_, n_, 'double'); % Ensure A is double
        update_list = false(nbox, 1); % Initialize logical array
        get_update_list_iterative(i, update_list); % Pass update_list to function
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
                idxI = double(idxI); % Ensure idxI is double
                tmp1 = double(idxI ~= 0);
                subI = double(idxI(tmp1));
                idxI1 = double(tmp1(1:f));
                idxI2 = double(tmp1(f + 1:end));
                tmp1 = double([g.E(idxI1, :); g.C(idxI2, :)]);
                if strcmpi(opts.symm, 'p')
                    A(subI, subI) = A(subI, subI) - tmp1 * tmp1';
                elseif strcmpi(opts.symm, 'n')
                    tmp2 = zeros(f + nnbr, size(g.F, 2), 'double'); % Initialize tmp2 to match dimensions
                    tmp2(1:f, :) = g.F(:, idxI1);
                    tmp2(f + 1:end, :) = g.D(:, idxI2);
                    A(subI, subI) = A(subI, subI) - tmp1 * tmp2;
                end
            else
                idxI = find_locations_t(xj, I_);
                idxJ = find_locations_t(xj, J_);

                idxI = double(idxI); % Ensure idxI is double
                idxJ = double(idxJ); % Ensure idxJ is double

                tmp1 = double(idxI ~= 0);
                tmp2 = double(idxJ ~= 0);

                subI = double(idxI(tmp1));
                subJ = double(idxJ(tmp2));
                idxI1 = double(tmp1(1:f));
                idxI2 = double(tmp1(f + 1:end));
                idxJ1 = double(tmp2(1:f));
                idxJ2 = double(tmp2(f + 1:end));

                tmp1 = double([g.E(idxI1, :); g.C(idxI2, :)]);
                if strcmpi(opts.symm, 'p')
                    tmp2 = zeros(f + nnbr, size(g.E, 2), 'double'); % Initialize tmp2 to match dimensions
                    tmp2(1:f, :) = g.E(idxJ1, :);
                    tmp2(f + 1:end, :) = g.C(idxJ2, :);
                elseif strcmpi(opts.symm, 'n')
                    tmp2 = zeros(f + nnbr, size(g.F, 2), 'double'); % Initialize tmp2 to match dimensions
                    tmp2(1:f, :) = g.F(:, idxJ1);
                    tmp2(f + 1:end, :) = g.D(:, idxJ2);
                end
                A(subI, subJ) = A(subI, subJ) - tmp1 * tmp2;
            end
        end
    end

    % Nested function to find locations
    function locs = find_locations_t(big_sorted_list, elements_to_find)
        coder.varsize('locs', [10000, 1]); % Set an upper bound for locs
        locs = zeros(length(big_sorted_list), 1, 'double'); % Ensure locs is double and has proper size
        for i = 1:length(elements_to_find)
            element = elements_to_find(i);
            loc = binary_search_t(big_sorted_list, element);
            if loc ~= -1
                locs(loc) = double(i);
            end
        end

        function loc = binary_search_t(arr_, target_)
            left = 1;
            right = length(arr_);
            while left <= right
                mid = floor((left + right) / 2);
                if arr_(mid) == target_
                    loc = mid;
                    return;
                elseif arr_(mid) < target_
                    left = mid + 1;
                else
                    right = mid - 1;
                end
            end
            loc = -1;
        end
    end
end

