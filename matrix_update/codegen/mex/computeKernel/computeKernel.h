/*
 * computeKernel.h
 *
 * Code generation for function 'computeKernel'
 *
 */

#pragma once

/* Include files */
#include "computeKernel_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void computeKernel(const emlrtStack *sp, const emxArray_real_T *rdotn,
                   const emxArray_real_T *dr, emxArray_real_T *K);

/* End of code generation (computeKernel.h) */
