% test_Afun_lap_te.m

% Test Afun_lap_te (MATLAB version)
tic;
matlab_result = Afun_lap_te(i, j, x, nu, area, P, S, contrast, wuse);
matlab_time = toc;

% Test Afun_lap_te_mex (C++ MEX version)
tic;
cpp_result = Afun_lap_te_mex(i, j, x, nu, area, P, S, contrast, wuse);
cpp_time = toc;

% Print the execution times
fprintf('MATLAB Afun_lap_te execution time: %.6f seconds\n', matlab_time);
fprintf('C++ Afun_lap_te execution time: %.6f seconds\n', cpp_time);

% Optionally, you can compare the results numerically to ensure they match
if isequal(matlab_result, cpp_result)
    disp('The MATLAB function and the generated C++ MEX function produce the same output.');
else
    disp('The MATLAB function and the generated C++ MEX function produce different outputs.');
end
