/*
 * norm.h
 *
 * Code generation for function 'norm'
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
real_T b_norm(const real_T x_data[], const int32_T x_size[2]);

real_T c_norm(const real_T x_data[], int32_T x_size);

/* End of code generation (norm.h) */
