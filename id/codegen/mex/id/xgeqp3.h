//
// xgeqp3.h
//
// Code generation for function 'xgeqp3'
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
namespace lapack {
int32_T xgeqp3(const emlrtStack &sp, real_T A_data[], const int32_T A_size[2],
               real_T tau_data[], int32_T jpvt_data[], int32_T jpvt_size[2]);

}
} // namespace internal
} // namespace coder

// End of code generation (xgeqp3.h)
