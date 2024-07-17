% Load F and X data from .mat file
load('F_X.mat', 'F', 'X');


% Generate C++ code for srskelf_sv_nn with variable-size inputs
codegen srskelf_sv_nn -args {F, X} -lang:c++

% Call the test script
test_srskelfsvnn;
