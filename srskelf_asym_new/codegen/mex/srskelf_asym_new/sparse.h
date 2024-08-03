//
// sparse.h
//
// Code generation for function 'sparse'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Declarations
namespace coder {
class b_sparse;

}

// Type Definitions
namespace coder {
class sparse {
public:
  void parenReference(const emlrtStack &sp, const array<real_T, 2U> &varargin_2,
                      b_sparse &s) const;
  static void spallocLike(const emlrtStack &sp, int32_T n, int32_T nzmax,
                          b_sparse &s);
  void b_parenReference(const emlrtStack &sp,
                        const array<real_T, 2U> &varargin_2, b_sparse &s) const;
  array<real_T, 1U> d;
  array<int32_T, 1U> colidx;
  array<int32_T, 1U> rowidx;
};

class b_sparse {
public:
  array<real_T, 1U> d;
  array<int32_T, 1U> colidx;
  array<int32_T, 1U> rowidx;
  int32_T n;
};

} // namespace coder

// End of code generation (sparse.h)
