//
// updateMatrix.h
//
// Code generation for function 'updateMatrix'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "updateMatrix_types.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void updateMatrix(updateMatrixStackData *SD, const emlrtStack *sp,
                  real_T A[110520], const real_T subI[432],
                  const real_T subJ[60], const real_T tmp1[38880],
                  const real_T tmp2[5400]);

// End of code generation (updateMatrix.h)
