//
// eml_qr.cpp
//
// Code generation for function 'eml_qr'
//

// Include files
#include "eml_qr.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "xgeqp3.h"
#include "xorgqr.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo
    bm_emlrtRSI{
        19,       // lineNo
        "eml_qr", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/private/"
        "eml_qr.m" // pathName
    };

static emlrtRSInfo
    cm_emlrtRSI{
        164,       // lineNo
        "qr_econ", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/private/"
        "eml_qr.m" // pathName
    };

static emlrtRTEInfo
    mn_emlrtRTEI{
        164,      // lineNo
        6,        // colNo
        "eml_qr", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/private/"
        "eml_qr.m" // pName
    };

static emlrtRTEInfo
    nn_emlrtRTEI{
        187,      // lineNo
        1,        // colNo
        "eml_qr", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/private/"
        "eml_qr.m" // pName
    };

// Function Definitions
namespace coder {
void eml_qr(const emlrtStack &sp, const array<real_T, 2U> &A,
            array<real_T, 2U> &Q, array<real_T, 2U> &R, array<int32_T, 2U> &E)
{
  array<real_T, 2U> b_A;
  array<real_T, 2U> c_A;
  array<real_T, 1U> tau;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T a;
  int32_T loop_ub;
  int32_T m_tmp;
  int32_T minsz;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &bm_emlrtRSI;
  b_A.set_size(&mn_emlrtRTEI, &st, A.size(0), A.size(1));
  loop_ub = A.size(0) * A.size(1);
  for (a = 0; a < loop_ub; a++) {
    b_A[a] = A[a];
  }
  b_st.site = &cm_emlrtRSI;
  internal::lapack::xgeqp3(b_st, b_A, tau, E);
  m_tmp = b_A.size(0);
  loop_ub = b_A.size(1);
  minsz = muIntScalarMin_sint32(m_tmp, loop_ub);
  R.set_size(&kn_emlrtRTEI, &st, minsz, b_A.size(1));
  b_st.site = &il_emlrtRSI;
  if (minsz > 2147483646) {
    c_st.site = &ge_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T j{0}; j < minsz; j++) {
    b_st.site = &jl_emlrtRSI;
    for (int32_T i{0}; i <= j; i++) {
      R[i + R.size(0) * j] = b_A[i + b_A.size(0) * j];
    }
    a = j + 2;
    b_st.site = &kl_emlrtRSI;
    for (int32_T i{a}; i <= minsz; i++) {
      R[(i + R.size(0) * j) - 1] = 0.0;
    }
  }
  a = b_A.size(0) + 1;
  b_st.site = &ll_emlrtRSI;
  if ((b_A.size(0) + 1 <= b_A.size(1)) && (b_A.size(1) > 2147483646)) {
    c_st.site = &ge_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T j{a}; j <= loop_ub; j++) {
    b_st.site = &ml_emlrtRSI;
    for (int32_T i{0}; i < minsz; i++) {
      R[i + R.size(0) * (j - 1)] = b_A[i + b_A.size(0) * (j - 1)];
    }
  }
  b_st.site = &nl_emlrtRSI;
  c_A.set_size(&nn_emlrtRTEI, &b_st, b_A.size(0), b_A.size(1));
  loop_ub = b_A.size(0) * b_A.size(1);
  for (a = 0; a < loop_ub; a++) {
    c_A[a] = b_A[a];
  }
  c_st.site = &xl_emlrtRSI;
  internal::lapack::xorgqr(c_st, b_A.size(0), minsz, minsz, c_A, b_A.size(0),
                           tau);
  Q.set_size(&ln_emlrtRTEI, &st, b_A.size(0), minsz);
  b_st.site = &ol_emlrtRSI;
  for (int32_T j{0}; j < minsz; j++) {
    b_st.site = &pl_emlrtRSI;
    if (m_tmp > 2147483646) {
      c_st.site = &ge_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (int32_T i{0}; i < m_tmp; i++) {
      Q[i + Q.size(0) * j] = c_A[i + c_A.size(0) * j];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (eml_qr.cpp)
