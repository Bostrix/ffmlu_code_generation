function A = updateMatrix(A, subI, subJ, tmp1, tmp2)
    % Update the matrix A at the specified indices
    A(subI, subJ) = A(subI, subJ) - tmp1 * tmp2;
end
