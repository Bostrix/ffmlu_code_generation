//
// horzcatStructList.h
//
// Code generation for function 'horzcatStructList'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "shypoct_internal_types.h"
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
void b_horzcatStructList(const emlrtStack &sp,
                         const array<b_struct_T, 2U> &structure,
                         array<real_T, 2U> &result);

void horzcatStructList(const emlrtStack &sp,
                       const array<b_struct_T, 2U> &structure,
                       array<real_T, 2U> &result);

} // namespace internal
} // namespace coder

// End of code generation (horzcatStructList.h)
