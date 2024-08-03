//
// rng.cpp
//
// Code generation for function 'rng'
//

// Include files
#include "rng.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_mexutil.h"

// Variable Definitions
static emlrtMCInfo g_emlrtMCI{
    51,                                                             // lineNo
    9,                                                              // colNo
    "rng",                                                          // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/randfun/rng.m" // pName
};

static emlrtRSInfo rr_emlrtRSI{
    51,                                                             // lineNo
    "rng",                                                          // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/randfun/rng.m" // pathName
};

// Function Definitions
namespace coder {
void rng(const emlrtStack &sp)
{
  static const int32_T iv[2]{1, 3};
  static const char_T u[3]{'r', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = &sp;
  st.tls = sp.tls;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 3, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = nullptr;
  m = emlrtCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m);
  st.site = &rr_emlrtRSI;
  feval(st, y, b_y, g_emlrtMCI);
}

} // namespace coder

// End of code generation (rng.cpp)
