//
// sumMatrixIncludeNaN.cpp
//
// Code generation for function 'sumMatrixIncludeNaN'
//

// Include files
#include "sumMatrixIncludeNaN.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo do_emlrtRSI{
    178,          // lineNo
    "sumColumnB", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" // pathName
};

static emlrtRSInfo eo_emlrtRSI{
    183,          // lineNo
    "sumColumnB", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" // pathName
};

static emlrtRSInfo fo_emlrtRSI{
    189,          // lineNo
    "sumColumnB", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" // pathName
};

static emlrtRSInfo go_emlrtRSI{
    210,         // lineNo
    "sumColumn", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" // pathName
};

// Function Definitions
namespace coder {
real_T sumColumnB(const array<real_T, 2U> &x, int32_T col)
{
  int32_T i0;
  i0 = (col - 1) * 3;
  return (x[i0] + x[i0 + 1]) + x[i0 + 2];
}

real_T sumColumnB(const emlrtStack &sp, const array<real_T, 2U> &x, int32_T col,
                  int32_T vlen, int32_T vstart)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (vlen <= 1024) {
    int32_T i0;
    st.site = &do_emlrtRSI;
    i0 = vstart + (col - 1) * x.size(0);
    y = x[i0 - 1];
    b_st.site = &go_emlrtRSI;
    if (vlen - 1 > 2147483646) {
      c_st.site = &ge_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (int32_T k{0}; k <= vlen - 2; k++) {
      y += x[i0 + k];
    }
  } else {
    real_T b_y;
    int32_T i0;
    int32_T i0_tmp;
    int32_T inb;
    int32_T nfb;
    nfb = vlen / 1024;
    inb = nfb << 10;
    i0_tmp = (col - 1) * x.size(0);
    i0 = vstart + i0_tmp;
    y = x[i0 - 1];
    for (int32_T k{0}; k < 1023; k++) {
      y += x[i0 + k];
    }
    st.site = &eo_emlrtRSI;
    for (int32_T k{2}; k <= nfb; k++) {
      i0 = (vstart + ((k - 1) << 10)) + i0_tmp;
      b_y = x[i0 - 1];
      for (int32_T b_k{0}; b_k < 1023; b_k++) {
        b_y += x[i0 + b_k];
      }
      y += b_y;
    }
    if (vlen > inb) {
      st.site = &fo_emlrtRSI;
      i0 = (vstart + inb) + i0_tmp;
      b_y = x[i0 - 1];
      nfb = vlen - inb;
      b_st.site = &go_emlrtRSI;
      for (int32_T k{0}; k <= nfb - 2; k++) {
        b_y += x[i0 + k];
      }
      y += b_y;
    }
  }
  return y;
}

real_T sumColumnB(const emlrtStack &sp, const array<real_T, 2U> &x, int32_T col,
                  int32_T vlen)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (vlen <= 1024) {
    int32_T i0;
    int32_T nfb;
    st.site = &do_emlrtRSI;
    i0 = (col - 1) * x.size(0);
    y = x[i0];
    b_st.site = &go_emlrtRSI;
    if (vlen - 1 > 2147483646) {
      c_st.site = &ge_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    nfb = static_cast<uint16_T>(vlen - 1);
    for (int32_T k{0}; k < nfb; k++) {
      y += x[(i0 + k) + 1];
    }
  } else {
    real_T b_y;
    int32_T i0;
    int32_T i0_tmp;
    int32_T inb;
    int32_T nfb;
    nfb = vlen / 1024;
    inb = nfb << 10;
    i0_tmp = (col - 1) * x.size(0);
    y = x[i0_tmp];
    for (int32_T k{0}; k < 1023; k++) {
      y += x[(i0_tmp + k) + 1];
    }
    st.site = &eo_emlrtRSI;
    for (int32_T k{2}; k <= nfb; k++) {
      i0 = ((k - 1) << 10) + i0_tmp;
      b_y = x[i0];
      for (int32_T b_k{0}; b_k < 1023; b_k++) {
        b_y += x[(i0 + b_k) + 1];
      }
      y += b_y;
    }
    if (vlen > inb) {
      st.site = &fo_emlrtRSI;
      i0 = (inb + i0_tmp) + 1;
      b_y = x[i0 - 1];
      nfb = vlen - inb;
      b_st.site = &go_emlrtRSI;
      for (int32_T k{0}; k <= nfb - 2; k++) {
        b_y += x[i0 + k];
      }
      y += b_y;
    }
  }
  return y;
}

real_T sumColumnB4(const array<real_T, 2U> &x, int32_T col, int32_T vstart)
{
  real_T psum1;
  real_T psum2;
  real_T psum3;
  real_T psum4;
  int32_T i1;
  i1 = vstart + (col - 1) * x.size(0);
  psum1 = x[i1 - 1];
  psum2 = x[i1 + 1023];
  psum3 = x[i1 + 2047];
  psum4 = x[i1 + 3071];
  for (int32_T k{0}; k < 1023; k++) {
    int32_T psum1_tmp;
    psum1_tmp = i1 + k;
    psum1 += x[psum1_tmp];
    psum2 += x[psum1_tmp + 1024];
    psum3 += x[psum1_tmp + 2048];
    psum4 += x[psum1_tmp + 3072];
  }
  return (psum1 + psum2) + (psum3 + psum4);
}

} // namespace coder

// End of code generation (sumMatrixIncludeNaN.cpp)
