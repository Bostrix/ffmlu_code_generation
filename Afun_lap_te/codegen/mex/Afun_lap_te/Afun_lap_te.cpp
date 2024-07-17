//
// Afun_lap_te.cpp
//
// Code generation for function 'Afun_lap_te'
//

// Include files
#include "Afun_lap_te.h"
#include "Afun_lap_te_data.h"
#include "Afun_lap_te_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sparse.h"
#include "spget_quadcorr.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    10,            // lineNo
    "Afun_lap_te", // fcnName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "Afun_lap_te.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    12,            // lineNo
    "Afun_lap_te", // fcnName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "Afun_lap_te.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    18,            // lineNo
    "Afun_lap_te", // fcnName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "Afun_lap_te.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    19,            // lineNo
    "Afun_lap_te", // fcnName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "Afun_lap_te.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    10,                   // lineNo
    "lap_neumann_kernel", // fcnName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "lap_neumann_kernel.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    11,               // lineNo
    "spget_quadcorr", // fcnName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "spget_quadcorr.m" // pathName
};

static emlrtRSInfo g_emlrtRSI{
    14,               // lineNo
    "spget_quadcorr", // fcnName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "spget_quadcorr.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    16,               // lineNo
    "spget_quadcorr", // fcnName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "spget_quadcorr.m" // pathName
};

static emlrtRSInfo i_emlrtRSI{
    37,                                                              // lineNo
    "sort",                                                          // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/sort.m" // pathName
};

static emlrtRSInfo nb_emlrtRSI{
    31,                                                            // lineNo
    "find",                                                        // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo ob_emlrtRSI{
    138,                                                           // lineNo
    "eml_find",                                                    // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo pb_emlrtRSI{
    202,                                                           // lineNo
    "find_first_nonempty_triples",                                 // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo qb_emlrtRSI{
    205,                                                           // lineNo
    "find_first_nonempty_triples",                                 // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo rb_emlrtRSI{
    253,                                                           // lineNo
    "find_first_nonempty_triples",                                 // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo sb_emlrtRSI{
    254,                                                           // lineNo
    "find_first_nonempty_triples",                                 // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo tb_emlrtRSI{
    255,                                                           // lineNo
    "find_first_nonempty_triples",                                 // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtECInfo emlrtECI{
    -1,               // nDims
    24,               // lineNo
    5,                // colNo
    "spget_quadcorr", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "spget_quadcorr.m" // pName
};

static emlrtRTEInfo emlrtRTEI{
    13,                                                            // lineNo
    9,                                                             // colNo
    "sqrt",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elfun/sqrt.m" // pName
};

static emlrtRTEInfo b_emlrtRTEI{
    239,                                                           // lineNo
    1,                                                             // colNo
    "find_first_nonempty_triples",                                 // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtBCInfo emlrtBCI{
    1,                // iFirst
    8000,             // iLast
    12,               // lineNo
    5,                // colNo
    "P",              // aName
    "spget_quadcorr", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "spget_quadcorr.m", // pName
    3                   // checkKind
};

static emlrtDCInfo emlrtDCI{
    195,                                                            // lineNo
    30,                                                             // colNo
    "find_first_nonempty_triples",                                  // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m", // pName
    4                                                               // checkKind
};

static emlrtBCInfo b_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    33,                 // lineNo
    36,                 // colNo
    "elements_to_find", // aName
    "find_locations_t", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "spget_quadcorr.m", // pName
    0                   // checkKind
};

static emlrtBCInfo c_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    38,                 // lineNo
    14,                 // colNo
    "locs",             // aName
    "find_locations_t", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "spget_quadcorr.m", // pName
    0                   // checkKind
};

static emlrtBCInfo d_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    20,               // lineNo
    11,               // colNo
    "I",              // aName
    "spget_quadcorr", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "spget_quadcorr.m", // pName
    0                   // checkKind
};

static emlrtBCInfo e_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    21,               // lineNo
    11,               // colNo
    "J",              // aName
    "spget_quadcorr", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "spget_quadcorr.m", // pName
    0                   // checkKind
};

static emlrtBCInfo f_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    22,               // lineNo
    13,               // colNo
    "S_",             // aName
    "spget_quadcorr", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "spget_quadcorr.m", // pName
    0                   // checkKind
};

static emlrtBCInfo g_emlrtBCI{
    1,                // iFirst
    8000,             // iLast
    24,               // lineNo
    9,                // colNo
    "P",              // aName
    "spget_quadcorr", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "spget_quadcorr.m", // pName
    0                   // checkKind
};

static emlrtBCInfo i_emlrtBCI{
    1,             // iFirst
    8000,          // iLast
    10,            // lineNo
    51,            // colNo
    "x",           // aName
    "Afun_lap_te", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "Afun_lap_te.m", // pName
    0                // checkKind
};

static emlrtDCInfo c_emlrtDCI{
    10,            // lineNo
    51,            // colNo
    "Afun_lap_te", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "Afun_lap_te.m", // pName
    1                // checkKind
};

static emlrtBCInfo j_emlrtBCI{
    1,             // iFirst
    8000,          // iLast
    10,            // lineNo
    44,            // colNo
    "x",           // aName
    "Afun_lap_te", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "Afun_lap_te.m", // pName
    0                // checkKind
};

static emlrtDCInfo d_emlrtDCI{
    10,            // lineNo
    44,            // colNo
    "Afun_lap_te", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "Afun_lap_te.m", // pName
    1                // checkKind
};

static emlrtRTEInfo h_emlrtRTEI{
    195,                                                           // lineNo
    24,                                                            // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo i_emlrtRTEI{
    197,                                                           // lineNo
    24,                                                            // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo j_emlrtRTEI{
    199,                                                           // lineNo
    24,                                                            // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo k_emlrtRTEI{
    253,                                                           // lineNo
    5,                                                             // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo l_emlrtRTEI{
    254,                                                           // lineNo
    5,                                                             // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo m_emlrtRTEI{
    255,                                                           // lineNo
    5,                                                             // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo n_emlrtRTEI{
    247,                                                           // lineNo
    17,                                                            // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo o_emlrtRTEI{
    248,                                                           // lineNo
    13,                                                            // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo p_emlrtRTEI{
    249,                                                           // lineNo
    13,                                                            // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo q_emlrtRTEI{
    133,                                                           // lineNo
    17,                                                            // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo r_emlrtRTEI{
    134,                                                           // lineNo
    13,                                                            // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo s_emlrtRTEI{
    135,                                                           // lineNo
    13,                                                            // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo t_emlrtRTEI{
    16,               // lineNo
    5,                // colNo
    "spget_quadcorr", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "spget_quadcorr.m" // pName
};

static emlrtRTEInfo u_emlrtRTEI{
    2,             // lineNo
    14,            // colNo
    "Afun_lap_te", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "Afun_lap_te.m" // pName
};

static emlrtRTEInfo v_emlrtRTEI{
    24,               // lineNo
    14,               // colNo
    "spget_quadcorr", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "spget_quadcorr.m" // pName
};

static emlrtRSInfo vb_emlrtRSI{
    24,               // lineNo
    "spget_quadcorr", // fcnName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "spget_quadcorr.m" // pathName
};

// Function Definitions
void Afun_lap_te(Afun_lap_teStackData *SD, const emlrtStack *sp,
                 const real_T i[819], const real_T j[5], const real_T x[24000],
                 const real_T nu[24000], const real_T area[8000],
                 const real_T P[8000], const coder::sparse *S,
                 const real_T contrast[8000], real_T wuse, real_T A[4095])
{
  __m128d r;
  __m128d r2;
  coder::sparse c_x;
  coder::array<real_T, 1U> idx;
  coder::array<real_T, 1U> v;
  coder::array<int32_T, 1U> b_I;
  coder::array<int32_T, 1U> jj;
  coder::array<int32_T, 1U> r1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T M[4095];
  real_T dr[4095];
  real_T dz[4095];
  real_T b_x[2457];
  real_T nuuse[2457];
  real_T b_y[819];
  real_T y[15];
  real_T b_area[5];
  real_T dv[2];
  real_T dv1[2];
  real_T y_tmp;
  int32_T iidx[819];
  int32_T left;
  int32_T loop_ub;
  int32_T mid;
  int32_T nx;
  int32_T right;
  int16_T b_tmp_data[4095];
  int16_T tmp_data[4095];
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  AFUN(I,J) computes entries of the matrix A to be factorized at the
  //  index sets I and J.  This handles the near-field correction.
  for (left = 0; left < 5; left++) {
    std::copy(&i[0], &i[819], &SD->f0.b_I[left * 819]);
    for (right = 0; right < 819; right++) {
      nx = right + 819 * left;
      SD->f0.J[nx] = j[left];
    }
  }
  st.site = &emlrtRSI;
  for (mid = 0; mid < 819; mid++) {
    y_tmp = i[mid];
    right = static_cast<int32_T>(muDoubleScalarFloor(y_tmp));
    if (y_tmp != right) {
      emlrtIntegerCheckR2012b(y_tmp, &d_emlrtDCI, &st);
    }
    left = static_cast<int32_T>(y_tmp);
    if ((left < 1) || (left > 8000)) {
      emlrtDynamicBoundsCheckR2012b(left, 1, 8000, &j_emlrtBCI, &st);
    }
    nx = 3 * (left - 1);
    b_x[3 * mid] = x[nx];
    if (left != right) {
      emlrtIntegerCheckR2012b(y_tmp, &d_emlrtDCI, &st);
    }
    b_x[3 * mid + 1] = x[nx + 1];
    if (left != right) {
      emlrtIntegerCheckR2012b(y_tmp, &d_emlrtDCI, &st);
    }
    b_x[3 * mid + 2] = x[nx + 2];
  }
  for (mid = 0; mid < 5; mid++) {
    y_tmp = j[mid];
    right = static_cast<int32_T>(muDoubleScalarFloor(y_tmp));
    if (y_tmp != right) {
      emlrtIntegerCheckR2012b(y_tmp, &c_emlrtDCI, &st);
    }
    left = static_cast<int32_T>(y_tmp);
    if ((left < 1) || (left > 8000)) {
      emlrtDynamicBoundsCheckR2012b(left, 1, 8000, &i_emlrtBCI, &st);
    }
    nx = 3 * (left - 1);
    y[3 * mid] = x[nx];
    if (left != right) {
      emlrtIntegerCheckR2012b(y_tmp, &c_emlrtDCI, &st);
    }
    y[3 * mid + 1] = x[nx + 1];
    if (left != right) {
      emlrtIntegerCheckR2012b(y_tmp, &c_emlrtDCI, &st);
    }
    y[3 * mid + 2] = x[nx + 2];
  }
  for (mid = 0; mid < 819; mid++) {
    nx = 3 * (static_cast<int32_T>(i[mid]) - 1);
    nuuse[3 * mid] = nu[nx];
    nuuse[3 * mid + 1] = nu[nx + 1];
    nuuse[3 * mid + 2] = nu[nx + 2];
  }
  //  KFUN(X,Y,zpars,NU) computes the Helmholtz potential evaluated
  //  pairwise between points in X and points in Y (does not handle the
  //  singularity).  zpars says which layer potential to use
  //  using the surface normal vectors in NU.
  for (left = 0; left < 5; left++) {
    real_T d;
    real_T d1;
    y_tmp = y[3 * left];
    d = y[3 * left + 1];
    d1 = y[3 * left + 2];
    for (right = 0; right < 819; right++) {
      nx = right + 819 * left;
      SD->f0.dx[nx] = b_x[3 * right] - y_tmp;
      SD->f0.dy[nx] = b_x[3 * right + 1] - d;
      dz[nx] = b_x[3 * right + 2] - d1;
    }
  }
  for (left = 0; left <= 4092; left += 2) {
    r = _mm_loadu_pd(&SD->f0.dx[left]);
    _mm_storeu_pd(&dr[left], _mm_mul_pd(r, r));
    r = _mm_loadu_pd(&SD->f0.dy[left]);
    _mm_storeu_pd(&SD->f0.c[left], _mm_mul_pd(r, r));
    r = _mm_loadu_pd(&dz[left]);
    _mm_storeu_pd(&M[left], _mm_mul_pd(r, r));
  }
  dr[4094] = SD->f0.dx[4094] * SD->f0.dx[4094];
  SD->f0.c[4094] = SD->f0.dy[4094] * SD->f0.dy[4094];
  M[4094] = dz[4094] * dz[4094];
  b_st.site = &e_emlrtRSI;
  p = false;
  for (left = 0; left < 4095; left++) {
    y_tmp = (dr[left] + SD->f0.c[left]) + M[left];
    dr[left] = y_tmp;
    if (p || (y_tmp < 0.0)) {
      p = true;
    }
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  for (left = 0; left <= 4092; left += 2) {
    r = _mm_loadu_pd(&dr[left]);
    _mm_storeu_pd(&dr[left], _mm_sqrt_pd(r));
  }
  dr[4094] = muDoubleScalarSqrt(dr[4094]);
  for (left = 0; left < 5; left++) {
    for (right = 0; right < 819; right++) {
      nx = right + 819 * left;
      SD->f0.c[nx] = nuuse[3 * right] * SD->f0.dx[nx];
      SD->f0.dx[nx] = nuuse[3 * right + 1] * SD->f0.dy[nx];
      M[nx] = nuuse[3 * right + 2] * dz[nx];
    }
  }
  for (left = 0; left < 4095; left++) {
    y_tmp = dr[left];
    SD->f0.c[left] = -0.079577471545947673 *
                     ((SD->f0.c[left] + SD->f0.dx[left]) + M[left]) /
                     muDoubleScalarPower(y_tmp, 3.0);
    if (y_tmp == 0.0) {
      SD->f0.c[left] = 0.0;
    }
  }
  for (left = 0; left < 5; left++) {
    for (right = 0; right <= 816; right += 2) {
      mid = right + 819 * left;
      r = _mm_loadu_pd(&SD->f0.c[mid]);
      _mm_storeu_pd(
          &A[mid],
          _mm_mul_pd(r, _mm_set1_pd(area[static_cast<int32_T>(j[left]) - 1])));
    }
    nx = 819 * left + 818;
    A[nx] = SD->f0.c[nx] * area[static_cast<int32_T>(j[left]) - 1];
  }
  for (mid = 0; mid <= 4092; mid += 2) {
    r = _mm_loadu_pd(&A[mid]);
    r = _mm_mul_pd(_mm_set1_pd(2.0), r);
    _mm_storeu_pd(&A[mid], r);
    _mm_storeu_pd(&M[mid], r);
  }
  M[4094] = 2.0 * A[4094];
  for (left = 0; left < 5; left++) {
    for (right = 0; right < 819; right++) {
      nx = right + 819 * left;
      A[nx] = contrast[static_cast<int32_T>(i[right]) - 1] * M[nx];
    }
  }
  st.site = &b_emlrtRSI;
  std::copy(&P[0], &P[8000], &SD->f0.P[0]);
  //  SPGET_quadcorr(I,J,P,S) computes entries of a sparse matrix of near-field
  //  corrections that should be added to the kernel matrix, as used in
  //  AFUN. P is the permutation required for extracting near
  //  quadrature correction and is only used as a temporary array,
  //  and S stores the sparse matrix corresponding
  //  to the quadrature correction
  b_st.site = &f_emlrtRSI;
  std::copy(&i[0], &i[819], &b_y[0]);
  c_st.site = &i_emlrtRSI;
  coder::internal::sort(c_st, b_y, iidx);
  for (mid = 0; mid < 819; mid++) {
    right = static_cast<int32_T>(b_y[mid]);
    if ((right < 1) || (right > 8000)) {
      emlrtDynamicBoundsCheckR2012b(right, 1, 8000, &emlrtBCI, &b_st);
    }
    SD->f0.P[right - 1] = iidx[mid];
  }
  std::memset(&M[0], 0, 4095U * sizeof(real_T));
  b_st.site = &g_emlrtRSI;
  c_st.site = &g_emlrtRSI;
  S->parenReference(c_st, j, c_x);
  c_st.site = &nb_emlrtRSI;
  left = c_x.colidx[c_x.colidx.size(0) - 1];
  nx = left - 2;
  if (left - 1 == 0) {
    b_I.set_size(&q_emlrtRTEI, &c_st, 0);
    jj.set_size(&r_emlrtRTEI, &c_st, 0);
    v.set_size(&s_emlrtRTEI, &c_st, 0);
  } else {
    d_st.site = &ob_emlrtRSI;
    if (left - 1 < 0) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(left - 1), &emlrtDCI,
                                  &d_st);
    }
    b_I.set_size(&h_emlrtRTEI, &d_st, left - 1);
    jj.set_size(&i_emlrtRTEI, &d_st, left - 1);
    v.set_size(&j_emlrtRTEI, &d_st, left - 1);
    e_st.site = &pb_emlrtRSI;
    if (left - 1 > 2147483646) {
      f_st.site = &s_emlrtRSI;
      coder::check_forloop_overflow_error(f_st);
    }
    for (right = 0; right <= nx; right++) {
      b_I[right] = c_x.rowidx[right];
    }
    e_st.site = &qb_emlrtRSI;
    if (left - 1 > 2147483646) {
      f_st.site = &s_emlrtRSI;
      coder::check_forloop_overflow_error(f_st);
    }
    for (right = 0; right <= nx; right++) {
      v[right] = c_x.d[right];
    }
    right = 0;
    nx = 1;
    while (right < left - 1) {
      if (right == c_x.colidx[nx] - 1) {
        nx++;
      } else {
        right++;
        jj[right - 1] = nx;
      }
    }
    if (right > left - 1) {
      emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (left - 1 == 1) {
      if (right == 0) {
        b_I.set_size(&n_emlrtRTEI, &d_st, 0);
        jj.set_size(&o_emlrtRTEI, &d_st, 0);
        v.set_size(&p_emlrtRTEI, &d_st, 0);
      }
    } else {
      int32_T iv[2];
      iv[0] = 1;
      iv[1] = right;
      e_st.site = &rb_emlrtRSI;
      coder::internal::indexShapeCheck(e_st, b_I.size(0), iv);
      b_I.set_size(&k_emlrtRTEI, &d_st, right);
      iv[0] = 1;
      iv[1] = right;
      e_st.site = &sb_emlrtRSI;
      coder::internal::indexShapeCheck(e_st, jj.size(0), iv);
      jj.set_size(&l_emlrtRTEI, &d_st, right);
      iv[0] = 1;
      iv[1] = right;
      e_st.site = &tb_emlrtRSI;
      coder::internal::indexShapeCheck(e_st, v.size(0), iv);
      v.set_size(&m_emlrtRTEI, &d_st, right);
    }
  }
  b_st.site = &h_emlrtRSI;
  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  //  Initialize an empty array to store the locations
  loop_ub = b_I.size(0);
  idx.set_size(&t_emlrtRTEI, &b_st, b_I.size(0));
  for (mid = 0; mid < loop_ub; mid++) {
    idx[mid] = 0.0;
  }
  //  Iterate over each element to find
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (b_i + 1 > loop_ub) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, loop_ub, &b_emlrtBCI, &b_st);
    }
    nx = b_I[b_i];
    //  Use the local function binary_search to find the location of the element
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    //  Initialize the bounds for the search
    left = 1;
    right = 819;
    //  Perform the binary search
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (left <= right) {
        //  Calculate the midpoint
        mid = static_cast<int32_T>(muDoubleScalarFloor(
                  static_cast<real_T>(left + right) / 2.0)) -
              1;
        //  Check if the target is found
        if (b_y[mid] == nx) {
          if (b_i + 1 > idx.size(0)) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, idx.size(0), &c_emlrtBCI,
                                          &b_st);
          }
          idx[b_i] = static_cast<real_T>(mid) + 1.0;
          exitg1 = 1;
        } else {
          if (b_y[mid] < nx) {
            left = mid + 2;
          } else {
            right = mid;
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&b_st);
          }
        }
      } else {
        //  If the element is not found, return -1
        if (b_i + 1 > idx.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, idx.size(0), &c_emlrtBCI,
                                        &b_st);
        }
        idx[b_i] = -1.0;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
    //  If the element is found (location is not -1), add it to the locs array
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }
  }
  //  Replace ismembc with custom function
  //  Filter out invalid indices
  nx = idx.size(0) - 1;
  right = 0;
  for (int32_T b_i{0}; b_i <= nx; b_i++) {
    if (idx[b_i] > 0.0) {
      right++;
    }
  }
  r1.set_size(&u_emlrtRTEI, &st, right);
  left = 0;
  for (int32_T b_i{0}; b_i <= nx; b_i++) {
    if (idx[b_i] > 0.0) {
      r1[left] = b_i;
      left++;
    }
  }
  nx = r1.size(0);
  for (mid = 0; mid < nx; mid++) {
    if (r1[mid] > b_I.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r1[mid], 0, b_I.size(0) - 1, &d_emlrtBCI,
                                    &st);
    }
  }
  for (mid = 0; mid < nx; mid++) {
    if (r1[mid] > jj.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r1[mid], 0, jj.size(0) - 1, &e_emlrtBCI,
                                    &st);
    }
  }
  for (mid = 0; mid < nx; mid++) {
    if (r1[mid] > v.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r1[mid], 0, v.size(0) - 1, &f_emlrtBCI,
                                    &st);
    }
  }
  for (mid = 0; mid < nx; mid++) {
    right = b_I[r1[mid]];
    if ((right < 1) || (right > 8000)) {
      emlrtDynamicBoundsCheckR2012b(right, 1, 8000, &g_emlrtBCI, &st);
    }
  }
  idx.set_size(&v_emlrtRTEI, &st, r1.size(0));
  for (mid = 0; mid < nx; mid++) {
    idx[mid] = (static_cast<real_T>(jj[r1[mid]]) - 1.0) * 819.0;
  }
  if (r1.size(0) == idx.size(0)) {
    jj.set_size(&w_emlrtRTEI, &st, r1.size(0));
    for (mid = 0; mid < nx; mid++) {
      y_tmp = SD->f0.P[b_I[r1[mid]] - 1] + idx[mid];
      if (y_tmp != static_cast<int32_T>(muDoubleScalarFloor(y_tmp))) {
        emlrtIntegerCheckR2012b(y_tmp, &b_emlrtDCI, &st);
      }
      if ((static_cast<int32_T>(y_tmp) < 1) ||
          (static_cast<int32_T>(y_tmp) > 4095)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(y_tmp), 1, 4095,
                                      &h_emlrtBCI, &st);
      }
      jj[mid] = static_cast<int32_T>(y_tmp);
    }
    loop_ub = jj.size(0);
    b_I.set_size(&w_emlrtRTEI, &st, jj.size(0));
    for (mid = 0; mid < loop_ub; mid++) {
      b_I[mid] = jj[mid];
    }
  } else {
    b_st.site = &vb_emlrtRSI;
    binary_expand_op(b_st, b_I, SD->f0.P, r1, idx);
  }
  loop_ub = r1.size(0);
  if (b_I.size(0) != r1.size(0)) {
    emlrtSubAssignSizeCheck1dR2017a(b_I.size(0), r1.size(0), &emlrtECI, &st);
  }
  for (mid = 0; mid < loop_ub; mid++) {
    M[b_I[mid] - 1] = v[r1[mid]];
  }
  for (left = 0; left <= 4092; left += 2) {
    r = _mm_loadu_pd(&M[left]);
    r = _mm_mul_pd(_mm_set1_pd(-2.0), r);
    _mm_storeu_pd(&M[left], r);
    _mm_storeu_pd(&dv[0], r);
    dv1[0] = muDoubleScalarAbs(dv[0]);
    dv1[1] = muDoubleScalarAbs(dv[1]);
    r = _mm_loadu_pd(&dv1[0]);
    _mm_storeu_pd(&SD->f0.c[left], r);
  }
  y_tmp = -2.0 * M[4094];
  M[4094] = y_tmp;
  SD->f0.c[4094] = muDoubleScalarAbs(y_tmp);
  right = 0;
  left = 0;
  for (int32_T b_i{0}; b_i < 4095; b_i++) {
    if (SD->f0.c[b_i] != 0.0) {
      right++;
      tmp_data[left] = static_cast<int16_T>(b_i);
      left++;
    }
  }
  for (mid = 0; mid < right; mid++) {
    int16_T c_i;
    c_i = tmp_data[mid];
    SD->f0.c[mid] = A[c_i] + M[c_i];
  }
  for (mid = 0; mid < right; mid++) {
    A[tmp_data[mid]] = SD->f0.c[mid];
  }
  right = 0;
  left = 0;
  for (int32_T b_i{0}; b_i < 4095; b_i++) {
    if (SD->f0.b_I[b_i] == SD->f0.J[b_i]) {
      right++;
      b_tmp_data[left] = static_cast<int16_T>(b_i);
      left++;
    }
  }
  for (mid = 0; mid < right; mid++) {
    SD->f0.c[mid] = A[b_tmp_data[mid]] + 1.0;
  }
  for (mid = 0; mid < right; mid++) {
    A[b_tmp_data[mid]] = SD->f0.c[mid];
  }
  for (mid = 0; mid < 5; mid++) {
    b_area[mid] = area[static_cast<int32_T>(j[mid]) - 1];
    for (right = 0; right <= 816; right += 2) {
      left = right + 819 * mid;
      r = _mm_loadu_pd(&A[left]);
      _mm_storeu_pd(&A[left], _mm_add_pd(r, _mm_set1_pd(wuse * b_area[mid])));
    }
    nx = 819 * mid + 818;
    A[nx] += wuse * b_area[mid];
  }
  st.site = &c_emlrtRSI;
  p = false;
  for (left = 0; left < 819; left++) {
    y_tmp = area[static_cast<int32_T>(i[left]) - 1];
    b_y[left] = y_tmp;
    if (p || (y_tmp < 0.0)) {
      p = true;
    }
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        &st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  for (left = 0; left <= 816; left += 2) {
    r = _mm_loadu_pd(&b_y[left]);
    _mm_storeu_pd(&b_y[left], _mm_sqrt_pd(r));
  }
  b_y[818] = muDoubleScalarSqrt(b_y[818]);
  std::copy(&A[0], &A[4095], &M[0]);
  for (left = 0; left < 5; left++) {
    for (right = 0; right <= 816; right += 2) {
      r = _mm_loadu_pd(&b_y[right]);
      mid = right + 819 * left;
      r2 = _mm_loadu_pd(&M[mid]);
      _mm_storeu_pd(&A[mid], _mm_mul_pd(r, r2));
    }
    nx = 819 * left + 818;
    A[nx] = b_y[818] * M[nx];
  }
  st.site = &d_emlrtRSI;
  p = false;
  for (left = 0; left < 5; left++) {
    y_tmp = area[static_cast<int32_T>(j[left]) - 1];
    b_area[left] = y_tmp;
    if (p || (y_tmp < 0.0)) {
      p = true;
    }
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        &st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  r = _mm_loadu_pd(&b_area[0]);
  _mm_storeu_pd(&b_area[0], _mm_sqrt_pd(r));
  r = _mm_loadu_pd(&b_area[2]);
  _mm_storeu_pd(&b_area[2], _mm_sqrt_pd(r));
  b_area[4] = muDoubleScalarSqrt(b_area[4]);
  r = _mm_loadu_pd(&b_area[0]);
  r2 = _mm_set1_pd(1.0);
  _mm_storeu_pd(&b_area[0], _mm_div_pd(r2, r));
  r = _mm_loadu_pd(&b_area[2]);
  _mm_storeu_pd(&b_area[2], _mm_div_pd(r2, r));
  b_area[4] = 1.0 / b_area[4];
  std::copy(&A[0], &A[4095], &M[0]);
  for (left = 0; left < 5; left++) {
    for (right = 0; right <= 816; right += 2) {
      mid = right + 819 * left;
      r = _mm_loadu_pd(&M[mid]);
      _mm_storeu_pd(&A[mid], _mm_mul_pd(r, _mm_set1_pd(b_area[left])));
    }
    nx = 819 * left + 818;
    A[nx] = M[nx] * b_area[left];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (Afun_lap_te.cpp)
