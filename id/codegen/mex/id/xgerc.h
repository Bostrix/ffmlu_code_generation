//
// xgerc.h
//
// Code generation for function 'xgerc'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
namespace coder {
namespace internal {
namespace blas {
void xgerc(const emlrtStack &sp, int32_T m, int32_T n, real_T alpha1,
           int32_T ix0, const real_T y[5], real_T A[25], int32_T ia0);

}
} // namespace internal
} // namespace coder

// End of code generation (xgerc.h)
