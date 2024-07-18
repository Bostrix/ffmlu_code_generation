/*
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 */

/* Include files */
#include "repmat.h"
#include "rt_nonfinite.h"
#include <stddef.h>

/* Function Definitions */
int32_T repmat(ptrdiff_t a, int32_T varargin_1, ptrdiff_t b_data[])
{
  int32_T b_size;
  int32_T i;
  b_size = varargin_1;
  for (i = 0; i < varargin_1; i++) {
    b_data[i] = a;
  }
  return b_size;
}

/* End of code generation (repmat.c) */
