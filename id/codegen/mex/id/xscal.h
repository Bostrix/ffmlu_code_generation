//
// xscal.h
//
// Code generation for function 'xscal'
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
void xscal(const emlrtStack &sp, int32_T n, real_T a, real_T x[25],
           int32_T ix0);

}
} // namespace internal
} // namespace coder

// End of code generation (xscal.h)
