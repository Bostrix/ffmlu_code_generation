//
// mldivide.cpp
//
// Code generation for function 'mldivide'
//

// Include files
#include "mldivide.h"
#include "eml_int_forloop_overflow_check.h"
#include "id_data.h"
#include "infocheck.h"
#include "qrsolve.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "xgeqp3.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstddef>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo ed_emlrtRSI{
    20,                                                              // lineNo
    "mldivide",                                                      // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/mldivide.m" // pathName
};

static emlrtRSInfo fd_emlrtRSI{
    42,                                                              // lineNo
    "mldiv",                                                         // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/mldivide.m" // pathName
};

static emlrtRSInfo gd_emlrtRSI{
    44,                                                              // lineNo
    "mldiv",                                                         // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/mldivide.m" // pathName
};

static emlrtRSInfo hd_emlrtRSI{
    67,        // lineNo
    "lusolve", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/lusolve.m" // pathName
};

static emlrtRSInfo id_emlrtRSI{
    109,          // lineNo
    "lusolveNxN", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/lusolve.m" // pathName
};

static emlrtRSInfo jd_emlrtRSI{
    112,          // lineNo
    "lusolveNxN", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/lusolve.m" // pathName
};

static emlrtRSInfo kd_emlrtRSI{
    124,          // lineNo
    "InvAtimesX", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/lusolve.m" // pathName
};

static emlrtRSInfo ld_emlrtRSI{
    19,        // lineNo
    "xgetrfs", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrfs.m" // pathName
};

static emlrtRSInfo md_emlrtRSI{
    108,      // lineNo
    "cmldiv", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrfs.m" // pathName
};

static emlrtRSInfo ud_emlrtRSI{
    90,              // lineNo
    "warn_singular", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/lusolve.m" // pathName
};

static emlrtRSInfo vd_emlrtRSI{
    61,        // lineNo
    "qrsolve", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/qrsolve.m" // pathName
};

static emlrtRSInfo wd_emlrtRSI{
    72,        // lineNo
    "qrsolve", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/qrsolve.m" // pathName
};

static emlrtRSInfo xd_emlrtRSI{
    85,        // lineNo
    "qrsolve", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/qrsolve.m" // pathName
};

static emlrtRSInfo ke_emlrtRSI{
    119,         // lineNo
    "LSQFromQR", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/qrsolve.m" // pathName
};

static emlrtRSInfo le_emlrtRSI{
    126,         // lineNo
    "LSQFromQR", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/qrsolve.m" // pathName
};

static emlrtRSInfo me_emlrtRSI{
    128,         // lineNo
    "LSQFromQR", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/qrsolve.m" // pathName
};

static emlrtRSInfo ne_emlrtRSI{
    138,         // lineNo
    "LSQFromQR", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/qrsolve.m" // pathName
};

static emlrtRSInfo oe_emlrtRSI{
    40,         // lineNo
    "xunormqr", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xunormqr.m" // pathName
};

static emlrtRSInfo pe_emlrtRSI{
    106,              // lineNo
    "ceval_xunormqr", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xunormqr.m" // pathName
};

static emlrtRSInfo qe_emlrtRSI{
    112,              // lineNo
    "ceval_xunormqr", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xunormqr.m" // pathName
};

static emlrtRTEInfo f_emlrtRTEI{
    16,                                                              // lineNo
    19,                                                              // colNo
    "mldivide",                                                      // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/mldivide.m" // pName
};

// Function Definitions
namespace coder {
int32_T mldivide(const emlrtStack &sp, const real_T A_data[],
                 const int32_T A_size[2], const real_T B_data[], int32_T B_size,
                 real_T Y_data[])
{
  ptrdiff_t tmp_data[5];
  ptrdiff_t IPIV_data[4];
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  real_T b_A_data[25];
  real_T c_A_data[16];
  real_T tau_data[5];
  real_T b_B_data[4];
  int32_T jpvt_data[5];
  int32_T b_A_size[2];
  int32_T Y_size;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  if (B_size != A_size[0]) {
    emlrtErrorWithMessageIdR2018a(&sp, &f_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  st.site = &ed_emlrtRSI;
  if ((A_size[0] == 0) || (A_size[1] == 0) || (B_size == 0)) {
    int32_T loop_ub;
    loop_ub = A_size[1];
    Y_size = A_size[1];
    if (loop_ub - 1 >= 0) {
      std::memset(&Y_data[0], 0,
                  static_cast<uint32_T>(loop_ub) * sizeof(real_T));
    }
  } else if (A_size[0] == A_size[1]) {
    ptrdiff_t INFO;
    ptrdiff_t LDA;
    ptrdiff_t nrc_t;
    int32_T i;
    int32_T loop_ub;
    int32_T n;
    b_st.site = &fd_emlrtRSI;
    c_st.site = &hd_emlrtRSI;
    Y_size = B_size;
    std::copy(&B_data[0], &B_data[B_size], &Y_data[0]);
    d_st.site = &id_emlrtRSI;
    e_st.site = &kd_emlrtRSI;
    i = muIntScalarMin_sint32(A_size[0], A_size[1]);
    n = muIntScalarMin_sint32(B_size, i);
    f_st.site = &ld_emlrtRSI;
    loop_ub = A_size[0] * A_size[1];
    std::copy(&A_data[0], &A_data[loop_ub], &c_A_data[0]);
    repmat((ptrdiff_t)0.0, n, tmp_data);
    nrc_t = (ptrdiff_t)n;
    LDA = (ptrdiff_t)A_size[0];
    INFO = LAPACKE_dgetrf_work(102, nrc_t, nrc_t, &c_A_data[0], LDA,
                               &IPIV_data[0]);
    g_st.site = &md_emlrtRSI;
    if ((int32_T)INFO < 0) {
      if ((int32_T)INFO == -1010) {
        emlrtErrorWithMessageIdR2018a(&g_st, &e_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&g_st, &d_emlrtRTEI,
                                      "Coder:toolbox:LAPACKCallErrorInfo",
                                      "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                      19, &cv[0], 12, (int32_T)INFO);
      }
    }
    LAPACKE_dgetrs_work(102, 'N', nrc_t, (ptrdiff_t)1, &c_A_data[0], LDA,
                        &IPIV_data[0], &Y_data[0], (ptrdiff_t)B_size);
    if (((A_size[0] != 1) || (A_size[1] != 1)) && ((int32_T)INFO > 0)) {
      d_st.site = &jd_emlrtRSI;
      e_st.site = &ud_emlrtRSI;
      internal::warning(e_st);
    }
  } else {
    int32_T jpvt_size[2];
    int32_T i;
    int32_T loop_ub;
    int32_T rankA;
    b_st.site = &gd_emlrtRSI;
    b_A_size[0] = A_size[0];
    b_A_size[1] = A_size[1];
    loop_ub = A_size[0] * A_size[1];
    std::copy(&A_data[0], &A_data[loop_ub], &b_A_data[0]);
    c_st.site = &vd_emlrtRSI;
    internal::lapack::xgeqp3(c_st, b_A_data, b_A_size, tau_data, jpvt_data,
                             jpvt_size);
    c_st.site = &wd_emlrtRSI;
    rankA = internal::rankFromQR(c_st, b_A_data, b_A_size);
    c_st.site = &xd_emlrtRSI;
    std::copy(&B_data[0], &B_data[B_size], &b_B_data[0]);
    loop_ub = b_A_size[1];
    Y_size = b_A_size[1];
    if (loop_ub - 1 >= 0) {
      std::memset(&Y_data[0], 0,
                  static_cast<uint32_T>(loop_ub) * sizeof(real_T));
    }
    d_st.site = &ke_emlrtRSI;
    e_st.site = &oe_emlrtRSI;
    if ((b_A_size[0] != 0) && (b_A_size[1] != 0)) {
      ptrdiff_t nrc_t;
      nrc_t = (ptrdiff_t)B_size;
      nrc_t = LAPACKE_dormqr(
          102, 'L', 'T', nrc_t, (ptrdiff_t)1,
          (ptrdiff_t)muIntScalarMin_sint32(b_A_size[0], b_A_size[1]),
          &b_A_data[0], (ptrdiff_t)b_A_size[0], &tau_data[0], &b_B_data[0],
          nrc_t);
      f_st.site = &pe_emlrtRSI;
      if (internal::lapack::infocheck(f_st, (int32_T)nrc_t)) {
        for (i = 0; i < B_size; i++) {
          b_B_data[i] = rtNaN;
        }
      }
    }
    d_st.site = &me_emlrtRSI;
    if (rankA > 2147483646) {
      e_st.site = &vb_emlrtRSI;
      check_forloop_overflow_error(e_st);
    }
    i = static_cast<uint8_T>(rankA);
    for (int32_T b_i{0}; b_i < i; b_i++) {
      Y_data[jpvt_data[b_i] - 1] = b_B_data[b_i];
    }
    for (int32_T j{rankA}; j >= 1; j--) {
      int32_T n;
      i = jpvt_data[j - 1];
      loop_ub = b_A_size[0] * (j - 1);
      Y_data[i - 1] /= b_A_data[(j + loop_ub) - 1];
      d_st.site = &ne_emlrtRSI;
      n = static_cast<uint8_T>(j - 1);
      for (int32_T b_i{0}; b_i < n; b_i++) {
        int32_T i1;
        i1 = jpvt_data[b_i];
        Y_data[i1 - 1] -= Y_data[i - 1] * b_A_data[b_i + loop_ub];
      }
    }
  }
  return Y_size;
}

void mldivide(const emlrtStack &sp, const real_T A_data[],
              const int32_T A_size[2], const real_T B_data[],
              const int32_T B_size[2], real_T Y_data[], int32_T Y_size[2])
{
  ptrdiff_t IPIV_data[5];
  ptrdiff_t tmp_data[5];
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  real_T b_A_data[25];
  real_T b_B_data[25];
  real_T tau_data[5];
  int32_T jpvt_data[5];
  int32_T b_A_size[2];
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  if (B_size[0] != A_size[0]) {
    emlrtErrorWithMessageIdR2018a(&sp, &f_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  st.site = &ed_emlrtRSI;
  if ((A_size[0] == 0) || (A_size[1] == 0) ||
      ((B_size[0] == 0) || (B_size[1] == 0))) {
    int32_T loop_ub;
    Y_size[0] = A_size[1];
    Y_size[1] = B_size[1];
    loop_ub = A_size[1] * B_size[1];
    if (loop_ub - 1 >= 0) {
      std::memset(&Y_data[0], 0,
                  static_cast<uint32_T>(loop_ub) * sizeof(real_T));
    }
  } else if (A_size[0] == A_size[1]) {
    ptrdiff_t INFO;
    ptrdiff_t LDA;
    ptrdiff_t nrc_t;
    int32_T i;
    int32_T loop_ub;
    int32_T wj_tmp;
    b_st.site = &fd_emlrtRSI;
    c_st.site = &hd_emlrtRSI;
    Y_size[0] = B_size[0];
    Y_size[1] = B_size[1];
    loop_ub = B_size[0] * B_size[1];
    std::copy(&B_data[0], &B_data[loop_ub], &Y_data[0]);
    d_st.site = &id_emlrtRSI;
    e_st.site = &kd_emlrtRSI;
    i = muIntScalarMin_sint32(A_size[0], A_size[1]);
    wj_tmp = muIntScalarMin_sint32(B_size[0], i);
    f_st.site = &ld_emlrtRSI;
    loop_ub = A_size[0] * A_size[1];
    std::copy(&A_data[0], &A_data[loop_ub], &b_A_data[0]);
    repmat((ptrdiff_t)0.0, wj_tmp, tmp_data);
    nrc_t = (ptrdiff_t)wj_tmp;
    LDA = (ptrdiff_t)A_size[0];
    INFO = LAPACKE_dgetrf_work(102, nrc_t, nrc_t, &b_A_data[0], LDA,
                               &IPIV_data[0]);
    g_st.site = &md_emlrtRSI;
    if ((int32_T)INFO < 0) {
      if ((int32_T)INFO == -1010) {
        emlrtErrorWithMessageIdR2018a(&g_st, &e_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&g_st, &d_emlrtRTEI,
                                      "Coder:toolbox:LAPACKCallErrorInfo",
                                      "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                      19, &cv[0], 12, (int32_T)INFO);
      }
    }
    LAPACKE_dgetrs_work(102, 'N', nrc_t, (ptrdiff_t)B_size[1], &b_A_data[0],
                        LDA, &IPIV_data[0], &Y_data[0], (ptrdiff_t)B_size[0]);
    if (((A_size[0] != 1) || (A_size[1] != 1)) && ((int32_T)INFO > 0)) {
      d_st.site = &jd_emlrtRSI;
      e_st.site = &ud_emlrtRSI;
      internal::warning(e_st);
    }
  } else {
    int32_T jpvt_size[2];
    int32_T B_size_idx_0;
    int32_T B_size_idx_1;
    int32_T i;
    int32_T i1;
    int32_T i2;
    int32_T i3;
    int32_T loop_ub;
    int32_T m;
    int32_T rankA;
    int32_T wj_tmp;
    boolean_T overflow;
    b_st.site = &gd_emlrtRSI;
    b_A_size[0] = A_size[0];
    b_A_size[1] = A_size[1];
    loop_ub = A_size[0] * A_size[1];
    std::copy(&A_data[0], &A_data[loop_ub], &b_A_data[0]);
    c_st.site = &vd_emlrtRSI;
    internal::lapack::xgeqp3(c_st, b_A_data, b_A_size, tau_data, jpvt_data,
                             jpvt_size);
    c_st.site = &wd_emlrtRSI;
    rankA = internal::rankFromQR(c_st, b_A_data, b_A_size);
    c_st.site = &xd_emlrtRSI;
    B_size_idx_0 = B_size[0];
    i = B_size[1];
    B_size_idx_1 = B_size[1];
    loop_ub = B_size[0] * B_size[1];
    std::copy(&B_data[0], &B_data[loop_ub], &b_B_data[0]);
    Y_size[0] = b_A_size[1];
    Y_size[1] = B_size[1];
    loop_ub = b_A_size[1] * B_size[1];
    if (loop_ub - 1 >= 0) {
      std::memset(&Y_data[0], 0,
                  static_cast<uint32_T>(loop_ub) * sizeof(real_T));
    }
    d_st.site = &ke_emlrtRSI;
    e_st.site = &oe_emlrtRSI;
    if ((b_A_size[0] != 0) && (b_A_size[1] != 0)) {
      ptrdiff_t nrc_t;
      nrc_t = (ptrdiff_t)B_size[0];
      nrc_t = LAPACKE_dormqr(
          102, 'L', 'T', nrc_t, (ptrdiff_t)B_size[1],
          (ptrdiff_t)muIntScalarMin_sint32(b_A_size[0], b_A_size[1]),
          &b_A_data[0], (ptrdiff_t)b_A_size[0], &tau_data[0], &b_B_data[0],
          nrc_t);
      f_st.site = &pe_emlrtRSI;
      if (internal::lapack::infocheck(f_st, (int32_T)nrc_t)) {
        if (((int32_T)nrc_t == -10) && (B_size[1] > 1)) {
          f_st.site = &qe_emlrtRSI;
          i1 = muIntScalarMin_sint32(b_A_size[0], b_A_size[1]);
          m = b_A_size[0];
          for (int32_T j{0}; j < i1; j++) {
            if (tau_data[j] != 0.0) {
              i2 = j + 2;
              for (int32_T k{0}; k < B_size_idx_1; k++) {
                real_T c_wj_tmp;
                real_T wj;
                int32_T b_wj_tmp;
                b_wj_tmp = B_size_idx_0 * k;
                wj_tmp = j + b_wj_tmp;
                c_wj_tmp = b_B_data[wj_tmp];
                wj = c_wj_tmp;
                for (int32_T b_i{i2}; b_i <= m; b_i++) {
                  wj += b_A_data[(b_i + b_A_size[0] * j) - 1] *
                        b_B_data[(b_i + b_wj_tmp) - 1];
                }
                wj *= tau_data[j];
                if (wj != 0.0) {
                  b_B_data[wj_tmp] = c_wj_tmp - wj;
                  wj_tmp = (((((m - j) - 1) / 2) << 1) + j) + 2;
                  loop_ub = wj_tmp - 2;
                  for (int32_T b_i{i2}; b_i <= loop_ub; b_i += 2) {
                    __m128d r;
                    __m128d r1;
                    r = _mm_loadu_pd(&b_A_data[(b_i + b_A_size[0] * j) - 1]);
                    i3 = (b_i + B_size_idx_0 * k) - 1;
                    r1 = _mm_loadu_pd(&b_B_data[i3]);
                    _mm_storeu_pd(
                        &b_B_data[i3],
                        _mm_sub_pd(r1, _mm_mul_pd(r, _mm_set1_pd(wj))));
                  }
                  for (int32_T b_i{wj_tmp}; b_i <= m; b_i++) {
                    loop_ub = (b_i + b_wj_tmp) - 1;
                    b_B_data[loop_ub] -=
                        b_A_data[(b_i + b_A_size[0] * j) - 1] * wj;
                  }
                }
              }
            }
          }
        } else {
          B_size_idx_0 = B_size[0];
          loop_ub = B_size[0] * B_size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            b_B_data[i1] = rtNaN;
          }
        }
      }
    }
    d_st.site = &le_emlrtRSI;
    overflow = (rankA > 2147483646);
    i1 = static_cast<uint8_T>(rankA);
    for (int32_T k{0}; k < i; k++) {
      d_st.site = &me_emlrtRSI;
      if (overflow) {
        e_st.site = &vb_emlrtRSI;
        check_forloop_overflow_error(e_st);
      }
      for (int32_T b_i{0}; b_i < i1; b_i++) {
        Y_data[(jpvt_data[b_i] + Y_size[0] * k) - 1] =
            b_B_data[b_i + B_size_idx_0 * k];
      }
      for (int32_T j{rankA}; j >= 1; j--) {
        i2 = jpvt_data[j - 1];
        loop_ub = (i2 + Y_size[0] * k) - 1;
        wj_tmp = b_A_size[0] * (j - 1);
        Y_data[loop_ub] /= b_A_data[(j + wj_tmp) - 1];
        d_st.site = &ne_emlrtRSI;
        i3 = static_cast<uint8_T>(j - 1);
        for (int32_T b_i{0}; b_i < i3; b_i++) {
          loop_ub = Y_size[0] * k;
          m = (jpvt_data[b_i] + loop_ub) - 1;
          Y_data[m] -= Y_data[(i2 + loop_ub) - 1] * b_A_data[b_i + wj_tmp];
        }
      }
    }
  }
}

} // namespace coder

// End of code generation (mldivide.cpp)
