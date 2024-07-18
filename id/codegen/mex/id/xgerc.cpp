//
// xgerc.cpp
//
// Code generation for function 'xgerc'
//

// Include files
#include "xgerc.h"
#include "eml_int_forloop_overflow_check.h"
#include "id_data.h"
#include "rt_nonfinite.h"

// Variable Definitions
static emlrtRSInfo
    fc_emlrtRSI{
        45,      // lineNo
        "xgerc", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+blas/"
        "xgerc.m" // pathName
    };

static emlrtRSInfo gc_emlrtRSI{
    45,     // lineNo
    "xger", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+blas/xger.m" // pathName
};

static emlrtRSInfo
    hc_emlrtRSI{
        15,     // lineNo
        "xger", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+refblas/"
        "xger.m" // pathName
    };

static emlrtRSInfo
    ic_emlrtRSI{
        41,      // lineNo
        "xgerx", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+refblas/"
        "xgerx.m" // pathName
    };

static emlrtRSInfo
    cd_emlrtRSI{
        54,      // lineNo
        "xgerx", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+refblas/"
        "xgerx.m" // pathName
    };

// Function Definitions
namespace coder {
namespace internal {
namespace blas {
void xgerc(const emlrtStack &sp, int32_T m, int32_T n, real_T alpha1,
           int32_T ix0, const real_T y[5], real_T A[25], int32_T ia0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &fc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &gc_emlrtRSI;
  c_st.site = &hc_emlrtRSI;
  if (!(alpha1 == 0.0)) {
    int32_T i;
    int32_T jA;
    jA = ia0;
    d_st.site = &ic_emlrtRSI;
    if (n > 2147483646) {
      e_st.site = &vb_emlrtRSI;
      check_forloop_overflow_error(e_st);
    }
    i = static_cast<uint8_T>(n);
    for (int32_T j{0}; j < i; j++) {
      real_T temp;
      temp = y[j];
      if (temp != 0.0) {
        int32_T b;
        temp *= alpha1;
        b = (m + jA) - 1;
        d_st.site = &cd_emlrtRSI;
        if ((jA <= b) && (b > 2147483646)) {
          e_st.site = &vb_emlrtRSI;
          check_forloop_overflow_error(e_st);
        }
        for (int32_T ijA{jA}; ijA <= b; ijA++) {
          A[ijA - 1] += A[((ix0 + ijA) - jA) - 1] * temp;
        }
      }
      jA += 5;
    }
  }
}

} // namespace blas
} // namespace internal
} // namespace coder

// End of code generation (xgerc.cpp)
