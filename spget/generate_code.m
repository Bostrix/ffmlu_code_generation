% generate_spget_code.m

% Load input data from spget_80k_input.mat
load('spget_80k_input.mat', 'Ityp', 'Jtyp', 'F', 'opts', 'slf', 'nbr', 'lst', 'nslf', 'nnbr', 'nlst', 'nbox', 't', 'i');

% Generate C++ code for spget
codegen spget -args {Ityp, Jtyp, F, opts, slf, nbr, lst, nslf, nnbr, nlst, nbox, t, i} -lang:c++
