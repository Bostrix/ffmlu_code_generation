/*
 * qr.c
 *
 * Code generation for function 'qr'
 *
 */

/* Include files */
#include "qr.h"
#include "id_data.h"
#include "rt_nonfinite.h"
#include "lapacke.h"
#include <stddef.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo gb_emlrtRSI = {
    24,                                                           /* lineNo */
    "qr",                                                         /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qr.m" /* pathName */
};

static emlrtRSInfo hb_emlrtRSI =
    {
        35,       /* lineNo */
        "eml_qr", /* fcnName */
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/private/"
        "eml_qr.m" /* pathName */
};

static emlrtRSInfo ib_emlrtRSI =
    {
        166,       /* lineNo */
        "qr_econ", /* fcnName */
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/private/"
        "eml_qr.m" /* pathName */
};

static emlrtRSInfo lb_emlrtRSI =
    {
        27,       /* lineNo */
        "xgeqrf", /* fcnName */
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqrf.m" /* pathName */
};

static emlrtRSInfo mb_emlrtRSI =
    {
        91,             /* lineNo */
        "ceval_xgeqrf", /* fcnName */
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqrf.m" /* pathName */
};

static emlrtRSInfo jc_emlrtRSI =
    {
        60,             /* lineNo */
        "ceval_xorgqr", /* fcnName */
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xorgqr.m" /* pathName */
};

static emlrtRSInfo lc_emlrtRSI =
    {
        14,       /* lineNo */
        "xorgqr", /* fcnName */
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xorgqr.m" /* pathName */
};

/* Function Definitions */
void qr(const emlrtStack *sp, const real_T A[8510], real_T Q[8510],
        real_T R[25])
{
  static const char_T b_fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                     '_', 'd', 'o', 'r', 'g', 'q', 'r'};
  static const char_T fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                   '_', 'd', 'g', 'e', 'q', 'r', 'f'};
  ptrdiff_t info_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T tau[5];
  int32_T i;
  int32_T j;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &gb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  b_st.site = &hb_emlrtRSI;
  memcpy(&Q[0], &A[0], 8510U * sizeof(real_T));
  c_st.site = &ib_emlrtRSI;
  d_st.site = &lb_emlrtRSI;
  info_t = LAPACKE_dgeqrf(102, (ptrdiff_t)1702, (ptrdiff_t)5, &Q[0],
                          (ptrdiff_t)1702, &tau[0]);
  e_st.site = &mb_emlrtRSI;
  if ((int32_T)info_t != 0) {
    p = true;
    if ((int32_T)info_t != -4) {
      if ((int32_T)info_t == -1010) {
        emlrtErrorWithMessageIdR2018a(&e_st, &e_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&e_st, &d_emlrtRTEI,
                                      "Coder:toolbox:LAPACKCallErrorInfo",
                                      "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                      14, &fname[0], 12, (int32_T)info_t);
      }
    }
  } else {
    p = false;
  }
  if (p) {
    for (i = 0; i < 8510; i++) {
      Q[i] = rtNaN;
    }
    for (i = 0; i < 5; i++) {
      tau[i] = rtNaN;
    }
  }
  for (j = 0; j < 5; j++) {
    c_st.site = &jb_emlrtRSI;
    for (i = 0; i <= j; i++) {
      R[i + 5 * j] = Q[i + 1702 * j];
    }
    i = j + 2;
    if (i <= 5) {
      memset(&R[(j * 5 + i) + -1], 0, (uint32_T)(-i + 6) * sizeof(real_T));
    }
  }
  c_st.site = &kb_emlrtRSI;
  d_st.site = &kc_emlrtRSI;
  e_st.site = &lc_emlrtRSI;
  info_t = LAPACKE_dorgqr(102, (ptrdiff_t)1702, (ptrdiff_t)5, (ptrdiff_t)5,
                          &Q[0], (ptrdiff_t)1702, &tau[0]);
  f_st.site = &jc_emlrtRSI;
  if ((int32_T)info_t != 0) {
    boolean_T b_p;
    p = true;
    b_p = false;
    if ((int32_T)info_t == -7) {
      b_p = true;
    } else if ((int32_T)info_t == -5) {
      b_p = true;
    }
    if (!b_p) {
      if ((int32_T)info_t == -1010) {
        emlrtErrorWithMessageIdR2018a(&f_st, &e_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&f_st, &d_emlrtRTEI,
                                      "Coder:toolbox:LAPACKCallErrorInfo",
                                      "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                      14, &b_fname[0], 12, (int32_T)info_t);
      }
    }
  } else {
    p = false;
  }
  if (p) {
    for (i = 0; i < 8510; i++) {
      Q[i] = rtNaN;
    }
  }
}

/* End of code generation (qr.c) */
