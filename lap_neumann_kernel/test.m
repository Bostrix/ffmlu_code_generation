% test_lap_neumann_kernel.m

% Test lap_neumann_kernel (MATLAB version)
mTime = tic;
matlab_result = lap_neumann_kernel(x, y, nuuse);
matlab_time = toc(mTime);

% Test lap_neumann_kernel_mex (C++ MEX version)
nTime = tic;
cpp_result = lap_neumann_kernel_mex(x, y, nuuse);
cpp_time = toc(nTime);

% Print the execution times
fprintf('MATLAB lap_neumann_kernel execution time: %.6f seconds\n', matlab_time);
fprintf('C++ lap_neumann_kernel execution time: %.6f seconds\n', cpp_time);

% Optionally, you can compare the results numerically to ensure they match
if isequal(matlab_result, cpp_result)
    disp('The MATLAB function and the generated C++ MEX function produce the same output.');
else
    disp('The MATLAB function and the generated C++ MEX function produce different outputs.');
end
