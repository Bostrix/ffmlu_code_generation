//
// qrupdate.cpp
//
// Code generation for function 'qrupdate'
//

// Include files
#include "qrupdate.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "blas.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <cstddef>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo rp_emlrtRSI{
    99,         // lineNo
    "qrupdate", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" // pathName
};

static emlrtRSInfo sp_emlrtRSI{
    98,         // lineNo
    "qrupdate", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" // pathName
};

static emlrtRSInfo tp_emlrtRSI{
    87,         // lineNo
    "qrupdate", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" // pathName
};

static emlrtRSInfo up_emlrtRSI{
    79,         // lineNo
    "qrupdate", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" // pathName
};

static emlrtRSInfo vp_emlrtRSI{
    77,         // lineNo
    "qrupdate", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" // pathName
};

static emlrtRSInfo wp_emlrtRSI{
    62,         // lineNo
    "qrupdate", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" // pathName
};

static emlrtRSInfo xp_emlrtRSI{
    55,         // lineNo
    "qrupdate", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" // pathName
};

static emlrtRSInfo yp_emlrtRSI{
    54,         // lineNo
    "qrupdate", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" // pathName
};

static emlrtRSInfo aq_emlrtRSI{
    149,                 // lineNo
    "zeroLowerTriangle", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" // pathName
};

static emlrtRSInfo bq_emlrtRSI{
    150,                 // lineNo
    "zeroLowerTriangle", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" // pathName
};

static emlrtRSInfo cq_emlrtRSI{
    106,   // lineNo
    "rot", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" // pathName
};

static emlrtRTEInfo fc_emlrtRTEI{
    26,         // lineNo
    5,          // colNo
    "qrupdate", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" // pName
};

static emlrtRTEInfo gc_emlrtRTEI{
    30,         // lineNo
    5,          // colNo
    "qrupdate", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" // pName
};

static emlrtRTEInfo hc_emlrtRTEI{
    34,         // lineNo
    23,         // colNo
    "qrupdate", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" // pName
};

static emlrtRTEInfo cp_emlrtRTEI{
    54,         // lineNo
    1,          // colNo
    "qrupdate", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" // pName
};

static emlrtRTEInfo dp_emlrtRTEI{
    57,         // lineNo
    5,          // colNo
    "qrupdate", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" // pName
};

// Function Declarations
namespace coder {
static void rot(const emlrtStack &sp, int32_T n, real_T c, real_T s,
                array<real_T, 2U> &x, int32_T col);

static real_T rotg(real_T x, real_T y, real_T *s, real_T *r);

} // namespace coder

// Function Definitions
namespace coder {
static void rot(const emlrtStack &sp, int32_T n, real_T c, real_T s,
                array<real_T, 2U> &x, int32_T col)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &cq_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (n > 2147483646) {
    b_st.site = &fe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  scalarLB = (n / 2) << 1;
  vectorUB = scalarLB - 2;
  for (int32_T k{0}; k <= vectorUB; k += 2) {
    __m128d r;
    __m128d r1;
    __m128d r2;
    __m128d r3;
    r = _mm_loadu_pd(&x[k + x.size(0) * (col - 1)]);
    r1 = _mm_loadu_pd(&x[k + x.size(0) * col]);
    r2 = _mm_set1_pd(c);
    r3 = _mm_set1_pd(s);
    _mm_storeu_pd(&x[k + x.size(0) * (col - 1)],
                  _mm_add_pd(_mm_mul_pd(r2, r), _mm_mul_pd(r3, r1)));
    _mm_storeu_pd(&x[k + x.size(0) * col],
                  _mm_sub_pd(_mm_mul_pd(r2, r1), _mm_mul_pd(r3, r)));
  }
  for (int32_T k{scalarLB}; k < n; k++) {
    real_T xk;
    real_T yk;
    xk = x[k + x.size(0) * (col - 1)];
    yk = x[k + x.size(0) * col];
    x[k + x.size(0) * (col - 1)] = c * xk + s * yk;
    x[k + x.size(0) * col] = c * yk - s * xk;
  }
}

static real_T rotg(real_T x, real_T y, real_T *s, real_T *r)
{
  real_T abs1x;
  real_T abs1y;
  real_T c;
  real_T t;
  abs1x = muDoubleScalarAbs(x);
  abs1y = muDoubleScalarAbs(y);
  t = abs1x + abs1y;
  if (abs1y == 0.0) {
    c = 1.0;
    *s = 0.0;
    *r = x;
  } else if (abs1x == 0.0) {
    c = 0.0;
    *s = 1.0;
    *r = y;
  } else {
    x /= t;
    y /= t;
    abs1x = muDoubleScalarAbs(x);
    abs1y = muDoubleScalarHypot(abs1x, muDoubleScalarAbs(y));
    c = abs1x / abs1y;
    x /= abs1x;
    *s = y * x / abs1y;
    abs1y *= t;
    *r = abs1y * x;
  }
  return c;
}

void qrupdate(const emlrtStack &sp, array<real_T, 2U> &q, array<real_T, 2U> &r,
              const array<real_T, 1U> &u, const array<real_T, 1U> &v)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  array<real_T, 1U> c;
  array<real_T, 1U> s;
  array<real_T, 1U> w;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T alpha1;
  real_T beta1;
  int32_T b_m;
  int32_T m;
  int32_T mj;
  int32_T n_tmp;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (u.size(0) != q.size(0)) {
    emlrtErrorWithMessageIdR2018a(
        &sp, &fc_emlrtRTEI, "MATLAB:qrupdate:thirdArgumentMustBeColumnVector",
        "MATLAB:qrupdate:thirdArgumentMustBeColumnVector", 2, 12, q.size(0));
  }
  if (v.size(0) != r.size(1)) {
    emlrtErrorWithMessageIdR2018a(
        &sp, &gc_emlrtRTEI, "MATLAB:qrupdate:forthArgumentMustBeColumnVector",
        "MATLAB:qrupdate:forthArgumentMustBeColumnVector", 2, 12, r.size(1));
  }
  if ((q.size(0) != q.size(1)) || (r.size(0) != q.size(1))) {
    emlrtErrorWithMessageIdR2018a(&sp, &hc_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  m = q.size(0);
  n_tmp = r.size(1);
  st.site = &yp_emlrtRSI;
  b_st.site = &mj_emlrtRSI;
  if (q.size(0) != u.size(0)) {
    if (((q.size(0) == 1) && (q.size(1) == 1)) || (u.size(0) == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &mb_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &nb_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &xj_emlrtRSI;
  if (u.size(0) == 0) {
    b_m = q.size(1);
    w.set_size(&cp_emlrtRTEI, &b_st, b_m);
    for (mj = 0; mj < b_m; mj++) {
      w[mj] = 0.0;
    }
  } else {
    c_st.site = &yj_emlrtRSI;
    d_st.site = &ak_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)q.size(1);
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)q.size(0);
    lda_t = (ptrdiff_t)q.size(0);
    ldb_t = (ptrdiff_t)u.size(0);
    ldc_t = (ptrdiff_t)q.size(1);
    w.set_size(&io_emlrtRTEI, &d_st, q.size(1));
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &(q.data())[0], &lda_t,
          &(((array<real_T, 1U> *)&u)->data())[0], &ldb_t, &beta1,
          &(w.data())[0], &ldc_t);
  }
  st.site = &xp_emlrtRSI;
  b_m = r.size(0);
  b_st.site = &aq_emlrtRSI;
  if (r.size(1) > 2147483646) {
    c_st.site = &fe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T j{0}; j < n_tmp; j++) {
    mj = j + 2;
    b_st.site = &bq_emlrtRSI;
    if ((j + 2 <= b_m) && (b_m > 2147483646)) {
      c_st.site = &fe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (int32_T i{mj}; i <= b_m; i++) {
      r[(i + r.size(0) * j) - 1] = 0.0;
    }
  }
  b_m = q.size(0) - 1;
  c.set_size(&dp_emlrtRTEI, &sp, b_m);
  s.set_size(&dp_emlrtRTEI, &sp, b_m);
  for (int32_T j{b_m}; j >= 1; j--) {
    c[j - 1] = rotg(w[j - 1], w[j], &s[j - 1], &w[j - 1]);
  }
  st.site = &wp_emlrtRSI;
  if (r.size(1) > 2147483646) {
    b_st.site = &fe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T j{0}; j < n_tmp; j++) {
    if (j + 1 > m - 1) {
      mj = m - 2;
    } else {
      mj = j;
    }
    for (int32_T i{mj + 1}; i >= 1; i--) {
      real_T d;
      real_T d1;
      alpha1 = r[(i + r.size(0) * j) - 1];
      beta1 = r[i + r.size(0) * j];
      d = c[i - 1];
      d1 = s[i - 1];
      r[(i + r.size(0) * j) - 1] = d * alpha1 + d1 * beta1;
      r[i + r.size(0) * j] = d * beta1 - d1 * alpha1;
    }
  }
  for (int32_T j{b_m}; j >= 1; j--) {
    st.site = &vp_emlrtRSI;
    rot(st, m, c[j - 1], s[j - 1], q, j);
  }
  st.site = &up_emlrtRSI;
  if (r.size(1) > 2147483646) {
    b_st.site = &fe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T j{0}; j < n_tmp; j++) {
    r[r.size(0) * j] = r[r.size(0) * j] + w[0] * v[j];
    if (j + 1 > m) {
      mj = m - 1;
    } else {
      mj = j;
    }
    st.site = &tp_emlrtRSI;
    for (int32_T i{0}; i < mj; i++) {
      alpha1 = r[i + r.size(0) * j];
      beta1 = r[(i + r.size(0) * j) + 1];
      r[i + r.size(0) * j] = c[i] * alpha1 + s[i] * beta1;
      r[(i + r.size(0) * j) + 1] = c[i] * beta1 - s[i] * alpha1;
    }
    if (j + 1 < m) {
      c[j] = rotg(r[j + r.size(0) * j], r[(j + r.size(0) * j) + 1], &s[j],
                  &r[j + r.size(0) * j]);
      r[(j + r.size(0) * j) + 1] = 0.0;
    }
  }
  mj = muIntScalarMin_sint32(b_m, n_tmp);
  st.site = &sp_emlrtRSI;
  for (int32_T j{0}; j < mj; j++) {
    st.site = &rp_emlrtRSI;
    rot(st, m, c[j], s[j], q, j + 1);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (qrupdate.cpp)
