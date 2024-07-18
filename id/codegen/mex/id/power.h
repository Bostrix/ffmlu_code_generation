/*
 * power.h
 *
 * Code generation for function 'power'
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
int32_T b_power(const real_T a_data[], int32_T a_size, real_T y_data[]);

void c_power(const real_T a_data[], const int32_T a_size[2], real_T y_data[],
             int32_T y_size[2]);

void power(const real_T a_data[], const int32_T a_size[2], real_T y_data[],
           int32_T y_size[2]);

/* End of code generation (power.h) */
