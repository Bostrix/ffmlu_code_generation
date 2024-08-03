//
// sum.cpp
//
// Code generation for function 'sum'
//

// Include files
#include "sum.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "sumMatrixIncludeNaN.h"
#include "coder_array.h"
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo of_emlrtRSI{
    20,                                                             // lineNo
    "sum",                                                          // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/sum.m" // pathName
};

static emlrtRSInfo
    pf_emlrtRSI{
        99,        // lineNo
        "sumprod", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
        "sumprod.m" // pathName
    };

static emlrtRSInfo qf_emlrtRSI{
    86,                      // lineNo
    "combineVectorElements", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "combineVectorElements.m" // pathName
};

static emlrtRSInfo rf_emlrtRSI{
    107,                // lineNo
    "blockedSummation", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pathName
};

static emlrtRSInfo sf_emlrtRSI{
    22,                    // lineNo
    "sumMatrixIncludeNaN", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" // pathName
};

static emlrtRSInfo tf_emlrtRSI{
    41,                 // lineNo
    "sumMatrixColumns", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" // pathName
};

static emlrtRSInfo xn_emlrtRSI{
    42,                 // lineNo
    "sumMatrixColumns", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" // pathName
};

static emlrtRSInfo yn_emlrtRSI{
    50,                 // lineNo
    "sumMatrixColumns", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" // pathName
};

static emlrtRSInfo ao_emlrtRSI{
    53,                 // lineNo
    "sumMatrixColumns", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" // pathName
};

static emlrtRSInfo bo_emlrtRSI{
    57,                 // lineNo
    "sumMatrixColumns", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" // pathName
};

static emlrtRSInfo ro_emlrtRSI{
    112,                // lineNo
    "blockedSummation", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pathName
};

static emlrtRSInfo so_emlrtRSI{
    173,                // lineNo
    "colMajorFlatIter", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pathName
};

static emlrtRSInfo to_emlrtRSI{
    190,                // lineNo
    "colMajorFlatIter", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pathName
};

static emlrtRSInfo uo_emlrtRSI{
    192,                // lineNo
    "colMajorFlatIter", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pathName
};

static emlrtRSInfo vo_emlrtRSI{
    204,                // lineNo
    "colMajorFlatIter", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pathName
};

static emlrtRSInfo wo_emlrtRSI{
    207,                // lineNo
    "colMajorFlatIter", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pathName
};

static emlrtRSInfo xo_emlrtRSI{
    225,                // lineNo
    "colMajorFlatIter", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pathName
};

static emlrtRSInfo yo_emlrtRSI{
    227,                // lineNo
    "colMajorFlatIter", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pathName
};

static emlrtRSInfo ap_emlrtRSI{
    238,                // lineNo
    "colMajorFlatIter", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pathName
};

static emlrtRTEInfo
    ub_emlrtRTEI{
        46,        // lineNo
        23,        // colNo
        "sumprod", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
        "sumprod.m" // pName
    };

static emlrtRTEInfo
    vb_emlrtRTEI{
        76,        // lineNo
        9,         // colNo
        "sumprod", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
        "sumprod.m" // pName
    };

static emlrtRTEInfo sg_emlrtRTEI{
    35,                    // lineNo
    20,                    // colNo
    "sumMatrixIncludeNaN", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" // pName
};

static emlrtRTEInfo ao_emlrtRTEI{
    20,                                                             // lineNo
    1,                                                              // colNo
    "sum",                                                          // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/sum.m" // pName
};

static emlrtRTEInfo eo_emlrtRTEI{
    146,                // lineNo
    24,                 // colNo
    "blockedSummation", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pName
};

static emlrtRTEInfo fo_emlrtRTEI{
    153,                // lineNo
    23,                 // colNo
    "blockedSummation", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pName
};

// Function Definitions
namespace coder {
void b_sum(const emlrtStack &sp, const array<real_T, 2U> &x,
           array<real_T, 2U> &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &of_emlrtRSI;
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
  if (((x.size(0) != 1) || (x.size(1) != 1)) && (x.size(0) == 1)) {
    emlrtErrorWithMessageIdR2018a(&st, &ub_emlrtRTEI,
                                  "Coder:toolbox:autoDimIncompatibility",
                                  "Coder:toolbox:autoDimIncompatibility", 0);
  }
  if ((x.size(0) == 0) && (x.size(1) == 0)) {
    emlrtErrorWithMessageIdR2018a(&st, &vb_emlrtRTEI,
                                  "Coder:toolbox:UnsupportedSpecialEmpty",
                                  "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }
  b_st.site = &pf_emlrtRSI;
  c_st.site = &qf_emlrtRSI;
  if ((x.size(0) == 0) || (x.size(1) == 0)) {
    int32_T ncols;
    y.set_size(&ao_emlrtRTEI, &c_st, 1, x.size(1));
    ncols = x.size(1);
    for (int32_T nfb{0}; nfb < ncols; nfb++) {
      y[nfb] = 0.0;
    }
  } else {
    int32_T ncols;
    d_st.site = &rf_emlrtRSI;
    e_st.site = &sf_emlrtRSI;
    y.set_size(&sg_emlrtRTEI, &e_st, 1, x.size(1));
    ncols = x.size(1) - 1;
    if (x.size(0) < 4096) {
      f_st.site = &tf_emlrtRSI;
      if (x.size(1) > 2147483646) {
        g_st.site = &fe_emlrtRSI;
        check_forloop_overflow_error(g_st);
      }
      for (int32_T col{0}; col <= ncols; col++) {
        f_st.site = &xn_emlrtRSI;
        y[col] = sumColumnB(f_st, x, col + 1, x.size(0));
      }
    } else {
      int32_T inb;
      int32_T nfb;
      int32_T nleft;
      nfb = static_cast<int32_T>(static_cast<uint32_T>(x.size(0)) >> 12);
      inb = nfb << 12;
      nleft = x.size(0) - inb;
      f_st.site = &yn_emlrtRSI;
      if (x.size(1) > 2147483646) {
        g_st.site = &fe_emlrtRSI;
        check_forloop_overflow_error(g_st);
      }
      for (int32_T col{0}; col <= ncols; col++) {
        real_T s;
        s = sumColumnB4(x, col + 1, 1);
        f_st.site = &ao_emlrtRSI;
        for (int32_T ib{2}; ib <= nfb; ib++) {
          s += sumColumnB4(x, col + 1, ((ib - 1) << 12) + 1);
        }
        if (nleft > 0) {
          f_st.site = &bo_emlrtRSI;
          s += sumColumnB(f_st, x, col + 1, nleft, inb + 1);
        }
        y[col] = s;
      }
    }
  }
}

void sum(const emlrtStack &sp, const array<real_T, 2U> &x, array<real_T, 2U> &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  int32_T i;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &of_emlrtRSI;
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
  b_st.site = &pf_emlrtRSI;
  c_st.site = &qf_emlrtRSI;
  d_st.site = &rf_emlrtRSI;
  e_st.site = &sf_emlrtRSI;
  i = x.size(1);
  y.set_size(&sg_emlrtRTEI, &e_st, 1, x.size(1));
  f_st.site = &tf_emlrtRSI;
  if (x.size(1) > 2147483646) {
    g_st.site = &fe_emlrtRSI;
    check_forloop_overflow_error(g_st);
  }
  for (int32_T col{0}; col < i; col++) {
    y[col] = sumColumnB(x, col + 1);
  }
}

void sum(const emlrtStack &sp, const array<real_T, 2U> &x, array<real_T, 1U> &y)
{
  __m128d r;
  array<real_T, 1U> bsum;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  int32_T bvstride;
  int32_T firstBlockLength;
  int32_T lastBlockLength;
  int32_T nblocks;
  int32_T scalarLB;
  int32_T vectorUB;
  int32_T vstride_tmp;
  int32_T xoffset;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &of_emlrtRSI;
  b_st.site = &pf_emlrtRSI;
  c_st.site = &qf_emlrtRSI;
  d_st.site = &ro_emlrtRSI;
  vstride_tmp = x.size(0);
  bvstride = x.size(0) << 10;
  y.set_size(&eo_emlrtRTEI, &d_st, x.size(0));
  bsum.set_size(&fo_emlrtRTEI, &d_st, x.size(0));
  if (x.size(1) <= 1024) {
    firstBlockLength = x.size(1);
    lastBlockLength = 0;
    nblocks = 1;
  } else {
    firstBlockLength = 1024;
    nblocks = static_cast<int32_T>(static_cast<uint32_T>(x.size(1)) >> 10);
    lastBlockLength = x.size(1) - (nblocks << 10);
    if (lastBlockLength > 0) {
      nblocks++;
    } else {
      lastBlockLength = 1024;
    }
  }
  e_st.site = &so_emlrtRSI;
  if (x.size(0) > 2147483646) {
    f_st.site = &fe_emlrtRSI;
    check_forloop_overflow_error(f_st);
  }
  for (int32_T xj{0}; xj < vstride_tmp; xj++) {
    y[xj] = x[xj];
    bsum[xj] = 0.0;
  }
  e_st.site = &to_emlrtRSI;
  for (int32_T k{2}; k <= firstBlockLength; k++) {
    xoffset = (k - 1) * vstride_tmp;
    e_st.site = &uo_emlrtRSI;
    if (vstride_tmp > 2147483646) {
      f_st.site = &fe_emlrtRSI;
      check_forloop_overflow_error(f_st);
    }
    scalarLB = (vstride_tmp / 2) << 1;
    vectorUB = scalarLB - 2;
    for (int32_T xj{0}; xj <= vectorUB; xj += 2) {
      r = _mm_loadu_pd(&y[xj]);
      _mm_storeu_pd(&y[xj], _mm_add_pd(r, _mm_loadu_pd(&x[xoffset + xj])));
    }
    for (int32_T xj{scalarLB}; xj < vstride_tmp; xj++) {
      y[xj] = y[xj] + x[xoffset + xj];
    }
  }
  e_st.site = &vo_emlrtRSI;
  for (int32_T ib{2}; ib <= nblocks; ib++) {
    int32_T hi;
    firstBlockLength = (ib - 1) * bvstride;
    e_st.site = &wo_emlrtRSI;
    if (vstride_tmp > 2147483646) {
      f_st.site = &fe_emlrtRSI;
      check_forloop_overflow_error(f_st);
    }
    for (int32_T xj{0}; xj < vstride_tmp; xj++) {
      bsum[xj] = x[firstBlockLength + xj];
    }
    if (ib == nblocks) {
      hi = lastBlockLength;
    } else {
      hi = 1024;
    }
    e_st.site = &xo_emlrtRSI;
    for (int32_T k{2}; k <= hi; k++) {
      xoffset = firstBlockLength + (k - 1) * vstride_tmp;
      e_st.site = &yo_emlrtRSI;
      scalarLB = (vstride_tmp / 2) << 1;
      vectorUB = scalarLB - 2;
      for (int32_T xj{0}; xj <= vectorUB; xj += 2) {
        r = _mm_loadu_pd(&bsum[xj]);
        _mm_storeu_pd(&bsum[xj], _mm_add_pd(r, _mm_loadu_pd(&x[xoffset + xj])));
      }
      for (int32_T xj{scalarLB}; xj < vstride_tmp; xj++) {
        bsum[xj] = bsum[xj] + x[xoffset + xj];
      }
    }
    e_st.site = &ap_emlrtRSI;
    scalarLB = (vstride_tmp / 2) << 1;
    vectorUB = scalarLB - 2;
    for (int32_T xj{0}; xj <= vectorUB; xj += 2) {
      __m128d r1;
      r = _mm_loadu_pd(&y[xj]);
      r1 = _mm_loadu_pd(&bsum[xj]);
      _mm_storeu_pd(&y[xj], _mm_add_pd(r, r1));
    }
    for (int32_T xj{scalarLB}; xj < vstride_tmp; xj++) {
      y[xj] = y[xj] + bsum[xj];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (sum.cpp)
