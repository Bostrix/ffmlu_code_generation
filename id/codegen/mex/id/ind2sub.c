/*
 * ind2sub.c
 *
 * Code generation for function 'ind2sub'
 *
 */

/* Include files */
#include "ind2sub.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo i_emlrtRTEI = {
    21,        /* lineNo */
    15,        /* colNo */
    "ind2sub", /* fName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/ind2sub.m" /* pName
                                                                           */
};

static emlrtRTEInfo s_emlrtRTEI =
    {
        19,            /* lineNo */
        9,             /* colNo */
        "indexDivide", /* fName */
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
        "indexDivide.m" /* pName */
};

/* Function Definitions */
int32_T ind2sub(const emlrtStack *sp, const real_T siz[2], real_T ndx,
                int32_T *varargout_2)
{
  int32_T i;
  if ((int32_T)ndx > (int32_T)siz[0] * (int32_T)siz[1]) {
    emlrtErrorWithMessageIdR2018a(sp, &i_emlrtRTEI,
                                  "Coder:MATLAB:ind2sub_IndexOutOfRange",
                                  "Coder:MATLAB:ind2sub_IndexOutOfRange", 0);
  }
  if ((uint8_T)(int32_T)siz[0] == 0U) {
    emlrtDivisionByZeroErrorR2012b(&s_emlrtRTEI, (emlrtConstCTX)sp);
  } else {
    i = (int32_T)((uint32_T)(uint8_T)((int32_T)ndx - 1) /
                  (uint8_T)(int32_T)siz[0]);
  }
  *varargout_2 = i + 1;
  return (int32_T)ndx - i * (int32_T)siz[0];
}

/* End of code generation (ind2sub.c) */
