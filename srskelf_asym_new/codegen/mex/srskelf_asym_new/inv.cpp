//
// inv.cpp
//
// Code generation for function 'inv'
//

// Include files
#include "inv.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_ipiv2perm.h"
#include "norm.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "srskelf_asym_new_mexutil.h"
#include "warning.h"
#include "xgetrf.h"
#include "blas.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <cstddef>

// Variable Definitions
static emlrtRSInfo ko_emlrtRSI{
    22,                                                            // lineNo
    "inv",                                                         // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/inv.m" // pathName
};

static emlrtRSInfo lo_emlrtRSI{
    21,                                                            // lineNo
    "inv",                                                         // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/inv.m" // pathName
};

static emlrtRSInfo mo_emlrtRSI{
    173,                                                           // lineNo
    "invNxN",                                                      // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/inv.m" // pathName
};

static emlrtRSInfo no_emlrtRSI{
    174,                                                           // lineNo
    "invNxN",                                                      // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/inv.m" // pathName
};

static emlrtRSInfo oo_emlrtRSI{
    177,                                                           // lineNo
    "invNxN",                                                      // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/inv.m" // pathName
};

static emlrtRSInfo po_emlrtRSI{
    180,                                                           // lineNo
    "invNxN",                                                      // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/inv.m" // pathName
};

static emlrtRSInfo qo_emlrtRSI{
    183,                                                           // lineNo
    "invNxN",                                                      // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/inv.m" // pathName
};

static emlrtRSInfo ro_emlrtRSI{
    190,                                                           // lineNo
    "invNxN",                                                      // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/inv.m" // pathName
};

static emlrtRSInfo to_emlrtRSI{
    42,                                                            // lineNo
    "checkcond",                                                   // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/inv.m" // pathName
};

static emlrtRSInfo uo_emlrtRSI{
    46,                                                            // lineNo
    "checkcond",                                                   // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/inv.m" // pathName
};

static emlrtRTEInfo wb_emlrtRTEI{
    14,                                                            // lineNo
    15,                                                            // colNo
    "inv",                                                         // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/inv.m" // pName
};

static emlrtRTEInfo co_emlrtRTEI{
    21,                                                            // lineNo
    5,                                                             // colNo
    "inv",                                                         // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/inv.m" // pName
};

static emlrtRTEInfo do_emlrtRTEI{
    173,                                                           // lineNo
    2,                                                             // colNo
    "inv",                                                         // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/inv.m" // pName
};

// Function Definitions
namespace coder {
void inv(const emlrtStack &sp, const array<real_T, 2U> &x, array<real_T, 2U> &y)
{
  static const int32_T iv[2]{1, 6};
  static const char_T rfmt[6]{'%', '1', '4', '.', '6', 'e'};
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  array<real_T, 2U> b_x;
  array<int32_T, 2U> ipiv;
  array<int32_T, 2U> p;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  real_T n1x;
  real_T n1xinv;
  real_T rc;
  int32_T i;
  int32_T loop_ub_tmp;
  int32_T n_tmp;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (x.size(0) != x.size(1)) {
    emlrtErrorWithMessageIdR2018a(&sp, &wb_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  st.site = &lo_emlrtRSI;
  n_tmp = x.size(0);
  y.set_size(&co_emlrtRTEI, &st, x.size(0), x.size(1));
  loop_ub_tmp = x.size(0) * x.size(1);
  for (i = 0; i < loop_ub_tmp; i++) {
    y[i] = 0.0;
  }
  b_x.set_size(&do_emlrtRTEI, &st, x.size(0), x.size(1));
  for (i = 0; i < loop_ub_tmp; i++) {
    b_x[i] = x[i];
  }
  b_st.site = &mo_emlrtRSI;
  internal::lapack::xgetrf(b_st, x.size(0), x.size(0), b_x, x.size(0), ipiv);
  b_st.site = &no_emlrtRSI;
  eml_ipiv2perm(b_st, ipiv, x.size(0), p);
  b_st.site = &oo_emlrtRSI;
  if (x.size(0) > 2147483646) {
    c_st.site = &fe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T k{0}; k < n_tmp; k++) {
    i = p[k];
    y[k + y.size(0) * (i - 1)] = 1.0;
    b_st.site = &po_emlrtRSI;
    if ((k + 1 <= n_tmp) && (n_tmp > 2147483646)) {
      c_st.site = &fe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (int32_T j{k + 1}; j <= n_tmp; j++) {
      if (y[(j + y.size(0) * (i - 1)) - 1] != 0.0) {
        loop_ub_tmp = j + 1;
        b_st.site = &qo_emlrtRSI;
        for (int32_T b_i{loop_ub_tmp}; b_i <= n_tmp; b_i++) {
          y[(b_i + y.size(0) * (i - 1)) - 1] =
              y[(b_i + y.size(0) * (i - 1)) - 1] -
              y[(j + y.size(0) * (i - 1)) - 1] *
                  b_x[(b_i + b_x.size(0) * (j - 1)) - 1];
        }
      }
    }
  }
  b_st.site = &ro_emlrtRSI;
  c_st.site = &hn_emlrtRSI;
  n1x = 1.0;
  DIAGA1 = 'N';
  TRANSA1 = 'N';
  UPLO1 = 'U';
  SIDE1 = 'L';
  m_t = (ptrdiff_t)x.size(0);
  n_t = (ptrdiff_t)x.size(0);
  lda_t = (ptrdiff_t)x.size(0);
  ldb_t = (ptrdiff_t)x.size(0);
  dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &m_t, &n_t, &n1x, &(b_x.data())[0],
        &lda_t, &(y.data())[0], &ldb_t);
  st.site = &ko_emlrtRSI;
  n1x = b_norm(x);
  n1xinv = b_norm(y);
  rc = 1.0 / (n1x * n1xinv);
  if ((n1x == 0.0) || (n1xinv == 0.0) || (rc == 0.0)) {
    b_st.site = &to_emlrtRSI;
    internal::warning(b_st);
  } else if (muDoubleScalarIsNaN(rc) || (rc < 2.2204460492503131E-16)) {
    char_T str[14];
    b_st.site = &uo_emlrtRSI;
    b_y = nullptr;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
    emlrtAssign(&b_y, m);
    c_y = nullptr;
    m = emlrtCreateDoubleScalar(rc);
    emlrtAssign(&c_y, m);
    c_st.site = &sr_emlrtRSI;
    emlrt_marshallIn(c_st, b_sprintf(c_st, b_y, c_y, k_emlrtMCI),
                     "<output of sprintf>", str);
    b_st.site = &uo_emlrtRSI;
    internal::warning(b_st, str);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (inv.cpp)
