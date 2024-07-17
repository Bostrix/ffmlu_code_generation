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
int32_T mldivide(const emlrtStack &sp, const array<real_T, 2U> &A,
                 const real_T B_data[], int32_T B_size, real_T Y_data[]);

}

// End of code generation (mldivide.h)
