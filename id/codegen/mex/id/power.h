//
// power.h
//
// Code generation for function 'power'
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
void b_power(const real_T a_data[], const int32_T a_size[2], real_T y_data[],
             int32_T y_size[2]);

void power(const real_T a_data[], const int32_T a_size[2], real_T y_data[],
           int32_T y_size[2]);

int32_T power(const real_T a_data[], int32_T a_size, real_T y_data[]);

} // namespace coder

// End of code generation (power.h)
