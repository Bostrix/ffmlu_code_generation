//
// lu.cpp
//
// Code generation for function 'lu'
//

// Include files
#include "lu.h"
#include "eml_ipiv2perm.h"
#include "rt_nonfinite.h"
#include "xgetrf.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo wq_emlrtRSI{
    32,                                                           // lineNo
    "lu",                                                         // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/lu.m" // pathName
};

static emlrtRSInfo xq_emlrtRSI{
    49,                                                           // lineNo
    "LU",                                                         // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/lu.m" // pathName
};

static emlrtRSInfo yq_emlrtRSI{
    50,                                                           // lineNo
    "LU",                                                         // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/lu.m" // pathName
};

static emlrtRTEInfo yb_emlrtRTEI{
    89,                                                           // lineNo
    9,                                                            // colNo
    "expandlu",                                                   // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/lu.m" // pName
};

static emlrtRTEInfo ac_emlrtRTEI{
    98,                                                           // lineNo
    17,                                                           // colNo
    "expandlu",                                                   // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/lu.m" // pName
};

static emlrtRTEInfo ho_emlrtRTEI{
    49,                                                           // lineNo
    6,                                                            // colNo
    "lu",                                                         // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/lu.m" // pName
};

static emlrtRTEInfo io_emlrtRTEI{
    81,                                                           // lineNo
    1,                                                            // colNo
    "lu",                                                         // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/lu.m" // pName
};

static emlrtRTEInfo jo_emlrtRTEI{
    82,                                                           // lineNo
    1,                                                            // colNo
    "lu",                                                         // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/lu.m" // pName
};

// Function Definitions
namespace coder {
void lu(const emlrtStack &sp, const array<real_T, 2U> &A, array<real_T, 2U> &L,
        array<real_T, 2U> &U)
{
  array<real_T, 2U> b_A;
  array<int32_T, 2U> ipiv;
  array<int32_T, 2U> pivot;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T i;
  int32_T loop_ub;
  int32_T m_tmp;
  int32_T mn;
  uint32_T j;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &wq_emlrtRSI;
  b_A.set_size(&ho_emlrtRTEI, &st, A.size(0), A.size(1));
  loop_ub = A.size(0) * A.size(1);
  for (i = 0; i < loop_ub; i++) {
    b_A[i] = A[i];
  }
  b_st.site = &xq_emlrtRSI;
  internal::lapack::xgetrf(b_st, A.size(0), A.size(1), b_A, A.size(0), ipiv);
  b_st.site = &yq_emlrtRSI;
  c_st.site = &yq_emlrtRSI;
  eml_ipiv2perm(c_st, ipiv, A.size(0), pivot);
  m_tmp = b_A.size(0);
  mn = static_cast<int32_T>(muDoubleScalarMin(
      static_cast<real_T>(b_A.size(0)), static_cast<real_T>(b_A.size(1))));
  L.set_size(&io_emlrtRTEI, &b_st, b_A.size(0), mn);
  loop_ub = b_A.size(0) * mn;
  for (i = 0; i < loop_ub; i++) {
    L[i] = 0.0;
  }
  U.set_size(&jo_emlrtRTEI, &b_st, mn, b_A.size(1));
  loop_ub = mn * b_A.size(1);
  for (i = 0; i < loop_ub; i++) {
    U[i] = 0.0;
  }
  for (loop_ub = 0; loop_ub < mn; loop_ub++) {
    for (int32_T b_i{0}; b_i <= loop_ub; b_i++) {
      U[b_i + U.size(0) * loop_ub] = b_A[b_i + b_A.size(0) * loop_ub];
    }
  }
  i = b_A.size(1) + static_cast<int32_T>(1.0 - (static_cast<real_T>(mn) + 1.0));
  emlrtForLoopVectorCheckR2021a(static_cast<real_T>(mn) + 1.0, 1.0,
                                static_cast<real_T>(b_A.size(1)),
                                mxDOUBLE_CLASS, i, &yb_emlrtRTEI, &b_st);
  for (loop_ub = 0; loop_ub < i; loop_ub++) {
    j = (static_cast<uint32_T>(mn) + static_cast<uint32_T>(loop_ub)) + 1U;
    for (int32_T b_i{0}; b_i < mn; b_i++) {
      U[b_i + U.size(0) * (static_cast<int32_T>(j) - 1)] =
          b_A[b_i + b_A.size(0) * (static_cast<int32_T>(j) - 1)];
    }
  }
  for (loop_ub = 0; loop_ub < mn; loop_ub++) {
    L[(pivot[loop_ub] + L.size(0) * loop_ub) - 1] = 1.0;
    i = (m_tmp - loop_ub) - 1;
    emlrtForLoopVectorCheckR2021a((static_cast<real_T>(loop_ub) + 1.0) + 1.0,
                                  1.0, static_cast<real_T>(m_tmp),
                                  mxDOUBLE_CLASS, i, &ac_emlrtRTEI, &b_st);
    for (int32_T b_i{0}; b_i < i; b_i++) {
      j = (static_cast<uint32_T>(loop_ub) + static_cast<uint32_T>(b_i)) + 2U;
      L[(pivot[static_cast<int32_T>(j) - 1] + L.size(0) * loop_ub) - 1] =
          b_A[(static_cast<int32_T>(j) + b_A.size(0) * loop_ub) - 1];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (lu.cpp)
