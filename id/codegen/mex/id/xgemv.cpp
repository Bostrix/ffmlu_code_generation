//
// xgemv.cpp
//
// Code generation for function 'xgemv'
//

// Include files
#include "xgemv.h"
#include "eml_int_forloop_overflow_check.h"
#include "id_data.h"
#include "rt_nonfinite.h"
#include <cstring>

// Variable Definitions
static emlrtRSInfo
    dc_emlrtRSI{
        64,      // lineNo
        "xgemv", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+blas/"
        "xgemv.m" // pathName
    };

static emlrtRSInfo
    ec_emlrtRSI{
        37,      // lineNo
        "xgemv", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+refblas/"
        "xgemv.m" // pathName
    };

static emlrtRSInfo
    bd_emlrtRSI{
        74,      // lineNo
        "xgemv", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+refblas/"
        "xgemv.m" // pathName
    };

// Function Declarations
static int32_T div_nde_s32_floor(int32_T numerator);

// Function Definitions
static int32_T div_nde_s32_floor(int32_T numerator)
{
  int32_T i;
  if ((numerator < 0) && (numerator % 5 != 0)) {
    i = -1;
  } else {
    i = 0;
  }
  return numerator / 5 + i;
}

namespace coder {
namespace internal {
namespace blas {
void xgemv(const emlrtStack &sp, int32_T m, int32_T n, const real_T A[25],
           int32_T ia0, const real_T x[25], int32_T ix0, real_T y[5])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &dc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (n != 0) {
    int32_T i;
    b_st.site = &ec_emlrtRSI;
    if (n > 2147483646) {
      c_st.site = &vb_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    i = static_cast<uint8_T>(n);
    std::memset(&y[0], 0, static_cast<uint32_T>(i) * sizeof(real_T));
    i = ia0 + 5 * (n - 1);
    for (int32_T iac{ia0}; iac <= i; iac += 5) {
      real_T c;
      int32_T b;
      c = 0.0;
      b = (iac + m) - 1;
      b_st.site = &bd_emlrtRSI;
      if ((iac <= b) && (b > 2147483646)) {
        c_st.site = &vb_emlrtRSI;
        check_forloop_overflow_error(c_st);
      }
      for (int32_T ia{iac}; ia <= b; ia++) {
        c += A[ia - 1] * x[((ix0 + ia) - iac) - 1];
      }
      b = div_nde_s32_floor(iac - ia0);
      y[b] += c;
    }
  }
}

} // namespace blas
} // namespace internal
} // namespace coder

// End of code generation (xgemv.cpp)
