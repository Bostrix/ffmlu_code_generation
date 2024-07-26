% Load the data
load('srskelf_full_input_8k.mat', 'x', 'occ', 'rank_or_tol', 'opts');

% Add all to opts structure
opts.area = area;
opts.nu = nu;
opts.P = P;
opts.contrast = contrast;
opts.wuse = wuse;
opts.qcorr = qcorr;

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
if ~isfield(opts, 'area')
    opts.area = area; % Ensure 'area' is provided in opts
end
if ~isfield(opts, 'nu')
    opts.nu = nu; % Ensure 'nu' is provided in opts
end
if ~isfield(opts, 'P')
    opts.P = P; % Ensure 'P' is provided in opts
end
if ~isfield(opts, 'qcorr')
    opts.qcorr = qcorr; % Ensure 'qcorr' is provided in opts
end
if ~isfield(opts, 'contrast')
    opts.contrast = contrast; % Ensure 'contrast' is provided in opts
end
if ~isfield(opts, 'wuse')
    opts.wuse = wuse; % Ensure 'wuse' is provided in opts
end

% Generate C++ code
codegen srskelf_asym_new -args {A_func_id, x, occ, rank_or_tol, pxyfun_func_id, opts} -lang:c++
