/*
 * qrsolve.c
 *
 * Code generation for function 'qrsolve'
 *
 */

/* Include files */
#include "qrsolve.h"
#include "id_data.h"
#include "id_mexutil.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo ie_emlrtRSI = {
    173,          /* lineNo */
    "rankFromQR", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/qrsolve.m" /* pathName
                                                                           */
};

static emlrtRSInfo je_emlrtRSI = {
    172,          /* lineNo */
    "rankFromQR", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/qrsolve.m" /* pathName
                                                                           */
};

/* Function Definitions */
int32_T rankFromQR(const emlrtStack *sp, const real_T A_data[],
                   const int32_T A_size[2])
{
  static const int32_T b_iv[2] = {1, 6};
  static const char_T rfmt[6] = {'%', '1', '4', '.', '6', 'e'};
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *m;
  const mxArray *y;
  real_T tol;
  int32_T maxmn;
  int32_T minmn;
  int32_T r;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  r = 0;
  tol = 0.0;
  if (A_size[0] < A_size[1]) {
    minmn = A_size[0];
    maxmn = A_size[1];
  } else {
    minmn = A_size[1];
    maxmn = A_size[0];
  }
  if (minmn > 0) {
    tol = 2.2204460492503131E-15 * (real_T)maxmn * muDoubleScalarAbs(A_data[0]);
    while ((r < minmn) &&
           (!(muDoubleScalarAbs(A_data[r + A_size[0] * r]) <= tol))) {
      r++;
    }
  }
  if (r < minmn) {
    char_T str[14];
    st.site = &ie_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, &b_iv[0]);
    emlrtInitCharArrayR2013a(&st, 6, m, &rfmt[0]);
    emlrtAssign(&y, m);
    b_st.site = &kh_emlrtRSI;
    emlrt_marshallIn(&b_st,
                     b_sprintf(&b_st, y, g_emlrt_marshallOut(tol), &f_emlrtMCI),
                     "<output of sprintf>", str);
    st.site = &je_emlrtRSI;
    b_warning(&st, r, str);
  }
  return r;
}

/* End of code generation (qrsolve.c) */
