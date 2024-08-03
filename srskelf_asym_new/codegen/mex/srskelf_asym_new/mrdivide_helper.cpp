//
// mrdivide_helper.cpp
//
// Code generation for function 'mrdivide_helper'
//

// Include files
#include "mrdivide_helper.h"
#include "eml_int_forloop_overflow_check.h"
#include "qrsolve.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "warning.h"
#include "blas.h"
#include "coder_array.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <cstddef>

// Variable Definitions
static emlrtRSInfo sq_emlrtRSI{
    42,      // lineNo
    "mrdiv", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" // pathName
};

static emlrtRSInfo tq_emlrtRSI{
    44,      // lineNo
    "mrdiv", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" // pathName
};

static emlrtRSInfo uq_emlrtRSI{
    107,          // lineNo
    "lusolveNxN", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/lusolve.m" // pathName
};

static emlrtRSInfo vq_emlrtRSI{
    135,          // lineNo
    "XtimesInvA", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/lusolve.m" // pathName
};

static emlrtRSInfo wq_emlrtRSI{
    140,          // lineNo
    "XtimesInvA", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/lusolve.m" // pathName
};

static emlrtRSInfo xq_emlrtRSI{
    142,          // lineNo
    "XtimesInvA", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/lusolve.m" // pathName
};

static emlrtRSInfo yq_emlrtRSI{
    147,          // lineNo
    "XtimesInvA", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/lusolve.m" // pathName
};

static emlrtRTEInfo ep_emlrtRTEI{
    44,                // lineNo
    32,                // colNo
    "mrdivide_helper", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" // pName
};

static emlrtRTEInfo fp_emlrtRTEI{
    44,                // lineNo
    35,                // colNo
    "mrdivide_helper", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" // pName
};

static emlrtRTEInfo gp_emlrtRTEI{
    44,                // lineNo
    5,                 // colNo
    "mrdivide_helper", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" // pName
};

static emlrtRTEInfo
    hp_emlrtRTEI{
        1,        // lineNo
        37,       // colNo
        "xgetrf", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgetrf.m" // pName
    };

static emlrtRTEInfo ip_emlrtRTEI{
    31,                // lineNo
    5,                 // colNo
    "mrdivide_helper", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" // pName
};

// Function Definitions
namespace coder {
namespace internal {
void mrdiv(const emlrtStack &sp, array<real_T, 2U> &A,
           const array<real_T, 2U> &B)
{
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  array<ptrdiff_t, 1U> ipiv_t;
  array<ptrdiff_t, 1U> r;
  array<real_T, 2U> b_A;
  array<real_T, 2U> b_B;
  array<real_T, 2U> c_A;
  array<int32_T, 2U> ipiv;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T temp;
  char_T DIAGA1;
  char_T SIDE1;
  char_T TRANSA1;
  char_T UPLO1;
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
  if ((A.size(0) == 0) || (A.size(1) == 0) ||
      ((B.size(0) == 0) || (B.size(1) == 0))) {
    int32_T loop_ub;
    int32_T nb;
    nb = A.size(0);
    loop_ub = B.size(0);
    A.set_size(&ip_emlrtRTEI, &sp, A.size(0), B.size(0));
    for (int32_T i{0}; i < loop_ub; i++) {
      for (int32_T i1{0}; i1 < nb; i1++) {
        A[i1 + A.size(0) * i] = 0.0;
      }
    }
  } else if (B.size(0) == B.size(1)) {
    ptrdiff_t info_t;
    int32_T i;
    int32_T loop_ub;
    int32_T nb;
    st.site = &sq_emlrtRSI;
    b_st.site = &sm_emlrtRSI;
    c_st.site = &uq_emlrtRSI;
    nb = B.size(1);
    d_st.site = &vq_emlrtRSI;
    b_A.set_size(&hp_emlrtRTEI, &d_st, B.size(0), B.size(1));
    loop_ub = B.size(0) * B.size(1);
    for (i = 0; i < loop_ub; i++) {
      b_A[i] = B[i];
    }
    e_st.site = &an_emlrtRSI;
    f_st.site = &cn_emlrtRSI;
    info_t = (ptrdiff_t)0.0;
    nb = muIntScalarMin_sint32(nb, nb);
    r.set_size(&rg_emlrtRTEI, &f_st, nb);
    for (i = 0; i < nb; i++) {
      r[i] = info_t;
    }
    ipiv_t.set_size(&yo_emlrtRTEI, &e_st, r.size(0));
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)B.size(1),
                                 (ptrdiff_t)B.size(1), &(b_A.data())[0],
                                 (ptrdiff_t)B.size(1), &(ipiv_t.data())[0]);
    ipiv.set_size(&ap_emlrtRTEI, &e_st, 1, ipiv_t.size(0));
    f_st.site = &bn_emlrtRSI;
    if ((int32_T)info_t < 0) {
      if ((int32_T)info_t == -1010) {
        emlrtErrorWithMessageIdR2018a(&f_st, &qb_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&f_st, &rb_emlrtRTEI,
                                      "Coder:toolbox:LAPACKCallErrorInfo",
                                      "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                      19, &cv1[0], 12, (int32_T)info_t);
      }
    }
    i = ipiv_t.size(0) - 1;
    for (nb = 0; nb <= i; nb++) {
      ipiv[nb] = (int32_T)ipiv_t[nb];
    }
    nb = A.size(0);
    d_st.site = &wq_emlrtRSI;
    if (A.size(0) >= 1) {
      e_st.site = &hn_emlrtRSI;
      temp = 1.0;
      DIAGA1 = 'N';
      TRANSA1 = 'N';
      UPLO1 = 'U';
      SIDE1 = 'R';
      m_t = (ptrdiff_t)A.size(0);
      n_t = (ptrdiff_t)B.size(1);
      lda_t = (ptrdiff_t)B.size(1);
      ldb_t = (ptrdiff_t)A.size(0);
      dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &m_t, &n_t, &temp,
            &(b_A.data())[0], &lda_t, &(A.data())[0], &ldb_t);
    }
    d_st.site = &xq_emlrtRSI;
    if (A.size(0) >= 1) {
      e_st.site = &hn_emlrtRSI;
      temp = 1.0;
      DIAGA1 = 'U';
      TRANSA1 = 'N';
      UPLO1 = 'L';
      SIDE1 = 'R';
      m_t = (ptrdiff_t)A.size(0);
      n_t = (ptrdiff_t)B.size(1);
      lda_t = (ptrdiff_t)B.size(1);
      ldb_t = (ptrdiff_t)A.size(0);
      dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &m_t, &n_t, &temp,
            &(b_A.data())[0], &lda_t, &(A.data())[0], &ldb_t);
    }
    i = B.size(1) - 1;
    for (loop_ub = i; loop_ub >= 1; loop_ub--) {
      int32_T i1;
      i1 = ipiv[loop_ub - 1];
      if (i1 != loop_ub) {
        d_st.site = &yq_emlrtRSI;
        if (nb > 2147483646) {
          e_st.site = &fe_emlrtRSI;
          check_forloop_overflow_error(e_st);
        }
        for (int32_T b_i{0}; b_i < nb; b_i++) {
          temp = A[b_i + A.size(0) * (loop_ub - 1)];
          A[b_i + A.size(0) * (loop_ub - 1)] = A[b_i + A.size(0) * (i1 - 1)];
          A[b_i + A.size(0) * (i1 - 1)] = temp;
        }
      }
    }
    if (((B.size(0) != 1) || (B.size(1) != 1)) && ((int32_T)info_t > 0)) {
      c_st.site = &um_emlrtRSI;
      d_st.site = &jn_emlrtRSI;
      warning(d_st);
    }
  } else {
    int32_T loop_ub;
    int32_T nb;
    loop_ub = B.size(1);
    nb = B.size(0);
    b_B.set_size(&ep_emlrtRTEI, &sp, B.size(1), B.size(0));
    for (int32_T i{0}; i < nb; i++) {
      for (int32_T i1{0}; i1 < loop_ub; i1++) {
        b_B[i1 + b_B.size(0) * i] = B[i + B.size(0) * i1];
      }
    }
    loop_ub = A.size(1);
    nb = A.size(0);
    c_A.set_size(&fp_emlrtRTEI, &sp, loop_ub, nb);
    for (int32_T i{0}; i < nb; i++) {
      for (int32_T i1{0}; i1 < loop_ub; i1++) {
        c_A[i1 + c_A.size(0) * i] = A[i + A.size(0) * i1];
      }
    }
    st.site = &tq_emlrtRSI;
    qrsolve(st, b_B, c_A, b_A);
    loop_ub = b_A.size(1);
    A.set_size(&gp_emlrtRTEI, &sp, b_A.size(1), A.size(1));
    nb = b_A.size(0);
    A.set_size(&gp_emlrtRTEI, &sp, A.size(0), b_A.size(0));
    for (int32_T i{0}; i < nb; i++) {
      for (int32_T i1{0}; i1 < loop_ub; i1++) {
        A[i1 + A.size(0) * i] = b_A[i + b_A.size(0) * i1];
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace internal
} // namespace coder

// End of code generation (mrdivide_helper.cpp)
