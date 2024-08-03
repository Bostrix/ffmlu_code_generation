//
// eml_mtimes_helper.h
//
// Code generation for function 'eml_mtimes_helper'
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
void binary_expand_op_16(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
                         const coder::array<real_T, 1U> &in2,
                         const coder::array<real_T, 1U> &in3, real_T in4,
                         const coder::array<real_T, 2U> &in5,
                         const coder::array<real_T, 2U> &in6, int32_T in7,
                         int32_T in8);

namespace coder {
void dynamic_size_checks(const emlrtStack &sp, const array<real_T, 2U> &a,
                         const array<real_T, 1U> &b, int32_T innerDimA,
                         int32_T innerDimB);

void dynamic_size_checks(const emlrtStack &sp, const array<real_T, 1U> &a,
                         const array<real_T, 2U> &b, int32_T innerDimA,
                         int32_T innerDimB);

void dynamic_size_checks(const emlrtStack &sp, const array<real_T, 2U> &a,
                         const array<real_T, 2U> &b, int32_T innerDimA,
                         int32_T innerDimB);

} // namespace coder

// End of code generation (eml_mtimes_helper.h)
