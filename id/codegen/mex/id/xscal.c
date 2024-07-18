/*
 * xscal.c
 *
 * Code generation for function 'xscal'
 *
 */

/* Include files */
#include "xscal.h"
#include "eml_int_forloop_overflow_check.h"
#include "id_data.h"
#include "rt_nonfinite.h"
#include <emmintrin.h>

/* Variable Definitions */
static emlrtRSInfo wb_emlrtRSI =
    {
        31,      /* lineNo */
        "xscal", /* fcnName */
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+blas/"
        "xscal.m" /* pathName */
};

static emlrtRSInfo xb_emlrtRSI =
    {
        18,      /* lineNo */
        "xscal", /* fcnName */
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+refblas/"
        "xscal.m" /* pathName */
};

/* Function Definitions */
void xscal(const emlrtStack *sp, int32_T n, real_T a, real_T x[25], int32_T ix0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b;
  int32_T k;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &wb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b = (ix0 + n) - 1;
  b_st.site = &xb_emlrtRSI;
  if ((ix0 <= b) && (b > 2147483646)) {
    c_st.site = &vb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  scalarLB = ((b - ix0) + 1) / 2 * 2 + ix0;
  vectorUB = scalarLB - 2;
  for (k = ix0; k <= vectorUB; k += 2) {
    __m128d r;
    r = _mm_loadu_pd(&x[k - 1]);
    r = _mm_mul_pd(_mm_set1_pd(a), r);
    _mm_storeu_pd(&x[k - 1], r);
  }
  for (k = scalarLB; k <= b; k++) {
    x[k - 1] *= a;
  }
}

/* End of code generation (xscal.c) */
