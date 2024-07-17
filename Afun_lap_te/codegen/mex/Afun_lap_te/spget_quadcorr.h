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
void binary_expand_op(const emlrtStack &sp, coder::array<int32_T, 1U> &in1,
                      const real_T in2[8000],
                      const coder::array<int32_T, 1U> &in3,
                      const coder::array<real_T, 1U> &in4);

// End of code generation (spget_quadcorr.h)
