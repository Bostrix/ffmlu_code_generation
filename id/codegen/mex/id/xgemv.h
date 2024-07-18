//
// xgemv.h
//
// Code generation for function 'xgemv'
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
void xgemv(const emlrtStack &sp, int32_T m, int32_T n, const real_T A[25],
           int32_T ia0, const real_T x[25], int32_T ix0, real_T y[5]);

}
} // namespace internal
} // namespace coder

// End of code generation (xgemv.h)
