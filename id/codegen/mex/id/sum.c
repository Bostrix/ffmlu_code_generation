/*
 * sum.c
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "sum.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include <emmintrin.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo ye_emlrtRSI = {
    20,    /* lineNo */
    "sum", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/sum.m" /* pathName
                                                                     */
};

static emlrtRSInfo af_emlrtRSI =
    {
        99,        /* lineNo */
        "sumprod", /* fcnName */
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
        "sumprod.m" /* pathName */
};

static emlrtRSInfo bf_emlrtRSI = {
    86,                      /* lineNo */
    "combineVectorElements", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "combineVectorElements.m" /* pathName */
};

static emlrtRSInfo cf_emlrtRSI = {
    107,                /* lineNo */
    "blockedSummation", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" /* pathName */
};

static emlrtRSInfo df_emlrtRSI = {
    22,                    /* lineNo */
    "sumMatrixIncludeNaN", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" /* pathName */
};

static emlrtRSInfo ef_emlrtRSI = {
    42,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" /* pathName */
};

static emlrtRTEInfo g_emlrtRTEI =
    {
        46,        /* lineNo */
        23,        /* colNo */
        "sumprod", /* fName */
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
        "sumprod.m" /* pName */
};

/* Function Definitions */
int32_T b_sum(const real_T x_data[], const int32_T x_size[2], real_T y_data[])
{
  int32_T k;
  int32_T vlen;
  int32_T vstride_tmp;
  int32_T xj;
  int32_T y_size;
  vlen = x_size[1];
  vstride_tmp = x_size[0];
  y_size = x_size[0];
  memcpy(&y_data[0], &x_data[0], (uint32_T)vstride_tmp * sizeof(real_T));
  for (k = 2; k <= vlen; k++) {
    int32_T scalarLB;
    int32_T vectorUB;
    int32_T xoffset;
    xoffset = (k - 1) * vstride_tmp;
    scalarLB = (vstride_tmp / 2) << 1;
    vectorUB = scalarLB - 2;
    for (xj = 0; xj <= vectorUB; xj += 2) {
      __m128d r;
      r = _mm_loadu_pd(&y_data[xj]);
      _mm_storeu_pd(&y_data[xj],
                    _mm_add_pd(r, _mm_loadu_pd(&x_data[xoffset + xj])));
    }
    for (xj = scalarLB; xj < vstride_tmp; xj++) {
      y_data[xj] += x_data[xoffset + xj];
    }
  }
  return y_size;
}

void sum(const emlrtStack *sp, const real_T x_data[], const int32_T x_size[2],
         real_T y_data[], int32_T y_size[2])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  int32_T col;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ye_emlrtRSI;
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
  if (((x_size[0] != 1) || (x_size[1] != 1)) && (x_size[0] == 1)) {
    emlrtErrorWithMessageIdR2018a(&st, &g_emlrtRTEI,
                                  "Coder:toolbox:autoDimIncompatibility",
                                  "Coder:toolbox:autoDimIncompatibility", 0);
  }
  b_st.site = &af_emlrtRSI;
  c_st.site = &bf_emlrtRSI;
  if (x_size[0] == 0) {
    int32_T loop_ub;
    y_size[0] = 1;
    y_size[1] = (int8_T)x_size[1];
    loop_ub = (int8_T)x_size[1];
    if (loop_ub - 1 >= 0) {
      memset(&y_data[0], 0, (uint32_T)loop_ub * sizeof(real_T));
    }
  } else {
    int32_T loop_ub;
    d_st.site = &cf_emlrtRSI;
    e_st.site = &df_emlrtRSI;
    y_size[0] = 1;
    loop_ub = x_size[1];
    y_size[1] = x_size[1];
    for (col = 0; col < loop_ub; col++) {
      f_st.site = &ef_emlrtRSI;
      y_data[col] = sumColumnB(&f_st, x_data, x_size, col + 1, x_size[0]);
    }
  }
}

/* End of code generation (sum.c) */
