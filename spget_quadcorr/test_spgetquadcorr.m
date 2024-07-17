% Number of iterations for averaging
num_iterations = 100;

% Initialize variables to accumulate total execution times
total_time_spget_quadcorr = 0;
total_time_spget_quadcorr_mex = 0;

% Run spget_quadcorr 100 times and measure average execution time
for i = 1:num_iterations
    mTime = tic;
    result_spget_quadcorr = spget_quadcorr(I, J, P, S);
    total_time_spget_quadcorr = total_time_spget_quadcorr + toc(mTime);
end
average_time_spget_quadcorr = total_time_spget_quadcorr / num_iterations;

% Run spget_quadcorr_mex 100 times and measure average execution time
for i = 1:num_iterations
    nTime = tic;
    result_spget_quadcorr_mex = spget_quadcorr_mex(I, J, P, S);
    total_time_spget_quadcorr_mex = total_time_spget_quadcorr_mex + toc(nTime);
end
average_time_spget_quadcorr_mex = total_time_spget_quadcorr_mex / num_iterations;

% Display the average execution times
fprintf('Average execution time of spget_quadcorr: %.6f seconds\n', average_time_spget_quadcorr);
fprintf('Average execution time of spget_quadcorr_mex: %.6f seconds\n', average_time_spget_quadcorr_mex);

% Compare the results from the last iteration
if isequal(result_spget_quadcorr, result_spget_quadcorr_mex)
    disp('The results of spget_quadcorr and spget_quadcorr_mex are equal.');
else
    disp('The results of spget_quadcorr and spget_quadcorr_mex are NOT equal.');
end
