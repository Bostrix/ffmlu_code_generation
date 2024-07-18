//
// ind2sub.cpp
//
// Code generation for function 'ind2sub'
//

// Include files
#include "ind2sub.h"
#include "rt_nonfinite.h"

// Variable Definitions
static emlrtRTEInfo i_emlrtRTEI{
    21,        // lineNo
    15,        // colNo
    "ind2sub", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/ind2sub.m" // pName
};

static emlrtRTEInfo
    s_emlrtRTEI{
        19,            // lineNo
        9,             // colNo
        "indexDivide", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
        "indexDivide.m" // pName
    };

// Function Definitions
namespace coder {
namespace internal {
int32_T ind2sub(const emlrtStack &sp, const real_T siz[2], real_T ndx,
                int32_T &varargout_2)
{
  int32_T i;
  if (static_cast<int32_T>(ndx) >
      static_cast<int32_T>(siz[0]) * static_cast<int32_T>(siz[1])) {
    emlrtErrorWithMessageIdR2018a(&sp, &i_emlrtRTEI,
                                  "Coder:MATLAB:ind2sub_IndexOutOfRange",
                                  "Coder:MATLAB:ind2sub_IndexOutOfRange", 0);
  }
  if (static_cast<uint8_T>(static_cast<int32_T>(siz[0])) == 0U) {
    emlrtDivisionByZeroErrorR2012b(&s_emlrtRTEI, (emlrtConstCTX)&sp);
  } else {
    i = static_cast<int32_T>(
        static_cast<uint32_T>(
            static_cast<uint8_T>(static_cast<int32_T>(ndx) - 1)) /
        static_cast<uint8_T>(static_cast<int32_T>(siz[0])));
  }
  varargout_2 = i + 1;
  return static_cast<int32_T>(ndx) - i * static_cast<int32_T>(siz[0]);
}

} // namespace internal
} // namespace coder

// End of code generation (ind2sub.cpp)
