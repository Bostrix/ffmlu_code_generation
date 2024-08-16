function A = spget(F, Ityp, Jtyp, t, i, lookup_list, nbox)
    % A = SPGET(ITYP, JTYP) Optimized sparse matrix access function for large matrices.

    % Translate input strings to index sets (and their lengths)
    I_ = getIndexSet(Ityp);
    J_ = getIndexSet(Jtyp);
    
    m_ = numel(I_);
    n_ = numel(J_);
    
    A = sparse(m_, n_);
    update_list = false(nbox, 1);
    update_list = get_update_list(t, i, lookup_list, update_list);
    update_list = lookup_list(flip(find(update_list)'));
    update_list = update_list(update_list ~= 0)';
    
    % Optimize gather and scatter operations
    for jj = update_list
        g = F.factors(jj);
        xj = [g.sk, g.nbr];
        f = length(g.sk);
        
        idxI = ismembc2(xj, I_);
        idxJ = ismembc2(xj, J_);
        
        tmp1 = idxI ~= 0;
        tmp2 = idxJ ~= 0;
        
        subI = idxI(tmp1);
        subJ = idxJ(tmp2);
        idxI1 = tmp1(1:floor(f));  % Ensure 'f' is an integer
        idxI2 = tmp1(floor(f) + 1:end);  % Ensure 'f' is an integer
        idxJ1 = tmp2(1:floor(f));  % Ensure 'f' is an integer
        idxJ2 = tmp2(floor(f) + 1:end);  % Ensure 'f' is an integer
        
        tmp1 = [g.E(idxI1, :); g.C(idxI2, :)];
        if strcmpi(F.symm, 'p')
            tmp2 = [g.E(idxJ1, :); g.C(idxJ2, :)]';
        elseif strcmpi(F.symm, 'n')
            tmp2 = [g.F(:, idxJ1), g.D(:, idxJ2)];
        end
        
        % Reduced number of matrix operations
        A(subI, subJ) = A(subI, subJ) - tmp1 * tmp2;
    end
    
    function I_ = getIndexSet(typ)
        % Translate input strings to index sets
        switch lower(typ)
            case 'slf'
                I_ = Ityp;
            case 'nbr'
                I_ = Jtyp;
            case 'lst'
                I_ = Jtyp;
            otherwise
                error('Unknown type: %s', typ);
        end
    end

    function update_list = get_update_list(t, node_idx, lookup_list, update_list)
        % Recursively get the list of all nodes in the tree that could have 
        % generated Schur complement updates to points in node NODE_IDX
        update_list(node_idx) = 1;
        update_list(t.nodes(node_idx).snbor) = 1;
        for k = t.nodes(node_idx).chld
            update_list = get_update_list(t, k, lookup_list, update_list);
        end
    end
end
