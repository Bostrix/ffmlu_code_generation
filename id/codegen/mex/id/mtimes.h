/*
 * mtimes.h
 *
 * Code generation for function 'mtimes'
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
void b_mtimes(const real_T A_data[], int32_T A_size, const real_T B_data[],
              const int32_T B_size[2], real_T C_data[], int32_T C_size[2]);

void c_mtimes(const real_T A[4], const real_T B_data[], const int32_T B_size[2],
              real_T C_data[], int32_T C_size[2]);

int32_T mtimes(const real_T A_data[], const int32_T A_size[2],
               const real_T B_data[], int32_T B_size, real_T C_data[]);

/* End of code generation (mtimes.h) */
