//
// toc.cpp
//
// Code generation for function 'toc'
//

// Include files
#include "toc.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "srskelf_asym_new_mexutil.h"
#include "timeKeeper.h"
#include "emlrt.h"
#include <cstdio>

// Variable Definitions
static emlrtRSInfo if_emlrtRSI{
    31,                                                             // lineNo
    "toc",                                                          // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/timefun/toc.m" // pathName
};

static emlrtRSInfo jf_emlrtRSI{
    36,                                                             // lineNo
    "toc",                                                          // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/timefun/toc.m" // pathName
};

static emlrtRSInfo dr_emlrtRSI{
    43,                                                             // lineNo
    "toc",                                                          // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/timefun/toc.m" // pathName
};

// Function Definitions
namespace coder {
void b_toc(const emlrtStack &sp, real_T tstart_tv_sec, real_T tstart_tv_nsec)
{
  static const int32_T iv[2]{1, 7};
  static const int32_T iv1[2]{1, 28};
  static const char_T b_u[28]{'E', 'l', 'a', 'p', 's', 'e', 'd',  ' ', 't', 'i',
                              'm', 'e', ' ', 'i', 's', ' ', '%',  'f', ' ', 's',
                              'e', 'c', 'o', 'n', 'd', 's', '\\', 'n'};
  static const char_T u[7]{'f', 'p', 'r', 'i', 'n', 't', 'f'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emlrtTimespec tnow;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T status;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &jf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &qc_emlrtRSI;
  c_st.site = &rc_emlrtRSI;
  status = emlrtClockGettimeMonotonic(&tnow);
  d_st.site = &sc_emlrtRSI;
  if (status != 0) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &o_emlrtRTEI, "Coder:toolbox:CoderTimeCallFailed",
        "Coder:toolbox:CoderTimeCallFailed", 5, 4, 26, &cv[0], 12, status);
  }
  st.site = &dr_emlrtRSI;
  b_st.site = &hf_emlrtRSI;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(&b_st, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = nullptr;
  m = emlrtCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m);
  c_y = nullptr;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(&b_st, 28, m, &b_u[0]);
  emlrtAssign(&c_y, m);
  d_y = nullptr;
  m = emlrtCreateDoubleScalar((tnow.tv_sec - tstart_tv_sec) +
                              (tnow.tv_nsec - tstart_tv_nsec) / 1.0E+9);
  emlrtAssign(&d_y, m);
  c_st.site = &lr_emlrtRSI;
  emlrt_marshallIn(c_st, feval(c_st, y, b_y, c_y, d_y, f_emlrtMCI),
                   "<output of feval>");
}

real_T toc(const emlrtStack &sp, const emlrtTimespec &savedTime)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emlrtTimespec tnow;
  real_T tstart_tv_nsec;
  real_T tstart_tv_sec;
  int32_T status;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &if_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  tstart_tv_sec =
      internal::b_time::impl::timeKeeper(st, savedTime, tstart_tv_nsec);
  st.site = &jf_emlrtRSI;
  b_st.site = &qc_emlrtRSI;
  c_st.site = &rc_emlrtRSI;
  status = emlrtClockGettimeMonotonic(&tnow);
  d_st.site = &sc_emlrtRSI;
  if (status != 0) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &o_emlrtRTEI, "Coder:toolbox:CoderTimeCallFailed",
        "Coder:toolbox:CoderTimeCallFailed", 5, 4, 26, &cv[0], 12, status);
  }
  return (tnow.tv_sec - tstart_tv_sec) +
         (tnow.tv_nsec - tstart_tv_nsec) / 1.0E+9;
}

real_T toc(const emlrtStack &sp, real_T tstart_tv_sec, real_T tstart_tv_nsec)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emlrtTimespec tnow;
  int32_T status;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &jf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &qc_emlrtRSI;
  c_st.site = &rc_emlrtRSI;
  status = emlrtClockGettimeMonotonic(&tnow);
  d_st.site = &sc_emlrtRSI;
  if (status != 0) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &o_emlrtRTEI, "Coder:toolbox:CoderTimeCallFailed",
        "Coder:toolbox:CoderTimeCallFailed", 5, 4, 26, &cv[0], 12, status);
  }
  return (tnow.tv_sec - tstart_tv_sec) +
         (tnow.tv_nsec - tstart_tv_nsec) / 1.0E+9;
}

} // namespace coder

// End of code generation (toc.cpp)
