/*
 * xgemv.h
 *
 * Code generation for function 'xgemv'
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
void xgemv(const emlrtStack *sp, int32_T m, int32_T n, const real_T A[25],
           int32_T ia0, const real_T x[25], int32_T ix0, real_T y[5]);

/* End of code generation (xgemv.h) */
