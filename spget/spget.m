function A = spget(Ityp, Jtyp, F, opts, slf, nbr, lst, nslf, nnbr, nlst, nbox, t, i)
    % A = SPGET(ITYP,JTYP, F, opts, slf, nbr, lst, nslf, nnbr, nlst, nbox, t, i)
    
    % Translate input strings to index sets (and their lengths)
    if strcmpi(Ityp,'slf')
      I_ = slf;
      m_ = nslf;
    elseif strcmpi(Ityp,'nbr')
      I_ = nbr;
      m_ = nnbr;
    elseif strcmpi(Ityp,'lst')
      I_ = lst;
      m_ = nlst;
    end
    
    if strcmpi(Jtyp,'slf')
      J_ = slf;
      n_ = nslf;
    elseif strcmpi(Jtyp,'nbr')
      J_ = nbr;
      n_ = nnbr;
    elseif strcmpi(Jtyp,'lst')
      J_ = lst;
      n_ = nlst;
    end
    
    A = zeros(m_,n_);
    update_list = false(nbox,1);
    iterative_get_update_list(i);
    
    % Define valid_indices with known size
    valid_indices = zeros(1, numel(update_list)); % Preallocate with maximum possible size
    idx_count = 0;
    
    for k = 1:numel(update_list)
        if update_list(k)
            idx_count = idx_count + 1;
            valid_indices(idx_count) = k;
        end
    end
    
    valid_indices = valid_indices(1:idx_count); % Truncate to actual valid count
    
    for jj = valid_indices
      g = F.factors(jj);
      xj = [g.sk, g.nbr];
      f = length(g.sk);
            
      if strcmpi(Ityp,Jtyp)
        idxI = ismembc2(xj,I_);
        tmp1 = idxI~=0;
        subI = idxI(tmp1);
        idxI1 = tmp1(1:f);
        idxI2 = tmp1(f+1:end);
        tmp1 = [g.E(idxI1,:); g.C(idxI2,:)];
        if strcmpi(opts.symm,'p')
          A(subI, subI) = A(subI,subI) - tmp1*tmp1';
        elseif strcmpi(opts.symm,'n')
          tmp2 = [g.F(:,idxI1), g.D(:,idxI2)];
          A(subI, subI) = A(subI,subI) - tmp1*tmp2;
        end
      else
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
        if strcmpi(opts.symm,'p')
          tmp2 = [g.E(idxJ1,:); g.C(idxJ2,:)]';
        elseif strcmpi(opts.symm,'n')
          tmp2 = [g.F(:,idxJ1), g.D(:,idxJ2)];
        end
        A(subI, subJ) = A(subI,subJ) - tmp1*tmp2;
      end
    end

    function iterative_get_update_list(node_idx)
        % Preallocate stack with a maximum possible size
        max_stack_size = numel(t.nodes); % Assuming worst case, all nodes need to be processed
        stack = zeros(max_stack_size, 1);
        stack_ptr = 1; % Initialize stack pointer

        stack(stack_ptr) = node_idx; % Start with the initial node

        while stack_ptr > 0
            current_node = stack(stack_ptr);
            stack_ptr = stack_ptr - 1; % Pop the last element

            update_list(current_node) = 1;
            update_list(t.nodes(current_node).snbor) = 1;

            chld_nodes = t.nodes(current_node).chld(:);
            num_chld = numel(chld_nodes);

            if num_chld > 0
                stack(stack_ptr+1:stack_ptr+num_chld) = chld_nodes; % Push children onto the stack
                stack_ptr = stack_ptr + num_chld;
            end
        end
    end
end
