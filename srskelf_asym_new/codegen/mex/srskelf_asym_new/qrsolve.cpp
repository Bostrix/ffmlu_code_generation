//
// qrsolve.cpp
//
// Code generation for function 'qrsolve'
//

// Include files
#include "qrsolve.h"
#include "eml_int_forloop_overflow_check.h"
#include "infocheck.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "srskelf_asym_new_mexutil.h"
#include "warning.h"
#include "xgeqp3.h"
#include "coder_array.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <cstddef>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo jn_emlrtRSI{
    173,          // lineNo
    "rankFromQR", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/qrsolve.m" // pathName
};

static emlrtRSInfo kn_emlrtRSI{
    172,          // lineNo
    "rankFromQR", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/qrsolve.m" // pathName
};

static emlrtRSInfo mn_emlrtRSI{
    126,         // lineNo
    "LSQFromQR", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/qrsolve.m" // pathName
};

static emlrtRSInfo rn_emlrtRSI{
    112,              // lineNo
    "ceval_xunormqr", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xunormqr.m" // pathName
};

static emlrtRSInfo sn_emlrtRSI{
    21,          // lineNo
    "xzunormqr", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzunormqr.m" // pathName
};

static emlrtRSInfo tn_emlrtRSI{
    23,          // lineNo
    "xzunormqr", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzunormqr.m" // pathName
};

static emlrtRSInfo un_emlrtRSI{
    38,                    // lineNo
    "applyJthHouseHolder", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzunormqr.m" // pathName
};

static emlrtRSInfo vn_emlrtRSI{
    40,                    // lineNo
    "applyJthHouseHolder", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzunormqr.m" // pathName
};

static emlrtRSInfo wn_emlrtRSI{
    46,                    // lineNo
    "applyJthHouseHolder", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzunormqr.m" // pathName
};

static emlrtRTEInfo xn_emlrtRTEI{
    85,        // lineNo
    1,         // colNo
    "qrsolve", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/qrsolve.m" // pName
};

// Function Definitions
namespace coder {
namespace internal {
void qrsolve(const emlrtStack &sp, const array<real_T, 2U> &A,
             const array<real_T, 2U> &B, array<real_T, 2U> &Y)
{
  array<real_T, 2U> b_A;
  array<real_T, 2U> b_B;
  array<real_T, 1U> tau;
  array<int32_T, 2U> jpvt;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  int32_T i;
  int32_T i1;
  int32_T mn;
  int32_T rankA;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  b_A.set_size(&vn_emlrtRTEI, &sp, A.size(0), A.size(1));
  mn = A.size(0) * A.size(1);
  for (i = 0; i < mn; i++) {
    b_A[i] = A[i];
  }
  st.site = &gn_emlrtRSI;
  lapack::xgeqp3(st, b_A, tau, jpvt);
  st.site = &hn_emlrtRSI;
  rankA = rankFromQR(st, b_A);
  st.site = &in_emlrtRSI;
  i = B.size(1);
  b_B.set_size(&wn_emlrtRTEI, &st, B.size(0), B.size(1));
  mn = B.size(0) * B.size(1);
  for (i1 = 0; i1 < mn; i1++) {
    b_B[i1] = B[i1];
  }
  Y.set_size(&xn_emlrtRTEI, &st, b_A.size(1), B.size(1));
  mn = b_A.size(1) * b_B.size(1);
  for (i1 = 0; i1 < mn; i1++) {
    Y[i1] = 0.0;
  }
  b_st.site = &ln_emlrtRSI;
  c_st.site = &pn_emlrtRSI;
  if ((b_A.size(0) != 0) && (b_A.size(1) != 0) &&
      ((b_B.size(0) != 0) && (b_B.size(1) != 0))) {
    ptrdiff_t nrc_t;
    nrc_t = (ptrdiff_t)b_B.size(0);
    i1 = b_A.size(0);
    mn = b_A.size(1);
    nrc_t = LAPACKE_dormqr(102, 'L', 'T', nrc_t, (ptrdiff_t)b_B.size(1),
                           (ptrdiff_t)muIntScalarMin_sint32(i1, mn),
                           &(b_A.data())[0], (ptrdiff_t)b_A.size(0),
                           &(tau.data())[0], &(b_B.data())[0], nrc_t);
    d_st.site = &qn_emlrtRSI;
    if (lapack::infocheck(d_st, (int32_T)nrc_t)) {
      if (((int32_T)nrc_t == -10) && (b_B.size(1) > 1)) {
        int32_T m;
        d_st.site = &rn_emlrtRSI;
        i1 = b_A.size(0);
        mn = b_A.size(1);
        mn = muIntScalarMin_sint32(i1, mn);
        e_st.site = &sn_emlrtRSI;
        if (mn > 2147483646) {
          f_st.site = &fe_emlrtRSI;
          check_forloop_overflow_error(f_st);
        }
        m = b_A.size(0);
        for (int32_T j{0}; j < mn; j++) {
          e_st.site = &tn_emlrtRSI;
          i1 = b_B.size(1);
          if (tau[j] != 0.0) {
            int32_T a_tmp;
            boolean_T overflow_tmp;
            f_st.site = &un_emlrtRSI;
            if (b_B.size(1) > 2147483646) {
              g_st.site = &fe_emlrtRSI;
              check_forloop_overflow_error(g_st);
            }
            a_tmp = j + 2;
            overflow_tmp = ((j + 2 <= m) && (m > 2147483646));
            for (int32_T k{0}; k < i1; k++) {
              real_T wj;
              wj = b_B[j + b_B.size(0) * k];
              f_st.site = &vn_emlrtRSI;
              if (overflow_tmp) {
                g_st.site = &fe_emlrtRSI;
                check_forloop_overflow_error(g_st);
              }
              for (int32_T b_i{a_tmp}; b_i <= m; b_i++) {
                wj += b_A[(b_i + b_A.size(0) * j) - 1] *
                      b_B[(b_i + b_B.size(0) * k) - 1];
              }
              wj *= tau[j];
              if (wj != 0.0) {
                int32_T scalarLB;
                int32_T vectorUB;
                b_B[j + b_B.size(0) * k] = b_B[j + b_B.size(0) * k] - wj;
                f_st.site = &wn_emlrtRSI;
                scalarLB = (((((m - j) - 1) / 2) << 1) + j) + 2;
                vectorUB = scalarLB - 2;
                for (int32_T b_i{a_tmp}; b_i <= vectorUB; b_i += 2) {
                  __m128d r;
                  __m128d r1;
                  r = _mm_loadu_pd(&b_A[(b_i + b_A.size(0) * j) - 1]);
                  r1 = _mm_loadu_pd(&b_B[(b_i + b_B.size(0) * k) - 1]);
                  _mm_storeu_pd(&b_B[(b_i + b_B.size(0) * k) - 1],
                                _mm_sub_pd(r1, _mm_mul_pd(r, _mm_set1_pd(wj))));
                }
                for (int32_T b_i{scalarLB}; b_i <= m; b_i++) {
                  b_B[(b_i + b_B.size(0) * k) - 1] =
                      b_B[(b_i + b_B.size(0) * k) - 1] -
                      b_A[(b_i + b_A.size(0) * j) - 1] * wj;
                }
              }
            }
          }
        }
      } else {
        int32_T m;
        mn = b_B.size(0);
        m = b_B.size(1);
        b_B.set_size(&yn_emlrtRTEI, &c_st, mn, m);
        mn *= m;
        for (i1 = 0; i1 < mn; i1++) {
          b_B[i1] = rtNaN;
        }
      }
    }
  }
  b_st.site = &mn_emlrtRSI;
  if (B.size(1) > 2147483646) {
    c_st.site = &fe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T k{0}; k < i; k++) {
    b_st.site = &nn_emlrtRSI;
    if (rankA > 2147483646) {
      c_st.site = &fe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (int32_T b_i{0}; b_i < rankA; b_i++) {
      Y[(jpvt[b_i] + Y.size(0) * k) - 1] = b_B[b_i + b_B.size(0) * k];
    }
    for (int32_T j{rankA}; j >= 1; j--) {
      i1 = jpvt[j - 1];
      Y[(i1 + Y.size(0) * k) - 1] =
          Y[(i1 + Y.size(0) * k) - 1] / b_A[(j + b_A.size(0) * (j - 1)) - 1];
      b_st.site = &on_emlrtRSI;
      for (int32_T b_i{0}; b_i <= j - 2; b_i++) {
        Y[(jpvt[b_i] + Y.size(0) * k) - 1] =
            Y[(jpvt[b_i] + Y.size(0) * k) - 1] -
            Y[(i1 + Y.size(0) * k) - 1] * b_A[b_i + b_A.size(0) * (j - 1)];
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

int32_T rankFromQR(const emlrtStack &sp, const array<real_T, 2U> &A)
{
  static const int32_T iv[2]{1, 6};
  static const char_T rfmt[6]{'%', '1', '4', '.', '6', 'e'};
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T tol;
  int32_T maxmn;
  int32_T minmn;
  int32_T r;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  r = 0;
  tol = 0.0;
  if (A.size(0) < A.size(1)) {
    minmn = A.size(0);
    maxmn = A.size(1);
  } else {
    minmn = A.size(1);
    maxmn = A.size(0);
  }
  if (minmn > 0) {
    tol =
        muDoubleScalarMin(1.4901161193847656E-8,
                          2.2204460492503131E-15 * static_cast<real_T>(maxmn)) *
        muDoubleScalarAbs(A[0]);
    while ((r < minmn) && (!(muDoubleScalarAbs(A[r + A.size(0) * r]) <= tol))) {
      r++;
    }
  }
  if (r < minmn) {
    char_T str[14];
    st.site = &jn_emlrtRSI;
    y = nullptr;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 6, m, &rfmt[0]);
    emlrtAssign(&y, m);
    b_y = nullptr;
    m = emlrtCreateDoubleScalar(tol);
    emlrtAssign(&b_y, m);
    b_st.site = &or_emlrtRSI;
    emlrt_marshallIn(b_st, b_sprintf(b_st, y, b_y, k_emlrtMCI),
                     "<output of sprintf>", str);
    st.site = &kn_emlrtRSI;
    warning(st, r, str);
  }
  return r;
}

} // namespace internal
} // namespace coder

// End of code generation (qrsolve.cpp)
