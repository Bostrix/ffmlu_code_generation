//
// sort.h
//
// Code generation for function 'sort'
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
namespace internal {
void b_sort(const emlrtStack &sp, array<real_T, 2U> &x);

void b_sort(const emlrtStack &sp, array<real_T, 2U> &x,
            array<int32_T, 2U> &idx);

void sort(const emlrtStack &sp, array<real_T, 2U> &x);

void sort(const emlrtStack &sp, array<real_T, 2U> &x, array<int32_T, 2U> &idx);

} // namespace internal
} // namespace coder

// End of code generation (sort.h)
