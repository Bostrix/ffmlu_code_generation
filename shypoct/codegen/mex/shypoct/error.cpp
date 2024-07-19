//
// error.cpp
//
// Code generation for function 'error'
//

// Include files
#include "error.h"
#include "rt_nonfinite.h"

// Variable Definitions
static emlrtMCInfo c_emlrtMCI{
    27,                                                            // lineNo
    5,                                                             // colNo
    "error",                                                       // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/lang/error.m" // pName
};

static emlrtRSInfo hb_emlrtRSI{
    27,                                                            // lineNo
    "error",                                                       // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/lang/error.m" // pathName
};

// Function Declarations
static void b_error(const emlrtStack &sp, const mxArray *m,
                    emlrtMCInfo &location);

// Function Definitions
static void b_error(const emlrtStack &sp, const mxArray *m,
                    emlrtMCInfo &location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtConstCTX)&sp, 0, nullptr, 1, &pArray, "error",
                        true, &location);
}

namespace coder {
void c_error(const emlrtStack &sp)
{
  static const int32_T iv[2]{1, 38};
  static const char_T varargin_1[38]{
      'E', 'x', 'c', 'e', 'e', 'd', 'e', 'd', ' ', 'p', 'r', 'e', 'a',
      'l', 'l', 'o', 'c', 'a', 't', 'e', 'd', ' ', 'n', 'o', 'd', 'e',
      ' ', 'a', 'r', 'r', 'a', 'y', ' ', 's', 'i', 'z', 'e', '.'};
  emlrtStack st;
  const mxArray *m;
  const mxArray *y;
  st.prev = &sp;
  st.tls = sp.tls;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 38, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  st.site = &hb_emlrtRSI;
  b_error(st, y, c_emlrtMCI);
}

void d_error(const emlrtStack &sp)
{
  static const int32_T iv[2]{1, 47};
  static const char_T varargin_1[47]{
      'E', 'x', 'c', 'e', 'e', 'd', 'e', 'd', ' ', 'p', 'r', 'e',
      'a', 'l', 'l', 'o', 'c', 'a', 't', 'e', 'd', ' ', 'l', 'e',
      'v', 'e', 'l', ' ', 'p', 'o', 'i', 'n', 't', 'e', 'r', ' ',
      'a', 'r', 'r', 'a', 'y', ' ', 's', 'i', 'z', 'e', '.'};
  emlrtStack st;
  const mxArray *m;
  const mxArray *y;
  st.prev = &sp;
  st.tls = sp.tls;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 47, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  st.site = &hb_emlrtRSI;
  b_error(st, y, c_emlrtMCI);
}

} // namespace coder

// End of code generation (error.cpp)
