function F = srskelf_asym_new(A_func_id, x, occ, rank_or_tol, pxyfun_func_id, opts)
  start = tic;

  if nargin < 5
    pxyfun = [];
  end
  if nargin < 6
    opts = [];
  end
  if ~isfield(opts,'ext')
    opts.ext = [];
  end
  if ~isfield(opts,'lvlmax')
    opts.lvlmax = Inf;
  end
  if ~isfield(opts,'symm')
    opts.symm = 'n';
  end
  if ~isfield(opts,'verb')
    opts.verb = 0;
  end
  if ~isfield(opts,'zk')
    opts.zk = 1.0;
  end
  
  if opts.verb
    disp('This is standard asymmetric srskelf (RS-S).');
  end

  assert(strcmpi(opts.symm,'p') || strcmpi(opts.symm,'n'), ...
         'RSS:srskelf_asym:invalidSymm', ...
         'Symmetry parameter must be ''p'' or ''n''.');

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

  % Build tree to hold the discretization points
  N = size(x,2);
  tic
  t = shypoct(x,occ,opts.lvlmax,opts.ext);

  if opts.verb
    fprintf(['-'*ones(1,80) '\n'])
    fprintf('%3s | %6s | %8s | %8s | %8s | %8s | %10s (s)\n', ...
            'lvl','nblk','nRemIn','nRemOut','inRatio','outRatio','time')
    % Print summary information about tree construction
    fprintf(['-'*ones(1,80) '\n'])
    fprintf('%3s | %63.2e (s)\n','-',toc)

    % Count the nonempty boxes at each level
    pblk = zeros(t.nlvl+1,1);
    for lvl = 1:t.nlvl
      pblk(lvl+1) = pblk(lvl);
      for i = t.lvp(lvl)+1:t.lvp(lvl+1)
        if ~isempty(t.nodes(i).xi)
          pblk(lvl+1) = pblk(lvl+1) + 1;
        end
      end
    end
  end

  % Initialize the data structure holding the factorization
  nbox = t.lvp(end);
  
  max_sk_size = 1000; % Set a sufficiently large maximum size
  emptyStruct = struct('sk',zeros(max_sk_size, 1), 'rd',zeros(max_sk_size, 1), 'nbr',zeros(max_sk_size, 1), 'T',[], 'E',[], 'F',[], 'L',[], 'U',[], 'C',[], 'D',[]);
  e = repmat(emptyStruct, nbox, 1);
  
  F = struct('N',N,'nlvl',t.nlvl,'lvp',zeros(1,t.nlvl+1),'factors',e,'symm',opts.symm);

  nlvl = 0;
  n = 0;
  % Mark every DOF as "remaining", i.e., not yet eliminated
  rem = true(N,1);
  lookup_list = zeros(nbox,1);
  rng(1);

  % Loop over the levels of the tree from bottom to top
  for lvl = t.nlvl:-1:1
    time = tic;
    nlvl = nlvl + 1;
    nrem1 = sum(rem);

    % For each box, pull up information about skeletons from child boxes
    for i = t.lvp(lvl)+1:t.lvp(lvl+1)
      % Preallocate xi_combined
      total_size = numel(t.nodes(i).xi);
      for k = 1:numel(t.nodes(i).chld)
        total_size = total_size + numel(t.nodes(t.nodes(i).chld(k)).xi);
      end
      xi_combined = zeros(1, total_size); % Preallocate xi_combined
      xi_combined(1:numel(t.nodes(i).xi)) = t.nodes(i).xi;
      
      % Concatenate xi fields
      offset = numel(t.nodes(i).xi);
      for k = 1:numel(t.nodes(i).chld)
          child_idx = t.nodes(i).chld(k);
          child_xi = t.nodes(child_idx).xi;
          xi_combined(offset + 1 : offset + numel(child_xi)) = child_xi;
          offset = offset + numel(child_xi);
      end
      t.nodes(i).xi = xi_combined;
    end
    
    boxsize = t.lrt/2^(lvl - 1);
    tol = rank_or_tol;
    
    use_lproxy = true; % Directly set use_lproxy to true
    
    if(use_lproxy) 
        nterms = log(1.0/tol)/log(1.0/sqrt(3.0));
        nterms = max(nterms,3);
    else
        nterms = h3dterms(boxsize,opts.zk,tol);
    end
    p = (nterms+1)^2;
    proxy = randn(3,p);
    proxy = 1.5*bsxfun(@rdivide,proxy,sqrt(sum(proxy.^2)));

    % Loop over each box in this level
    for i = t.lvp(lvl)+1:t.lvp(lvl+1)
      slf = t.nodes(i).xi;
      nbr = [t.nodes(t.nodes(i).nbor).xi];

      nslf = length(slf);
      % Sorting not necessary, but makes debugging easier
      slf = sort(slf);
      
      nnbr = length(nbr);
      % Sorting not necessary, but makes debugging easier
      nbr = sort(nbr);

      % If we are at the second level (i.e., the first level we reach in a 
      % bottom-to-top loop in which there do not exist pairs of 
      % non-adjacent boxes) then we can do weak skeletonization, so instead 
      % of the interaction list we skeletonize against the neighbor set.
      % Currently turned off skeletonization at level 1 in current version
      % also removed selecting subset of indices from interaction list,
      % needs to be fixed..
      if lvl == 2
        lst = [];
        %nbr = [];
        %nnbr = 0;
        l = t.lrt/2^(lvl - 1);
      else
        lst = [t.nodes(t.nodes(i).ilist).xi];
        l = t.lrt/2^(lvl - 1) * 3/2;
      end

      % Compute proxy interactions and subselect neighbors
      Kpxy = zeros(0,nslf);
      if lvl > 2
        [Kpxy,lst2] = pxyfun(x,slf,lst,proxy,l,t.nodes(i).ctr);
      end

      nlst = length(lst);
      % Sorting not necessary, but makes debugging easier
      lst = sort(lst);
      
      % Compute interaction matrix between box and far-field (except level
      % 2, where near-field is included).
      K1 = full(A(lst,slf));
      if strcmpi(opts.symm,'n')
        K1 = [K1; conj(full(A(slf,lst)))'];
      end

      K2 = spget('lst','slf');
      if strcmpi(opts.symm,'n')
          K2 = [K2; conj(spget('slf','lst'))'];
      end
      if lvl>2
        K = [K1+K2; Kpxy];
      else
         K = [K1+K2;Kpxy];
      end
      
     % Compute the skeleton/redundant points and interpolation matrix
      [sk,rd,T] = id(K,rank_or_tol);
      

      % Move on to next box if no compression for this box
      if isempty(rd)
        continue
      end

      % Otherwise, compute the diagonal and off-diagonal blocks for this 
      % box
      K  = full(A(slf,slf)) + spget('slf','slf');
      K2 = full(A(nbr,slf)) + spget('nbr','slf');
      if strcmpi(opts.symm,'n')
        K3 = full(A(slf,nbr)) + spget('slf','nbr');
      end
      
      % Skeletonize
      K(rd,:) =  K(rd,:) - conj(T)'*K(sk,:);
      K(:,rd) = K(:,rd) - K(:,sk)*T;
      K2(:,rd) = K2(:,rd) - K2(:,sk)*T; 
      if strcmpi(opts.symm,'n')
        K3(rd,:) = K3(rd,:) - conj(T)'*K3(sk,:); 
      end
      
      if strcmpi(opts.symm,'p')
        % Cholesky for positive definite input
        L = chol(K(rd,rd),'lower');
        U = [];
        E = K(sk,rd)/conj(L)';
        G = [];
        C = K2(:,rd)/conj(L)';
        D = [];
      elseif strcmpi(opts.symm,'n')
        % Otherwise, LU
        [L,U] = lu(K(rd,rd));
        E = K(sk,rd)/U;
        G = L\K(rd,sk);
        C = K2(:,rd)/U;
        D = L\K3(rd,:);
      end
 
      % Store matrix factors for this box
      n = n + 1;
      
      % Ensure slf and sk are not empty and have consistent dimensions
      if isempty(slf) || isempty(sk)
          F.factors(n).sk(1:0) = zeros(0, 1); % Use an empty column vector for consistency
      else
          F.factors(n).sk(1:numel(sk)) = slf(sk);
      end

      if isempty(slf) || isempty(rd)
          F.factors(n).rd(1:0) = zeros(0, 1); % Use an empty column vector for consistency
      else
          F.factors(n).rd(1:numel(rd)) = slf(rd);
      end
      
      if isempty(nbr)
          F.factors(n).nbr(1:0) = zeros(0, 1); % Use an empty column vector for consistency
      else
          F.factors(n).nbr(1:numel(nbr)) = nbr;
      end

      F.factors(n).T = T;
      F.factors(n).E = E;
      F.factors(n).F = G;
      F.factors(n).L = L;
      F.factors(n).U = U;
      F.factors(n).C = C;
      F.factors(n).D = D;

      % Box number i is at index n (more sensible for non-uniform case)
      lookup_list(i) = n;

      t.nodes(i).xi = slf(sk);
      rem(slf(rd)) = 0;
    end
    F.lvp(nlvl+1) = n;
 
    % Print summary for the latest level
    if opts.verb
      nrem2 = sum(rem);
      nblk = pblk(lvl) + t.lvp(lvl+1) - t.lvp(lvl);
      fprintf('%3d | %6d | %8d | %8d | %8.2f | %8.2f | %10.2e (s)\n', ...
              lvl,nblk,nrem1,nrem2,nrem1/nblk,nrem2/nblk,toc(time))
    end
  end

   % Truncate extra storage, and we are done
  F.factors = F.factors(1:n);
  if opts.verb
    fprintf(['-'*ones(1,80) '\n'])
    toc(start)
  end
  
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  function A = spget(Ityp,Jtyp)
    % A = SPGET(ITYP,JTYP) Sparse matrix access function (native MATLAB is 
    % slow for large matrices).  We grab the accumulated Schur complement
    % updates to a block of the matrix from previously-skeletonized 
    % levels.  Index sets ITYP and JTYP can be 'slf', 'nbr', or 'lst'.
    
    % Translate input strings to index sets (and their lengths)
    if strcmpi(Ityp,'slf')
      I_ = slf;
      m_ = nslf;
    elseif strcmpi(Ityp,'nbr')
      I_ = nbr;
      m_ = nnbr;
    elseif strcmpi(Ityp,'lst')
      I_ = lst;
      m_ = nlst;
    end
    
    if strcmpi(Jtyp,'slf')
      J_ = slf;
      n_ = nslf;
    elseif strcmpi(Jtyp,'nbr')
      J_ = nbr;
      n_ = nnbr;
    elseif strcmpi(Jtyp,'lst')
      J_ = lst;
      n_ = nlst;
    end
    
    A = zeros(m_,n_);
    update_list = false(nbox,1);
    nodes = t.nodes; % Local copy of t.nodes to avoid outer variable usage in recursive function
    update_list = get_update_list(i, update_list, nodes); % Pass nodes to the recursive function
    update_list = lookup_list(flip(find(update_list)'));
    update_list = update_list(update_list~=0)';
    for idx = 1:length(update_list) % Use an explicit index for the loop
      jj = update_list(idx);

      % Use temporary variables for each field of the struct
      g_sk = F.factors(jj).sk;
      g_nbr = F.factors(jj).nbr;
      g_E = F.factors(jj).E;
      g_C = F.factors(jj).C;
      g_F = F.factors(jj).F;
      g_D = F.factors(jj).D;

      xj = [g_sk, g_nbr];
      f = length(g_sk);
            
      if strcmpi(Ityp,Jtyp)
        % For diagonal block
        idxI = find_locations_t(xj,I_); % Replace ismembc2 with find_locations_t
        tmp1 = double(idxI~=0); % Convert to double to ensure consistent types
        subI = idxI(tmp1);
        idxI1 = tmp1(1:f);
        idxI2 = tmp1(f+1:end);
        tmp1 = [g_E(idxI1,:); g_C(idxI2,:)];
        
        % Ensure tmp2 is consistent in size
        if isempty(idxI1) && isempty(idxI2)
            tmp2 = zeros(size(tmp1, 2), 0);
        else
            tmp2 = [g_F(:,idxI1), g_D(:,idxI2)];
        end

        % Different factorization depending on symmetry
        if strcmpi(opts.symm,'p')
          A(subI, subI) = A(subI,subI) - tmp1*tmp1';
        elseif strcmpi(opts.symm,'n')
          A(subI, subI) = A(subI,subI) - tmp1*tmp2;
        end
      else
        % For off-diagonal block
        idxI = find_locations_t(xj,I_); % Replace ismembc2 with find_locations_t
        idxJ = find_locations_t(xj,J_); % Replace ismembc2 with find_locations_t

        tmp1 = double(idxI~=0); % Convert to double to ensure consistent types
        tmp2 = double(idxJ~=0); % Convert to double to ensure consistent types

        subI = idxI(tmp1);
        subJ = idxJ(tmp2);
        idxI1 = tmp1(1:f);
        idxI2 = tmp1(f+1:end);
        idxJ1 = tmp2(1:f);
        idxJ2 = tmp2(f+1:end);

        tmp1 = [g_E(idxI1,:); g_C(idxI2,:)];
        
        % Ensure tmp2 is consistent in size
        if isempty(idxJ1) && isempty(idxJ2)
            tmp2 = zeros(size(tmp1, 2), 0);
        else
            tmp2 = [g_F(:,idxJ1), g_D(:,idxJ2)];
        end

        % Different factorization depending on symmetry
        if strcmpi(opts.symm,'p')
          tmp2 = [g_E(idxJ1,:); g_C(idxJ2,:)]';
        elseif strcmpi(opts.symm,'n')
          tmp2 = [g_F(:,idxJ1), g_D(:,idxJ2)];
        end
        A(subI, subJ) = A(subI,subJ) - tmp1*tmp2;
      end
    end

    function update_list = get_update_list(node_idx, update_list, nodes)
      % GET_UPDATE_LIST(NODE_IDX) Recursively get the list of all nodes in
      % the tree that could have generated Schur complement updates to
      % points in node NODE_IDX
      update_list(node_idx) = 1;
      update_list(nodes(node_idx).snbor) = 1;
      for chld_idx = 1:numel(nodes(node_idx).chld)
        update_list = get_update_list(nodes(node_idx).chld(chld_idx), update_list, nodes); % Pass nodes to the recursive function
      end
    end
  end
end

% Helper function to replace ismembc2
function locs = find_locations_t(big_sorted_list, elements_to_find)
    % Initialize an empty array to store the locations
    locs = zeros(size(big_sorted_list));
    
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
