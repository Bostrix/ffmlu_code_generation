//
// sum.h
//
// Code generation for function 'sum'
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
void sum(const emlrtStack &sp, const real_T x_data[], const int32_T x_size[2],
         real_T y_data[], int32_T y_size[2]);

int32_T sum(const real_T x_data[], const int32_T x_size[2], real_T y_data[]);

} // namespace coder

// End of code generation (sum.h)
