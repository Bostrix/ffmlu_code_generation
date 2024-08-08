//
// xorgqr.h
//
// Code generation for function 'xorgqr'
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

// Function Declarations
namespace coder {
namespace internal {
namespace lapack {
void xorgqr(const emlrtStack &sp, int32_T m, int32_T n, int32_T k,
            array<real_T, 2U> &A, int32_T lda, const array<real_T, 1U> &tau);

}
} // namespace internal
} // namespace coder

// End of code generation (xorgqr.h)
