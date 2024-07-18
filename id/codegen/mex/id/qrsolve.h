/*
 * qrsolve.h
 *
 * Code generation for function 'qrsolve'
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
int32_T rankFromQR(const emlrtStack *sp, const real_T A_data[],
                   const int32_T A_size[2]);

/* End of code generation (qrsolve.h) */
