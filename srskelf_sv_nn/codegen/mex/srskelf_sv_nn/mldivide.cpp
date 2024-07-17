//
// mldivide.cpp
//
// Code generation for function 'mldivide'
//

// Include files
#include "mldivide.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "coder_array.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstddef>
#include <cstring>

// Variable Definitions
static emlrtRSInfo m_emlrtRSI{
    20,         // lineNo
    "mldivide", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/ops/mldivide.m" // pathName
};

static emlrtRSInfo n_emlrtRSI{
    42,      // lineNo
    "mldiv", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/ops/mldivide.m" // pathName
};

static emlrtRSInfo o_emlrtRSI{
    44,      // lineNo
    "mldiv", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/ops/mldivide.m" // pathName
};

static emlrtRSInfo
    p_emlrtRSI{
        67,        // lineNo
        "lusolve", // fcnName
        "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" // pathName
    };

static emlrtRSInfo
    q_emlrtRSI{
        109,          // lineNo
        "lusolveNxN", // fcnName
        "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" // pathName
    };

static emlrtRSInfo
    r_emlrtRSI{
        112,          // lineNo
        "lusolveNxN", // fcnName
        "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" // pathName
    };

static emlrtRSInfo
    s_emlrtRSI{
        124,          // lineNo
        "InvAtimesX", // fcnName
        "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" // pathName
    };

static emlrtRSInfo t_emlrtRSI{
    19,        // lineNo
    "xgetrfs", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrfs.m" // pathName
};

static emlrtRSInfo u_emlrtRSI{
    108,      // lineNo
    "cmldiv", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrfs.m" // pathName
};

static emlrtRSInfo
    x_emlrtRSI{
        90,              // lineNo
        "warn_singular", // fcnName
        "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" // pathName
    };

static emlrtRSInfo
    y_emlrtRSI{
        61,        // lineNo
        "qrsolve", // fcnName
        "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo
    ab_emlrtRSI{
        72,        // lineNo
        "qrsolve", // fcnName
        "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo
    bb_emlrtRSI{
        85,        // lineNo
        "qrsolve", // fcnName
        "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo cb_emlrtRSI{
    63,       // lineNo
    "xgeqp3", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pathName
};

static emlrtRSInfo db_emlrtRSI{
    138,            // lineNo
    "ceval_xgeqp3", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pathName
};

static emlrtRSInfo
    eb_emlrtRSI{
        173,          // lineNo
        "rankFromQR", // fcnName
        "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo
    fb_emlrtRSI{
        172,          // lineNo
        "rankFromQR", // fcnName
        "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo
    gb_emlrtRSI{
        119,         // lineNo
        "LSQFromQR", // fcnName
        "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo hb_emlrtRSI{
    40,         // lineNo
    "xunormqr", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xunormqr.m" // pathName
};

static emlrtRSInfo ib_emlrtRSI{
    106,              // lineNo
    "ceval_xunormqr", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xunormqr.m" // pathName
};

static emlrtMCInfo c_emlrtMCI{
    53,        // lineNo
    19,        // colNo
    "flt2str", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/flt2str.m" // pName
};

static emlrtRTEInfo e_emlrtRTEI{
    16,         // lineNo
    19,         // colNo
    "mldivide", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/ops/mldivide.m" // pName
};

static emlrtRTEInfo f_emlrtRTEI{
    45,          // lineNo
    13,          // colNo
    "infocheck", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "infocheck.m" // pName
};

static emlrtRTEInfo g_emlrtRTEI{
    48,          // lineNo
    13,          // colNo
    "infocheck", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "infocheck.m" // pName
};

static emlrtRTEInfo h_emlrtRTEI{
    1,        // lineNo
    32,       // colNo
    "xgeqp3", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pName
};

static emlrtRTEInfo i_emlrtRTEI{
    48,        // lineNo
    37,        // colNo
    "xgetrfs", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrfs.m" // pName
};

static emlrtRSInfo kb_emlrtRSI{
    53,        // lineNo
    "flt2str", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/flt2str.m" // pathName
};

// Function Declarations
static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[14]);

static const mxArray *b_sprintf(const emlrtStack &sp, const mxArray *m1,
                                const mxArray *m2, emlrtMCInfo &location);

static void emlrt_marshallIn(const emlrtStack &sp,
                             const mxArray *a__output_of_sprintf_,
                             const char_T *identifier, char_T y[14]);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, char_T y[14]);

// Function Definitions
static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2]{1, 14};
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "char", false, 2U,
                          (const void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtConstCTX)&sp, src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

static const mxArray *b_sprintf(const emlrtStack &sp, const mxArray *m1,
                                const mxArray *m2, emlrtMCInfo &location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtConstCTX)&sp, 1, &m, 2, &pArrays[0],
                               "sprintf", true, &location);
}

static void emlrt_marshallIn(const emlrtStack &sp,
                             const mxArray *a__output_of_sprintf_,
                             const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(a__output_of_sprintf_), &thisId, y);
  emlrtDestroyArray(&a__output_of_sprintf_);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, char_T y[14])
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

namespace coder {
int32_T mldivide(const emlrtStack &sp, const array<real_T, 2U> &A,
                 const real_T B_data[], int32_T B_size, real_T Y_data[])
{
  static const int32_T iv[2]{1, 6};
  static const char_T b_fname[19]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                  '_', 'd', 'g', 'e', 't', 'r', 'f',
                                  '_', 'w', 'o', 'r', 'k'};
  static const char_T c_fname[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                  '_', 'd', 'o', 'r', 'm', 'q', 'r'};
  static const char_T fname[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                '_', 'd', 'g', 'e', 'q', 'p', '3'};
  static const char_T rfmt[6]{'%', '1', '4', '.', '6', 'e'};
  ptrdiff_t jpvt_t_data[195];
  array<real_T, 2U> b_A;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T b_B_data[195];
  real_T tau_data[195];
  int32_T jpvt_data[195];
  int32_T Y_size;
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
  if (B_size != A.size(0)) {
    emlrtErrorWithMessageIdR2018a(&sp, &e_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  st.site = &m_emlrtRSI;
  if ((A.size(0) == 0) || (A.size(1) == 0) || (B_size == 0)) {
    int32_T loop_ub;
    loop_ub = A.size(1);
    Y_size = A.size(1);
    if (loop_ub - 1 >= 0) {
      std::memset(&Y_data[0], 0,
                  static_cast<uint32_T>(loop_ub) * sizeof(real_T));
    }
  } else if (A.size(0) == A.size(1)) {
    ptrdiff_t INFO;
    ptrdiff_t LDA;
    ptrdiff_t info_t;
    int32_T i;
    int32_T loop_ub;
    int32_T minmn;
    int32_T na;
    b_st.site = &n_emlrtRSI;
    c_st.site = &p_emlrtRSI;
    Y_size = B_size;
    std::copy(&B_data[0], &B_data[B_size], &Y_data[0]);
    d_st.site = &q_emlrtRSI;
    e_st.site = &s_emlrtRSI;
    na = A.size(0);
    minmn = A.size(1);
    f_st.site = &t_emlrtRSI;
    b_A.set_size(&i_emlrtRTEI, &f_st, A.size(0), A.size(1));
    loop_ub = A.size(0) * A.size(1);
    for (i = 0; i < loop_ub; i++) {
      b_A[i] = A[i];
    }
    i = muIntScalarMin_sint32(na, minmn);
    info_t = (ptrdiff_t)muIntScalarMin_sint32(B_size, i);
    LDA = (ptrdiff_t)b_A.size(0);
    INFO = LAPACKE_dgetrf_work(102, info_t, info_t, &(b_A.data())[0], LDA,
                               &jpvt_t_data[0]);
    g_st.site = &u_emlrtRSI;
    if ((int32_T)INFO < 0) {
      if ((int32_T)INFO == -1010) {
        emlrtErrorWithMessageIdR2018a(&g_st, &f_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&g_st, &g_emlrtRTEI,
                                      "Coder:toolbox:LAPACKCallErrorInfo",
                                      "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                      19, &b_fname[0], 12, (int32_T)INFO);
      }
    }
    LAPACKE_dgetrs_work(102, 'N', info_t, (ptrdiff_t)1, &(b_A.data())[0], LDA,
                        &jpvt_t_data[0], &Y_data[0], (ptrdiff_t)B_size);
    if (((A.size(0) != 1) || (A.size(1) != 1)) && ((int32_T)INFO > 0)) {
      d_st.site = &r_emlrtRSI;
      e_st.site = &x_emlrtRSI;
      internal::warning(e_st);
    }
  } else {
    ptrdiff_t info_t;
    real_T tol;
    int32_T i;
    int32_T loop_ub;
    int32_T minmana;
    int32_T minmn;
    int32_T na;
    boolean_T p;
    b_st.site = &o_emlrtRSI;
    c_st.site = &y_emlrtRSI;
    minmn = A.size(0);
    loop_ub = A.size(1);
    b_A.set_size(&h_emlrtRTEI, &c_st, A.size(0), A.size(1));
    na = A.size(0) * A.size(1);
    for (i = 0; i < na; i++) {
      b_A[i] = A[i];
    }
    na = b_A.size(1) - 1;
    std::memset(&jpvt_data[0], 0,
                static_cast<uint32_T>(loop_ub) * sizeof(int32_T));
    d_st.site = &cb_emlrtRSI;
    minmana = muIntScalarMin_sint32(minmn, loop_ub);
    for (i = 0; i < loop_ub; i++) {
      jpvt_t_data[i] = (ptrdiff_t)0;
    }
    info_t = LAPACKE_dgeqp3(102, (ptrdiff_t)b_A.size(0), (ptrdiff_t)b_A.size(1),
                            &(b_A.data())[0], (ptrdiff_t)b_A.size(0),
                            &jpvt_t_data[0], &tau_data[0]);
    e_st.site = &db_emlrtRSI;
    if ((int32_T)info_t != 0) {
      p = true;
      if ((int32_T)info_t != -4) {
        if ((int32_T)info_t == -1010) {
          emlrtErrorWithMessageIdR2018a(&e_st, &f_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&e_st, &g_emlrtRTEI,
                                        "Coder:toolbox:LAPACKCallErrorInfo",
                                        "Coder:toolbox:LAPACKCallErrorInfo", 5,
                                        4, 14, &fname[0], 12, (int32_T)info_t);
        }
      }
    } else {
      p = false;
    }
    if (p) {
      for (loop_ub = 0; loop_ub <= na; loop_ub++) {
        for (int32_T b_i{0}; b_i < minmn; b_i++) {
          b_A[loop_ub * minmn + b_i] = rtNaN;
        }
      }
      i = b_A.size(1);
      minmn = muIntScalarMin_sint32(minmn, i) - 1;
      for (loop_ub = 0; loop_ub <= minmn; loop_ub++) {
        tau_data[loop_ub] = rtNaN;
      }
      i = minmn + 2;
      if (i <= minmana) {
        std::memset(&tau_data[i + -1], 0,
                    static_cast<uint32_T>((minmana - i) + 1) * sizeof(real_T));
      }
      for (loop_ub = 0; loop_ub <= na; loop_ub++) {
        jpvt_data[loop_ub] = loop_ub + 1;
      }
    } else {
      for (loop_ub = 0; loop_ub <= na; loop_ub++) {
        jpvt_data[loop_ub] = (int32_T)jpvt_t_data[loop_ub];
      }
    }
    c_st.site = &ab_emlrtRSI;
    minmana = 0;
    if (b_A.size(0) < b_A.size(1)) {
      minmn = b_A.size(0);
      na = b_A.size(1);
    } else {
      minmn = b_A.size(1);
      na = b_A.size(0);
    }
    tol = 2.2204460492503131E-15 * static_cast<real_T>(na) *
          muDoubleScalarAbs(b_A[0]);
    while (
        (minmana < minmn) &&
        (!(muDoubleScalarAbs(b_A[minmana + b_A.size(0) * minmana]) <= tol))) {
      minmana++;
    }
    if (minmana < minmn) {
      char_T str[14];
      d_st.site = &eb_emlrtRSI;
      y = nullptr;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&d_st, 6, m, &rfmt[0]);
      emlrtAssign(&y, m);
      b_y = nullptr;
      m = emlrtCreateDoubleScalar(tol);
      emlrtAssign(&b_y, m);
      e_st.site = &kb_emlrtRSI;
      emlrt_marshallIn(e_st, b_sprintf(e_st, y, b_y, c_emlrtMCI),
                       "<output of sprintf>", str);
      d_st.site = &fb_emlrtRSI;
      internal::warning(d_st, minmana, str);
    }
    c_st.site = &bb_emlrtRSI;
    std::copy(&B_data[0], &B_data[B_size], &b_B_data[0]);
    loop_ub = b_A.size(1);
    Y_size = b_A.size(1);
    std::memset(&Y_data[0], 0, static_cast<uint32_T>(loop_ub) * sizeof(real_T));
    d_st.site = &gb_emlrtRSI;
    e_st.site = &hb_emlrtRSI;
    info_t = (ptrdiff_t)B_size;
    i = b_A.size(0);
    minmn = b_A.size(1);
    info_t = LAPACKE_dormqr(102, 'L', 'T', info_t, (ptrdiff_t)1,
                            (ptrdiff_t)muIntScalarMin_sint32(i, minmn),
                            &(b_A.data())[0], (ptrdiff_t)b_A.size(0),
                            &tau_data[0], &b_B_data[0], info_t);
    f_st.site = &ib_emlrtRSI;
    if ((int32_T)info_t != 0) {
      boolean_T b_p;
      p = true;
      b_p = false;
      if ((int32_T)info_t == -7) {
        b_p = true;
      } else if ((int32_T)info_t == -9) {
        b_p = true;
      } else if ((int32_T)info_t == -10) {
        b_p = true;
      }
      if (!b_p) {
        if ((int32_T)info_t == -1010) {
          emlrtErrorWithMessageIdR2018a(&f_st, &f_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(
              &f_st, &g_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
              "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &c_fname[0], 12,
              (int32_T)info_t);
        }
      }
    } else {
      p = false;
    }
    if (p) {
      for (i = 0; i < B_size; i++) {
        b_B_data[i] = rtNaN;
      }
    }
    for (int32_T b_i{0}; b_i < minmana; b_i++) {
      Y_data[jpvt_data[b_i] - 1] = b_B_data[b_i];
    }
    for (loop_ub = minmana; loop_ub >= 1; loop_ub--) {
      i = jpvt_data[loop_ub - 1];
      Y_data[i - 1] /= b_A[(loop_ub + b_A.size(0) * (loop_ub - 1)) - 1];
      for (int32_T b_i{0}; b_i <= loop_ub - 2; b_i++) {
        na = jpvt_data[b_i];
        Y_data[na - 1] -=
            Y_data[i - 1] * b_A[b_i + b_A.size(0) * (loop_ub - 1)];
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return Y_size;
}

} // namespace coder

// End of code generation (mldivide.cpp)
