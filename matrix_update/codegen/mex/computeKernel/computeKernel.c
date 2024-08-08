/*
 * computeKernel.c
 *
 * Code generation for function 'computeKernel'
 *
 */

/* Include files */
#include "computeKernel.h"
#include "computeKernel_emxutil.h"
#include "computeKernel_types.h"
#include "div.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <emmintrin.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI =
    {
        3,               /* lineNo */
        "computeKernel", /* fcnName */
        "/home/user/Documents/ffmlu_code_generation/matrix_update/"
        "computeKernel.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    71,                                                           /* lineNo */
    "power",                                                      /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/power.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI =
    {
        34,               /* lineNo */
        "rdivide_helper", /* fcnName */
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
        "rdivide_helper.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    53,    /* lineNo */
    "div", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/div.m" /* pathName
                                                                       */
};

static emlrtRTEInfo emlrtRTEI = {
    13,                     /* lineNo */
    27,                     /* colNo */
    "assertCompatibleDims", /* fName */
    "/usr/local/MATLAB/R2024a/toolbox/shared/coder/coder/lib/+coder/+internal/"
    "assertCompatibleDims.m" /* pName */
};

static emlrtBCInfo emlrtBCI =
    {
        -1,              /* iFirst */
        -1,              /* iLast */
        4,               /* lineNo */
        7,               /* colNo */
        "K",             /* aName */
        "computeKernel", /* fName */
        "/home/user/Documents/ffmlu_code_generation/matrix_update/"
        "computeKernel.m", /* pName */
        0                  /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI =
    {
        3,               /* lineNo */
        9,               /* colNo */
        "computeKernel", /* fName */
        "/home/user/Documents/ffmlu_code_generation/matrix_update/"
        "computeKernel.m" /* pName */
};

static emlrtRTEInfo c_emlrtRTEI =
    {
        3,               /* lineNo */
        31,              /* colNo */
        "computeKernel", /* fName */
        "/home/user/Documents/ffmlu_code_generation/matrix_update/"
        "computeKernel.m" /* pName */
};

static emlrtRSInfo e_emlrtRSI = {
    54,    /* lineNo */
    "div", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/div.m" /* pathName
                                                                       */
};

/* Function Definitions */
void computeKernel(const emlrtStack *sp, const emxArray_real_T *rdotn,
                   const emxArray_real_T *dr, emxArray_real_T *K)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *y;
  const real_T *dr_data;
  const real_T *rdotn_data;
  real_T *K_data;
  real_T *y_data;
  int32_T i;
  int32_T loop_ub;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  dr_data = dr->data;
  rdotn_data = rdotn->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /* COMPUTEKERNEL Computes the kernel value */
  st.site = &emlrtRSI;
  loop_ub = rdotn->size[0];
  i = K->size[0];
  K->size[0] = rdotn->size[0];
  emxEnsureCapacity_real_T(&st, K, i, &b_emlrtRTEI);
  K_data = K->data;
  scalarLB = (rdotn->size[0] / 2) << 1;
  vectorUB = scalarLB - 2;
  for (i = 0; i <= vectorUB; i += 2) {
    _mm_storeu_pd(&K_data[i], _mm_mul_pd(_mm_set1_pd(-0.079577471545947673),
                                         _mm_loadu_pd(&rdotn_data[i])));
  }
  for (i = scalarLB; i < loop_ub; i++) {
    K_data[i] = -0.079577471545947673 * rdotn_data[i];
  }
  b_st.site = &emlrtRSI;
  c_st.site = &b_emlrtRSI;
  emxInit_real_T(&c_st, &y, &c_emlrtRTEI);
  loop_ub = dr->size[0];
  i = y->size[0];
  y->size[0] = dr->size[0];
  emxEnsureCapacity_real_T(&c_st, y, i, &c_emlrtRTEI);
  y_data = y->data;
  for (i = 0; i < loop_ub; i++) {
    real_T varargin_1;
    varargin_1 = dr_data[i];
    y_data[i] = muDoubleScalarPower(varargin_1, 3.0);
  }
  b_st.site = &c_emlrtRSI;
  c_st.site = &d_emlrtRSI;
  if ((K->size[0] != 1) && (y->size[0] != 1) && (K->size[0] != y->size[0])) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:sizeDimensionsMustMatch",
                                  "MATLAB:sizeDimensionsMustMatch", 0);
  }
  if (K->size[0] == y->size[0]) {
    loop_ub = K->size[0];
    scalarLB = (K->size[0] / 2) << 1;
    vectorUB = scalarLB - 2;
    for (i = 0; i <= vectorUB; i += 2) {
      __m128d r;
      __m128d r1;
      r = _mm_loadu_pd(&K_data[i]);
      r1 = _mm_loadu_pd(&y_data[i]);
      _mm_storeu_pd(&K_data[i], _mm_div_pd(r, r1));
    }
    for (i = scalarLB; i < loop_ub; i++) {
      K_data[i] /= y_data[i];
    }
  } else {
    c_st.site = &e_emlrtRSI;
    rdivide(&c_st, K, y);
    K_data = K->data;
  }
  emxFree_real_T(&b_st, &y);
  loop_ub = dr->size[0] - 1;
  for (scalarLB = 0; scalarLB <= loop_ub; scalarLB++) {
    if (dr_data[scalarLB] == 0.0) {
      if (scalarLB > K->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(scalarLB, 0, K->size[0] - 1, &emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      K_data[scalarLB] = 0.0;
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (computeKernel.c) */
