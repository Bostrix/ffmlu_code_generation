/*
 * abs.h
 *
 * Code generation for function 'abs'
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
int32_T b_abs(const real_T x_data[], int32_T x_size, real_T y_data[]);

void c_abs(const real_T x_data[], const int32_T x_size[2], real_T y_data[],
           int32_T y_size[2]);

/* End of code generation (abs.h) */
