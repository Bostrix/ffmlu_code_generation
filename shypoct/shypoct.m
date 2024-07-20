function T = shypoct(x, occ, lvlmax, ext)
% SHYPOCT   Build hyperoctree.
%
%    T = SHYPOCT(X,OCC) builds a hyperoctree T over a set of points X such that
%    each nonempty hypercube node in T is recursively subdivided until it
%    contains at most OCC points. The tree T is structured as follows:
%
%        NLVL  - tree depth
%        LVP   - tree level pointer array
%        LRT   - size of tree root
%
%    It also contains the tree node data array NODES, with structure:
%
%        CTR   - node center
%        XI    - node point indices
%        PRNT  - node parent
%        CHLD  - node children
%        NBOR  - node neighbors
%        ILIST - node interaction list
%        SNBOR - node symmetric neighbors (for non-uniform tree)
%        
%    Note that SNBOR is defined such that i is in NBOR(j) iff j is in
%    SNBOR(i).
%
%    Some examples of how to access the tree data are given below:
%
%      - The nodes on level I are T.NODES(T.LVP(I)+1:T.LVP(I+1)).
%      - The size of each node on level I is T.LRT/2^(I-1).
%      - The points in node index I are X(:,T.NODES(I).XI).
%      - The parent of node index I is T.NODES(T.NODES(I).PRNT).
%      - The children of node index I are [T.NODES(T.NODES(I).CHLD)].
%      - The neighbors of node index I are [T.NODES(T.NODES(I).NBOR)].
%
%    T = SHYPOCT(X,OCC,LVLMAX) builds a hyperoctree to a maximum depth LVLMAX
%    (default: LVLMAX = INF).
%
%    T = SHYPOCT(X,OCC,LVLMAX,EXT) sets the root node extent to
%    [EXT(I,1) EXT(I,2)] along dimension I. If EXT is empty (default), then the
%    root extent is calculated from the data.
%
%    References:
%
%      H. Samet. The quadtree and related hierarchical data structures. ACM
%        Comput. Surv. 16 (2): 187-260, 1984.

  % Set default parameters
  if nargin < 3 || isempty(lvlmax)
    lvlmax = Inf;
  end
  if nargin < 4
    ext = [];
  end

  % Check inputs
  assert(occ >= 0, 'RSS:shypoct:negativeOcc', 'Leaf occupancy must be nonnegative.');
  assert(lvlmax >= 1, 'RSS:shypoct:invalidLvlmax', 'Maximum tree depth must be at least 1.');

  % Initialize top-level box extent, side lengths, center
  [d, n] = size(x);
  if isempty(ext)
    ext = [min(x, [], 2) max(x, [], 2)];
  else
    ext = ext;
  end
  assert(size(ext, 1) == d && size(ext, 2) == 2, 'ext must be [d x 2] array.');

  % Declare variable-size arrays
  coder.varsize('ctr', [1, d], [false, true]);
  coder.varsize('xi', [1, n], [false, true]);
  coder.varsize('chld', [1, Inf], [false, true]);
  coder.varsize('nbor', [1, Inf], [false, true]);
  coder.varsize('snbor', [1, Inf], [false, true]);
  coder.varsize('ilist', [1, Inf], [false, true]); % Declare ilist as variable-size
  coder.varsize('T.lvp', [1, Inf], [false, true]);
  coder.varsize('T.nodes', [Inf, 1], [true, false]);
  coder.varsize('T.nodes(:).xi', [1, n], [false, true]);
  coder.varsize('T.nodes(:).chld', [1, Inf], [false, true]);
  coder.varsize('T.nodes(:).nbor', [1, Inf], [false, true]);
  coder.varsize('T.nodes(:).snbor', [1, Inf], [false, true]);
  coder.varsize('T.nodes(:).ilist', [1, Inf], [false, true]);

  l = max(ext(:, 2) - ext(:, 1));
  ctr = 0.5 * (ext(:, 1) + ext(:, 2))';

  % s = struct('ctr',ctr','xi',1:n,'prnt',[],'chld',[],'nbor',[], ...
  %            'ilist',[],'snbor',[]);
  % T = struct('nlvl',1,'lvp',[0 1],'lrt',l,'nodes',s);

  % Initialize the structure fields
  s = struct('ctr', zeros(1, d), 'xi', zeros(1, 0), 'prnt', 0, 'chld', zeros(1, 0), 'nbor', zeros(1, 0), 'ilist', zeros(1, 0), 'snbor', zeros(1, 0));
  max_nodes = 2 * n; % Estimate a large enough number of nodes
  T.nodes = repmat(s, max_nodes, 1);
  T.lvp = zeros(1, 2); % Initialize lvp with size [1, 2]
  T.nlvl = 1;
  T.lrt = l;

  % Initialize the first node
  T.nodes(1).ctr = reshape(ctr, 1, d); % Ensure ctr is correctly reshaped
  T.nodes(1).xi = 1:n;
  T.lvp(1:2) = [0, 1]; % Set initial values for lvp

  nlvl = 1;
  nbox = 1;
  mlvl = 1;
  % mbox = 1; 

  % Main loop
  % while 1
  while true
    if nlvl >= lvlmax
      break;
    end

    % Initialize current level
    nbox_ = nbox;
    l = 0.5 * l;

    % Loop over all boxes at current level
    for prnt = T.lvp(nlvl) + 1:T.lvp(nlvl + 1)
      xi = T.nodes(prnt).xi;
      xn = length(xi);

      % Subdivide box if it contains too many points
      if xn > occ
        ctr = T.nodes(prnt).ctr;
        idx = bsxfun(@gt, x(:, xi), ctr');
        idx = 2.^((1:d) - 1) * idx + 1;

        % for i = unique(idx)
        unique_idx = unique(idx);
        for k = 1:numel(unique_idx)
          i = unique_idx(k);

          nbox = nbox + 1;

 % % while mbox < nbox
 % %            e = cell(mbox,1);
 % %            s = struct('ctr',e,'xi',e,'prnt',e,'chld',e,'nbor',e, ...
 % %                       'ilist',e,'snbor',e);
 % %            T.nodes = [T.nodes; s];
 % %            mbox = 2*mbox;
 % %          end
 % %          s = struct( 'ctr', ctr + l*(bitget(i-1,1:d) - 0.5), ...
 % %                       'xi', xi(idx == i),                    ...
 % %                     'prnt', prnt,                            ...
 % %                     'chld', [],                              ...
 % %                     'nbor', [],                              ...
 % %                     'ilist', [],                             ...
 % %                     'snbor', []);
 % %          T.nodes(nbox) = s;
 % %          T.nodes(prnt).chld = [T.nodes(prnt).chld nbox];
 % %        end
 % %        T.nodes(prnt).xi = [];

          if nbox > numel(T.nodes)
            % Double the preallocated space if necessary
            T.nodes = [T.nodes; repmat(s, max_nodes, 1)];
          end
          % Properly initialize non-empty values
          T.nodes(nbox).ctr = reshape(ctr + l * (bitget(i - 1, 1:d) - 0.5), 1, d); % Ensure ctr_value is a row vector
          xi_idx = xi(idx == i);
          xi_idx = reshape(xi_idx, 1, []); % Ensure xi_idx is a row vector
          T.nodes(nbox).xi = xi_idx;
          T.nodes(nbox).prnt = prnt;
          T.nodes(nbox).chld = zeros(1, 0); % Initialize chld as an empty array
          % Update parent chld field
          T.nodes(prnt).chld = [T.nodes(prnt).chld, nbox];
        end
        T.nodes(prnt).xi = zeros(1, 0); % Reset xi to the initial state
      end
    end

    if nbox <= nbox_
      break;
    else
      nlvl = nlvl + 1;
      T.nlvl = nlvl;
      while mlvl < nlvl
        % T.lvp = [T.lvp zeros(1,mlvl)];
        T.lvp = [T.lvp, zeros(1, 2^mlvl)]; % Ensure consistent dimensions
        mlvl = 2 * mlvl;
      end
      T.lvp(nlvl + 1) = nbox;
    end
  end

  % Memory cleanup
  T.lvp = T.lvp(1:nlvl + 1);
  T.nodes = T.nodes(1:nbox);

  % Initialize data for neighbor calculation
  ilvl = zeros(nbox, 1);
  llvl = zeros(nlvl, 1);
  l = T.lrt;
  for lvl = 1:nlvl
    ilvl(T.lvp(lvl) + 1:T.lvp(lvl + 1)) = lvl;
    llvl(lvl) = l;
    l = 0.5 * l;
  end

  % Find neighbors and interaction list of each box
  for lvl = 2:nlvl
    l = llvl(lvl);
    for i = T.lvp(lvl) + 1:T.lvp(lvl + 1)
      ictr = T.nodes(i).ctr;
      prnt = T.nodes(i).prnt;

      % Add all non-self children of parent
      j = T.nodes(prnt).chld;

     % T.nodes(i).nbor = j(j ~= i);
     %      for k = j(j~=i)
     %          T.nodes(k).snbor = [T.nodes(k).snbor i];
     %      end

      nbor = j(j ~= i);
      T.nodes(i).nbor = reshape(nbor, 1, []); % Ensure nbor is a row vector
      % Use explicit index array
      nbor_indices = find(j ~= i);
      for idx = 1:numel(nbor_indices)
        k = j(nbor_indices(idx));
        T.nodes(k).snbor = [T.nodes(k).snbor, i];
      end


     % % Add coarser parent-neighbors if adjacent (non-uniform
     %     % discretization only)
     %     for j = T.nodes(prnt).nbor
     %       if ~isempty(T.nodes(j).xi)

    % Get the neighbors array
    parent_neighbors = T.nodes(prnt).nbor;
    if ~isempty(parent_neighbors)
    coder.varsize('nbor', [1, Inf], [false, true]); % Declare nbor as variable-size
    nbor = T.nodes(i).nbor;
    for j_idx = 1:numel(parent_neighbors)
    j = parent_neighbors(j_idx);

    if ~isempty(T.nodes(j).xi)
      jctr = T.nodes(j).ctr;
      dist = round((abs(ictr - jctr) - 0.5 * (l + llvl(ilvl(j)))) / l);
      if all(dist <= 0)
         % T.nodes(i).nbor = [T.nodes(i).nbor j];
         % T.nodes(j).snbor = [T.nodes(j).snbor i];
       nbor = reshape([nbor, j], 1, []); % Ensure nbor is a row vector
        T.nodes(i).nbor = nbor;
        T.nodes(j).snbor = reshape([T.nodes(j).snbor, i], 1, []);
      else
        % T.nodes(i).ilist = [T.nodes(i).ilist, j];
        ilist = T.nodes(i).ilist;
        ilist = reshape([ilist, j], 1, []); % Ensure ilist is a row vector
        T.nodes(i).ilist = ilist;
      end
    end
  end
end

     % % % Add children of parent-neighbors if adjacent
     % %  idx = [T.nodes(T.nodes(prnt).nbor).chld];
     % %  c = reshape([T.nodes(idx).ctr],d,[])';
     % %  dist = round(abs(bsxfun(@minus,T.nodes(i).ctr,c))/l);
     % %  j = idx(max(dist,[],2) <= 1);
     % %  if ~isempty(j)
     % %    T.nodes(i).nbor  = [T.nodes(i).nbor j];
     % %    for k = j
     % %        T.nodes(k).snbor = [T.nodes(k).snbor i];
     % %    end
     % %  end


% Add children of parent-neighbors if adjacent
parent_nbor_chld = [T.nodes(T.nodes(prnt).nbor).chld];
if ~isempty(parent_nbor_chld)
  % Ensure parent_nbor_chld is a row vector
  parent_nbor_chld = reshape(parent_nbor_chld, 1, []);
  c = reshape([T.nodes(parent_nbor_chld).ctr], d, [])';
  dist = round(abs(bsxfun(@minus, T.nodes(i).ctr, c)) / l);
  j = parent_nbor_chld(max(dist, [], 2) <= 1);
  if ~isempty(j)
    nbor = reshape([nbor, j], 1, []); % Ensure nbor is a row vector
    T.nodes(i).nbor = nbor;
    for k_idx = 1:numel(j)
      k = j(k_idx);
      T.nodes(k).snbor = reshape([T.nodes(k).snbor, i], 1, []); % Ensure snbor is a row vector
    end
  end
 

    % % Add non-adjacent parent-neighbors-children to interaction list
     %      j = idx(max(dist,[],2) > 1 & max(dist,[],2) <2.5);
     %      if ~isempty(j)
     %        T.nodes(i).ilist = [T.nodes(i).ilist j];
     %      end

  % Add non-adjacent parent-neighbors-children to interaction list
  j = parent_nbor_chld(max(dist, [], 2) > 1 & max(dist, [], 2) < 2.5);
  if ~isempty(j)
    ilist = T.nodes(i).ilist;
    ilist = reshape([ilist, j], 1, []); % Ensure ilist is a row vector
    T.nodes(i).ilist = ilist;
  end
 end
end
end
