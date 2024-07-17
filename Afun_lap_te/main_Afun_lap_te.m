% generate_code.m

% Load input data from Afun_lap_te.mat
load('Afun_lap_te.mat', 'i', 'j', 'x', 'nu', 'area', 'P', 'S', 'contrast', 'wuse');

% Generate C++ code for Afun_lap_te
codegen Afun_lap_te -args {i, j, x, nu, area, P, S, contrast, wuse} -lang:c++

% Call the test function to compare MATLAB and MEX versions
test_Afun_lap_te;
