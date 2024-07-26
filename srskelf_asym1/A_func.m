function result = A_func(i, j)
    load('srskelf_asym_new_8k.mat', 'A');
    result = feval(A, i, j);
end
