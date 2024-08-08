//
// round.cpp
//
// Code generation for function 'round'
//

// Include files
#include "round.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo ff_emlrtRSI{
    16,                                                             // lineNo
    "round",                                                        // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elfun/round.m" // pathName
};

// Function Definitions
namespace coder {
void b_round(const emlrtStack &sp, array<real_T, 2U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T nx;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &ff_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx = x.size(0) * 3;
  b_st.site = &gf_emlrtRSI;
  if (nx > 2147483646) {
    c_st.site = &ge_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T k{0}; k < nx; k++) {
    x[k] = muDoubleScalarRound(x[k]);
  }
}

} // namespace coder

// End of code generation (round.cpp)
