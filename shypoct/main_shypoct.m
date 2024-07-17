% Load ext, lvlmax, occ, and x data from .mat file
load('ext_lvlmax_occ_x_8kinput.mat', 'x', 'occ', 'lvlmax', 'ext');

% Ensure ext is properly sized
if isempty(ext)
  ext = [min(x, [], 2) max(x, [], 2)];
end

% Generate C++ code for shypoct with variable-size inputs using the configuration
codegen shypoct -args {x, occ, lvlmax, ext} -lang:c++

% Call the test script
test_shypoct;
