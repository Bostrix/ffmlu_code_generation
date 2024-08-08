//
// qrsolve.h
//
// Code generation for function 'qrsolve'
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
void qrsolve(const emlrtStack &sp, const array<real_T, 2U> &A,
             const array<real_T, 2U> &B, array<real_T, 2U> &Y);

int32_T rankFromQR(const emlrtStack &sp, const array<real_T, 2U> &A);

} // namespace internal
} // namespace coder

// End of code generation (qrsolve.h)
