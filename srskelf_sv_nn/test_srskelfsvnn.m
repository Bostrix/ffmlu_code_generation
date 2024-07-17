% Measure the execution time of srskelf_sv_nn
mTime = tic;
result_srskelf_sv_nn = srskelf_sv_nn(F, X);
time_srskelf_sv_nn = toc(mTime);

% Measure the execution time of srskelf_sv_nn_mex
cTime = tic;
result_srskelf_sv_nn_mex = srskelf_sv_nn_mex(F, X);
time_srskelf_sv_nn_mex = toc(cTime);

% Display the execution times
fprintf('Execution time of srskelf_sv_nn: %.6f seconds\n', time_srskelf_sv_nn);
fprintf('Execution time of srskelf_sv_nn_mex: %.6f seconds\n', time_srskelf_sv_nn_mex);

% Compare the results
if isequal(result_srskelf_sv_nn, result_srskelf_sv_nn_mex)
    disp('The results of srskelf_sv_nn and srskelf_sv_nn_mex are equal.');
else
    disp('The results of srskelf_sv_nn and srskelf_sv_nn_mex are NOT equal.');
    % Find and display all differences
    differences = find(result_srskelf_sv_nn ~= result_srskelf_sv_nn_mex);
    num_diff = numel(differences);
   % fprintf('Number of differences: %d\n', num_diff);
    
    % Display the differences with increased precision
   % % for i = 1:num_diff
   %     % idx = differences(i);
   %      fprintf('Difference at index %d: srskelf_sv_nn = %.15e, srskelf_sv_nn_mex = %.15e\n', idx, result_srskelf_sv_nn(idx), result_srskelf_sv_nn_mex(idx));
   %  end
end