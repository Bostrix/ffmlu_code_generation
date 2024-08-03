//
// tic.cpp
//
// Code generation for function 'tic'
//

// Include files
#include "tic.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "timeKeeper.h"
#include "emlrt.h"

// Variable Definitions
static emlrtRSInfo pc_emlrtRSI{
    31,                                                             // lineNo
    "tic",                                                          // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/timefun/tic.m" // pathName
};

static emlrtRSInfo ad_emlrtRSI{
    34,                                                             // lineNo
    "tic",                                                          // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/timefun/tic.m" // pathName
};

// Function Definitions
namespace coder {
void tic(const emlrtStack &sp, emlrtTimespec &savedTime)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emlrtTimespec t;
  int32_T status;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &ad_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &qc_emlrtRSI;
  c_st.site = &rc_emlrtRSI;
  status = emlrtClockGettimeMonotonic(&t);
  d_st.site = &sc_emlrtRSI;
  if (status != 0) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &o_emlrtRTEI, "Coder:toolbox:CoderTimeCallFailed",
        "Coder:toolbox:CoderTimeCallFailed", 5, 4, 26, &cv[0], 12, status);
  }
  st.site = &ad_emlrtRSI;
  internal::b_time::impl::timeKeeper(st, t, savedTime);
}

emlrtTimespec tic(const emlrtStack &sp)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emlrtTimespec tstart;
  int32_T status;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &pc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &qc_emlrtRSI;
  c_st.site = &rc_emlrtRSI;
  status = emlrtClockGettimeMonotonic(&tstart);
  d_st.site = &sc_emlrtRSI;
  if (status != 0) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &o_emlrtRTEI, "Coder:toolbox:CoderTimeCallFailed",
        "Coder:toolbox:CoderTimeCallFailed", 5, 4, 26, &cv[0], 12, status);
  }
  return tstart;
}

} // namespace coder

// End of code generation (tic.cpp)
