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

static emlrtRSInfo mr_emlrtRSI{
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
  static const int32_T iv[2]{1, 34};
  static const char_T varargin_1[34]{
      'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 'f', 'u', 'n', 'c',
      't', 'i', 'o', 'n', ' ', 'i', 'd', 'e', 'n', 't', 'i', 'f',
      'i', 'e', 'r', ' ', 'f', 'o', 'r', ' ', 'A', '.'};
  emlrtStack st;
  const mxArray *m;
  const mxArray *y;
  st.prev = &sp;
  st.tls = sp.tls;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 34, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  st.site = &mr_emlrtRSI;
  b_error(st, y, c_emlrtMCI);
}

void d_error(const emlrtStack &sp)
{
  static const int32_T iv[2]{1, 39};
  static const char_T varargin_1[39]{
      'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 'f', 'u', 'n', 'c', 't',
      'i', 'o', 'n', ' ', 'i', 'd', 'e', 'n', 't', 'i', 'f', 'i', 'e',
      'r', ' ', 'f', 'o', 'r', ' ', 'p', 'x', 'y', 'f', 'u', 'n', '.'};
  emlrtStack st;
  const mxArray *m;
  const mxArray *y;
  st.prev = &sp;
  st.tls = sp.tls;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 39, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  st.site = &mr_emlrtRSI;
  b_error(st, y, c_emlrtMCI);
}

} // namespace coder

// End of code generation (error.cpp)
