function [KPXY, NBR] = pxyfun_func(x, slf, nbr, proxy, l, ctr)
    load('srskelf_asym_new_8k.mat', 'pxyfun');
    [KPXY, NBR] = feval(pxyfun, x, slf, nbr, proxy, l, ctr);
end
