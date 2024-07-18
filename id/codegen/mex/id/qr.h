/*
 * qr.h
 *
 * Code generation for function 'qr'
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
void qr(const emlrtStack *sp, const real_T A[8510], real_T Q[8510],
        real_T R[25]);

/* End of code generation (qr.h) */
