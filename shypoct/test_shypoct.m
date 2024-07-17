% Measure the execution time of shypoct
mTime = tic;
result_shypoct = shypoct(x, occ, lvlmax, ext);
time_shypoct = toc(mTime);

% Measure the execution time of shypoct_mex
nTime = tic;
result_shypoct_mex = shypoct_mex(x, occ, lvlmax, ext);
time_shypoct_mex = toc(nTime);

% Display the execution times
fprintf('Execution time of shypoct: %.6f seconds\n', time_shypoct);
fprintf('Execution time of shypoct_mex: %.6f seconds\n', time_shypoct_mex);

% Compare the results
if isequal(result_shypoct, result_shypoct_mex)
    disp('The results of shypoct and shypoct_mex are equal.');
else
    disp('The results of shypoct and shypoct_mex are NOT equal.');
end