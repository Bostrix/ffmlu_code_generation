//
// xgetrf.h
//
// Code generation for function 'xgetrf'
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
void xgetrf(const emlrtStack &sp, int32_T m, int32_T n, array<real_T, 2U> &A,
            int32_T lda, array<int32_T, 2U> &ipiv);

}
} // namespace internal
} // namespace coder

// End of code generation (xgetrf.h)
