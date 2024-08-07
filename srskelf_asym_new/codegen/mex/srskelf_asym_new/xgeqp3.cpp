//
// xgeqp3.cpp
//
// Code generation for function 'xgeqp3'
//

// Include files
#include "xgeqp3.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "coder_array.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <cstddef>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo
    cm_emlrtRSI{
        63,       // lineNo
        "xgeqp3", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" // pathName
    };

static emlrtRSInfo
    dm_emlrtRSI{
        98,             // lineNo
        "ceval_xgeqp3", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" // pathName
    };

static emlrtRSInfo
    em_emlrtRSI{
        138,            // lineNo
        "ceval_xgeqp3", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" // pathName
    };

static emlrtRSInfo
    fm_emlrtRSI{
        141,            // lineNo
        "ceval_xgeqp3", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" // pathName
    };

static emlrtRSInfo
    gm_emlrtRSI{
        143,            // lineNo
        "ceval_xgeqp3", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" // pathName
    };

static emlrtRSInfo
    hm_emlrtRSI{
        148,            // lineNo
        "ceval_xgeqp3", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" // pathName
    };

static emlrtRSInfo
    im_emlrtRSI{
        151,            // lineNo
        "ceval_xgeqp3", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" // pathName
    };

static emlrtRSInfo
    jm_emlrtRSI{
        154,            // lineNo
        "ceval_xgeqp3", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" // pathName
    };

static emlrtRSInfo
    km_emlrtRSI{
        158,            // lineNo
        "ceval_xgeqp3", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" // pathName
    };

static emlrtRTEInfo
    ro_emlrtRTEI{
        61,       // lineNo
        9,        // colNo
        "xgeqp3", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" // pName
    };

static emlrtRTEInfo
    so_emlrtRTEI{
        92,       // lineNo
        22,       // colNo
        "xgeqp3", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" // pName
    };

static emlrtRTEInfo
    to_emlrtRTEI{
        105,      // lineNo
        1,        // colNo
        "xgeqp3", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" // pName
    };

static emlrtRTEInfo
    uo_emlrtRTEI{
        97,       // lineNo
        5,        // colNo
        "xgeqp3", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" // pName
    };

// Function Definitions
namespace coder {
namespace internal {
namespace lapack {
void xgeqp3(const emlrtStack &sp, array<real_T, 2U> &A, array<real_T, 1U> &tau,
            array<int32_T, 2U> &jpvt)
{
  static const int32_T b_offsets[4]{0, 1, 2, 3};
  static const int32_T offsets[4]{0, 1, 2, 3};
  static const char_T fname[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                '_', 'd', 'g', 'e', 'q', 'p', '3'};
  array<ptrdiff_t, 1U> jpvt_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T loop_ub;
  int32_T minmana;
  int32_T minmn;
  int32_T na;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  minmn = A.size(0);
  na = A.size(1) - 1;
  loop_ub = A.size(1);
  jpvt.set_size(&ro_emlrtRTEI, &sp, 1, loop_ub);
  for (int32_T k{0}; k < loop_ub; k++) {
    jpvt[k] = 0;
  }
  st.site = &cm_emlrtRSI;
  minmana = muIntScalarMin_sint32(minmn, loop_ub);
  tau.set_size(&so_emlrtRTEI, &st, minmana);
  if ((A.size(0) == 0) || (A.size(1) == 0) || (A.size(0) < 1) ||
      (A.size(1) < 1)) {
    tau.set_size(&uo_emlrtRTEI, &st, minmana);
    for (int32_T k{0}; k < minmana; k++) {
      tau[k] = 0.0;
    }
    b_st.site = &dm_emlrtRSI;
    if (A.size(1) > 2147483646) {
      c_st.site = &fe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    loop_ub = ((na + 1) / 4) << 2;
    minmn = loop_ub - 4;
    for (int32_T k{0}; k <= minmn; k += 4) {
      _mm_storeu_si128(
          (__m128i *)&jpvt[k],
          _mm_add_epi32(
              _mm_add_epi32(_mm_set1_epi32(k),
                            _mm_loadu_si128((const __m128i *)&offsets[0])),
              _mm_set1_epi32(1)));
    }
    for (int32_T k{loop_ub}; k <= na; k++) {
      jpvt[k] = k + 1;
    }
  } else {
    ptrdiff_t info_t;
    boolean_T p;
    jpvt_t.set_size(&to_emlrtRTEI, &st, loop_ub);
    for (int32_T k{0}; k < loop_ub; k++) {
      jpvt_t[k] = (ptrdiff_t)0;
    }
    info_t = LAPACKE_dgeqp3(102, (ptrdiff_t)A.size(0), (ptrdiff_t)A.size(1),
                            &(A.data())[0], (ptrdiff_t)A.size(0),
                            &(jpvt_t.data())[0], &(tau.data())[0]);
    b_st.site = &em_emlrtRSI;
    if ((int32_T)info_t != 0) {
      p = true;
      if ((int32_T)info_t != -4) {
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
      b_st.site = &fm_emlrtRSI;
      if (A.size(1) > 2147483646) {
        c_st.site = &fe_emlrtRSI;
        check_forloop_overflow_error(c_st);
      }
      for (loop_ub = 0; loop_ub <= na; loop_ub++) {
        b_st.site = &gm_emlrtRSI;
        if (minmn > 2147483646) {
          c_st.site = &fe_emlrtRSI;
          check_forloop_overflow_error(c_st);
        }
        for (int32_T k{0}; k < minmn; k++) {
          A[loop_ub * minmn + k] = rtNaN;
        }
      }
      loop_ub = na + 1;
      minmn = muIntScalarMin_sint32(minmn, loop_ub);
      b_st.site = &hm_emlrtRSI;
      if (minmn > 2147483646) {
        c_st.site = &fe_emlrtRSI;
        check_forloop_overflow_error(c_st);
      }
      for (int32_T k{0}; k < minmn; k++) {
        tau[k] = rtNaN;
      }
      loop_ub = minmn + 1;
      b_st.site = &im_emlrtRSI;
      if ((minmn + 1 <= minmana) && (minmana > 2147483646)) {
        c_st.site = &fe_emlrtRSI;
        check_forloop_overflow_error(c_st);
      }
      for (int32_T k{loop_ub}; k <= minmana; k++) {
        tau[k - 1] = 0.0;
      }
      b_st.site = &jm_emlrtRSI;
      if (A.size(1) > 2147483646) {
        c_st.site = &fe_emlrtRSI;
        check_forloop_overflow_error(c_st);
      }
      loop_ub = ((na + 1) / 4) << 2;
      minmn = loop_ub - 4;
      for (int32_T k{0}; k <= minmn; k += 4) {
        _mm_storeu_si128(
            (__m128i *)&jpvt[k],
            _mm_add_epi32(
                _mm_add_epi32(_mm_set1_epi32(k),
                              _mm_loadu_si128((const __m128i *)&b_offsets[0])),
                _mm_set1_epi32(1)));
      }
      for (int32_T k{loop_ub}; k <= na; k++) {
        jpvt[k] = k + 1;
      }
    } else {
      b_st.site = &km_emlrtRSI;
      if (A.size(1) > 2147483646) {
        c_st.site = &fe_emlrtRSI;
        check_forloop_overflow_error(c_st);
      }
      for (int32_T k{0}; k <= na; k++) {
        jpvt[k] = (int32_T)jpvt_t[k];
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace lapack
} // namespace internal
} // namespace coder

// End of code generation (xgeqp3.cpp)
