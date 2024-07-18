/*
 * sqrt.c
 *
 * Code generation for function 'sqrt'
 *
 */

/* Include files */
#include "sqrt.h"
#include "id_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <emmintrin.h>

/* Function Definitions */
void b_sqrt(const emlrtStack *sp, real_T x_data[], const int32_T *x_size)
{
  int32_T i;
  int32_T k;
  int32_T scalarLB;
  int32_T vectorUB;
  boolean_T p;
  p = false;
  i = *x_size;
  for (k = 0; k < i; k++) {
    if (p || (x_data[k] < 0.0)) {
      p = true;
    }
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        sp, &o_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  scalarLB = (i / 2) << 1;
  vectorUB = scalarLB - 2;
  for (k = 0; k <= vectorUB; k += 2) {
    __m128d r;
    r = _mm_loadu_pd(&x_data[k]);
    _mm_storeu_pd(&x_data[k], _mm_sqrt_pd(r));
  }
  for (k = scalarLB; k < i; k++) {
    x_data[k] = muDoubleScalarSqrt(x_data[k]);
  }
}

/* End of code generation (sqrt.c) */
