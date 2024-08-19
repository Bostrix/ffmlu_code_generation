//
// strcmp.cpp
//
// Code generation for function 'strcmp'
//

// Include files
#include "strcmp.h"
#include "rt_nonfinite.h"
#include "spget_data.h"

// Variable Definitions
static emlrtRSInfo x_emlrtRSI{
    16,                                                              // lineNo
    "lower",                                                         // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/strfun/lower.m" // pathName
};

static emlrtRSInfo y_emlrtRSI{
    10,                     // lineNo
    "eml_string_transform", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/strfun/"
    "eml_string_transform.m" // pathName
};

// Function Definitions
namespace coder {
namespace internal {
boolean_T b_strcmp(const emlrtStack &sp, const char_T a[3])
{
  static const char_T b_cv[3]{'s', 'l', 'f'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T kstr;
  boolean_T b_bool;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &s_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &t_emlrtRSI;
  b_bool = false;
  kstr = 0;
  int32_T exitg1;
  do {
    exitg1 = 0;
    if (kstr < 3) {
      int32_T i;
      c_st.site = &u_emlrtRSI;
      i = static_cast<uint8_T>(a[kstr]);
      if (i > 127) {
        emlrtErrorWithMessageIdR2018a(
            &c_st, &emlrtRTEI, "Coder:toolbox:unsupportedString",
            "Coder:toolbox:unsupportedString", 2, 12, 127);
      }
      if (cv[i] != cv[static_cast<int32_T>(b_cv[kstr])]) {
        exitg1 = 1;
      } else {
        kstr++;
      }
    } else {
      b_bool = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  return b_bool;
}

boolean_T b_strcmp(const emlrtStack &sp, char_T a)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &s_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &t_emlrtRSI;
  c_st.site = &u_emlrtRSI;
  if (static_cast<uint8_T>(a) > 127) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &emlrtRTEI, "Coder:toolbox:unsupportedString",
        "Coder:toolbox:unsupportedString", 2, 12, 127);
  }
  c_st.site = &w_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  e_st.site = &y_emlrtRSI;
  if (static_cast<uint8_T>(a) > 127) {
    emlrtErrorWithMessageIdR2018a(
        &e_st, &emlrtRTEI, "Coder:toolbox:unsupportedString",
        "Coder:toolbox:unsupportedString", 2, 12, 127);
  }
  return cv[static_cast<uint8_T>(a) & 127] == 'p';
}

boolean_T c_strcmp(const emlrtStack &sp, const char_T a[3])
{
  static const char_T b_cv[3]{'n', 'b', 'r'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T kstr;
  boolean_T b_bool;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &s_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &t_emlrtRSI;
  b_bool = false;
  kstr = 0;
  int32_T exitg1;
  do {
    exitg1 = 0;
    if (kstr < 3) {
      int32_T i;
      c_st.site = &u_emlrtRSI;
      i = static_cast<uint8_T>(a[kstr]);
      if (i > 127) {
        emlrtErrorWithMessageIdR2018a(
            &c_st, &emlrtRTEI, "Coder:toolbox:unsupportedString",
            "Coder:toolbox:unsupportedString", 2, 12, 127);
      }
      if (cv[i] != cv[static_cast<int32_T>(b_cv[kstr])]) {
        exitg1 = 1;
      } else {
        kstr++;
      }
    } else {
      b_bool = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  return b_bool;
}

boolean_T c_strcmp(const emlrtStack &sp, char_T a)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &s_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &t_emlrtRSI;
  c_st.site = &u_emlrtRSI;
  if (static_cast<uint8_T>(a) > 127) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &emlrtRTEI, "Coder:toolbox:unsupportedString",
        "Coder:toolbox:unsupportedString", 2, 12, 127);
  }
  c_st.site = &w_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  e_st.site = &y_emlrtRSI;
  if (static_cast<uint8_T>(a) > 127) {
    emlrtErrorWithMessageIdR2018a(
        &e_st, &emlrtRTEI, "Coder:toolbox:unsupportedString",
        "Coder:toolbox:unsupportedString", 2, 12, 127);
  }
  return cv[static_cast<uint8_T>(a) & 127] == 'n';
}

boolean_T d_strcmp(const emlrtStack &sp, const char_T a[3])
{
  static const char_T b_cv[3]{'l', 's', 't'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T kstr;
  boolean_T b_bool;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &s_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &t_emlrtRSI;
  b_bool = false;
  kstr = 0;
  int32_T exitg1;
  do {
    exitg1 = 0;
    if (kstr < 3) {
      int32_T i;
      c_st.site = &u_emlrtRSI;
      i = static_cast<uint8_T>(a[kstr]);
      if (i > 127) {
        emlrtErrorWithMessageIdR2018a(
            &c_st, &emlrtRTEI, "Coder:toolbox:unsupportedString",
            "Coder:toolbox:unsupportedString", 2, 12, 127);
      }
      if (cv[i] != cv[static_cast<int32_T>(b_cv[kstr])]) {
        exitg1 = 1;
      } else {
        kstr++;
      }
    } else {
      b_bool = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  return b_bool;
}

} // namespace internal
} // namespace coder

// End of code generation (strcmp.cpp)
