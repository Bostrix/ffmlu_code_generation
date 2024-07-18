//
// norm.h
//
// Code generation for function 'norm'
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
real_T b_norm(const real_T x_data[], int32_T x_size);

real_T b_norm(const real_T x_data[], const int32_T x_size[2]);

} // namespace coder

// End of code generation (norm.h)
