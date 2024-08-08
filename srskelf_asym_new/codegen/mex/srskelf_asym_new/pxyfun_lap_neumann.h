//
// pxyfun_lap_neumann.h
//
// Code generation for function 'pxyfun_lap_neumann'
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
void binary_expand_op_4(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
                        const emlrtRSInfo in2,
                        const coder::array<real_T, 2U> &in3,
                        const coder::array<real_T, 2U> &in4,
                        const coder::array<real_T, 2U> &in5);

void binary_expand_op_6(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
                        const emlrtRSInfo in2,
                        const coder::array<real_T, 2U> &in3,
                        const coder::array<real_T, 2U> &in4);

// End of code generation (pxyfun_lap_neumann.h)
