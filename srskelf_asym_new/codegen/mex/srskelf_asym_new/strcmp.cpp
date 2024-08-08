//
// strcmp.cpp
//
// Code generation for function 'strcmp'
//

// Include files
#include "strcmp.h"
#include "rt_nonfinite.h"

// Variable Definitions
static emlrtRSInfo uc_emlrtRSI{
    91,       // lineNo
    "strcmp", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/strcmp.m" // pathName
};

static emlrtRSInfo vc_emlrtRSI{
    167,          // lineNo
    "loc_strcmp", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/strcmp.m" // pathName
};

static emlrtRSInfo wc_emlrtRSI{
    240,       // lineNo
    "charcmp", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/strcmp.m" // pathName
};

static emlrtRSInfo xc_emlrtRSI{
    242,       // lineNo
    "charcmp", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/strcmp.m" // pathName
};

static emlrtRSInfo yc_emlrtRSI{
    16,                                                              // lineNo
    "lower",                                                         // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/strfun/lower.m" // pathName
};

static emlrtRSInfo ad_emlrtRSI{
    10,                     // lineNo
    "eml_string_transform", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/strfun/"
    "eml_string_transform.m" // pathName
};

static emlrtRTEInfo bc_emlrtRTEI{
    15,                      // lineNo
    9,                       // colNo
    "assertSupportedString", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "assertSupportedString.m" // pName
};

static const char_T cv2[128]{
    '\x00', '\x01', '\x02', '\x03', '\x04', '\x05', '\x06', '\a',   '\b',
    '\t',   '\n',   '\v',   '\f',   '\r',   '\x0e', '\x0f', '\x10', '\x11',
    '\x12', '\x13', '\x14', '\x15', '\x16', '\x17', '\x18', '\x19', '\x1a',
    '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ',    '!',    '\"',   '#',
    '$',    '%',    '&',    '\'',   '(',    ')',    '*',    '+',    ',',
    '-',    '.',    '/',    '0',    '1',    '2',    '3',    '4',    '5',
    '6',    '7',    '8',    '9',    ':',    ';',    '<',    '=',    '>',
    '?',    '@',    'a',    'b',    'c',    'd',    'e',    'f',    'g',
    'h',    'i',    'j',    'k',    'l',    'm',    'n',    'o',    'p',
    'q',    'r',    's',    't',    'u',    'v',    'w',    'x',    'y',
    'z',    '[',    '\\',   ']',    '^',    '_',    '`',    'a',    'b',
    'c',    'd',    'e',    'f',    'g',    'h',    'i',    'j',    'k',
    'l',    'm',    'n',    'o',    'p',    'q',    'r',    's',    't',
    'u',    'v',    'w',    'x',    'y',    'z',    '{',    '|',    '}',
    '~',    '\x7f'};

// Function Definitions
namespace coder {
namespace internal {
boolean_T b_strcmp(const emlrtStack &sp, char_T a)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &uc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &vc_emlrtRSI;
  c_st.site = &wc_emlrtRSI;
  if (static_cast<uint8_T>(a) > 127) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &bc_emlrtRTEI, "Coder:toolbox:unsupportedString",
        "Coder:toolbox:unsupportedString", 2, 12, 127);
  }
  c_st.site = &xc_emlrtRSI;
  d_st.site = &yc_emlrtRSI;
  e_st.site = &ad_emlrtRSI;
  if (static_cast<uint8_T>(a) > 127) {
    emlrtErrorWithMessageIdR2018a(
        &e_st, &bc_emlrtRTEI, "Coder:toolbox:unsupportedString",
        "Coder:toolbox:unsupportedString", 2, 12, 127);
  }
  return cv2[static_cast<uint8_T>(a) & 127] == 'p';
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
  st.site = &uc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &vc_emlrtRSI;
  c_st.site = &wc_emlrtRSI;
  if (static_cast<uint8_T>(a) > 127) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &bc_emlrtRTEI, "Coder:toolbox:unsupportedString",
        "Coder:toolbox:unsupportedString", 2, 12, 127);
  }
  c_st.site = &xc_emlrtRSI;
  d_st.site = &yc_emlrtRSI;
  e_st.site = &ad_emlrtRSI;
  if (static_cast<uint8_T>(a) > 127) {
    emlrtErrorWithMessageIdR2018a(
        &e_st, &bc_emlrtRTEI, "Coder:toolbox:unsupportedString",
        "Coder:toolbox:unsupportedString", 2, 12, 127);
  }
  return cv2[static_cast<uint8_T>(a) & 127] == 'n';
}

} // namespace internal
} // namespace coder

// End of code generation (strcmp.cpp)
