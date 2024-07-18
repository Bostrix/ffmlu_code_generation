/*
 * qrupdate.c
 *
 * Code generation for function 'qrupdate'
 *
 */

/* Include files */
#include "qrupdate.h"
#include "eml_int_forloop_overflow_check.h"
#include "id_data.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include <stddef.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo eg_emlrtRSI = {
    99,         /* lineNo */
    "qrupdate", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" /* pathName
                                                                         */
};

static emlrtRSInfo fg_emlrtRSI = {
    98,         /* lineNo */
    "qrupdate", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" /* pathName
                                                                         */
};

static emlrtRSInfo gg_emlrtRSI = {
    87,         /* lineNo */
    "qrupdate", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" /* pathName
                                                                         */
};

static emlrtRSInfo hg_emlrtRSI = {
    79,         /* lineNo */
    "qrupdate", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" /* pathName
                                                                         */
};

static emlrtRSInfo ig_emlrtRSI = {
    77,         /* lineNo */
    "qrupdate", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" /* pathName
                                                                         */
};

static emlrtRSInfo jg_emlrtRSI = {
    62,         /* lineNo */
    "qrupdate", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" /* pathName
                                                                         */
};

static emlrtRSInfo kg_emlrtRSI = {
    55,         /* lineNo */
    "qrupdate", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" /* pathName
                                                                         */
};

static emlrtRSInfo lg_emlrtRSI = {
    54,         /* lineNo */
    "qrupdate", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" /* pathName
                                                                         */
};

static emlrtRSInfo sg_emlrtRSI = {
    106,   /* lineNo */
    "rot", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" /* pathName
                                                                         */
};

static emlrtRTEInfo p_emlrtRTEI = {
    26,         /* lineNo */
    5,          /* colNo */
    "qrupdate", /* fName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" /* pName
                                                                         */
};

static emlrtRTEInfo q_emlrtRTEI = {
    30,         /* lineNo */
    5,          /* colNo */
    "qrupdate", /* fName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" /* pName
                                                                         */
};

static emlrtRTEInfo r_emlrtRTEI = {
    34,         /* lineNo */
    23,         /* colNo */
    "qrupdate", /* fName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qrupdate.m" /* pName
                                                                         */
};

/* Function Declarations */
static void rot(const emlrtStack *sp, int32_T n, real_T c, real_T s,
                real_T x_data[], const int32_T x_size[2], int32_T col);

static real_T rotg(real_T x, real_T y, real_T *s, real_T *r);

/* Function Definitions */
static void rot(const emlrtStack *sp, int32_T n, real_T c, real_T s,
                real_T x_data[], const int32_T x_size[2], int32_T col)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T i;
  int32_T k;
  int32_T scalarLB;
  int32_T vectorUB;
  int32_T yk_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &sg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (n > 2147483646) {
    b_st.site = &vb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  i = (uint8_T)n;
  scalarLB = ((uint8_T)n >> 1) << 1;
  vectorUB = scalarLB - 2;
  for (k = 0; k <= vectorUB; k += 2) {
    __m128d r;
    __m128d r1;
    __m128d r2;
    __m128d r3;
    int32_T i1;
    yk_tmp = k + x_size[0] * (col - 1);
    r = _mm_loadu_pd(&x_data[yk_tmp]);
    i1 = k + x_size[0] * col;
    r1 = _mm_loadu_pd(&x_data[i1]);
    r2 = _mm_set1_pd(c);
    r3 = _mm_set1_pd(s);
    _mm_storeu_pd(&x_data[yk_tmp],
                  _mm_add_pd(_mm_mul_pd(r2, r), _mm_mul_pd(r3, r1)));
    _mm_storeu_pd(&x_data[i1],
                  _mm_sub_pd(_mm_mul_pd(r2, r1), _mm_mul_pd(r3, r)));
  }
  for (k = scalarLB; k < i; k++) {
    real_T xk;
    real_T yk;
    vectorUB = k + x_size[0] * (col - 1);
    xk = x_data[vectorUB];
    yk_tmp = k + x_size[0] * col;
    yk = x_data[yk_tmp];
    x_data[vectorUB] = c * xk + s * yk;
    x_data[yk_tmp] = c * yk - s * xk;
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

void qrupdate(const emlrtStack *sp, real_T q_data[], const int32_T q_size[2],
              real_T r_data[], const int32_T r_size[2], const real_T u_data[],
              int32_T u_size, const real_T v_data[], int32_T v_size)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  real_T w_data[4];
  real_T c_data[3];
  real_T s_data[3];
  real_T alpha1;
  real_T beta1;
  real_T d;
  real_T d1;
  int32_T b_i;
  int32_T b_m;
  int32_T i;
  int32_T j;
  int32_T m;
  int32_T mm1_tmp;
  int32_T n_tmp;
  int32_T rij_tmp;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (u_size != q_size[0]) {
    emlrtErrorWithMessageIdR2018a(
        sp, &p_emlrtRTEI, "MATLAB:qrupdate:thirdArgumentMustBeColumnVector",
        "MATLAB:qrupdate:thirdArgumentMustBeColumnVector", 2, 12, q_size[0]);
  }
  if (v_size != r_size[1]) {
    emlrtErrorWithMessageIdR2018a(
        sp, &q_emlrtRTEI, "MATLAB:qrupdate:forthArgumentMustBeColumnVector",
        "MATLAB:qrupdate:forthArgumentMustBeColumnVector", 2, 12, r_size[1]);
  }
  if ((q_size[0] != q_size[1]) || (r_size[0] != q_size[1])) {
    emlrtErrorWithMessageIdR2018a(sp, &r_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  m = q_size[0];
  n_tmp = r_size[1];
  st.site = &lg_emlrtRSI;
  b_st.site = &ng_emlrtRSI;
  if (q_size[0] != u_size) {
    if (((q_size[0] == 1) && (q_size[1] == 1)) || (u_size == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &l_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &k_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  if (u_size == 0) {
    b_m = q_size[1];
    if (b_m - 1 >= 0) {
      memset(&w_data[0], 0, (uint32_T)b_m * sizeof(real_T));
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)q_size[1];
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)q_size[0];
    lda_t = (ptrdiff_t)q_size[0];
    ldb_t = (ptrdiff_t)u_size;
    ldc_t = (ptrdiff_t)q_size[1];
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &q_data[0], &lda_t,
          (real_T *)&u_data[0], &ldb_t, &beta1, &w_data[0], &ldc_t);
  }
  st.site = &kg_emlrtRSI;
  b_m = r_size[0];
  for (j = 0; j < n_tmp; j++) {
    i = j + 2;
    for (b_i = i; b_i <= b_m; b_i++) {
      r_data[(b_i + r_size[0] * j) - 1] = 0.0;
    }
  }
  mm1_tmp = q_size[0] - 1;
  for (j = mm1_tmp; j >= 1; j--) {
    c_data[j - 1] =
        rotg(w_data[j - 1], w_data[j], &s_data[j - 1], &w_data[j - 1]);
  }
  st.site = &jg_emlrtRSI;
  for (j = 0; j < n_tmp; j++) {
    if (j + 1 > m - 1) {
      b_m = m - 2;
    } else {
      b_m = j;
    }
    for (b_i = b_m + 1; b_i >= 1; b_i--) {
      rij_tmp = b_i + r_size[0] * j;
      alpha1 = r_data[rij_tmp - 1];
      beta1 = r_data[rij_tmp];
      d = c_data[b_i - 1];
      d1 = s_data[b_i - 1];
      r_data[rij_tmp - 1] = d * alpha1 + d1 * beta1;
      r_data[rij_tmp] = d * beta1 - d1 * alpha1;
    }
  }
  for (j = mm1_tmp; j >= 1; j--) {
    st.site = &ig_emlrtRSI;
    rot(&st, m, c_data[j - 1], s_data[j - 1], q_data, q_size, j);
  }
  st.site = &hg_emlrtRSI;
  for (j = 0; j < n_tmp; j++) {
    i = r_size[0] * j;
    r_data[i] += w_data[0] * v_data[j];
    st.site = &gg_emlrtRSI;
    if (j + 1 > m) {
      b_m = (uint8_T)(m - 1);
    } else {
      b_m = (uint8_T)j;
    }
    for (b_i = 0; b_i < b_m; b_i++) {
      rij_tmp = b_i + i;
      alpha1 = r_data[rij_tmp];
      beta1 = r_data[rij_tmp + 1];
      d = c_data[b_i];
      d1 = s_data[b_i];
      r_data[rij_tmp] = d * alpha1 + d1 * beta1;
      r_data[rij_tmp + 1] = d * beta1 - d1 * alpha1;
    }
    if (j + 1 < m) {
      c_data[j] =
          rotg(r_data[j + r_size[0] * j], r_data[(j + r_size[0] * j) + 1],
               &s_data[j], &r_data[j + r_size[0] * j]);
      r_data[(j + i) + 1] = 0.0;
    }
  }
  st.site = &fg_emlrtRSI;
  i = (uint8_T)muIntScalarMin_sint32(mm1_tmp, n_tmp);
  for (j = 0; j < i; j++) {
    st.site = &eg_emlrtRSI;
    rot(&st, m, c_data[j], s_data[j], q_data, q_size, j + 1);
  }
}

/* End of code generation (qrupdate.c) */
