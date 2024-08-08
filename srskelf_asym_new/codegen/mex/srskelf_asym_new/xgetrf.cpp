//
// xgetrf.cpp
//
// Code generation for function 'xgetrf'
//

// Include files
#include "xgetrf.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "coder_array.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <cstddef>

// Variable Definitions
static emlrtRTEInfo
    xo_emlrtRTEI{
        54,       // lineNo
        5,        // colNo
        "xgetrf", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgetrf.m" // pName
    };

// Function Definitions
namespace coder {
namespace internal {
namespace lapack {
void xgetrf(const emlrtStack &sp, int32_T m, int32_T n, array<real_T, 2U> &A,
            int32_T lda, array<int32_T, 2U> &ipiv)
{
  array<ptrdiff_t, 1U> ipiv_t;
  array<ptrdiff_t, 1U> r;
  emlrtStack b_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &wm_emlrtRSI;
  if ((A.size(0) == 0) || (A.size(1) == 0)) {
    ipiv.set_size(&xo_emlrtRTEI, &st, 1, 0);
  } else {
    ptrdiff_t info_t;
    int32_T i;
    int32_T varargin_1;
    b_st.site = &ym_emlrtRSI;
    info_t = (ptrdiff_t)0.0;
    i = muIntScalarMin_sint32(m, n);
    varargin_1 = muIntScalarMax_sint32(i, 1);
    r.set_size(&qg_emlrtRTEI, &b_st, varargin_1);
    for (i = 0; i < varargin_1; i++) {
      r[i] = info_t;
    }
    ipiv_t.set_size(&vo_emlrtRTEI, &st, r.size(0));
    info_t =
        LAPACKE_dgetrf_work(102, (ptrdiff_t)m, (ptrdiff_t)n, &(A.data())[0],
                            (ptrdiff_t)lda, &(ipiv_t.data())[0]);
    ipiv.set_size(&wo_emlrtRTEI, &st, 1, ipiv_t.size(0));
    b_st.site = &xm_emlrtRSI;
    if ((int32_T)info_t < 0) {
      if ((int32_T)info_t == -1010) {
        emlrtErrorWithMessageIdR2018a(&b_st, &qb_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &rb_emlrtRTEI,
                                      "Coder:toolbox:LAPACKCallErrorInfo",
                                      "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                      19, &cv1[0], 12, (int32_T)info_t);
      }
    }
    i = ipiv_t.size(0) - 1;
    for (varargin_1 = 0; varargin_1 <= i; varargin_1++) {
      ipiv[varargin_1] = (int32_T)ipiv_t[varargin_1];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace lapack
} // namespace internal
} // namespace coder

// End of code generation (xgetrf.cpp)
