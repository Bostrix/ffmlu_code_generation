//
// sumMatrixIncludeNaN.cpp
//
// Code generation for function 'sumMatrixIncludeNaN'
//

// Include files
#include "sumMatrixIncludeNaN.h"
#include "eml_int_forloop_overflow_check.h"
#include "id_data.h"
#include "rt_nonfinite.h"

// Variable Definitions
static emlrtRSInfo gf_emlrtRSI{
    178,          // lineNo
    "sumColumnB", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" // pathName
};

static emlrtRSInfo hf_emlrtRSI{
    210,         // lineNo
    "sumColumn", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" // pathName
};

// Function Definitions
namespace coder {
real_T sumColumnB(const emlrtStack &sp, const real_T x_data[],
                  const int32_T x_size[2], int32_T col, int32_T vlen)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T y;
  int32_T i;
  int32_T i0;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &gf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  i0 = (col - 1) * x_size[0];
  y = x_data[i0];
  b_st.site = &hf_emlrtRSI;
  if (vlen - 1 > 2147483646) {
    c_st.site = &vb_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  i = static_cast<uint8_T>(vlen - 1);
  for (int32_T k{0}; k < i; k++) {
    y += x_data[(i0 + k) + 1];
  }
  return y;
}

} // namespace coder

// End of code generation (sumMatrixIncludeNaN.cpp)
