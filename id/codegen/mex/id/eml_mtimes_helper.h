/*
 * eml_mtimes_helper.h
 *
 * Code generation for function 'eml_mtimes_helper'
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
void b_dynamic_size_checks(const emlrtStack *sp, int32_T a_size,
                           const int32_T b_size[2], int32_T innerDimA,
                           int32_T innerDimB);

void binary_expand_op_6(real_T in1_data[], int32_T in1_size[2],
                        const real_T in2_data[], const int32_T *in2_size,
                        const real_T in3_data[], real_T in4,
                        const real_T in5_data[], const int32_T in5_size[2],
                        const real_T in6_data[], const int32_T in6_size[2],
                        int32_T in7, int32_T in8);

void dynamic_size_checks(const emlrtStack *sp, const int32_T a_size[2],
                         int32_T b_size, int32_T innerDimA, int32_T innerDimB);

/* End of code generation (eml_mtimes_helper.h) */
