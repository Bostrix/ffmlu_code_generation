function T = shypoct(x,occ,lvlmax,ext)
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


  % Set sane default parameters
  if nargin < 3 || isempty(lvlmax)
    lvlmax = Inf;
  end
  if nargin < 4
    ext = [];
  end

  % Check that inputs arae sensible
  assert(occ >= 0,'RSS:shypoct:negativeOcc', ...
         'Leaf occupancy must be nonnegative.')
  assert(lvlmax >= 1,'RSS:shypoct:invalidLvlmax', ...
         'Maximum tree depth must be at least 1.')

  % Initialize top-level box extent, side lengths, center.
  [d,n] = size(x);
  % if isempty(ext)
  %   ext = [min(x,[],2) max(x,[],2)];
  % end
  % l = max(ext(:,2) - ext(:,1));
  % ctr = 0.5*(ext(:,1) + ext(:,2));

 % % Check if x is empty or has incompatible dimensions
 %    if isempty(x) || size(x, 1) < 2 || size(x, 2) < 2
 %        error('Input array x must have at least 2 rows and 2 columns.');
 %    end

    % % Calculate the extents if ext is empty
    % ext = [min(x, [], 2), max(x, [], 2)];
if isempty(ext)
    ext = [min(x, [], 2) max(x, [], 2)];
  else
    ext = ext; % Keep ext in its original state if it is not empty
  end


    % % Check if ext has the correct dimensions
    % if size(ext, 2) ~= 2
    %     error('Size mismatch in ext calculation. Expected ext to be Nx2.');
    % end

    % Calculate the length and center
    l = max(ext(:, 2) - ext(:, 1));
    ctr = 0.5 * (ext(:, 1) + ext(:, 2));



  % s = struct('ctr',ctr','xi',1:n,'prnt',[],'chld',[],'nbor',[], ...
  %            'ilist',[],'snbor',[]);
  % T = struct('nlvl',1,'lvp',[0 1],'lrt',l,'nodes',s);
 % Memory allocation for nodes
  max_points = n;
  initial_size = 1000;
  % Preallocate a large enough array
  fixed_size = 1000; % Consistent size for fields
  max_depth = 20; % Adjust this based on expected maximum depth
  total_size = initial_size * 10; % Adjust this based on expected size
  empty_node = struct('ctr', zeros(1, d), 'xi', zeros(1, max_points), ...
                      'prnt', 0, 'chld', zeros(1, initial_size), 'nbor', zeros(1, initial_size), ...
                      'ilist', zeros(1, initial_size), 'snbor', zeros(1, initial_size));
  T.nodes = repmat(empty_node, 1, total_size);
  T.nlvl = 1;
  T.lvp = zeros(1, max_depth);
  T.lrt = l;
  % Declare variable size arrays
  coder.varsize('T.lvp', [1, Inf], [0, 1]);
 coder.varsize('T.nodes', [1, total_size], [0, 1]);
  coder.varsize('T.nodes.nbor', [1, fixed_size], [0, 1]);
  coder.varsize('T.nodes.chld', [1, fixed_size], [0, 1]);
  coder.varsize('T.nodes.ilist', [1, fixed_size], [0, 1]);
  coder.varsize('T.nodes.snbor', [1, fixed_size], [0, 1]);

  T.nodes(1) = struct('ctr', ctr', 'xi', 1:n, 'prnt', 0, 'chld', zeros(1, initial_size), ...
                      'nbor', zeros(1, initial_size), 'ilist', zeros(1, initial_size), 'snbor', zeros(1, initial_size));


  nlvl = 1;
  nbox = 1;
  mlvl = 1;
  % mbox = 1;
    mbox = initial_size;




 % Loop until all boxes are sufficiently subdivided (natural termination)
  while 1
    % Terminate if at maximum depth (unnatural termination)
    if nlvl >= lvlmax
      break
    end

    % Initialize the current level, which has side lengths diminished by a
    % factor of two
    nbox_ = nbox;
    l = 0.5*l;

   % % Loop over all boxes at current level
   %  for prnt = T.lvp(nlvl)+1:T.lvp(nlvl+1)
   %    xi = T.nodes(prnt).xi;
   %    xn = length(xi);
   % 
   %    % Subdivide this box if it contains too many points
   %    if xn > occ
   %      % Complicated way of finding the assignments of this box's points
   %      % to its child boxes
   %      ctr = T.nodes(prnt).ctr;
   %      idx = bsxfun(@gt,x(:,xi),ctr');
   %      idx = 2.^((1:d) - 1)*idx + 1;
   %      for i = unique(idx)
   %        nbox = nbox + 1;
   %        while mbox < nbox
   %          e = cell(mbox,1);
   %          s = struct('ctr',e,'xi',e,'prnt',e,'chld',e,'nbor',e, ...
   %                     'ilist',e,'snbor',e);
   %          T.nodes = [T.nodes; s];
   %          mbox = 2*mbox;
   %        end
   %        s = struct( 'ctr', ctr + l*(bitget(i-1,1:d) - 0.5), ...
   %                     'xi', xi(idx == i),                    ...
   %                   'prnt', prnt,                            ...
   %                   'chld', [],                              ...
   %                   'nbor', [],                              ...
   %                   'ilist', [],                             ...
   %                   'snbor', []);
   %        T.nodes(nbox) = s;
   %        T.nodes(prnt).chld = [T.nodes(prnt).chld nbox];
   %      end
   %      T.nodes(prnt).xi = [];
   %    end
    % end

for prnt = T.lvp(nlvl) + 1 : T.lvp(nlvl + 1)
      xi = T.nodes(prnt).xi;
      xi = xi(xi > 0);  % Remove zero entries
      xn = length(xi);

      if xn > occ
        ctr = T.nodes(prnt).ctr;
        idx = bsxfun(@gt, x(:, xi), ctr');
        idx = 2.^((1:d) - 1) * idx + 1;

        unique_idx = unique(idx);
        num_unique_idx = length(unique_idx);

        for k = 1:num_unique_idx
          i = unique_idx(k);
          nbox = nbox + 1;
          if nbox > length(T.nodes)
            error('Exceeded preallocated node array size.');
          end
          T.nodes(nbox).ctr = ctr + l * (bitget(i - 1, 1:d) - 0.5);
          T.nodes(nbox).xi = zeros(1, max_points); % Preallocate xi with fixed size
          xi_idx = xi(idx == i);
          T.nodes(nbox).xi(1:length(xi_idx)) = xi_idx;
          T.nodes(nbox).prnt = prnt;
          T.nodes(nbox).chld = zeros(1, fixed_size); % Use fixed size
          T.nodes(nbox).nbor = zeros(1, fixed_size); % Use fixed size
          T.nodes(nbox).ilist = zeros(1, fixed_size); % Use fixed size
          T.nodes(nbox).snbor = zeros(1, fixed_size); % Use fixed size

          % Find the next empty spot in the child array
          chld_idx = find(T.nodes(prnt).chld == 0, 1);
          T.nodes(prnt).chld(chld_idx) = nbox;
        end
        T.nodes(prnt).xi = zeros(1, max_points); % Reset xi to empty
      end
    end


 



    % If no boxes were subdivided into new boxes, terminate, otherwise 
    % update for the next iteration
    if nbox <= nbox_
      break
    else
      nlvl = nlvl + 1;
      T.nlvl = nlvl;
      % while mlvl < nlvl
      %   T.lvp = [T.lvp zeros(1,mlvl)];
      %   mlvl = 2*mlvl;
      % end
      % T.lvp(nlvl+1) = nbox;
if nlvl + 1 > length(T.lvp)
    error('Exceeded preallocated level pointer array size.');
end
T.lvp(nlvl + 1) = nbox;


    end
  end

  % Memory cleanup, if we made arrays too big
  % T.lvp = T.lvp(1:nlvl+1);

T.lvp = T.lvp(1:(nlvl + 1));
  T.nodes = T.nodes(1:nbox);

  
  % Next, we have to compute adjacency, neighbor, interaction list info for
  % each box.
  
  % Initialize data for neighbor calculation
  ilvl = zeros(nbox,1);
  llvl = zeros(nlvl,1);
  l = T.lrt;
  for lvl = 1:nlvl
    ilvl(T.lvp(lvl)+1:T.lvp(lvl+1)) = lvl;
    llvl(lvl) = l;
    l = 0.5*l;
  end

  % Find neighbors and interaction list of each box
  for lvl = 2:nlvl
    l = llvl(lvl);
    for i = T.lvp(lvl)+1:T.lvp(lvl+1)
      ictr = T.nodes(i).ctr;
      prnt = T.nodes(i).prnt;

      % Add all non-self children of parent
      j = T.nodes(prnt).chld;
      j = j(j > 0);  % Remove zero entries
      T.nodes(i).nbor = j(j ~= i);
      % for k = j(j~=i)
      %     T.nodes(k).snbor = [T.nodes(k).snbor i];
      % end
valid_indices = j(j ~= i);
num_valid_indices = length(valid_indices);
for idx = 1:num_valid_indices
    k = valid_indices(idx);
    T.nodes(k).snbor = [T.nodes(k).snbor i];
end

      % % Add coarser parent-neighbors if adjacent (non-uniform
      % % discretization only)
      % for j = T.nodes(prnt).nbor
      %   if ~isempty(T.nodes(j).xi)
      %     jctr = T.nodes(j).ctr;
      %     dist = round((abs(ictr - jctr) - 0.5*(l + llvl(ilvl(j))))/l);
      %     if all(dist <= 0)
      %       T.nodes(i).nbor = [T.nodes(i).nbor j];
      %       T.nodes(j).snbor = [T.nodes(j).snbor i];
      %     else
      %         T.nodes(i).ilist = [T.nodes(i).ilist, j];
      %     end
      % 
      %   end
      % end
% Add coarser parent-neighbors if adjacent (non-uniform
% discretization only)
parent_nbors = T.nodes(prnt).nbor;
num_parent_nbors = length(parent_nbors);
for idx = 1:num_parent_nbors
    j = parent_nbors(idx);
    if ~isempty(T.nodes(j).xi)
        jctr = T.nodes(j).ctr;
        dist = round((abs(ictr - jctr) - 0.5*(l + llvl(ilvl(j))))/l);
        if all(dist <= 0)
            T.nodes(i).nbor = [T.nodes(i).nbor j];
            snbor_indices = T.nodes(j).snbor;
            num_snbor_indices = length(snbor_indices);
            new_snbor_indices = zeros(1, num_snbor_indices + 1);
            new_snbor_indices(1:num_snbor_indices) = snbor_indices;
            new_snbor_indices(end) = i;
            T.nodes(j).snbor = new_snbor_indices;
          else
            ilist_indices = T.nodes(i).ilist;
            num_ilist_indices = length(ilist_indices);
            new_ilist_indices = zeros(1, num_ilist_indices + 1);
            new_ilist_indices(1:num_ilist_indices) = ilist_indices;
            new_ilist_indices(end) = j;
            T.nodes(i).ilist = new_ilist_indices;
          end
        end
      end




      % Add children of parent-neighbors if adjacent
      idx = [T.nodes(T.nodes(prnt).nbor).chld];
      idx = idx(idx > 0);  % Remove zero entries
      c = reshape([T.nodes(idx).ctr],d,[])';
      dist = round(abs(bsxfun(@minus,T.nodes(i).ctr,c))/l);
      j = idx(max(dist,[],2) <= 1);
      % if ~isempty(j)
      %   T.nodes(i).nbor  = [T.nodes(i).nbor j];
        % for k = j
        %     T.nodes(k).snbor = [T.nodes(k).snbor i];
        % end
num_j = length(j);
      for jj = 1:num_j
        k = j(jj);
        snbor_indices = T.nodes(k).snbor;
        num_snbor_indices = length(snbor_indices);
        new_snbor_indices = zeros(1, num_snbor_indices + 1);
        new_snbor_indices(1:num_snbor_indices) = snbor_indices;
        new_snbor_indices(end) = i;
        T.nodes(k).snbor = new_snbor_indices;
      end
      
      % Add non-adjacent parent-neighbors-children to interaction list
      j = idx(max(dist,[],2) > 1 & max(dist,[],2) <2.5);
      % if ~isempty(j)
      %   T.nodes(i).ilist = [T.nodes(i).ilist j];
      % end
num_j = length(j);
      for jj = 1:num_j
        k = j(jj);
        ilist_indices = T.nodes(i).ilist;
        num_ilist_indices = length(ilist_indices);
        new_ilist_indices = zeros(1, num_ilist_indices + 1);
        new_ilist_indices(1:num_ilist_indices) = ilist_indices;
        new_ilist_indices(end) = k;
        T.nodes(i).ilist = new_ilist_indices;
      end

    end
  end

end