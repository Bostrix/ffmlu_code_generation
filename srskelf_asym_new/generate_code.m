% Load input data from srskelf_input_80k.mat
load('srskelf_input_80k.mat', 'A', 'x', 'occ', 'rank_or_tol', 'pxyfun', 'opts');

% Define function identifiers
A_func_id = 1; % Identifier for Afun_lap_te
pxyfun_func_id = 1; % Identifier for pxyfun_lap_neumann

% Ensure opts structure has all necessary fields
if ~isfield(opts, 'ext')
    opts.ext = [];
end
if ~isfield(opts, 'lvlmax')
    opts.lvlmax = Inf;
end
if ~isfield(opts, 'symm')
    opts.symm = 'n';
end
if ~isfield(opts, 'verb')
    opts.verb = 0;
end
if ~isfield(opts, 'zk')
    opts.zk = 1.0;
end
if ~isfield(opts, 'lap_proxy')
    opts.lap_proxy = false; % Assuming a default value
end

% Generate C++ code
codegen srskelf_asym_new -args {A_func_id, x, occ, rank_or_tol, pxyfun_func_id, opts} -lang:c++
