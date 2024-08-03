//
// repmat.cpp
//
// Code generation for function 'repmat'
//

// Include files
#include "repmat.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "srskelf_asym_new_types2.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo kf_emlrtRSI{
    38,                                                              // lineNo
    "repmat",                                                        // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/repmat.m" // pathName
};

static emlrtRTEInfo cb_emlrtRTEI{
    64,                   // lineNo
    15,                   // colNo
    "assertValidSizeArg", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "assertValidSizeArg.m" // pName
};

static emlrtDCInfo qb_emlrtDCI{
    41,                                                               // lineNo
    14,                                                               // colNo
    "repmat",                                                         // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/repmat.m", // pName
    4 // checkKind
};

// Function Definitions
namespace coder {
void repmat(const emlrtStack &sp, const struct2_T &a, real_T varargin_1,
            array<struct2_T, 1U> &b)
{
  emlrtStack st;
  real_T d;
  int32_T loop_ub_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &kf_emlrtRSI;
  if ((varargin_1 != muDoubleScalarFloor(varargin_1)) ||
      muDoubleScalarIsInf(varargin_1) || (varargin_1 < -2.147483648E+9) ||
      (varargin_1 > 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(
        &st, &db_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  if (varargin_1 <= 0.0) {
    d = 0.0;
  } else {
    d = varargin_1;
  }
  if (!(d <= 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(&st, &cb_emlrtRTEI, "Coder:MATLAB:pmaxsize",
                                  "Coder:MATLAB:pmaxsize", 0);
  }
  if (!(varargin_1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varargin_1, &qb_emlrtDCI, (emlrtConstCTX)&sp);
  }
  loop_ub_tmp = static_cast<int32_T>(varargin_1);
  b.set_size(&rg_emlrtRTEI, &sp, loop_ub_tmp);
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    b[i] = a;
  }
}

} // namespace coder

// End of code generation (repmat.cpp)
