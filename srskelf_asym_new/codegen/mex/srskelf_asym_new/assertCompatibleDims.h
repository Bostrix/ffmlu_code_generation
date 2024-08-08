//
// assertCompatibleDims.h
//
// Code generation for function 'assertCompatibleDims'
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
void assertCompatibleDims(const emlrtStack &sp, const array<real_T, 2U> &x,
                          const array<real_T, 2U> &y);

}
} // namespace coder

// End of code generation (assertCompatibleDims.h)
