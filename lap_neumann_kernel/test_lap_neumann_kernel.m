% test_lap_neumann_kernel.m

num_iterations = 100;

% Initialize variables to accumulate total execution times
total_matlab_time = 0;
total_cpp_time = 0;

% Run MATLAB version 100 times and measure average execution time
for i = 1:num_iterations
    mTime = tic;
    matlab_result = lap_neumann_kernel(x, y, nuuse);
    total_matlab_time = total_matlab_time + toc(mTime);
end
average_matlab_time = total_matlab_time / num_iterations;

% Run C++ MEX version 100 times and measure average execution time
for i = 1:num_iterations
    nTime = tic;
    cpp_result = lap_neumann_kernel_mex(x, y, nuuse);
    total_cpp_time = total_cpp_time + toc(nTime);
end
average_cpp_time = total_cpp_time / num_iterations;

% Print the average execution times
fprintf('Average MATLAB lap_neumann_kernel execution time: %.6f seconds\n', average_matlab_time);
fprintf('Average C++ lap_neumann_kernel_mex execution time: %.6f seconds\n', average_cpp_time);

% Optionally, you can compare the results numerically to ensure they match
if isequal(matlab_result, cpp_result)
    disp('The MATLAB function and the generated C++ MEX function produce the same output.');
else
    disp('The MATLAB function and the generated C++ MEX function produce different outputs.');
end
