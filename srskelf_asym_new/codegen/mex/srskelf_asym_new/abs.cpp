//
// abs.cpp
//
// Code generation for function 'abs'
//

// Include files
#include "abs.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo df_emlrtRSI{
    19,                                                           // lineNo
    "abs",                                                        // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elfun/abs.m" // pathName
};

static emlrtRSInfo ef_emlrtRSI{
    74,                    // lineNo
    "applyScalarFunction", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "applyScalarFunction.m" // pathName
};

static emlrtRTEInfo pg_emlrtRTEI{
    30,                    // lineNo
    21,                    // colNo
    "applyScalarFunction", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "applyScalarFunction.m" // pName
};

// Function Definitions
namespace coder {
void b_abs(const emlrtStack &sp, const array<real_T, 1U> &x,
           array<real_T, 1U> &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T nx_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &df_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx_tmp = x.size(0);
  y.set_size(&pg_emlrtRTEI, &st, x.size(0));
  b_st.site = &ef_emlrtRSI;
  if (x.size(0) > 2147483646) {
    c_st.site = &ge_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T k{0}; k < nx_tmp; k++) {
    y[k] = muDoubleScalarAbs(x[k]);
  }
}

void b_abs(const emlrtStack &sp, const array<real_T, 2U> &x,
           array<real_T, 2U> &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T nx;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &df_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx = x.size(0) * 3;
  y.set_size(&pg_emlrtRTEI, &st, x.size(0), 3);
  b_st.site = &ef_emlrtRSI;
  if (nx > 2147483646) {
    c_st.site = &ge_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T k{0}; k < nx; k++) {
    y[k] = muDoubleScalarAbs(x[k]);
  }
}

void c_abs(const emlrtStack &sp, const array<real_T, 2U> &x,
           array<real_T, 2U> &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T nx;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &df_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx = x.size(0) * x.size(1);
  y.set_size(&pg_emlrtRTEI, &st, x.size(0), x.size(1));
  b_st.site = &ef_emlrtRSI;
  if (nx > 2147483646) {
    c_st.site = &ge_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T k{0}; k < nx; k++) {
    y[k] = muDoubleScalarAbs(x[k]);
  }
}

void d_abs(const emlrtStack &sp, const array<real_T, 2U> &x,
           array<real_T, 2U> &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T nx_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &df_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx_tmp = x.size(1);
  y.set_size(&pg_emlrtRTEI, &st, 1, x.size(1));
  b_st.site = &ef_emlrtRSI;
  if (x.size(1) > 2147483646) {
    c_st.site = &ge_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T k{0}; k < nx_tmp; k++) {
    y[k] = muDoubleScalarAbs(x[k]);
  }
}

} // namespace coder

// End of code generation (abs.cpp)
