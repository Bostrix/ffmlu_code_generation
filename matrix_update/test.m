
% Measure time for the original function
tic;
F_original = srskelf_asym_new(A, x, occ, rank_or_tol, pxyfun, opts);
time_original = toc;

addpath('/home/user/Documents/ffmlu_code_generation/matrix_update/modified');


% Measure time for the modified function
tic;
F_modified = srskelf_asym_new_modified(A, x, occ, rank_or_tol, pxyfun, opts);
time_modified = toc;

% Display the results
fprintf('Time for original function: %.6f seconds\n', time_original);
fprintf('Time for modified function: %.6f seconds\n', time_modified);

% Compare the specific fields in the factors struct
all_equal = compare_specific_fields(F_original.factors, F_modified.factors);

if all_equal
    fprintf('srskelf original and srskelf modified are equal.\n');
end

function all_equal = compare_specific_fields(factors_original, factors_modified)
    fields_to_compare = {'sk', 'rd', 'nbr', 'T', 'E', 'F', 'L', 'U', 'C', 'D'};
    all_equal = true;

    for k = 1:length(factors_original)
        for i = 1:numel(fields_to_compare)
            field = fields_to_compare{i};
            if isequal(factors_original(k).(field), factors_modified(k).(field))
                continue;
            else
                fprintf('Field %s at index %d is NOT equal.\n', field, k);
                display_difference(factors_original(k).(field), factors_modified(k).(field));
                all_equal = false;
            end
        end
    end
end

function display_difference(val1, val2)
    if isequal(size(val1), size(val2)) && isnumeric(val1) && isnumeric(val2)
        diffs = find(val1 ~= val2);
        if isempty(diffs)
            fprintf('No differences found.\n');
        else
            fprintf('Sample differences (original vs. modified):\n');
            for i = 1:min(5, numel(diffs))  % Show up to 5 sample differences
                fprintf('Index %d: %g vs. %g\n', diffs(i), val1(diffs(i)), val2(diffs(i)));
            end
        end
    elseif ischar(val1) && ischar(val2)
        fprintf('Original: %s\n', val1);
        fprintf('Modified: %s\n', val2);
    else
        fprintf('Original and modified values are of different sizes or types and cannot be compared directly.\n');
    end
end
