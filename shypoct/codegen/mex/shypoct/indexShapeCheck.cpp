//
// indexShapeCheck.cpp
//
// Code generation for function 'indexShapeCheck'
//

// Include files
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"

// Variable Definitions
static emlrtRSInfo rb_emlrtRSI{
    42,                // lineNo
    "indexShapeCheck", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "indexShapeCheck.m" // pathName
};

static emlrtRTEInfo j_emlrtRTEI{
    122,           // lineNo
    5,             // colNo
    "errOrWarnIf", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "indexShapeCheck.m" // pName
};

// Function Definitions
namespace coder {
namespace internal {
void indexShapeCheck(const emlrtStack &sp, int32_T matrixSize,
                     const int32_T indexSize[2])
{
  emlrtStack st;
  boolean_T c;
  st.prev = &sp;
  st.tls = sp.tls;
  if ((matrixSize == 1) && (indexSize[1] != 1)) {
    c = true;
  } else {
    c = false;
  }
  st.site = &rb_emlrtRSI;
  if (c) {
    emlrtErrorWithMessageIdR2018a(&st, &j_emlrtRTEI,
                                  "Coder:FE:PotentialVectorVector",
                                  "Coder:FE:PotentialVectorVector", 0);
  }
}

} // namespace internal
} // namespace coder

// End of code generation (indexShapeCheck.cpp)