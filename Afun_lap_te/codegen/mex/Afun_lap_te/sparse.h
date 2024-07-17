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

// Type Definitions
namespace coder {
class sparse {
public:
  void parenReference(const emlrtStack &sp, const real_T varargin_2[5],
                      sparse &s) const;
  array<real_T, 1U> d;
  array<int32_T, 1U> colidx;
  array<int32_T, 1U> rowidx;
};

} // namespace coder

// End of code generation (sparse.h)