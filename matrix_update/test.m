addpath('/home/user/Documents/ffmlu_code_generation/matrix_update/modified');

% Measure time for the original function
tic;
F_original = srskelf_asym_new(A, x, occ, rank_or_tol, pxyfun, opts);
time_original = toc;

% Measure time for the modified function
tic;
F_modified = srskelf_asym_new_modified(A, x, occ, rank_or_tol, pxyfun, opts);
time_modified = toc;

% Display the results
fprintf('Time for original function: %.6f seconds\n', time_original);
fprintf('Time for modified function: %.6f seconds\n', time_modified);