//
// bitget.cpp
//
// Code generation for function 'bitget'
//

// Include files
#include "bitget.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRTEInfo g_emlrtRTEI{
    64,                                                            // lineNo
    9,                                                             // colNo
    "bitget",                                                      // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/bitget.m" // pName
};

// Function Definitions
namespace coder {
void bitget(const emlrtStack &sp, real_T a, real_T c[3])
{
  boolean_T p;
  if ((a >= 0.0) && (a < 1.8446744073709552E+19)) {
    p = true;
  } else {
    p = (a >= 0.0);
  }
  if (p) {
    if ((a >= 0.0) && (a < 1.8446744073709552E+19)) {
      p = true;
    } else {
      p = (a < 0.0);
    }
    if (p && (a == muDoubleScalarFloor(a))) {
      p = true;
    } else {
      p = false;
    }
  } else {
    p = false;
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&sp, &g_emlrtRTEI, "MATLAB:bitget:outOfRange",
                                  "MATLAB:bitget:outOfRange", 0);
  }
  c[0] = ((static_cast<uint64_T>(a) & 1UL) != 0UL);
  c[1] = ((static_cast<uint64_T>(a) & 2UL) != 0UL);
  c[2] = ((static_cast<uint64_T>(a) & 4UL) != 0UL);
}

} // namespace coder

// End of code generation (bitget.cpp)
