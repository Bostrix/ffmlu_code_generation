//
// eml_ipiv2perm.cpp
//
// Code generation for function 'eml_ipiv2perm'
//

// Include files
#include "eml_ipiv2perm.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo ym_emlrtRSI{
    28,                                                           // lineNo
    "colon",                                                      // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/colon.m" // pathName
};

static emlrtRSInfo an_emlrtRSI{
    82,                                                           // lineNo
    "colon",                                                      // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/colon.m" // pathName
};

static emlrtRSInfo bn_emlrtRSI{
    148,                                                          // lineNo
    "eml_integer_colon_dispatcher",                               // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/colon.m" // pathName
};

static emlrtRSInfo cn_emlrtRSI{
    176,                                                          // lineNo
    "eml_signed_integer_colon",                                   // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/colon.m" // pathName
};

static emlrtRSInfo oo_emlrtRSI{
    14,              // lineNo
    "eml_ipiv2perm", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/private/"
    "eml_ipiv2perm.m" // pathName
};

static emlrtRTEInfo do_emlrtRTEI{
    172,                                                          // lineNo
    20,                                                           // colNo
    "colon",                                                      // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/colon.m" // pName
};

// Function Definitions
namespace coder {
void eml_ipiv2perm(const emlrtStack &sp, const array<int32_T, 2U> &ipiv,
                   int32_T m, array<int32_T, 2U> &perm)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  int32_T n;
  int32_T yk;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &oo_emlrtRSI;
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
  b_st.site = &ym_emlrtRSI;
  c_st.site = &an_emlrtRSI;
  d_st.site = &bn_emlrtRSI;
  if (m < 1) {
    n = 0;
  } else {
    n = m;
  }
  perm.set_size(&do_emlrtRTEI, &d_st, 1, n);
  if (n > 0) {
    perm[0] = 1;
    yk = 1;
    e_st.site = &cn_emlrtRSI;
    if (n > 2147483646) {
      f_st.site = &fe_emlrtRSI;
      check_forloop_overflow_error(f_st);
    }
    for (int32_T k{2}; k <= n; k++) {
      yk++;
      perm[k - 1] = yk;
    }
  }
  n = ipiv.size(1);
  for (int32_T k{0}; k < n; k++) {
    yk = ipiv[k];
    if (yk > k + 1) {
      int32_T pipk;
      pipk = perm[yk - 1];
      perm[yk - 1] = perm[k];
      perm[k] = pipk;
    }
  }
}

} // namespace coder

// End of code generation (eml_ipiv2perm.cpp)
