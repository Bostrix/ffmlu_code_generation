% Number of iterations for averaging
num_iterations = 100;

% Initialize variables to accumulate total execution times
total_time_id = 0;
total_time_id_mex = 0;

% Run id 100 times and measure average execution time
for iter = 1:num_iterations
    mTime = tic;
    [matlab_sk, matlab_rd, matlab_T, matlab_niter] = id(A, rank_or_tol, Tmax, rrqr_iter, fixed);
    total_time_id = total_time_id + toc(mTime);
end
average_time_id = total_time_id / num_iterations;

% Run id_mex 100 times and measure average execution time
for iter = 1:num_iterations
    nTime = tic;
    [cpp_sk, cpp_rd, cpp_T, cpp_niter] = id_mex(A, rank_or_tol, Tmax, rrqr_iter, fixed);
    total_time_id_mex = total_time_id_mex + toc(nTime);
end
average_time_id_mex = total_time_id_mex / num_iterations;

% Print the average execution times
fprintf('Average MATLAB id execution time: %.6f seconds\n', average_time_id);
fprintf('Average C++ id_mex execution time: %.6f seconds\n', average_time_id_mex);

% Compare the results from the last iteration
if isequal(matlab_sk, cpp_sk) && isequal(matlab_rd, cpp_rd) && isequal(matlab_T, cpp_T) && isequal(matlab_niter, cpp_niter)
    disp('The MATLAB function and the generated C++ MEX function produce the same output.');
else
    disp('The MATLAB function and the generated C++ MEX function produce different outputs.');
end
