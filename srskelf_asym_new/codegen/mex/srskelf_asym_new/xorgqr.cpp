//
// xorgqr.cpp
//
// Code generation for function 'xorgqr'
//

// Include files
#include "xorgqr.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "coder_array.h"
#include "lapacke.h"
#include <cstddef>

// Variable Definitions
static emlrtRSInfo
    vl_emlrtRSI{
        60,             // lineNo
        "ceval_xorgqr", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xorgqr.m" // pathName
    };

static emlrtRSInfo
    xl_emlrtRSI{
        14,       // lineNo
        "xorgqr", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xorgqr.m" // pathName
    };

// Function Definitions
namespace coder {
namespace internal {
namespace lapack {
void xorgqr(const emlrtStack &sp, int32_T m, int32_T n, int32_T k,
            array<real_T, 2U> &A, int32_T lda, const array<real_T, 1U> &tau)
{
  static const char_T fname[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                '_', 'd', 'o', 'r', 'g', 'q', 'r'};
  emlrtStack b_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &xl_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((A.size(0) != 0) && (A.size(1) != 0)) {
    ptrdiff_t info_t;
    boolean_T p;
    info_t = LAPACKE_dorgqr(102, (ptrdiff_t)m, (ptrdiff_t)n, (ptrdiff_t)k,
                            &(A.data())[0], (ptrdiff_t)lda,
                            &(((array<real_T, 1U> *)&tau)->data())[0]);
    b_st.site = &vl_emlrtRSI;
    if ((int32_T)info_t != 0) {
      boolean_T b_p;
      p = true;
      b_p = false;
      if ((int32_T)info_t == -7) {
        b_p = true;
      } else if ((int32_T)info_t == -5) {
        b_p = true;
      }
      if (!b_p) {
        if ((int32_T)info_t == -1010) {
          emlrtErrorWithMessageIdR2018a(&b_st, &qb_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &rb_emlrtRTEI,
                                        "Coder:toolbox:LAPACKCallErrorInfo",
                                        "Coder:toolbox:LAPACKCallErrorInfo", 5,
                                        4, 14, &fname[0], 12, (int32_T)info_t);
        }
      }
    } else {
      p = false;
    }
    if (p) {
      int32_T A_idx_0;
      int32_T A_idx_1;
      A_idx_0 = A.size(0);
      A_idx_1 = A.size(1);
      for (int32_T i{0}; i < A_idx_1; i++) {
        for (int32_T i1{0}; i1 < A_idx_0; i1++) {
          A[i1 + A.size(0) * i] = rtNaN;
        }
      }
    }
  }
}

} // namespace lapack
} // namespace internal
} // namespace coder

// End of code generation (xorgqr.cpp)
