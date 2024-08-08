//
// spget_quadcorr.h
//
// Code generation for function 'spget_quadcorr'
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
void binary_expand_op_21(const emlrtStack &sp, coder::array<int32_T, 1U> &in1,
                         const real_T in2[8000],
                         const coder::array<real_T, 1U> &in3,
                         const coder::array<int32_T, 1U> &in4,
                         const coder::array<real_T, 1U> &in5,
                         const coder::array<real_T, 2U> &in6,
                         const coder::array<real_T, 2U> &in7);

void binary_expand_op_7(const emlrtStack &sp, coder::array<int32_T, 1U> &in1,
                        const real_T in2[8000],
                        const coder::array<int32_T, 1U> &in3,
                        const coder::array<real_T, 1U> &in4, int32_T in5,
                        const coder::array<real_T, 2U> &in6);

void binary_expand_op_9(const emlrtStack &sp, coder::array<int32_T, 1U> &in1,
                        const real_T in2[8000],
                        const coder::array<real_T, 1U> &in3,
                        const coder::array<int32_T, 1U> &in4,
                        const coder::array<real_T, 1U> &in5,
                        const coder::array<real_T, 2U> &in6, int32_T in7);

void find_locations_t(const emlrtStack &sp,
                      const coder::array<real_T, 2U> &big_sorted_list,
                      const coder::array<real_T, 1U> &elements_to_find,
                      coder::array<real_T, 1U> &locs);

// End of code generation (spget_quadcorr.h)
