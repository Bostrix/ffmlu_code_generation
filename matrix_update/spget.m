function A = spget(Ityp, Jtyp, F, lookup_list, i, t, slf, nbr, lst, opts)
    % A = SPGET(ITYP,JTYP) Sparse matrix access function (native MATLAB is 
    % slow for large matrices).  We grab the accumulated Schur complement
    % updates to a block of the matrix from previously-skeletonized 
    % levels.  Index sets ITYP and JTYP can be 'slf', 'nbr', or 'lst'.
    
    % Translate input strings to index sets (and their lengths)
    if strcmpi(Ityp,'slf')
      I_ = slf;
      m_ = length(slf);
    elseif strcmpi(Ityp,'nbr')
      I_ = nbr;
      m_ = length(nbr);
    elseif strcmpi(Ityp,'lst')
      I_ = lst;
      m_ = length(lst);
    end
    
    if strcmpi(Jtyp,'slf')
      J_ = slf;
      n_ = length(slf);
    elseif strcmpi(Jtyp,'nbr')
      J_ = nbr;
      n_ = length(nbr);
    elseif strcmpi(Jtyp,'lst')
      J_ = lst;
      n_ = length(lst);
    end
    
    A = zeros(m_,n_);
    update_list = false(length(lookup_list),1);
    get_update_list(i, t, update_list);
    update_list = lookup_list(flip(find(update_list)'));
    update_list = update_list(update_list~=0)';
    for jj = update_list
      g = F.factors(jj);
      xj = [g.sk, g.nbr];
      f = length(g.sk);
            
      if strcmpi(Ityp,Jtyp)
        % For diagonal block
        idxI = ismembc2(xj,I_);
        tmp1 = idxI~=0;
        subI = idxI(tmp1);
        idxI1 = tmp1(1:f);
        idxI2 = tmp1(f+1:end);
        tmp1 = [g.E(idxI1,:); g.C(idxI2,:)];
        % Different factorization depending on symmetry
        if strcmpi(opts.symm,'p')
          A(subI, subI) = A(subI,subI) - tmp1*tmp1';
        elseif strcmpi(opts.symm,'n')
          tmp2 = [g.F(:,idxI1), g.D(:,idxI2)];
          A(subI, subI) = A(subI,subI) - tmp1*tmp2;
        end
      else
        % For off-diagonal block
        idxI = ismembc2(xj,I_);
        idxJ = ismembc2(xj,J_);

        tmp1 = idxI~=0;
        tmp2 = idxJ~=0;

        subI = idxI(tmp1);
        subJ = idxJ(tmp2);
        idxI1 = tmp1(1:f);
        idxI2 = tmp1(f+1:end);
        idxJ1 = tmp2(1:f);
        idxJ2 = tmp2(f+1:end);

        tmp1 = [g.E(idxI1,:); g.C(idxI2,:)];
        % Different factorization depending on symmetry
        if strcmpi(opts.symm,'p')
          tmp2 = [g.E(idxJ1,:); g.C(idxJ2,:)]';
        elseif strcmpi(opts.symm,'n')
          tmp2 = [g.F(:,idxJ1), g.D(:,idxJ2)];
        end
        A(subI, subJ) = A(subI,subJ) - tmp1*tmp2;
      end
    end

end

function get_update_list(node_idx, t, update_list)
  % GET_UPDATE_LIST(NODE_IDX) Recursively get the list of all nodes in
  % the tree that could have generated Schur complement updates to
  % points in node NODE_IDX
  update_list(node_idx) = 1;
  update_list(t.nodes(node_idx).snbor) = 1;
  for k = t.nodes(node_idx).chld
    get_update_list(k, t, update_list);
  end
end
