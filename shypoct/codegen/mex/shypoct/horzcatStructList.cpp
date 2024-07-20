//
// horzcatStructList.cpp
//
// Code generation for function 'horzcatStructList'
//

// Include files
#include "horzcatStructList.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "shypoct_data.h"
#include "shypoct_types.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo vb_emlrtRSI{
    69,                  // lineNo
    "horzcatStructList", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "horzcatStructList.m" // pathName
};

static emlrtRSInfo wb_emlrtRSI{
    67,                  // lineNo
    "horzcatStructList", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "horzcatStructList.m" // pathName
};

static emlrtRSInfo xb_emlrtRSI{
    40,                  // lineNo
    "horzcatStructList", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "horzcatStructList.m" // pathName
};

static emlrtRSInfo yb_emlrtRSI{
    25,                  // lineNo
    "horzcatStructList", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "horzcatStructList.m" // pathName
};

static emlrtDCInfo d_emlrtDCI{
    25,                       // lineNo
    79,                       // colNo
    "matlabCodegenAllocLike", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/matlabCodegenAllocLike.m", // pName
    4 // checkKind
};

static emlrtRTEInfo lc_emlrtRTEI{
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
                         const array<struct1_T, 1U> &structure,
                         array<real_T, 2U> &result)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T n;
  int32_T resultSize_idx_1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  n = structure.size(0);
  if (structure.size(0) == 0) {
    resultSize_idx_1 = 0;
  } else {
    resultSize_idx_1 = structure.size(0) * 3;
    st.site = &yb_emlrtRSI;
    if (structure.size(0) > 2147483646) {
      b_st.site = &db_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
  }
  result.set_size(&lc_emlrtRTEI, &sp, 1, resultSize_idx_1);
  resultSize_idx_1 = 0;
  st.site = &vb_emlrtRSI;
  for (int32_T i{0}; i < n; i++) {
    result[resultSize_idx_1] = structure[i].ctr[0];
    result[resultSize_idx_1 + 1] = structure[i].ctr[1];
    result[resultSize_idx_1 + 2] = structure[i].ctr[2];
    resultSize_idx_1 += 3;
  }
}

void horzcatStructList(const emlrtStack &sp,
                       const array<struct1_T, 1U> &structure,
                       array<real_T, 2U> &result)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T a;
  int32_T b_i;
  int32_T i;
  int32_T j;
  int32_T n;
  int32_T resultRowSize;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  n = structure.size(0);
  if (structure.size(0) == 0) {
    resultRowSize = 0;
  } else {
    i = 0;
    int32_T exitg1;
    do {
      exitg1 = 0;
      resultRowSize = structure[i].chld.size(1);
      if (resultRowSize != 0) {
        a = i + 2;
        st.site = &xb_emlrtRSI;
        if ((i + 2 <= n) && (n > 2147483646)) {
          b_st.site = &db_emlrtRSI;
          check_forloop_overflow_error(b_st);
        }
        for (j = a; j <= n; j++) {
          b_i = structure[j - 1].chld.size(1);
          if (b_i != 0) {
            resultRowSize += b_i;
          }
        }
        exitg1 = 1;
      } else if (i + 1 == n) {
        resultRowSize = 0;
        exitg1 = 1;
      } else {
        i++;
      }
    } while (exitg1 == 0);
  }
  st.site = &wb_emlrtRSI;
  result.set_size(&lc_emlrtRTEI, &st, 1, result.size(1));
  if (resultRowSize < 0) {
    emlrtNonNegativeCheckR2012b(static_cast<real_T>(resultRowSize), &d_emlrtDCI,
                                &st);
  }
  result.set_size(&lc_emlrtRTEI, &st, result.size(0), resultRowSize);
  j = 0;
  st.site = &vb_emlrtRSI;
  if (structure.size(0) > 2147483646) {
    b_st.site = &db_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (i = 0; i < n; i++) {
    b_i = j + structure[i].chld.size(1);
    if (j + 1 > b_i) {
      j = 0;
      a = 0;
    } else {
      a = b_i;
    }
    resultRowSize = a - j;
    for (a = 0; a < resultRowSize; a++) {
      result[j + a] = structure[i].chld[a];
    }
    j = b_i;
  }
}

} // namespace internal
} // namespace coder

// End of code generation (horzcatStructList.cpp)
