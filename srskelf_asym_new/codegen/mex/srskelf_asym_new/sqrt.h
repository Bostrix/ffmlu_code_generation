//
// sqrt.h
//
// Code generation for function 'sqrt'
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
void b_sqrt(const emlrtStack &sp, array<real_T, 1U> &x);

void b_sqrt(const emlrtStack &sp, array<real_T, 2U> &x);

void c_sqrt(const emlrtStack &sp, array<real_T, 2U> &x);

} // namespace coder

// End of code generation (sqrt.h)
