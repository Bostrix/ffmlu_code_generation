/*
 * nnz.c
 *
 * Code generation for function 'nnz'
 *
 */

/* Include files */
#include "nnz.h"
#include "rt_nonfinite.h"

/* Function Definitions */
int32_T intnnz(const boolean_T s[5])
{
  int32_T k;
  int32_T n;
  n = 0;
  for (k = 0; k < 5; k++) {
    if (s[k]) {
      n++;
    }
  }
  return n;
}

/* End of code generation (nnz.c) */
