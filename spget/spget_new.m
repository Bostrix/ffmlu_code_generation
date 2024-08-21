function A = spget_new(Ityp, Jtyp, F, lookup_list, slf, nbr, lst, nslf, nnbr, nlst, nbox, t, i, opts)
    % A = SPGET(ITYP, JTYP, F, lookup_list, slf, nbr, lst, nslf, nnbr, nlst, nbox, t, i, opts) 
    % Sparse matrix access function that grabs the accumulated Schur complement
    % updates to a block of the matrix from previously-skeletonized 
    % levels. Index sets ITYP and JTYP can be 'slf', 'nbr', or 'lst'.
    
    % Translate input strings to index sets (and their lengths)
    if strcmpi(Ityp, 'slf')
        I_ = slf;
        m_ = nslf;
    elseif strcmpi(Ityp, 'nbr')
        I_ = nbr;
        m_ = nnbr;
    elseif strcmpi(Ityp, 'lst')
        I_ = lst;
        m_ = nlst;
    else
        error('Unknown Ityp value');
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
    else
        error('Unknown Jtyp value');
    end

    % Initialize matrix A based on the fully defined m_ and n_
    A = zeros(m_, n_);
    update_list = false(nbox, 1);
    update_list = get_update_list(update_list, i, t);  % Pass update_list and t

    % Use lookup_list to get the list of updates
    update_list = lookup_list(flip(find(update_list)'));
    update_list = update_list(update_list ~= 0)';

    % Ensure update_list is a row vector
    update_list = update_list(:)';
    
    % Get the number of updates
    num_updates = numel(update_list);
    for outer_idx = 1:num_updates
        jj = update_list(outer_idx);  % Access elements using the index
        g = F.factors(jj);
        xj = [g.sk, g.nbr];
        f = length(g.sk);

        if strcmpi(Ityp, Jtyp)
            % For diagonal block
            idxI = find_locations_t(xj, I_);  % Replace ismembc2
            tmp1 = double(idxI ~= 0);  % Convert to double to ensure consistent types
            subI = idxI(tmp1);
            idxI1 = tmp1(1:f);
            idxI2 = tmp1(f+1:end);
            tmp1 = [g.E(idxI1, :); g.C(idxI2, :)];
            % Different factorization depending on symmetry
            if strcmpi(opts.symm, 'p')
                A(subI, subI) = A(subI, subI) - tmp1 * tmp1';
            elseif strcmpi(opts.symm, 'n')
                tmp2 = [g.F(:, idxI1), g.D(:, idxI2)];
                A(subI, subI) = A(subI, subI) - tmp1 * tmp2;
            end
        else
            % For off-diagonal block
            idxI = find_locations_t(xj, I_);  % Replace ismembc2
            idxJ = find_locations_t(xj, J_);  % Replace ismembc2

            tmp1 = double(idxI ~= 0);  % Convert to double to ensure consistent types
            tmp2 = double(idxJ ~= 0);  % Convert to double to ensure consistent types

            subI = idxI(tmp1);
            subJ = idxJ(tmp2);
            idxI1 = tmp1(1:f);
            idxI2 = tmp1(f+1:end);
            idxJ1 = tmp2(1:f);
            idxJ2 = tmp2(f+1:end);

            tmp1 = [g.E(idxI1, :); g.C(idxI2, :)];
            % Different factorization depending on symmetry
            if strcmpi(opts.symm, 'p')
                tmp2 = [g.E(idxJ1, :); g.C(idxJ2, :)]';
            elseif strcmpi(opts.symm, 'n')
                tmp2 = [g.F(:, idxJ1), g.D(:, idxJ2)];
            end
            A(subI, subJ) = A(subI, subJ) - tmp1 * tmp2;
        end
    end

    function update_list = get_update_list(update_list, node_idx, t)
        update_list(node_idx) = 1;  % Mark the current node in the list
        update_list(t.nodes(node_idx).snbor) = 1;  % Mark sibling neighbors

        chld_nodes = t.nodes(node_idx).chld;  % Get the child nodes array
        num_chld_nodes = numel(chld_nodes);   % Determine the number of child nodes
        for inner_idx = 1:num_chld_nodes  % Renamed from idx to avoid conflict
            k = chld_nodes(inner_idx);  % Access each child node
            update_list = get_update_list(update_list, k, t);  % Recursively update the list
        end
    end
end

% Define the find_locations_t function as a subfunction
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