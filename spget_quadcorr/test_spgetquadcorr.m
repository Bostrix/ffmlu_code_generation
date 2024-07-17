% Measure the execution time of spget_quadcorr
tic;
result_spget_quadcorr = spget_quadcorr(I, J, P, S);
time_spget_quadcorr = toc;

% Measure the execution time of spget_quadcorr_mex
tic;
result_spget_quadcorr_mex = spget_quadcorr_mex(I, J, P, S);
time_spget_quadcorr_mex = toc;

% Display the execution times
fprintf('Execution time of spget_quadcorr: %.6f seconds\n', time_spget_quadcorr);
fprintf('Execution time of spget_quadcorr_mex: %.6f seconds\n', time_spget_quadcorr_mex);

% Compare the results
if isequal(result_spget_quadcorr, result_spget_quadcorr_mex)
    disp('The results of spget_quadcorr and spget_quadcorr_mex are equal.');
else
    disp('The results of spget_quadcorr and spget_quadcorr_mex are NOT equal.');
end