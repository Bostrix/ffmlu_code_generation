% generate_code.m

% Load input data from lap_neumann_kernel.mat
load('lap_neumann_kernel.mat', 'x', 'y', 'nuuse');

% Generate C++ code for lap_neumann_kernel
codegen lap_neumann_kernel -args {x, y, nuuse} -lang:c++

% Call the test script to compare MATLAB and MEX versions
test_lap_neumann_kernel
