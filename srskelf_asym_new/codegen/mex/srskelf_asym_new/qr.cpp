//
// qr.cpp
//
// Code generation for function 'qr'
//

// Include files
#include "qr.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "xorgqr.h"
#include "coder_array.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <cstddef>

// Variable Definitions
static emlrtRSInfo fl_emlrtRSI{
    24,                                                           // lineNo
    "qr",                                                         // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qr.m" // pathName
};

static emlrtRSInfo
    gl_emlrtRSI{
        35,       // lineNo
        "eml_qr", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/private/"
        "eml_qr.m" // pathName
    };

static emlrtRSInfo
    hl_emlrtRSI{
        166,       // lineNo
        "qr_econ", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/private/"
        "eml_qr.m" // pathName
    };

static emlrtRSInfo
    ql_emlrtRSI{
        27,       // lineNo
        "xgeqrf", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqrf.m" // pathName
    };

static emlrtRSInfo
    rl_emlrtRSI{
        91,             // lineNo
        "ceval_xgeqrf", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqrf.m" // pathName
    };

static emlrtRSInfo
    sl_emlrtRSI{
        93,             // lineNo
        "ceval_xgeqrf", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqrf.m" // pathName
    };

static emlrtRSInfo
    tl_emlrtRSI{
        94,             // lineNo
        "ceval_xgeqrf", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqrf.m" // pathName
    };

static emlrtRSInfo
    ul_emlrtRSI{
        99,             // lineNo
        "ceval_xgeqrf", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqrf.m" // pathName
    };

static emlrtRSInfo
    vl_emlrtRSI{
        102,            // lineNo
        "ceval_xgeqrf", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqrf.m" // pathName
    };

static emlrtRTEInfo
    hn_emlrtRTEI{
        35,       // lineNo
        25,       // colNo
        "eml_qr", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/private/"
        "eml_qr.m" // pName
    };

static emlrtRTEInfo
    in_emlrtRTEI{
        73,       // lineNo
        22,       // colNo
        "xgeqrf", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqrf.m" // pName
    };

static emlrtRTEInfo
    jn_emlrtRTEI{
        75,       // lineNo
        5,        // colNo
        "xgeqrf", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqrf.m" // pName
    };

// Function Definitions
namespace coder {
void qr(const emlrtStack &sp, const array<real_T, 2U> &A, array<real_T, 2U> &Q,
        array<real_T, 2U> &R)
{
  static const char_T fname[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                '_', 'd', 'g', 'e', 'q', 'r', 'f'};
  array<real_T, 2U> b_A;
  array<real_T, 1U> tau;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  int32_T a;
  int32_T loop_ub;
  int32_T m;
  int32_T minsz;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &fl_emlrtRSI;
  b_st.site = &gl_emlrtRSI;
  m = A.size(0);
  minsz = A.size(1);
  b_A.set_size(&hn_emlrtRTEI, &b_st, A.size(0), A.size(1));
  loop_ub = A.size(0) * A.size(1);
  for (a = 0; a < loop_ub; a++) {
    b_A[a] = A[a];
  }
  c_st.site = &hl_emlrtRSI;
  d_st.site = &ql_emlrtRSI;
  loop_ub = muIntScalarMin_sint32(m, minsz);
  tau.set_size(&in_emlrtRTEI, &d_st, loop_ub);
  if ((b_A.size(0) == 0) || (b_A.size(1) == 0)) {
    tau.set_size(&jn_emlrtRTEI, &d_st, loop_ub);
    for (a = 0; a < loop_ub; a++) {
      tau[a] = 0.0;
    }
  } else {
    ptrdiff_t info_t;
    boolean_T p;
    info_t = LAPACKE_dgeqrf(102, (ptrdiff_t)b_A.size(0), (ptrdiff_t)b_A.size(1),
                            &(b_A.data())[0], (ptrdiff_t)b_A.size(0),
                            &(tau.data())[0]);
    e_st.site = &rl_emlrtRSI;
    if ((int32_T)info_t != 0) {
      p = true;
      if ((int32_T)info_t != -4) {
        if ((int32_T)info_t == -1010) {
          emlrtErrorWithMessageIdR2018a(&e_st, &qb_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&e_st, &rb_emlrtRTEI,
                                        "Coder:toolbox:LAPACKCallErrorInfo",
                                        "Coder:toolbox:LAPACKCallErrorInfo", 5,
                                        4, 14, &fname[0], 12, (int32_T)info_t);
        }
      }
    } else {
      p = false;
    }
    if (p) {
      e_st.site = &sl_emlrtRSI;
      if (b_A.size(1) > 2147483646) {
        f_st.site = &ge_emlrtRSI;
        check_forloop_overflow_error(f_st);
      }
      for (int32_T j{0}; j < minsz; j++) {
        e_st.site = &tl_emlrtRSI;
        if (m > 2147483646) {
          f_st.site = &ge_emlrtRSI;
          check_forloop_overflow_error(f_st);
        }
        for (int32_T i{0}; i < m; i++) {
          b_A[j * m + i] = rtNaN;
        }
      }
      e_st.site = &ul_emlrtRSI;
      if (loop_ub > 2147483646) {
        f_st.site = &ge_emlrtRSI;
        check_forloop_overflow_error(f_st);
      }
      for (int32_T i{0}; i < loop_ub; i++) {
        tau[i] = rtNaN;
      }
      a = loop_ub + 1;
      e_st.site = &vl_emlrtRSI;
      for (int32_T i{a}; i <= loop_ub; i++) {
        tau[i - 1] = 0.0;
      }
    }
  }
  m = b_A.size(0);
  loop_ub = b_A.size(1);
  minsz = muIntScalarMin_sint32(m, loop_ub);
  R.set_size(&kn_emlrtRTEI, &b_st, minsz, b_A.size(1));
  c_st.site = &il_emlrtRSI;
  if (minsz > 2147483646) {
    d_st.site = &ge_emlrtRSI;
    check_forloop_overflow_error(d_st);
  }
  for (int32_T j{0}; j < minsz; j++) {
    c_st.site = &jl_emlrtRSI;
    for (int32_T i{0}; i <= j; i++) {
      R[i + R.size(0) * j] = b_A[i + b_A.size(0) * j];
    }
    a = j + 2;
    c_st.site = &kl_emlrtRSI;
    for (int32_T i{a}; i <= minsz; i++) {
      R[(i + R.size(0) * j) - 1] = 0.0;
    }
  }
  a = b_A.size(0) + 1;
  c_st.site = &ll_emlrtRSI;
  if ((b_A.size(0) + 1 <= b_A.size(1)) && (b_A.size(1) > 2147483646)) {
    d_st.site = &ge_emlrtRSI;
    check_forloop_overflow_error(d_st);
  }
  for (int32_T j{a}; j <= loop_ub; j++) {
    c_st.site = &ml_emlrtRSI;
    for (int32_T i{0}; i < minsz; i++) {
      R[i + R.size(0) * (j - 1)] = b_A[i + b_A.size(0) * (j - 1)];
    }
  }
  c_st.site = &nl_emlrtRSI;
  d_st.site = &xl_emlrtRSI;
  internal::lapack::xorgqr(d_st, b_A.size(0), minsz, minsz, b_A, b_A.size(0),
                           tau);
  Q.set_size(&ln_emlrtRTEI, &b_st, m, minsz);
  c_st.site = &ol_emlrtRSI;
  for (int32_T j{0}; j < minsz; j++) {
    c_st.site = &pl_emlrtRSI;
    if (m > 2147483646) {
      d_st.site = &ge_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (int32_T i{0}; i < m; i++) {
      Q[i + Q.size(0) * j] = b_A[i + b_A.size(0) * j];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (qr.cpp)
