/*
 * xgerc.h
 *
 * Code generation for function 'xgerc'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void xgerc(const emlrtStack *sp, int32_T m, int32_T n, real_T alpha1,
           int32_T ix0, const real_T y[5], real_T A[25], int32_T ia0);

/* End of code generation (xgerc.h) */
