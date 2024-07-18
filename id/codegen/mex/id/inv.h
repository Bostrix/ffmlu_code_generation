/*
 * inv.h
 *
 * Code generation for function 'inv'
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
void inv(const emlrtStack *sp, const real_T x_data[], const int32_T x_size[2],
         real_T y_data[], int32_T y_size[2]);

/* End of code generation (inv.h) */
