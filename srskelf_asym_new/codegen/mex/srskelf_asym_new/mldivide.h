//
// mldivide.h
//
// Code generation for function 'mldivide'
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
void mldivide(const emlrtStack &sp, const array<real_T, 2U> &A,
              const array<real_T, 1U> &B, array<real_T, 1U> &Y);

void mldivide(const emlrtStack &sp, const array<real_T, 2U> &A,
              const array<real_T, 2U> &B, array<real_T, 2U> &Y);

} // namespace coder

// End of code generation (mldivide.h)
