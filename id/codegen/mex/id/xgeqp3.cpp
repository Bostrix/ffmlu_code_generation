//
// xgeqp3.cpp
//
// Code generation for function 'xgeqp3'
//

// Include files
#include "xgeqp3.h"
#include "id_data.h"
#include "rt_nonfinite.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <cstddef>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo
    yd_emlrtRSI{
        63,       // lineNo
        "xgeqp3", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" // pathName
    };

static emlrtRSInfo
    be_emlrtRSI{
        138,            // lineNo
        "ceval_xgeqp3", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" // pathName
    };

// Function Definitions
namespace coder {
namespace internal {
namespace lapack {
int32_T xgeqp3(const emlrtStack &sp, real_T A_data[], const int32_T A_size[2],
               real_T tau_data[], int32_T jpvt_data[], int32_T jpvt_size[2])
{
  static const char_T fname[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                '_', 'd', 'g', 'e', 'q', 'p', '3'};
  ptrdiff_t jpvt_t_data[5];
  emlrtStack b_st;
  emlrtStack st;
  int32_T m_tmp;
  int32_T minmn;
  int32_T na;
  int32_T tau_size;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  m_tmp = A_size[0];
  na = A_size[1] - 1;
  jpvt_size[0] = 1;
  minmn = A_size[1];
  jpvt_size[1] = minmn;
  if (minmn - 1 >= 0) {
    std::memset(&jpvt_data[0], 0,
                static_cast<uint32_T>(minmn) * sizeof(int32_T));
  }
  st.site = &yd_emlrtRSI;
  tau_size = muIntScalarMin_sint32(m_tmp, minmn);
  if ((A_size[0] == 0) || (A_size[1] == 0) || (A_size[0] < 1) ||
      (A_size[1] < 1)) {
    if (tau_size - 1 >= 0) {
      std::memset(&tau_data[0], 0,
                  static_cast<uint32_T>(tau_size) * sizeof(real_T));
    }
    minmn = ((na + 1) / 4) << 2;
    m_tmp = minmn - 4;
    for (int32_T k{0}; k <= m_tmp; k += 4) {
      _mm_storeu_si128(
          (__m128i *)&jpvt_data[0],
          _mm_add_epi32(_mm_add_epi32(_mm_set1_epi32(0),
                                      _mm_loadu_si128((const __m128i *)&iv[0])),
                        _mm_set1_epi32(1)));
    }
    for (int32_T k{minmn}; k <= na; k++) {
      jpvt_data[k] = k + 1;
    }
  } else {
    ptrdiff_t info_t;
    int32_T k;
    boolean_T p;
    for (k = 0; k < minmn; k++) {
      jpvt_t_data[k] = (ptrdiff_t)0;
    }
    info_t = LAPACKE_dgeqp3(102, (ptrdiff_t)A_size[0], (ptrdiff_t)A_size[1],
                            &A_data[0], (ptrdiff_t)A_size[0], &jpvt_t_data[0],
                            &tau_data[0]);
    b_st.site = &be_emlrtRSI;
    if ((int32_T)info_t != 0) {
      p = true;
      if ((int32_T)info_t != -4) {
        if ((int32_T)info_t == -1010) {
          emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI,
                                        "Coder:toolbox:LAPACKCallErrorInfo",
                                        "Coder:toolbox:LAPACKCallErrorInfo", 5,
                                        4, 14, &fname[0], 12, (int32_T)info_t);
        }
      }
    } else {
      p = false;
    }
    if (p) {
      for (minmn = 0; minmn <= na; minmn++) {
        for (k = 0; k < m_tmp; k++) {
          A_data[minmn * m_tmp + k] = rtNaN;
        }
      }
      minmn = na + 1;
      minmn = muIntScalarMin_sint32(m_tmp, minmn) - 1;
      for (k = 0; k <= minmn; k++) {
        tau_data[k] = rtNaN;
      }
      k = minmn + 2;
      if (k <= tau_size) {
        std::memset(&tau_data[k + -1], 0,
                    static_cast<uint32_T>((tau_size - k) + 1) * sizeof(real_T));
      }
      minmn = ((na + 1) / 4) << 2;
      m_tmp = minmn - 4;
      for (k = 0; k <= m_tmp; k += 4) {
        _mm_storeu_si128(
            (__m128i *)&jpvt_data[0],
            _mm_add_epi32(
                _mm_add_epi32(_mm_set1_epi32(0),
                              _mm_loadu_si128((const __m128i *)&iv[0])),
                _mm_set1_epi32(1)));
      }
      for (k = minmn; k <= na; k++) {
        jpvt_data[k] = k + 1;
      }
    } else {
      for (k = 0; k <= na; k++) {
        jpvt_data[k] = (int32_T)jpvt_t_data[k];
      }
    }
  }
  return tau_size;
}

} // namespace lapack
} // namespace internal
} // namespace coder

// End of code generation (xgeqp3.cpp)
