function A = Afun_dispatcher(Afun_name, i, j, x, nu, area, P, S, contrast, wuse)
% Dispatches the appropriate function call based on the function name
%#codegen
if strcmp(Afun_name, 'Afun_lap_te')
    A = Afun_lap_te(i, j, x, nu, area, P, S, contrast, wuse);
else
    error('Unsupported function name');
end
end
