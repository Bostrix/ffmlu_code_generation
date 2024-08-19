% generate_code.m

% Load input data from spget_80k_input.mat and opts_80k.mat
load('spget_80k_input.mat', 'Ityp', 'Jtyp', 'F', 'lookup_list', 'slf', 'nbr', 'lst', 'nslf', 'nnbr', 'nlst', 'nbox', 't', 'i');
load('opts_80k.mat', 'opts');  % Load the opts structure

% Generate C++ code for spget
codegen spget -args {Ityp, Jtyp, F, lookup_list, slf, nbr, lst, nslf, nnbr, nlst, nbox, t, i, opts} -lang:c++
