//
// qrsolve.h
//
// Code generation for function 'qrsolve'
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
namespace internal {
int32_T rankFromQR(const emlrtStack &sp, const real_T A_data[],
                   const int32_T A_size[2]);

}
} // namespace coder

// End of code generation (qrsolve.h)
