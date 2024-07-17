% Number of iterations for averaging
num_iterations = 100;

% Initialize variables to accumulate total execution times
total_time_Afun_lap_te = 0;
total_time_Afun_lap_te_mex = 0;

% Run Afun_lap_te 100 times and measure average execution time
for iter = 1:num_iterations
    mTime = tic;
    matlab_result = Afun_lap_te(i, j, x, nu, area, P, S, contrast, wuse);
    total_time_Afun_lap_te = total_time_Afun_lap_te + toc(mTime);
end
average_time_Afun_lap_te = total_time_Afun_lap_te / num_iterations;

% Run Afun_lap_te_mex 100 times and measure average execution time
for iter = 1:num_iterations
    nTime = tic;
    cpp_result = Afun_lap_te_mex(i, j, x, nu, area, P, S, contrast, wuse);
    total_time_Afun_lap_te_mex = total_time_Afun_lap_te_mex + toc(nTime);
end
average_time_Afun_lap_te_mex = total_time_Afun_lap_te_mex / num_iterations;

% Print the average execution times
fprintf('Average MATLAB Afun_lap_te execution time: %.6f seconds\n', average_time_Afun_lap_te);
fprintf('Average C++ Afun_lap_te_mex execution time: %.6f seconds\n', average_time_Afun_lap_te_mex);

% Compare the results from the last iteration
if isequal(matlab_result, cpp_result)
    disp('The MATLAB function and the generated C++ MEX function produce the same output.');
else
    disp('The MATLAB function and the generated C++ MEX function produce different outputs.');
end
