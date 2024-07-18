/*
 * eye.c
 *
 * Code generation for function 'eye'
 *
 */

/* Include files */
#include "eye.h"
#include "eml_int_forloop_overflow_check.h"
#include "id_data.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo bg_emlrtRSI = {
    96,                                                           /* lineNo */
    "eye",                                                        /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/eye.m" /* pathName */
};

static emlrtRSInfo cg_emlrtRSI = {
    50,                                                           /* lineNo */
    "eye",                                                        /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/eye.m" /* pathName */
};

static emlrtRSInfo dg_emlrtRSI = {
    21,                           /* lineNo */
    "checkAndSaturateExpandSize", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "checkAndSaturateExpandSize.m" /* pathName */
};

static emlrtRTEInfo j_emlrtRTEI = {
    58,                   /* lineNo */
    23,                   /* colNo */
    "assertValidSizeArg", /* fName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "assertValidSizeArg.m" /* pName */
};

/* Function Definitions */
void eye(const emlrtStack *sp, real_T varargin_1, real_T I_data[],
         int32_T I_size[2])
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T k;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &cg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &dg_emlrtRSI;
  if (varargin_1 != varargin_1) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &j_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  I_size[0] = (int32_T)varargin_1;
  I_size[1] = (int32_T)varargin_1;
  loop_ub = (int32_T)varargin_1 * (int32_T)varargin_1;
  if (loop_ub - 1 >= 0) {
    memset(&I_data[0], 0, (uint32_T)loop_ub * sizeof(real_T));
  }
  st.site = &bg_emlrtRSI;
  if ((int32_T)varargin_1 > 2147483646) {
    b_st.site = &vb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  loop_ub = (uint8_T)(int32_T)varargin_1;
  for (k = 0; k < loop_ub; k++) {
    I_data[k + (int32_T)varargin_1 * k] = 1.0;
  }
}

/* End of code generation (eye.c) */
