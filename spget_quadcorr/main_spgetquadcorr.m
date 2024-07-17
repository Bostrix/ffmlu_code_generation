% Load I, J, P, S data from .mat file
load('I_J_P_S_8k.mat', 'I', 'J', 'P', 'S');

% Generate C++ code for spget_quadcorr
codegen spget_quadcorr -args {I, J, P, S} -lang:c++

% Call the test script
test_spgetquadcorr;
