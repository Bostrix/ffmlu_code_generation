function A = spget_quadcorr(I, J, P, S)
    % SPGET_quadcorr(I,J,P,S) computes entries of a sparse matrix of near-field
    % corrections that should be added to the kernel matrix, as used in
    % AFUN. P is the permutation required for extracting near
    % quadrature correction and is only used as a temporary array, 
    % and S stores the sparse matrix corresponding
    % to the quadrature correction
    
    m_ = length(I);
    n_ = length(J);
    [I_sort, E] = sort(I);
    P(I_sort) = E;
    A = zeros(m_, n_);
    [I, J, S_] = find(S(:, J));
    I = cast(I, 'like', I_sort);
    idx = find_locations_t(I_sort, I); % Replace ismembc with custom function
    
    % Filter out invalid indices
    idx = idx > 0 & idx <= length(I_sort);
    I = I(idx);
    J = J(idx);
    S_ = S_(idx);
    
    A(P(I) + (J - 1) * m_) = S_;
end
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function locs = find_locations_t(big_sorted_list, elements_to_find)
    % Initialize an empty array to store the locations
    locs = zeros(size(elements_to_find));
    
    % Iterate over each element to find
    for i = 1:length(elements_to_find)
        element = elements_to_find(i);
        % Use the local function binary_search to find the location of the element
        loc = binary_search_t(big_sorted_list, element);
        
        % If the element is found (location is not -1), add it to the locs array
        locs(i) = loc;
    end
end
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
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
        elseif arr_(mid) < target_
            left = mid + 1;
        else
            right = mid - 1;
        end
    end
    
    % If the element is not found, return -1
    loc = -1;
end