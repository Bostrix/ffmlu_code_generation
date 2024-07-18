% generate_code.m

% Load the input variables from the .mat file
load('id_full_input_8000.mat');  % This should load variables A, rank_or_tol, Tmax, rrqr_iter, fixed

% Perform code generation
codegen id -args {A, rank_or_tol, Tmax, rrqr_iter, fixed} -lang:c++

% Call the test function to compare MATLAB and MEX versions
test_id