% Define the find_locations_t function as a subfunction
function locs = find_locs(big_sorted_list, elements_to_find)
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