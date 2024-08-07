//
// updateMatrix.cpp
//
// Code generation for function 'updateMatrix'
//

// Include files
#include "updateMatrix.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtBCInfo emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    3,              // lineNo
    23,             // colNo
    "A",            // aName
    "updateMatrix", // fName
    "/home/user/Documents/ffmlu_code_generation/matrix_update/modified/"
    "updateMatrix.m", // pName
    0                 // checkKind
};

static emlrtBCInfo b_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    3,              // lineNo
    29,             // colNo
    "A",            // aName
    "updateMatrix", // fName
    "/home/user/Documents/ffmlu_code_generation/matrix_update/modified/"
    "updateMatrix.m", // pName
    0                 // checkKind
};

static emlrtBCInfo c_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    3,              // lineNo
    7,              // colNo
    "A",            // aName
    "updateMatrix", // fName
    "/home/user/Documents/ffmlu_code_generation/matrix_update/modified/"
    "updateMatrix.m", // pName
    0                 // checkKind
};

static emlrtBCInfo d_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    3,              // lineNo
    13,             // colNo
    "A",            // aName
    "updateMatrix", // fName
    "/home/user/Documents/ffmlu_code_generation/matrix_update/modified/"
    "updateMatrix.m", // pName
    0                 // checkKind
};

// Function Definitions
void updateMatrix(const emlrtStack *sp, coder::array<real_T, 2U> &A,
                  int32_T subI, int32_T subJ, real_T tmp1, real_T tmp2)
{
  int32_T i;
  int32_T i1;
  //  Update the matrix A at the specified indices
  i = A.size(0);
  if ((subI < 1) || (subI > i)) {
    emlrtDynamicBoundsCheckR2012b(subI, 1, i, &emlrtBCI, (emlrtConstCTX)sp);
  }
  i1 = A.size(1);
  if ((subJ < 1) || (subJ > i1)) {
    emlrtDynamicBoundsCheckR2012b(subJ, 1, i1, &b_emlrtBCI, (emlrtConstCTX)sp);
  }
  if (subI > i) {
    emlrtDynamicBoundsCheckR2012b(subI, 1, i, &c_emlrtBCI, (emlrtConstCTX)sp);
  }
  if (subJ > i1) {
    emlrtDynamicBoundsCheckR2012b(subJ, 1, i1, &d_emlrtBCI, (emlrtConstCTX)sp);
  }
  A[(subI + A.size(0) * (subJ - 1)) - 1] =
      A[(subI + A.size(0) * (subJ - 1)) - 1] - tmp1 * tmp2;
}

// End of code generation (updateMatrix.cpp)
