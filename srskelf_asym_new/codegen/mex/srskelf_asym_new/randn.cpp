//
// randn.cpp
//
// Code generation for function 'randn'
//

// Include files
#include "randn.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo lf_emlrtRSI{
    114,                                                              // lineNo
    "randn",                                                          // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/randfun/randn.m" // pathName
};

static emlrtRSInfo mf_emlrtRSI{
    139,                                                              // lineNo
    "extrinsicRandnGen",                                              // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/randfun/randn.m" // pathName
};

static emlrtRSInfo nf_emlrtRSI{
    20,                // lineNo
    "zerosWithChecks", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "zerosWithChecks.m" // pathName
};

static emlrtRTEInfo
    eb_emlrtRTEI{
        13,              // lineNo
        27,              // colNo
        "mustBeInteger", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/validators/"
        "mustBeInteger.m" // pName
    };

static emlrtRTEInfo sg_emlrtRTEI{
    139,                                                              // lineNo
    20,                                                               // colNo
    "randn",                                                          // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/randfun/randn.m" // pName
};

// Function Definitions
namespace coder {
void randn(const emlrtStack &sp, real_T varargin_2, array<real_T, 2U> &r)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &lf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &mf_emlrtRSI;
  c_st.site = &nf_emlrtRSI;
  if (muDoubleScalarIsInf(varargin_2) || muDoubleScalarIsNaN(varargin_2) ||
      (!(varargin_2 == muDoubleScalarFloor(varargin_2)))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &eb_emlrtRTEI,
                                  "MATLAB:validators:mustBeInteger",
                                  "MATLAB:validators:mustBeInteger", 0);
  }
  r.set_size(&sg_emlrtRTEI, &b_st, 3, static_cast<int32_T>(varargin_2));
  emlrtRandn(&(r.data())[0], 3 * static_cast<int32_T>(varargin_2));
}

} // namespace coder

// End of code generation (randn.cpp)
