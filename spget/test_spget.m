% test_spget.m

% Assume the necessary input variables are already defined: 
% Ityp, Jtyp, F, lookup_list, slf, nbr, lst, nslf, nnbr, nlst, nbox, t, i, opts

% Measure execution time for the MATLAB version
mTime = tic;
matlab_result = spget(Ityp, Jtyp, F, lookup_list, slf, nbr, lst, nslf, nnbr, nlst, nbox, t, i, opts);
matlab_time = toc(mTime);

% Measure execution time for the C++ MEX version
nTime = tic;
cpp_result = spget_mex(Ityp, Jtyp, F, lookup_list, slf, nbr, lst, nslf, nnbr, nlst, nbox, t, i, opts);
cpp_time = toc(nTime);

% Print the execution times
fprintf('MATLAB spget execution time: %.6f seconds\n', matlab_time);
fprintf('C++ spget_mex execution time: %.6f seconds\n', cpp_time);

% Optionally, you can compare the results numerically to ensure they match
if isequal(matlab_result, cpp_result)
    disp('The MATLAB function and the generated C++ MEX function produce the same output.');
else
    disp('The MATLAB function and the generated C++ MEX function produce different outputs.');
end
