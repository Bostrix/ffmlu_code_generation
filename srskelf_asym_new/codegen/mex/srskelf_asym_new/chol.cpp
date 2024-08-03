//
// chol.cpp
//
// Code generation for function 'chol'
//

// Include files
#include "chol.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "coder_array.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <cstddef>

// Variable Definitions
static emlrtRSInfo jq_emlrtRSI{
    84,     // lineNo
    "chol", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/chol.m" // pathName
};

static emlrtRSInfo kq_emlrtRSI{
    93,     // lineNo
    "chol", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/chol.m" // pathName
};

static emlrtRSInfo lq_emlrtRSI{
    94,     // lineNo
    "chol", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/chol.m" // pathName
};

static emlrtRSInfo
    mq_emlrtRSI{
        79,             // lineNo
        "ceval_xpotrf", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xpotrf.m" // pathName
    };

static emlrtRSInfo
    nq_emlrtRSI{
        13,       // lineNo
        "xpotrf", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xpotrf.m" // pathName
    };

static emlrtRTEInfo ic_emlrtRTEI{
    109,                                                               // lineNo
    27,                                                                // colNo
    "chol",                                                            // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/chol.m" // pName
};

static emlrtRTEInfo jc_emlrtRTEI{
    56,                                                                // lineNo
    23,                                                                // colNo
    "chol",                                                            // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/chol.m" // pName
};

// Function Definitions
namespace coder {
namespace internal {
void chol(const emlrtStack &sp, array<real_T, 2U> &A)
{
  static const char_T fname[19]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                '_', 'd', 'p', 'o', 't', 'r', 'f',
                                '_', 'w', 'o', 'r', 'k'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T mrows;
  int32_T ncols;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  mrows = A.size(0);
  ncols = A.size(1);
  if (A.size(0) != A.size(1)) {
    emlrtErrorWithMessageIdR2018a(&sp, &jc_emlrtRTEI, "MATLAB:square",
                                  "MATLAB:square", 0);
  }
  mrows = muIntScalarMin_sint32(mrows, ncols);
  if (mrows != 0) {
    ptrdiff_t info_t;
    st.site = &jq_emlrtRSI;
    b_st.site = &nq_emlrtRSI;
    info_t = LAPACKE_dpotrf_work(102, 'L', (ptrdiff_t)mrows, &(A.data())[0],
                                 (ptrdiff_t)A.size(0));
    c_st.site = &mq_emlrtRSI;
    if ((int32_T)info_t < 0) {
      if ((int32_T)info_t == -1010) {
        emlrtErrorWithMessageIdR2018a(&c_st, &qb_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&c_st, &rb_emlrtRTEI,
                                      "Coder:toolbox:LAPACKCallErrorInfo",
                                      "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                      19, &fname[0], 12, (int32_T)info_t);
      }
    }
    if ((int32_T)info_t != 0) {
      mrows = (int32_T)info_t - 1;
    }
    st.site = &kq_emlrtRSI;
    if (mrows > 2147483646) {
      b_st.site = &fe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (ncols = 2; ncols <= mrows; ncols++) {
      st.site = &lq_emlrtRSI;
      for (int32_T i{0}; i <= ncols - 2; i++) {
        A[i + A.size(0) * (ncols - 1)] = 0.0;
      }
    }
    if ((int32_T)info_t != 0) {
      emlrtErrorWithMessageIdR2018a(&sp, &ic_emlrtRTEI, "MATLAB:posdef",
                                    "MATLAB:posdef", 0);
    }
  }
}

} // namespace internal
} // namespace coder

// End of code generation (chol.cpp)
