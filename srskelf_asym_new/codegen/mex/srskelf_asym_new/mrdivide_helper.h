//
// mrdivide_helper.h
//
// Code generation for function 'mrdivide_helper'
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
void mrdiv(const emlrtStack &sp, array<real_T, 2U> &A,
           const array<real_T, 2U> &B);

}
} // namespace coder

// End of code generation (mrdivide_helper.h)
