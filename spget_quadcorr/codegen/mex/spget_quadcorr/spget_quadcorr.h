//
// spget_quadcorr.h
//
// Code generation for function 'spget_quadcorr'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "sparse.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void spget_quadcorr(const emlrtStack *sp, const real_T b_I[819],
                    const real_T J[5], real_T P[8000], const coder::sparse *S,
                    real_T A[4095]);

// End of code generation (spget_quadcorr.h)
