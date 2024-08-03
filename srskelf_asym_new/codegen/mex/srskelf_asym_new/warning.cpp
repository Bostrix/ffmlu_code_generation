//
// warning.cpp
//
// Code generation for function 'warning'
//

// Include files
#include "warning.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_mexutil.h"

// Variable Definitions
static emlrtMCInfo i_emlrtMCI{
    14,        // lineNo
    25,        // colNo
    "warning", // fName
    "/usr/local/MATLAB/R2024a/toolbox/shared/coder/coder/lib/+coder/+internal/"
    "warning.m" // pName
};

static emlrtMCInfo j_emlrtMCI{
    14,        // lineNo
    9,         // colNo
    "warning", // fName
    "/usr/local/MATLAB/R2024a/toolbox/shared/coder/coder/lib/+coder/+internal/"
    "warning.m" // pName
};

static emlrtRSInfo qr_emlrtRSI{
    14,        // lineNo
    "warning", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/shared/coder/coder/lib/+coder/+internal/"
    "warning.m" // pathName
};

// Function Declarations
static const mxArray *b_feval(const emlrtStack &sp, const mxArray *m1,
                              const mxArray *m2, emlrtMCInfo &location);

// Function Definitions
static const mxArray *b_feval(const emlrtStack &sp, const mxArray *m1,
                              const mxArray *m2, emlrtMCInfo &location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtConstCTX)&sp, 1, &m, 2, &pArrays[0],
                               "feval", true, &location);
}

namespace coder {
namespace internal {
void warning(const emlrtStack &sp, const char_T varargin_1[14])
{
  static const int32_T iv[2]{1, 7};
  static const int32_T iv1[2]{1, 7};
  static const int32_T iv2[2]{1, 33};
  static const int32_T iv3[2]{1, 14};
  static const char_T msgID[33]{'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
                                'L', 'A', 'B', ':', 'i', 'l', 'l', 'C', 'o',
                                'n', 'd', 'i', 't', 'i', 'o', 'n', 'e', 'd',
                                'M', 'a', 't', 'r', 'i', 'x'};
  static const char_T b_u[7]{'m', 'e', 's', 's', 'a', 'g', 'e'};
  static const char_T u[7]{'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = &sp;
  st.tls = sp.tls;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = nullptr;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = nullptr;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 33, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  d_y = nullptr;
  m = emlrtCreateCharArray(2, &iv3[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 14, m, &varargin_1[0]);
  emlrtAssign(&d_y, m);
  st.site = &qr_emlrtRSI;
  feval(st, y, feval(st, b_y, c_y, d_y, i_emlrtMCI), j_emlrtMCI);
}

void warning(const emlrtStack &sp, int32_T varargin_1,
             const char_T varargin_2[14])
{
  static const int32_T iv[2]{1, 7};
  static const int32_T iv1[2]{1, 7};
  static const int32_T iv2[2]{1, 32};
  static const int32_T iv3[2]{1, 14};
  static const char_T msgID[32]{'C', 'o', 'd', 'e', 'r', ':', 'M', 'A',
                                'T', 'L', 'A', 'B', ':', 'r', 'a', 'n',
                                'k', 'D', 'e', 'f', 'i', 'c', 'i', 'e',
                                'n', 't', 'M', 'a', 't', 'r', 'i', 'x'};
  static const char_T b_u[7]{'m', 'e', 's', 's', 'a', 'g', 'e'};
  static const char_T u[7]{'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = &sp;
  st.tls = sp.tls;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = nullptr;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = nullptr;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 32, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  d_y = nullptr;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *static_cast<int32_T *>(emlrtMxGetData(m)) = varargin_1;
  emlrtAssign(&d_y, m);
  e_y = nullptr;
  m = emlrtCreateCharArray(2, &iv3[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 14, m, &varargin_2[0]);
  emlrtAssign(&e_y, m);
  st.site = &qr_emlrtRSI;
  feval(st, y, feval(st, b_y, c_y, d_y, e_y, i_emlrtMCI), j_emlrtMCI);
}

void warning(const emlrtStack &sp)
{
  static const int32_T iv[2]{1, 7};
  static const int32_T iv1[2]{1, 7};
  static const int32_T iv2[2]{1, 21};
  static const char_T msgID[21]{'M', 'A', 'T', 'L', 'A', 'B', ':',
                                's', 'i', 'n', 'g', 'u', 'l', 'a',
                                'r', 'M', 'a', 't', 'r', 'i', 'x'};
  static const char_T b_u[7]{'m', 'e', 's', 's', 'a', 'g', 'e'};
  static const char_T u[7]{'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = &sp;
  st.tls = sp.tls;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = nullptr;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = nullptr;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 21, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &qr_emlrtRSI;
  feval(st, y, b_feval(st, b_y, c_y, i_emlrtMCI), j_emlrtMCI);
}

} // namespace internal
} // namespace coder

// End of code generation (warning.cpp)
