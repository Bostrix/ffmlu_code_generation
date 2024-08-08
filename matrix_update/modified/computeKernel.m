function K = computeKernel(rdotn, dr)
%COMPUTEKERNEL Computes the kernel value
    K = -1/(4*pi) .* rdotn ./ dr.^3;
    K(dr == 0) = 0;
end
