function [KPXY, NBR] = pxyfun_dispatcher(pxyfun_name, x, slf, nbr, proxy, l, ctr, area)
% Dispatches the appropriate proxy function call based on the function name
%#codegen
if strcmp(pxyfun_name, 'pxyfun_lap_neumann')
    [KPXY, NBR] = pxyfun_lap_neumann(x, slf, nbr, proxy, l, ctr, area);
else
    error('Unsupported proxy function name');
end
end
