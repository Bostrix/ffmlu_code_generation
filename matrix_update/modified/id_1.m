function [sk, rd, T, niter] = id_1(A, rank_or_tol, Tmax, rrqr_iter, fixed)

  % set default parameters
  if nargin < 3 || isempty(Tmax), Tmax = 2; end
  if nargin < 4 || isempty(rrqr_iter), rrqr_iter = Inf; end
  if nargin < 5, fixed = []; end

  % check inputs
  assert(rank_or_tol >= 0,'FLAM:id:invalidRankOrTol', ...
         'Rank or tolerance must be nonnegative.')
  assert(Tmax >= 1, 'FLAM:id:invalidTmax', ...
         'Interpolation matrix entry bound must be >= 1.')
  assert(rrqr_iter >= 0,'FLAM:id:invalidRRQRIter', ...
         'Maximum number of RRQR iterations must be nonnegative.')

  % initialize
  [m, n] = size(A);
  niter = 0;

  % return if matrix is empty
  if isempty(A)
    sk = []; rd = 1:n;
    T = zeros(0, n);
    return;
  end

  % unpack approximation parameters
  tol  = rem(rank_or_tol, 1);               % relative tolerance
  kmax = floor(rank_or_tol);               % maximum rank
  if kmax == 0 || kmax > n, kmax = n; end  % special rank cases

  % preprocess fixed columns
  nfix = length(fixed);
  if nfix > 0
    fixed = fixed(:)';                                         % fixed indices
    free = true(1, n); free(fixed) = false; free = find(free);  % free indices

    % nothing left -- quick return
    if isempty(free)
      sk = fixed; rd = [];
      T = zeros(nfix, 0);
      return;
    end

    % Gram-Schmidt reduction to free columns
    Afix = A(:, fixed);
    cmax = sqrt(max(sum(abs(Afix).^2)));  % maximum column norm among fixed
    [Q, R1] = qr(Afix, 0);
    A = A(:, free);
    R2 = Q' * A; A = A - Q * R2;
    n = size(A, 2);
    kmax = max(kmax - nfix, 0);
  else
    free = 1:n;
    cmax = 0;
  end

  % reduce row size if too rectangular
  if m > 8 * n, [~, A] = qr(A, 0); end

  % compute ID
  [~, R, p] = qr(A, 0);
  cmax = max(cmax, abs(R(1)));                  % maximum column norm
  tol = cmax * tol;                              % absolute tolerance
  if any(size(R) == 1), diagR = R(1);          % in case R is a vector ...
  else,                 diagR = diag(R);       % ... instead of a matrix
  end
  k = nnz(abs(diagR) > tol);                   % rank by precision
  R = R(1:k, :);
  k = min(k, kmax);                             % truncate rank by input
  R(1:k, k + 1:end) = R(1:k, 1:k) \ R(1:k, k + 1:end);  % store T

  % RRQR refinement
  if ~isinf(Tmax) && rrqr_iter > 0 && k > 0 && k < n
    f2 = Tmax^2;                      % convergence criterion
    c2 = sum(R(k + 1:end, k + 1:end).^2);  % column norms of residual part
    r2 = sum(inv(R(1:k, 1:k)).^2, 2);   % inverse row norms of main part
    conv  = 0;                        % converged?

    % one-loop variant of Gu-Eisenstat -- allows early rank reduction
    while niter < rrqr_iter
      tmp = R(1:k, k + 1:end).^2 + r2 * c2;
      [t2, idx] = max(abs(tmp(:)));
      if t2 <= f2, conv = 1; break; end  % converged
      niter = niter + 1;
      [i, j] = ind2sub([k, n - k], idx);  % need to swap i-th and (k + j)-th columns

      % swap i-th and k-th columns
      if i < k
        p([i k]) = p([k i]);
        [~, R(1:k, 1:k)] = qrupdate(eye(k), R(1:k, 1:k), R(1:k, k) - R(1:k, i), ...
                                  ((1:k == i) - (1:k == k))');
        R([i k], k + 1:end) = R([k i], k + 1:end);
        r2([i k]) = r2([k i]);
      end

      % swap (k + 1)-th and (k + j)-th columns
      if j > 1
        p(k + [1 j]) = p(k + [j 1]);
        R(:, k + [1 j]) = R(:, k + [j 1]);
        c2([1 j]) = c2([j 1]);
      end

      % downdate inverse row norms
      r2(1:k - 1) = r2(1:k - 1) - abs(R(1:k - 1, 1:k - 1) \ R(1:k - 1, k) / R(k, k)).^2;
      r2(k) = 0;

      % The following updates the R = [R11 R12; 0 R22] in two steps, recalling
      % that R12 actually stores T = R11 \ R12.
      %
      %   - First do a "half-update" of T and an otherwise full update of R,
      %     i.e., overwrite R11 and R22 with R11_new and R22_new, respectively,
      %     and T with R11 \ R12_new.
      %
      %   - Then do a rank-one update of T to obtain R11_new \ R12_new.
      %
      % Note that the k-th and (k + 1)-th columns are stored in swapped order
      % during the first step below.

      % half-update T and full-update R
      if size(R, 1) == k  % no trailing R22 -- typical for fixed-precision case
        u = R(:, k + 1);    % for rank-one update of T
        R(:, k + 1) = R(:, 1:k) * R(:, k + 1);
        R(1:k - 1, k) = 0; R(k, k) = 1;
      else
        % zero out R22(2:end,:) by Householder transformation
        v = R(k + 1:end, k + 1);
        v(1) = v(1) + sqrt(c2(1)) * exp(1i * arg(R(k + 1, k + 1)));
        v = v / norm(v);
        R(k + 1:end, k + 2:end) = R(k + 1:end, k + 2:end) - 2 * v * (v' * R(k + 1:end, k + 2:end));
        R(k + 2:end, k + 1) = 0; R(k + 1, k + 1) = sqrt(c2(1));

        % restore certain entries of T to "R space"
        R(1:k, k + 1) = R(1:k, 1:k) * R(1:k, k + 1);
        R(k, k + 2:end) = R(k, k) * R(k, k + 2:end);
        r = R(1:k, k);
        s = R(k, k + 2:end);

        % zero out R21 after swap by Givens rotation and update column norms
        c2 = c2 - abs(R(k + 1, k + 1:end)).^2;
        R(k:k + 1, k:end) = givens(R(k, k + 1), R(k + 1, k + 1)) * R(k:k + 1, k:end);
        c2 = c2 + abs(R(k + 1, k + 1:end)).^2;
        c2(1) = abs(R(k + 1, k))^2;

        tmp = R(k, k); R(k, k) = r(k);
        u = R(1:k, 1:k) \ R(1:k, k + 1);  % for rank-one update of T
        R(k, k) = tmp;

        % half-update T
        v = R(1:k - 1, 1:k - 1) \ r(1:k - 1);
        R(k, k) = R(k, k) / r(k);
        R(1:k - 1, k) = v * (1 - R(k, k));
        R(1:k - 1, k + 2:end) = R(1:k - 1, k + 2:end) + v / r(k) * (s - R(k, k + 2:end));
        R(k, k + 2:end) = R(k, k + 2:end) / r(k);
      end

      % swap k-th and (k + 1)-th columns; update inverse row norms
      p([k k + 1]) = p([k + 1 k]);
      R(:, [k k + 1]) = R(:, [k + 1 k]);
      r2(1:k - 1) = r2(1:k - 1) + abs(R(1:k - 1, 1:k - 1) \ R(1:k - 1, k) / R(k, k)).^2;
      r2(k) = 1 / abs(R(k, k))^2;

      % finish update of T by Sherman-Morrison
      u(k) = u(k) - 1;
      R(1:k, k + 1:end) = R(1:k, k + 1:end) - u * R(k, k + 1:end) / (1 + u(k));

      % check if tolerance can be met by reducing rank
      [r, i] = min(1./sqrt(r2));
      if r > tol, continue; end  % no -- loop again

      % can drop i-th column from skeletons; first swap with k-th column
      if i < k
        p([i k]) = p([k i]);
        [~, R(1:k, 1:k)] = qrupdate(eye(k), R(1:k, 1:k), R(1:k, k) - R(1:k, i), ...
                                  ((1:k == i) - (1:k == k))');
        R([i k], k + 1:end) = R([k i], k + 1:end);
        r2([i k]) = r2([k i]);
      end

      % decrease rank from k to k - 1
      c2 = zeros(1, n - k + 1);  % no R22 block
      r2 = r2(1:k - 1) - abs(R(1:k - 1, 1:k - 1) \ R(1:k - 1, k) / R(k, k)).^2;
      k = k - 1;
      r = R(1:k, 1:k) \ R(1:k, k + 1);
      R(1:k, k + 1:end) = [r R(1:k, k + 2:end) + r * R(k + 1, k + 2:end)];
      R = R(1:k, :);
    end

    if ~conv  % not converged
      warning('FLAM:id:maxIterCount', ...
              'Maximum number of RRQR iterations reached.')
    end
  end

  % set ID outputs
  sk = p(1:k); rd = p(k + 1:end);
  T = R(1:k, k + 1:end);

  % postprocess for fixed columns
  if nfix > 0
    T = [R1 \ (R2(:, rd) - R2(:, sk) * T); T];
    sk = [fixed free(sk)];
    rd = [free(rd)];
  end
end
