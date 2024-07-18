/*
 * xzlarf.c
 *
 * Code generation for function 'xzlarf'
 *
 */

/* Include files */
#include "xzlarf.h"
#include "eml_int_forloop_overflow_check.h"
#include "id_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo cc_emlrtRSI = {
    103,      /* lineNo */
    "ilazlc", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzlarf.m" /* pathName */
};

/* Function Definitions */
int32_T ilazlc(const emlrtStack *sp, int32_T m, int32_T n, const real_T A[25],
               int32_T ia0)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T j;
  boolean_T exitg2;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  j = n;
  exitg2 = false;
  while ((!exitg2) && (j > 0)) {
    int32_T colbottom;
    int32_T coltop;
    int32_T exitg1;
    coltop = ia0 + (j - 1) * 5;
    colbottom = (coltop + m) - 1;
    st.site = &cc_emlrtRSI;
    if ((coltop <= colbottom) && (colbottom > 2147483646)) {
      b_st.site = &vb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    do {
      exitg1 = 0;
      if (coltop <= colbottom) {
        if (A[coltop - 1] != 0.0) {
          exitg1 = 1;
        } else {
          coltop++;
        }
      } else {
        j--;
        exitg1 = 2;
      }
    } while (exitg1 == 0);
    if (exitg1 == 1) {
      exitg2 = true;
    }
  }
  return j;
}

/* End of code generation (xzlarf.c) */
