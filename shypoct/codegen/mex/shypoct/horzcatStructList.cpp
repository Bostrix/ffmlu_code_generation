//
// horzcatStructList.cpp
//
// Code generation for function 'horzcatStructList'
//

// Include files
#include "horzcatStructList.h"
#include "rt_nonfinite.h"
#include "shypoct_internal_types.h"
#include "coder_array.h"
#include "coder_bounded_array.h"

// Variable Definitions
static emlrtRSInfo u_emlrtRSI{
    67,                  // lineNo
    "horzcatStructList", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "horzcatStructList.m" // pathName
};

static emlrtRTEInfo cb_emlrtRTEI{
    67,                  // lineNo
    10,                  // colNo
    "horzcatStructList", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "horzcatStructList.m" // pName
};

// Function Definitions
namespace coder {
namespace internal {
void b_horzcatStructList(const emlrtStack &sp,
                         const array<b_struct_T, 2U> &structure,
                         array<real_T, 2U> &result)
{
  int32_T j;
  int32_T n;
  n = structure.size(1);
  if (structure.size(1) == 0) {
    j = 0;
  } else {
    j = structure.size(1) * 3;
  }
  result.set_size(&cb_emlrtRTEI, &sp, 1, j);
  j = 0;
  for (int32_T i{0}; i < n; i++) {
    result[j] = structure[i].ctr[0];
    result[j + 1] = structure[i].ctr[1];
    result[j + 2] = structure[i].ctr[2];
    j += 3;
  }
}

void horzcatStructList(const emlrtStack &sp,
                       const array<b_struct_T, 2U> &structure,
                       array<real_T, 2U> &result)
{
  emlrtStack st;
  int32_T j;
  int32_T n;
  int32_T resultRowSize;
  st.prev = &sp;
  st.tls = sp.tls;
  n = structure.size(1);
  if (structure.size(1) == 0) {
    resultRowSize = 0;
  } else {
    resultRowSize = 1000;
    for (j = 2; j <= n; j++) {
      resultRowSize += 1000;
    }
  }
  st.site = &u_emlrtRSI;
  result.set_size(&cb_emlrtRTEI, &st, 1, resultRowSize);
  j = 0;
  for (resultRowSize = 0; resultRowSize < n; resultRowSize++) {
    for (int32_T i{0}; i < 1000; i++) {
      result[j + i] = structure[resultRowSize].chld.data[i];
    }
    j += 1000;
  }
}

} // namespace internal
} // namespace coder

// End of code generation (horzcatStructList.cpp)
