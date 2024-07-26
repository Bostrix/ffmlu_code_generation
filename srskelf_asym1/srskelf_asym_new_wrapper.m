function F = srskelf_asym_new_wrapper(A, x, occ, rank_or_tol, pxyfun_id, afun_id, opts)
  if nargin < 7
    opts = struct('ext', [], 'lvlmax', Inf, 'symm', 'n', 'verb', 0, 'zk', 1.0);
  end
  F = srskelf_asym_new(A, x, occ, rank_or_tol, pxyfun, afun, opts);
end
