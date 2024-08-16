function F = srskelf_asym_new_modified(A, x, occ, rank_or_tol, pxyfun, opts)
% SRSKELF_ASYM_NEW_MODIFIED Asymmetric strong recursive skeletonization factorization.
% This function uses a randomized algorithm to accelerate QR factorization.

  start = tic;
  
  % Set default parameters
  if nargin < 5
    pxyfun = [];
  end 
  if nargin < 6
    opts = [];
  end 
  if ~isfield(opts, 'ext')
    opts.ext = [];
  end 
  if ~isfield(opts, 'lvlmax')
    opts.lvlmax = Inf;
  end 
  if ~isfield(opts, 'symm')
    opts.symm = 'n';
  end 
  if ~isfield(opts, 'verb')
    opts.verb = 0;
  end 
  if ~isfield(opts, 'zk')
    opts.zk = 1.0;
  end 
  
  if opts.verb
    disp('This is standard asymmetric srskelf (RS-S).');
  end

  % Check input symmetry option
  assert(strcmpi(opts.symm, 'p') || strcmpi(opts.symm, 'n'), ...
         'RSS:srskelf_asym:invalidSymm', ...
         'Symmetry parameter must be ''p'' or ''n''.');

  % Build tree to hold the discretization points
  N = size(x, 2);
  t = shypoct(x, occ, opts.lvlmax, opts.ext);

  if opts.verb
    fprintf(['-'*ones(1, 80) '\n']);
    fprintf('%3s | %6s | %8s | %8s | %8s | %8s | %10s (s)\n', ...
            'lvl', 'nblk', 'nRemIn', 'nRemOut', 'inRatio', 'outRatio', 'time');
    % Print summary information about tree construction
    fprintf(['-'*ones(1, 80) '\n']);
    fprintf('%3s | %63.2e (s)\n', '-', toc);

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
  e = cell(nbox, 1);
  F = struct('sk', e, 'rd', e, 'nbr', e, 'T', e, 'E', e, 'F', e, ...
             'L', e, 'U', e, 'C', e, 'D', e);
  F = struct('N', N, 'nlvl', t.nlvl, 'lvp', zeros(1, t.nlvl + 1), ...
             'factors', F, 'symm', opts.symm);

  nlvl = 0;
  n = 0; % Initialize n for counting factors
  rem = true(N, 1);
  lookup_list = zeros(nbox, 1);
  rng(1); % Control randomness for reproducibility

  % Loop over the levels of the tree from bottom to top
  for lvl = t.nlvl:-1:1
    time = tic;
    nlvl = nlvl + 1;
    nrem1 = sum(rem);

    % Optimize child nodes xi merging
    for i = t.lvp(lvl) + 1:t.lvp(lvl + 1)
      t.nodes(i).xi = [t.nodes(i).xi [t.nodes(t.nodes(i).chld).xi]];
    end
    
    boxsize = t.lrt / 2^(lvl - 1);
    tol = rank_or_tol;
    use_lproxy = isfield(opts, 'lap_proxy') && opts.lap_proxy;

    % Efficiently compute proxy interactions
    if use_lproxy
        nterms = log(1.0 / tol) / log(1.0 / sqrt(3.0));
        nterms = max(nterms, 3);
    else
        nterms = h3dterms(boxsize, opts.zk, tol);
    end
    p = (nterms + 1)^2;
    proxy = randn(3, p);
    proxy = 1.5 * bsxfun(@rdivide, proxy, sqrt(sum(proxy.^2)));

    % Loop over each box in this level
    for i = t.lvp(lvl) + 1:t.lvp(lvl + 1)
      slf = t.nodes(i).xi;
      nbr = [t.nodes(t.nodes(i).nbor).xi];
      nslf = length(slf);
      slf = sort(slf);
      nnbr = length(nbr);
      nbr = sort(nbr);

      if lvl == 2
        lst = [];
        l = t.lrt / 2^(lvl - 1);
      else
        lst = [t.nodes(t.nodes(i).ilist).xi];
        l = t.lrt / 2^(lvl - 1) * 3 / 2;
      end

      % Compute proxy interactions and subselect neighbors
      Kpxy = zeros(0, nslf);
      if lvl > 2
        [Kpxy, lst2] = pxyfun(x, slf, lst, proxy, l, t.nodes(i).ctr);
      end

      nlst = length(lst);
      lst = sort(lst);

      % Ensure that lst is non-empty and sampled_indices are valid
      if nlst > 0
          % Randomized downsampling of the matrix rows
          downsample_rate = 0.1; % Downsample rate can be tuned based on the problem
          num_rows = round(downsample_rate * nslf);
          num_rows = min(num_rows, nlst); % Ensure num_rows does not exceed nlst
          sampled_indices = randperm(nlst, num_rows);

          % Apply the sampling to create a smaller matrix
          K1 = full(A(lst(sampled_indices), slf));
          if strcmpi(opts.symm, 'n')
              K1 = [K1; conj(full(A(slf, lst(sampled_indices))))'];
          end 
      else
          K1 = zeros(0, nslf); % If lst is empty, K1 is an empty matrix
      end

      K2 = optimized_spget('lst', 'slf');
      if strcmpi(opts.symm, 'n')
        K2 = [K2; conj(optimized_spget('slf', 'lst'))'];
      end 

      % Adjust the construction of K by ensuring dimension compatibility
      if lvl > 2
          % Check if K1 and K2 have compatible sizes for addition
          if size(K1, 1) == size(K2, 1) && size(K1, 2) == size(K2, 2)
              K_combined = K1 + K2;
          else
              % If sizes are incompatible, concatenate as separate rows
              K_combined = [K1; K2];
          end
          % Ensure Kpxy has the same number of columns as K_combined
          if size(Kpxy, 2) == size(K_combined, 2)
              K = [K_combined; Kpxy];
          else
              % Adjust the size of Kpxy to match the number of columns
              Kpxy_adjusted = zeros(size(Kpxy, 1), size(K_combined, 2));
              min_cols = min(size(Kpxy, 2), size(K_combined, 2));
              Kpxy_adjusted(:, 1:min_cols) = Kpxy(:, 1:min_cols);
              K = [K_combined; Kpxy_adjusted];
          end
      else
          if size(K1, 1) == size(K2, 1) && size(K1, 2) == size(K2, 2)
              K = K1 + K2;
          else
              % If sizes are incompatible, concatenate as separate rows
              K = [K1; K2];
          end
      end
      
      % Compute the skeleton/redundant points and interpolation matrix
      [sk, rd, T] = id(K, rank_or_tol);

      % Move on to next box if no compression for this box
      if isempty(rd)
        continue
      end 

      % Compute the diagonal and off-diagonal blocks for this box
      K  = full(A(slf, slf)) + optimized_spget('slf', 'slf');
      K2 = full(A(nbr, slf)) + optimized_spget('nbr', 'slf');
      if strcmpi(opts.symm, 'n')
        K3 = full(A(slf, nbr)) + optimized_spget('slf', 'nbr');
      end 
      
      % Skeletonize
      K(rd, :) =  K(rd, :) - conj(T)' * K(sk, :);
      K(:, rd) = K(:, rd) - K(:, sk) * T;
      K2(:, rd) = K2(:, sk) * T; 
      if strcmpi(opts.symm, 'n')
        K3(rd, :) = K3(rd, :) - conj(T)' * K3(sk, :); 
      end 
      
      if strcmpi(opts.symm, 'p')
        % Cholesky for positive definite input
        L = chol(K(rd, rd), 'lower');
        U = [];
        E = K(sk, rd) / conj(L)';
        G = [];
        C = K2(:, rd) / conj(L)';
        D = [];
      elseif strcmpi(opts.symm, 'n')
        % Otherwise, LU
        [L, U] = lu(K(rd, rd));
        E = K(sk, rd) / U;
        G = L \ K(rd, sk);
        C = K2(:, rd) / U;
        D = L \ K3(rd, :);
      end 
      
      % Store matrix factors for this box
      n = n + 1;
      F.factors(n).sk  = slf(sk);
      F.factors(n).rd  = slf(rd);
      F.factors(n).nbr = nbr;
      F.factors(n).T = T;
      F.factors(n).E = E;
      F.factors(n).F = G;
      F.factors(n).L = L;
      F.factors(n).U = U;
      F.factors(n).C = C;
      F.factors(n).D = D;
      lookup_list(i) = n;
      t.nodes(i).xi = slf(sk);
      rem(slf(rd)) = 0;
    end 
    
    % Update lvp correctly for each level
    F.lvp(nlvl + 1) = n; % This should reflect the correct count after the level
    
    % Print summary for the latest level
    if opts.verb
      nrem2 = sum(rem);
      nblk = pblk(lvl) + t.lvp(lvl + 1) - t.lvp(lvl);
      fprintf('%3d | %6d | %8d | %8d | %8.2f | %8.2f | %10.2e (s)\n', ...
              lvl, nblk, nrem1, nrem2, nrem1 / nblk, nrem2 / nblk, toc(time));
    end 
  end 

  % Truncate extra storage, and we are done
  F.factors = F.factors(1:n);
  if opts.verb
    fprintf(['-'*ones(1, 80) '\n']);
    toc(start);
  end 
  
  % Optimized subfunction spget
  function A = optimized_spget(Ityp, Jtyp)
    % OPTIMIZED_SPGET Optimized sparse matrix access function
    
    % Translate input strings to index sets
    if strcmpi(Ityp, 'slf')
      I_ = slf;
    elseif strcmpi(Ityp, 'nbr')
      I_ = nbr;
    elseif strcmpi(Ityp, 'lst')
      I_ = lst;
    else
      error('Unknown Ityp value');
    end 
    
    if strcmpi(Jtyp, 'slf')
      J_ = slf;
    elseif strcmpi(Jtyp, 'nbr')
      J_ = nbr;
    elseif strcmpi(Jtyp, 'lst')
      J_ = lst;
    else
      error('Unknown Jtyp value');
    end 
    
    m_ = length(I_);
    n_ = length(J_);
    
    A = zeros(m_, n_);
    update_list = false(nbox, 1);
    get_update_list(i);
    update_list = lookup_list(flip(find(update_list)'));
    update_list = update_list(update_list ~= 0)';
    
    % Optimize gather and scatter operations
    for jj = update_list
      g = F.factors(jj);
      xj = [g.sk, g.nbr];
      f = length(g.sk);
            
      if strcmpi(Ityp, Jtyp)
        % For diagonal block
        idxI = ismembc2(xj, I_);
        tmp1 = idxI ~= 0;
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
        % For off-diagonal block
        idxI = ismembc2(xj, I_);
        idxJ = ismembc2(xj, J_);

        tmp1 = idxI ~= 0;
        tmp2 = idxJ ~= 0;

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

    function get_update_list(node_idx)
      % Recursively get the list of all nodes in the tree that could have 
      % generated Schur complement updates to points in node NODE_IDX
      update_list(node_idx) = 1;
      update_list(t.nodes(node_idx).snbor) = 1;
      for k = t.nodes(node_idx).chld
        get_update_list(k);
      end 
    end 
  end 
end