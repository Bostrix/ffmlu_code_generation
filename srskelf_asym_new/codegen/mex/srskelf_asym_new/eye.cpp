//
// eye.cpp
//
// Code generation for function 'eye'
//

// Include files
#include "eye.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo op_emlrtRSI{
    96,                                                           // lineNo
    "eye",                                                        // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/eye.m" // pathName
};

static emlrtRSInfo pp_emlrtRSI{
    50,                                                           // lineNo
    "eye",                                                        // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/eye.m" // pathName
};

static emlrtRSInfo qp_emlrtRSI{
    21,                           // lineNo
    "checkAndSaturateExpandSize", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "checkAndSaturateExpandSize.m" // pathName
};

static emlrtRTEInfo ho_emlrtRTEI{
    94,                                                           // lineNo
    5,                                                            // colNo
    "eye",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/eye.m" // pName
};

// Function Definitions
namespace coder {
void eye(const emlrtStack &sp, real_T varargin_1, array<real_T, 2U> &b_I)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T loop_ub;
  int32_T m_tmp_tmp_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &pp_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &qp_emlrtRSI;
  if ((varargin_1 != muDoubleScalarFloor(varargin_1)) ||
      muDoubleScalarIsInf(varargin_1) || (varargin_1 < -2.147483648E+9) ||
      (varargin_1 > 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &db_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  m_tmp_tmp_tmp = static_cast<int32_T>(varargin_1);
  b_I.set_size(&ho_emlrtRTEI, &sp, m_tmp_tmp_tmp, m_tmp_tmp_tmp);
  loop_ub = static_cast<int32_T>(varargin_1) * static_cast<int32_T>(varargin_1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_I[i] = 0.0;
  }
  st.site = &op_emlrtRSI;
  if (static_cast<int32_T>(varargin_1) > 2147483646) {
    b_st.site = &fe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (loop_ub = 0; loop_ub < m_tmp_tmp_tmp; loop_ub++) {
    b_I[loop_ub + b_I.size(0) * loop_ub] = 1.0;
  }
}

} // namespace coder

// End of code generation (eye.cpp)
