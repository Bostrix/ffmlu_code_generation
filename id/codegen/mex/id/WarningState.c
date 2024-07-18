/*
 * WarningState.c
 *
 * Code generation for function 'WarningState'
 *
 */

/* Include files */
#include "WarningState.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtMCInfo g_emlrtMCI =
    {
        84,                         /* lineNo */
        21,                         /* colNo */
        "WarningState/callWarning", /* fName */
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
        "WarningState.m" /* pName */
};

static emlrtRSInfo lh_emlrtRSI =
    {
        84,                         /* lineNo */
        "WarningState/callWarning", /* fcnName */
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
        "WarningState.m" /* pathName */
};

/* Function Declarations */
static void e_feval(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                    const mxArray *m2, emlrtMCInfo *location);

/* Function Definitions */
static void e_feval(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                    const mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  pArrays[0] = m;
  pArrays[1] = m1;
  pArrays[2] = m2;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, NULL, 3, &pArrays[0], "feval",
                        true, location);
}

void WarningState_callWarning(const emlrtStack *sp)
{
  static const int32_T b_iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 20};
  static const int32_T iv2[2] = {1, 42};
  static const char_T varargin_2[42] = {
      'M', 'a', 'x', 'i', 'm', 'u', 'm', ' ', 'n', 'u', 'm', 'b', 'e', 'r',
      ' ', 'o', 'f', ' ', 'R', 'R', 'Q', 'R', ' ', 'i', 't', 'e', 'r', 'a',
      't', 'i', 'o', 'n', 's', ' ', 'r', 'e', 'a', 'c', 'h', 'e', 'd', '.'};
  static const char_T varargin_1[20] = {'F', 'L', 'A', 'M', ':', 'i', 'd',
                                        ':', 'm', 'a', 'x', 'I', 't', 'e',
                                        'r', 'C', 'o', 'u', 'n', 't'};
  static const char_T u[7] = {'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 20, m, &varargin_1[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 42, m, &varargin_2[0]);
  emlrtAssign(&c_y, m);
  st.site = &lh_emlrtRSI;
  e_feval(&st, y, b_y, c_y, &g_emlrtMCI);
}

/* End of code generation (WarningState.c) */
