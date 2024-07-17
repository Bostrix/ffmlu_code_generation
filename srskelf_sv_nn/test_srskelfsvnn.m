% Number of iterations for averaging
num_iterations = 100;

% Initialize variables to accumulate total execution times
total_time_srskelf_sv_nn = 0;
total_time_srskelf_sv_nn_mex = 0;

% Run srskelf_sv_nn 100 times and measure average execution time
for i = 1:num_iterations
    mTime = tic;
    result_srskelf_sv_nn = srskelf_sv_nn(F, X);
    total_time_srskelf_sv_nn = total_time_srskelf_sv_nn + toc(mTime);
end
average_time_srskelf_sv_nn = total_time_srskelf_sv_nn / num_iterations;

% Run srskelf_sv_nn_mex 100 times and measure average execution time
for i = 1:num_iterations
    cTime = tic;
    result_srskelf_sv_nn_mex = srskelf_sv_nn_mex(F, X);
    total_time_srskelf_sv_nn_mex = total_time_srskelf_sv_nn_mex + toc(cTime);
end
average_time_srskelf_sv_nn_mex = total_time_srskelf_sv_nn_mex / num_iterations;

% Display the average execution times
fprintf('Average execution time of srskelf_sv_nn: %.6f seconds\n', average_time_srskelf_sv_nn);
fprintf('Average execution time of srskelf_sv_nn_mex: %.6f seconds\n', average_time_srskelf_sv_nn_mex);

% Compare the results from the last iteration
if isequal(result_srskelf_sv_nn, result_srskelf_sv_nn_mex)
    disp('The results of srskelf_sv_nn and srskelf_sv_nn_mex are equal.');
else
    disp('The results of srskelf_sv_nn and srskelf_sv_nn_mex are NOT equal.');
    
    % Find and display all differences
    differences = find(result_srskelf_sv_nn ~= result_srskelf_sv_nn_mex);
    num_diff = numel(differences);
    fprintf('Number of differences: %d\n', num_diff);
    
    % Display the differences with increased precision
    % for i = 1:num_diff
    %     idx = differences(i);
    %     fprintf('Difference at index %d: srskelf_sv_nn = %.15e, srskelf_sv_nn_mex = %.15e\n', idx, result_srskelf_sv_nn(idx), result_srskelf_sv_nn_mex(idx));
    % end
end
