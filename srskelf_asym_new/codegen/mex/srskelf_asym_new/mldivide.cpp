//
// mldivide.cpp
//
// Code generation for function 'mldivide'
//

// Include files
#include "mldivide.h"
#include "eml_int_forloop_overflow_check.h"
#include "infocheck.h"
#include "qrsolve.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "warning.h"
#include "xgeqp3.h"
#include "coder_array.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <cstddef>

// Variable Definitions
static emlrtRSInfo lm_emlrtRSI{
    20,                                                              // lineNo
    "mldivide",                                                      // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/mldivide.m" // pathName
};

static emlrtRSInfo mm_emlrtRSI{
    42,                                                              // lineNo
    "mldiv",                                                         // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/mldivide.m" // pathName
};

static emlrtRSInfo nm_emlrtRSI{
    44,                                                              // lineNo
    "mldiv",                                                         // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/mldivide.m" // pathName
};

static emlrtRSInfo pm_emlrtRSI{
    109,          // lineNo
    "lusolveNxN", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/lusolve.m" // pathName
};

static emlrtRSInfo rm_emlrtRSI{
    124,          // lineNo
    "InvAtimesX", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/lusolve.m" // pathName
};

static emlrtRSInfo sm_emlrtRSI{
    19,        // lineNo
    "xgetrfs", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrfs.m" // pathName
};

static emlrtRSInfo tm_emlrtRSI{
    108,      // lineNo
    "cmldiv", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrfs.m" // pathName
};

static emlrtRSInfo um_emlrtRSI{
    70,       // lineNo
    "cmldiv", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrfs.m" // pathName
};

static emlrtRTEInfo tb_emlrtRTEI{
    16,                                                              // lineNo
    19,                                                              // colNo
    "mldivide",                                                      // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/mldivide.m" // pName
};

static emlrtRTEInfo sn_emlrtRTEI{
    20,                                                              // lineNo
    5,                                                               // colNo
    "mldivide",                                                      // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/mldivide.m" // pName
};

static emlrtRTEInfo tn_emlrtRTEI{
    48,        // lineNo
    37,        // colNo
    "xgetrfs", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrfs.m" // pName
};

static emlrtRTEInfo un_emlrtRTEI{
    70,        // lineNo
    23,        // colNo
    "xgetrfs", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrfs.m" // pName
};

// Function Definitions
namespace coder {
void mldivide(const emlrtStack &sp, const array<real_T, 2U> &A,
              const array<real_T, 1U> &B, array<real_T, 1U> &Y)
{
  array<ptrdiff_t, 1U> IPIV;
  array<ptrdiff_t, 1U> r;
  array<real_T, 2U> b_A;
  array<real_T, 1U> b_B;
  array<real_T, 1U> tau;
  array<int32_T, 2U> jpvt;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (B.size(0) != A.size(0)) {
    emlrtErrorWithMessageIdR2018a(&sp, &tb_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  st.site = &lm_emlrtRSI;
  if ((A.size(0) == 0) || (A.size(1) == 0) || (B.size(0) == 0)) {
    int32_T loop_ub;
    loop_ub = A.size(1);
    Y.set_size(&sn_emlrtRTEI, &st, A.size(1));
    for (int32_T i{0}; i < loop_ub; i++) {
      Y[i] = 0.0;
    }
  } else if (A.size(0) == A.size(1)) {
    ptrdiff_t INFO;
    ptrdiff_t LDA;
    ptrdiff_t nrc_t;
    int32_T B_idx_0;
    int32_T i;
    int32_T loop_ub;
    b_st.site = &mm_emlrtRSI;
    c_st.site = &om_emlrtRSI;
    loop_ub = B.size(0);
    Y.set_size(&sn_emlrtRTEI, &c_st, B.size(0));
    for (i = 0; i < loop_ub; i++) {
      Y[i] = B[i];
    }
    int32_T rankA;
    d_st.site = &pm_emlrtRSI;
    e_st.site = &rm_emlrtRSI;
    B_idx_0 = A.size(0);
    rankA = A.size(1);
    i = muIntScalarMin_sint32(B_idx_0, rankA);
    B_idx_0 = muIntScalarMin_sint32(loop_ub, i);
    f_st.site = &sm_emlrtRSI;
    b_A.set_size(&tn_emlrtRTEI, &f_st, A.size(0), A.size(1));
    loop_ub = A.size(0) * A.size(1);
    for (i = 0; i < loop_ub; i++) {
      b_A[i] = A[i];
    }
    g_st.site = &um_emlrtRSI;
    nrc_t = (ptrdiff_t)0.0;
    r.set_size(&qg_emlrtRTEI, &g_st, B_idx_0);
    for (i = 0; i < B_idx_0; i++) {
      r[i] = nrc_t;
    }
    IPIV.set_size(&un_emlrtRTEI, &f_st, r.size(0));
    nrc_t = (ptrdiff_t)B_idx_0;
    LDA = (ptrdiff_t)b_A.size(0);
    INFO = LAPACKE_dgetrf_work(102, nrc_t, nrc_t, &(b_A.data())[0], LDA,
                               &(IPIV.data())[0]);
    g_st.site = &tm_emlrtRSI;
    if ((int32_T)INFO < 0) {
      if ((int32_T)INFO == -1010) {
        emlrtErrorWithMessageIdR2018a(&g_st, &qb_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&g_st, &rb_emlrtRTEI,
                                      "Coder:toolbox:LAPACKCallErrorInfo",
                                      "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                      19, &cv1[0], 12, (int32_T)INFO);
      }
    }
    LAPACKE_dgetrs_work(102, 'N', nrc_t, (ptrdiff_t)1, &(b_A.data())[0], LDA,
                        &(IPIV.data())[0], &(Y.data())[0],
                        (ptrdiff_t)B.size(0));
    if (((A.size(0) != 1) || (A.size(1) != 1)) && ((int32_T)INFO > 0)) {
      d_st.site = &qm_emlrtRSI;
      e_st.site = &fn_emlrtRSI;
      internal::warning(e_st);
    }
  } else {
    int32_T B_idx_0;
    int32_T i;
    int32_T loop_ub;
    int32_T rankA;
    b_st.site = &nm_emlrtRSI;
    b_A.set_size(&vn_emlrtRTEI, &b_st, A.size(0), A.size(1));
    loop_ub = A.size(0) * A.size(1);
    for (i = 0; i < loop_ub; i++) {
      b_A[i] = A[i];
    }
    c_st.site = &gn_emlrtRSI;
    internal::lapack::xgeqp3(c_st, b_A, tau, jpvt);
    c_st.site = &hn_emlrtRSI;
    rankA = internal::rankFromQR(c_st, b_A);
    c_st.site = &in_emlrtRSI;
    loop_ub = B.size(0);
    b_B.set_size(&wn_emlrtRTEI, &c_st, B.size(0));
    for (i = 0; i < loop_ub; i++) {
      b_B[i] = B[i];
    }
    loop_ub = b_A.size(1);
    Y.set_size(&sn_emlrtRTEI, &c_st, b_A.size(1));
    for (i = 0; i < loop_ub; i++) {
      Y[i] = 0.0;
    }
    d_st.site = &ln_emlrtRSI;
    e_st.site = &pn_emlrtRSI;
    if ((b_A.size(0) != 0) && (b_A.size(1) != 0)) {
      ptrdiff_t nrc_t;
      nrc_t = (ptrdiff_t)b_B.size(0);
      i = b_A.size(0);
      loop_ub = b_A.size(1);
      nrc_t = LAPACKE_dormqr(102, 'L', 'T', nrc_t, (ptrdiff_t)1,
                             (ptrdiff_t)muIntScalarMin_sint32(i, loop_ub),
                             &(b_A.data())[0], (ptrdiff_t)b_A.size(0),
                             &(tau.data())[0], &(b_B.data())[0], nrc_t);
      f_st.site = &qn_emlrtRSI;
      if (internal::lapack::infocheck(f_st, (int32_T)nrc_t)) {
        B_idx_0 = b_B.size(0);
        b_B.set_size(&yn_emlrtRTEI, &e_st, B_idx_0);
        for (i = 0; i < B_idx_0; i++) {
          b_B[i] = rtNaN;
        }
      }
    }
    d_st.site = &nn_emlrtRSI;
    if (rankA > 2147483646) {
      e_st.site = &fe_emlrtRSI;
      check_forloop_overflow_error(e_st);
    }
    for (B_idx_0 = 0; B_idx_0 < rankA; B_idx_0++) {
      Y[jpvt[B_idx_0] - 1] = b_B[B_idx_0];
    }
    for (loop_ub = rankA; loop_ub >= 1; loop_ub--) {
      i = jpvt[loop_ub - 1];
      Y[i - 1] = Y[i - 1] / b_A[(loop_ub + b_A.size(0) * (loop_ub - 1)) - 1];
      d_st.site = &on_emlrtRSI;
      for (B_idx_0 = 0; B_idx_0 <= loop_ub - 2; B_idx_0++) {
        Y[jpvt[B_idx_0] - 1] =
            Y[jpvt[B_idx_0] - 1] -
            Y[i - 1] * b_A[B_idx_0 + b_A.size(0) * (loop_ub - 1)];
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void mldivide(const emlrtStack &sp, const array<real_T, 2U> &A,
              const array<real_T, 2U> &B, array<real_T, 2U> &Y)
{
  array<ptrdiff_t, 1U> IPIV;
  array<ptrdiff_t, 1U> r;
  array<real_T, 2U> b_A;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (B.size(0) != A.size(0)) {
    emlrtErrorWithMessageIdR2018a(&sp, &tb_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  st.site = &lm_emlrtRSI;
  if ((A.size(0) == 0) || (A.size(1) == 0) ||
      ((B.size(0) == 0) || (B.size(1) == 0))) {
    int32_T loop_ub;
    Y.set_size(&sn_emlrtRTEI, &st, A.size(1), B.size(1));
    loop_ub = A.size(1) * B.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      Y[i] = 0.0;
    }
  } else if (A.size(0) == A.size(1)) {
    ptrdiff_t INFO;
    ptrdiff_t LDA;
    ptrdiff_t N;
    int32_T i;
    int32_T loop_ub;
    int32_T ma_tmp;
    b_st.site = &mm_emlrtRSI;
    c_st.site = &om_emlrtRSI;
    i = B.size(0);
    Y.set_size(&sn_emlrtRTEI, &c_st, B.size(0), B.size(1));
    loop_ub = B.size(0) * B.size(1);
    for (ma_tmp = 0; ma_tmp < loop_ub; ma_tmp++) {
      Y[ma_tmp] = B[ma_tmp];
    }
    d_st.site = &pm_emlrtRSI;
    e_st.site = &rm_emlrtRSI;
    ma_tmp = A.size(0);
    loop_ub = A.size(1);
    loop_ub = muIntScalarMin_sint32(ma_tmp, loop_ub);
    ma_tmp = muIntScalarMin_sint32(i, loop_ub);
    f_st.site = &sm_emlrtRSI;
    b_A.set_size(&tn_emlrtRTEI, &f_st, A.size(0), A.size(1));
    loop_ub = A.size(0) * A.size(1);
    for (i = 0; i < loop_ub; i++) {
      b_A[i] = A[i];
    }
    g_st.site = &um_emlrtRSI;
    N = (ptrdiff_t)0.0;
    r.set_size(&qg_emlrtRTEI, &g_st, ma_tmp);
    for (i = 0; i < ma_tmp; i++) {
      r[i] = N;
    }
    IPIV.set_size(&un_emlrtRTEI, &f_st, r.size(0));
    N = (ptrdiff_t)ma_tmp;
    LDA = (ptrdiff_t)b_A.size(0);
    INFO = LAPACKE_dgetrf_work(102, N, N, &(b_A.data())[0], LDA,
                               &(IPIV.data())[0]);
    g_st.site = &tm_emlrtRSI;
    if ((int32_T)INFO < 0) {
      if ((int32_T)INFO == -1010) {
        emlrtErrorWithMessageIdR2018a(&g_st, &qb_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&g_st, &rb_emlrtRTEI,
                                      "Coder:toolbox:LAPACKCallErrorInfo",
                                      "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                      19, &cv1[0], 12, (int32_T)INFO);
      }
    }
    LAPACKE_dgetrs_work(102, 'N', N, (ptrdiff_t)B.size(1), &(b_A.data())[0],
                        LDA, &(IPIV.data())[0], &(Y.data())[0],
                        (ptrdiff_t)B.size(0));
    if (((A.size(0) != 1) || (A.size(1) != 1)) && ((int32_T)INFO > 0)) {
      d_st.site = &qm_emlrtRSI;
      e_st.site = &fn_emlrtRSI;
      internal::warning(e_st);
    }
  } else {
    b_st.site = &nm_emlrtRSI;
    internal::qrsolve(b_st, A, B, Y);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (mldivide.cpp)
