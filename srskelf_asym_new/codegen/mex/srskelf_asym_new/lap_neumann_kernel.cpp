//
// lap_neumann_kernel.cpp
//
// Code generation for function 'lap_neumann_kernel'
//

// Include files
#include "lap_neumann_kernel.h"
#include "assertCompatibleDims.h"
#include "bsxfun.h"
#include "div.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "srskelf_asym_new.h"
#include "srskelf_asym_new_data.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo di_emlrtRSI{
    10,                   // lineNo
    "lap_neumann_kernel", // fcnName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "lap_neumann_kernel.m" // pathName
};

static emlrtRSInfo ei_emlrtRSI{
    11,                   // lineNo
    "lap_neumann_kernel", // fcnName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "lap_neumann_kernel.m" // pathName
};

static emlrtRSInfo fi_emlrtRSI{
    12,                   // lineNo
    "lap_neumann_kernel", // fcnName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "lap_neumann_kernel.m" // pathName
};

static emlrtRSInfo gi_emlrtRSI{
    13,                   // lineNo
    "lap_neumann_kernel", // fcnName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "lap_neumann_kernel.m" // pathName
};

static emlrtECInfo wb_emlrtECI{
    2,                    // nDims
    11,                   // lineNo
    9,                    // colNo
    "lap_neumann_kernel", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "lap_neumann_kernel.m" // pName
};

static emlrtECInfo xb_emlrtECI{
    1,                    // nDims
    11,                   // lineNo
    9,                    // colNo
    "lap_neumann_kernel", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "lap_neumann_kernel.m" // pName
};

static emlrtECInfo yb_emlrtECI{
    2,                    // nDims
    10,                   // lineNo
    11,                   // colNo
    "lap_neumann_kernel", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "lap_neumann_kernel.m" // pName
};

static emlrtECInfo ac_emlrtECI{
    1,                    // nDims
    10,                   // lineNo
    11,                   // colNo
    "lap_neumann_kernel", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "lap_neumann_kernel.m" // pName
};

static emlrtBCInfo yf_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    14,                   // lineNo
    3,                    // colNo
    "K",                  // aName
    "lap_neumann_kernel", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "lap_neumann_kernel.m", // pName
    0                       // checkKind
};

static emlrtRTEInfo xi_emlrtRTEI{
    7,                    // lineNo
    20,                   // colNo
    "lap_neumann_kernel", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "lap_neumann_kernel.m" // pName
};

static emlrtRTEInfo yi_emlrtRTEI{
    8,                    // lineNo
    20,                   // colNo
    "lap_neumann_kernel", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "lap_neumann_kernel.m" // pName
};

static emlrtRTEInfo aj_emlrtRTEI{
    9,                    // lineNo
    20,                   // colNo
    "lap_neumann_kernel", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "lap_neumann_kernel.m" // pName
};

static emlrtRTEInfo bj_emlrtRTEI{
    10,                   // lineNo
    11,                   // colNo
    "lap_neumann_kernel", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "lap_neumann_kernel.m" // pName
};

static emlrtRTEInfo cj_emlrtRTEI{
    10,                   // lineNo
    19,                   // colNo
    "lap_neumann_kernel", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "lap_neumann_kernel.m" // pName
};

static emlrtRTEInfo dj_emlrtRTEI{
    10,                   // lineNo
    27,                   // colNo
    "lap_neumann_kernel", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "lap_neumann_kernel.m" // pName
};

static emlrtRTEInfo ej_emlrtRTEI{
    11,                   // lineNo
    23,                   // colNo
    "lap_neumann_kernel", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "lap_neumann_kernel.m" // pName
};

static emlrtRTEInfo fj_emlrtRTEI{
    11,                   // lineNo
    56,                   // colNo
    "lap_neumann_kernel", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "lap_neumann_kernel.m" // pName
};

static emlrtRTEInfo gj_emlrtRTEI{
    12,                   // lineNo
    25,                   // colNo
    "lap_neumann_kernel", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "lap_neumann_kernel.m" // pName
};

static emlrtRTEInfo hj_emlrtRTEI{
    13,                   // lineNo
    23,                   // colNo
    "lap_neumann_kernel", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "lap_neumann_kernel.m" // pName
};

static emlrtRTEInfo jp_emlrtRTEI{
    13,                   // lineNo
    5,                    // colNo
    "lap_neumann_kernel", // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/"
    "lap_neumann_kernel.m" // pName
};

// Function Declarations
static void binary_expand_op_8(const emlrtStack &sp,
                               coder::array<real_T, 2U> &in1,
                               const coder::array<real_T, 2U> &in2);

// Function Definitions
static void binary_expand_op_8(const emlrtStack &sp,
                               coder::array<real_T, 2U> &in1,
                               const coder::array<real_T, 2U> &in2)
{
  coder::array<real_T, 2U> r;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }
  if (in2.size(1) == 1) {
    b_loop_ub = in1.size(1);
  } else {
    b_loop_ub = in2.size(1);
  }
  r.set_size(&jp_emlrtRTEI, &sp, loop_ub, b_loop_ub);
  stride_0_0 = (in1.size(0) != 1);
  stride_0_1 = (in1.size(1) != 1);
  stride_1_0 = (in2.size(0) != 1);
  stride_1_1 = (in2.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      r[i1 + r.size(0) * i] = -0.079577471545947673 *
                              (in1[i1 * stride_0_0 + in1.size(0) * aux_0_1] +
                               in2[i1 * stride_1_0 + in2.size(0) * aux_1_1]);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  in1.set_size(&jp_emlrtRTEI, &sp, loop_ub, b_loop_ub);
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] = r[i1 + r.size(0) * i];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void lap_neumann_kernel(const emlrtStack &sp, const coder::array<real_T, 2U> &x,
                        const coder::array<real_T, 2U> &y,
                        const coder::array<real_T, 2U> &nuuse,
                        coder::array<real_T, 2U> &K)
{
  __m128d r1;
  __m128d r2;
  coder::array<real_T, 2U> dr;
  coder::array<real_T, 2U> dx;
  coder::array<real_T, 2U> dy;
  coder::array<real_T, 2U> dz;
  coder::array<real_T, 2U> r;
  coder::array<real_T, 1U> a;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T varargin_1;
  int32_T acoef;
  int32_T bcoef;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T varargin_3;
  boolean_T b;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  //  KFUN(X,Y,zpars,NU) computes the Helmholtz potential evaluated
  //  pairwise between points in X and points in Y (does not handle the
  //  singularity).  zpars says which layer potential to use
  //  using the surface normal vectors in NU.
  loop_ub = x.size(1);
  a.set_size(&xi_emlrtRTEI, &sp, x.size(1));
  for (i = 0; i < loop_ub; i++) {
    a[i] = x[3 * i];
  }
  dx.set_size(&lg_emlrtRTEI, &sp, x.size(1), y.size(1));
  b = ((a.size(0) != 0) && (y.size(1) != 0));
  if (b) {
    bcoef = (y.size(1) != 1);
    i = y.size(1) - 1;
    acoef = (a.size(0) != 1);
    for (int32_T k{0}; k <= i; k++) {
      varargin_3 = bcoef * k;
      i1 = dx.size(0) - 1;
      for (int32_T b_k{0}; b_k <= i1; b_k++) {
        dx[b_k + dx.size(0) * k] = a[acoef * b_k] - y[3 * varargin_3];
      }
    }
  }
  a.set_size(&yi_emlrtRTEI, &sp, x.size(1));
  for (i = 0; i < loop_ub; i++) {
    a[i] = x[3 * i + 1];
  }
  dy.set_size(&lg_emlrtRTEI, &sp, x.size(1), y.size(1));
  if (b) {
    bcoef = (y.size(1) != 1);
    i = y.size(1) - 1;
    acoef = (a.size(0) != 1);
    for (int32_T k{0}; k <= i; k++) {
      varargin_3 = bcoef * k;
      i1 = dy.size(0) - 1;
      for (int32_T b_k{0}; b_k <= i1; b_k++) {
        dy[b_k + dy.size(0) * k] = a[acoef * b_k] - y[3 * varargin_3 + 1];
      }
    }
  }
  a.set_size(&aj_emlrtRTEI, &sp, x.size(1));
  for (i = 0; i < loop_ub; i++) {
    a[i] = x[3 * i + 2];
  }
  dz.set_size(&lg_emlrtRTEI, &sp, x.size(1), y.size(1));
  if (b) {
    bcoef = (y.size(1) != 1);
    i = y.size(1) - 1;
    acoef = (a.size(0) != 1);
    for (int32_T k{0}; k <= i; k++) {
      varargin_3 = bcoef * k;
      i1 = dz.size(0) - 1;
      for (int32_T b_k{0}; b_k <= i1; b_k++) {
        dz[b_k + dz.size(0) * k] = a[acoef * b_k] - y[3 * varargin_3 + 2];
      }
    }
  }
  st.site = &di_emlrtRSI;
  b_st.site = &oe_emlrtRSI;
  dr.set_size(&bj_emlrtRTEI, &b_st, x.size(1), y.size(1));
  bcoef = dx.size(0) * dx.size(1);
  for (i = 0; i < bcoef; i++) {
    varargin_1 = dx[i];
    dr[i] = muDoubleScalarPower(varargin_1, 2.0);
  }
  st.site = &di_emlrtRSI;
  b_st.site = &oe_emlrtRSI;
  r.set_size(&cj_emlrtRTEI, &b_st, x.size(1), y.size(1));
  for (i = 0; i < bcoef; i++) {
    varargin_1 = dy[i];
    r[i] = muDoubleScalarPower(varargin_1, 2.0);
  }
  if ((dr.size(0) == r.size(0)) && (dr.size(1) == r.size(1))) {
    acoef = (bcoef / 2) << 1;
    varargin_3 = acoef - 2;
    for (i = 0; i <= varargin_3; i += 2) {
      r1 = _mm_loadu_pd(&dr[i]);
      r2 = _mm_loadu_pd(&r[i]);
      _mm_storeu_pd(&dr[i], _mm_add_pd(r1, r2));
    }
    for (i = acoef; i < bcoef; i++) {
      dr[i] = dr[i] + r[i];
    }
  } else {
    st.site = &di_emlrtRSI;
    plus(st, dr, r);
  }
  st.site = &di_emlrtRSI;
  b_st.site = &oe_emlrtRSI;
  r.set_size(&dj_emlrtRTEI, &b_st, x.size(1), y.size(1));
  for (i = 0; i < bcoef; i++) {
    varargin_1 = dz[i];
    r[i] = muDoubleScalarPower(varargin_1, 2.0);
  }
  if ((dr.size(0) != x.size(1)) && ((dr.size(0) != 1) && (x.size(1) != 1))) {
    emlrtDimSizeImpxCheckR2021b(dr.size(0), x.size(1), &ac_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if ((dr.size(1) != y.size(1)) && ((dr.size(1) != 1) && (y.size(1) != 1))) {
    emlrtDimSizeImpxCheckR2021b(dr.size(1), y.size(1), &yb_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if ((dr.size(0) == r.size(0)) && (dr.size(1) == r.size(1))) {
    loop_ub = dr.size(0) * dr.size(1);
    acoef = (loop_ub / 2) << 1;
    varargin_3 = acoef - 2;
    for (i = 0; i <= varargin_3; i += 2) {
      r1 = _mm_loadu_pd(&dr[i]);
      r2 = _mm_loadu_pd(&r[i]);
      _mm_storeu_pd(&dr[i], _mm_add_pd(r1, r2));
    }
    for (i = acoef; i < loop_ub; i++) {
      dr[i] = dr[i] + r[i];
    }
  } else {
    plus(sp, dr, r);
  }
  st.site = &di_emlrtRSI;
  coder::c_sqrt(st, dr);
  loop_ub = nuuse.size(1);
  a.set_size(&ej_emlrtRTEI, &sp, nuuse.size(1));
  for (i = 0; i < loop_ub; i++) {
    a[i] = nuuse[3 * i];
  }
  st.site = &ei_emlrtRSI;
  coder::bsxfun(st, a, dx, K);
  a.set_size(&fj_emlrtRTEI, &sp, nuuse.size(1));
  for (i = 0; i < loop_ub; i++) {
    a[i] = nuuse[3 * i + 1];
  }
  st.site = &ei_emlrtRSI;
  coder::bsxfun(st, a, dy, r);
  if ((K.size(0) != r.size(0)) && ((K.size(0) != 1) && (r.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(K.size(0), r.size(0), &xb_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if ((K.size(1) != r.size(1)) && ((K.size(1) != 1) && (r.size(1) != 1))) {
    emlrtDimSizeImpxCheckR2021b(K.size(1), r.size(1), &wb_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if ((K.size(0) == r.size(0)) && (K.size(1) == r.size(1))) {
    bcoef = K.size(0) * K.size(1);
    acoef = (bcoef / 2) << 1;
    varargin_3 = acoef - 2;
    for (i = 0; i <= varargin_3; i += 2) {
      r1 = _mm_loadu_pd(&K[i]);
      r2 = _mm_loadu_pd(&r[i]);
      _mm_storeu_pd(&K[i], _mm_add_pd(r1, r2));
    }
    for (i = acoef; i < bcoef; i++) {
      K[i] = K[i] + r[i];
    }
  } else {
    st.site = &ei_emlrtRSI;
    plus(st, K, r);
  }
  a.set_size(&gj_emlrtRTEI, &sp, nuuse.size(1));
  for (i = 0; i < loop_ub; i++) {
    a[i] = nuuse[3 * i + 2];
  }
  st.site = &fi_emlrtRSI;
  coder::bsxfun(st, a, dz, r);
  if ((K.size(0) != r.size(0)) && ((K.size(0) != 1) && (r.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(K.size(0), r.size(0), &xb_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if ((K.size(1) != r.size(1)) && ((K.size(1) != 1) && (r.size(1) != 1))) {
    emlrtDimSizeImpxCheckR2021b(K.size(1), r.size(1), &wb_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  st.site = &gi_emlrtRSI;
  if ((K.size(0) == r.size(0)) && (K.size(1) == r.size(1))) {
    loop_ub = K.size(0) * K.size(1);
    acoef = (loop_ub / 2) << 1;
    varargin_3 = acoef - 2;
    for (i = 0; i <= varargin_3; i += 2) {
      r1 = _mm_loadu_pd(&K[i]);
      r2 = _mm_loadu_pd(&r[i]);
      _mm_storeu_pd(&K[i], _mm_mul_pd(_mm_set1_pd(-0.079577471545947673),
                                      _mm_add_pd(r1, r2)));
    }
    for (i = acoef; i < loop_ub; i++) {
      K[i] = -0.079577471545947673 * (K[i] + r[i]);
    }
  } else {
    b_st.site = &gi_emlrtRSI;
    binary_expand_op_8(b_st, K, r);
  }
  b_st.site = &gi_emlrtRSI;
  c_st.site = &oe_emlrtRSI;
  dx.set_size(&hj_emlrtRTEI, &c_st, dr.size(0), dr.size(1));
  bcoef = dr.size(0) * dr.size(1);
  for (i = 0; i < bcoef; i++) {
    varargin_1 = dr[i];
    dx[i] = muDoubleScalarPower(varargin_1, 3.0);
  }
  b_st.site = &kh_emlrtRSI;
  c_st.site = &lh_emlrtRSI;
  coder::internal::assertCompatibleDims(c_st, K, dx);
  if ((K.size(0) == dx.size(0)) && (K.size(1) == dx.size(1))) {
    loop_ub = K.size(0) * K.size(1);
    acoef = (loop_ub / 2) << 1;
    varargin_3 = acoef - 2;
    for (i = 0; i <= varargin_3; i += 2) {
      r1 = _mm_loadu_pd(&K[i]);
      r2 = _mm_loadu_pd(&dx[i]);
      _mm_storeu_pd(&K[i], _mm_div_pd(r1, r2));
    }
    for (i = acoef; i < loop_ub; i++) {
      K[i] = K[i] / dx[i];
    }
  } else {
    c_st.site = &qr_emlrtRSI;
    rdivide(c_st, K, dx);
  }
  bcoef--;
  for (acoef = 0; acoef <= bcoef; acoef++) {
    if (dr[acoef] == 0.0) {
      i = K.size(0) * K.size(1) - 1;
      if (acoef > i) {
        emlrtDynamicBoundsCheckR2012b(acoef, 0, i, &yf_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      K[acoef] = 0.0;
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (lap_neumann_kernel.cpp)
