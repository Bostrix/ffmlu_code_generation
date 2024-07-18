//
// abs.h
//
// Code generation for function 'abs'
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
int32_T b_abs(const real_T x_data[], int32_T x_size, real_T y_data[]);

void b_abs(const real_T x_data[], const int32_T x_size[2], real_T y_data[],
           int32_T y_size[2]);

} // namespace coder

// End of code generation (abs.h)
