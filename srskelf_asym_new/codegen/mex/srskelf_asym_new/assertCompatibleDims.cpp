//
// assertCompatibleDims.cpp
//
// Code generation for function 'assertCompatibleDims'
//

// Include files
#include "assertCompatibleDims.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRTEInfo gb_emlrtRTEI{
    13,                     // lineNo
    27,                     // colNo
    "assertCompatibleDims", // fName
    "/usr/local/MATLAB/R2024a/toolbox/shared/coder/coder/lib/+coder/+internal/"
    "assertCompatibleDims.m" // pName
};

// Function Definitions
namespace coder {
namespace internal {
void assertCompatibleDims(const emlrtStack &sp, const array<real_T, 2U> &x,
                          const array<real_T, 2U> &y)
{
  if (((x.size(0) != 1) && (y.size(0) != 1) && (x.size(0) != y.size(0))) ||
      ((x.size(1) != 1) && (y.size(1) != 1) && (x.size(1) != y.size(1)))) {
    emlrtErrorWithMessageIdR2018a(&sp, &gb_emlrtRTEI,
                                  "MATLAB:sizeDimensionsMustMatch",
                                  "MATLAB:sizeDimensionsMustMatch", 0);
  }
}

} // namespace internal
} // namespace coder

// End of code generation (assertCompatibleDims.cpp)
