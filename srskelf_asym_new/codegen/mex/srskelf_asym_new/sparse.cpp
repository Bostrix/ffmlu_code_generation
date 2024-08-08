//
// sparse.cpp
//
// Code generation for function 'sparse'
//

// Include files
#include "sparse.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo ni_emlrtRSI{
    250,                     // lineNo
    "sparse/parenReference", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/shared/coder/coder/+coder/+internal/"
    "@sparse/sparse.m" // pathName
};

static emlrtRSInfo oi_emlrtRSI{
    20,                        // lineNo
    "sparse/parenReference2D", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/shared/coder/coder/+coder/+internal/"
    "@sparse/parenReference2D.m" // pathName
};

static emlrtRSInfo pi_emlrtRSI{
    81,                        // lineNo
    "parenReference2DColumns", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/shared/coder/coder/+coder/+internal/"
    "@sparse/parenReference2D.m" // pathName
};

static emlrtRSInfo qi_emlrtRSI{
    88,                        // lineNo
    "parenReference2DColumns", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/shared/coder/coder/+coder/+internal/"
    "@sparse/parenReference2D.m" // pathName
};

static emlrtRSInfo ri_emlrtRSI{
    93,                        // lineNo
    "parenReference2DColumns", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/shared/coder/coder/+coder/+internal/"
    "@sparse/parenReference2D.m" // pathName
};

static emlrtRSInfo si_emlrtRSI{
    99,                        // lineNo
    "parenReference2DColumns", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/shared/coder/coder/+coder/+internal/"
    "@sparse/parenReference2D.m" // pathName
};

static emlrtRSInfo ti_emlrtRSI{
    104,                       // lineNo
    "parenReference2DColumns", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/shared/coder/coder/+coder/+internal/"
    "@sparse/parenReference2D.m" // pathName
};

static emlrtRSInfo ui_emlrtRSI{
    1476,                 // lineNo
    "sparse/spallocLike", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/shared/coder/coder/+coder/+internal/"
    "@sparse/sparse.m" // pathName
};

static emlrtRSInfo xi_emlrtRSI{
    176,             // lineNo
    "sparse/sparse", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/shared/coder/coder/+coder/+internal/"
    "@sparse/sparse.m" // pathName
};

static emlrtRSInfo yi_emlrtRSI{
    143,             // lineNo
    "sparse/sparse", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/shared/coder/coder/+coder/+internal/"
    "@sparse/sparse.m" // pathName
};

static emlrtRTEInfo hb_emlrtRTEI{
    92,                        // lineNo
    1,                         // colNo
    "parenReference2DColumns", // fName
    "/usr/local/MATLAB/R2024a/toolbox/shared/coder/coder/+coder/+internal/"
    "@sparse/parenReference2D.m" // pName
};

static emlrtRTEInfo ib_emlrtRTEI{
    11,                                   // lineNo
    27,                                   // colNo
    "sparse/sparse_validateNumericIndex", // fName
    "/usr/local/MATLAB/R2024a/toolbox/shared/coder/coder/+coder/+internal/"
    "@sparse/private/validateNumericIndex.m" // pName
};

static emlrtRTEInfo jb_emlrtRTEI{
    1626,              // lineNo
    31,                // colNo
    "assertValidSize", // fName
    "/usr/local/MATLAB/R2024a/toolbox/shared/coder/coder/+coder/+internal/"
    "@sparse/sparse.m" // pName
};

static emlrtRTEInfo kb_emlrtRTEI{
    1623,              // lineNo
    9,                 // colNo
    "assertValidSize", // fName
    "/usr/local/MATLAB/R2024a/toolbox/shared/coder/coder/+coder/+internal/"
    "@sparse/sparse.m" // pName
};

static emlrtRTEInfo ij_emlrtRTEI{
    1476,     // lineNo
    13,       // colNo
    "sparse", // fName
    "/usr/local/MATLAB/R2024a/toolbox/shared/coder/coder/+coder/+internal/"
    "@sparse/sparse.m" // pName
};

// Function Definitions
namespace coder {
void sparse::spallocLike(const emlrtStack &sp, int32_T n, int32_T nzmax,
                         b_sparse &s)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T i;
  int32_T numalloc;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &ui_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &yi_emlrtRSI;
  if (n < 0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &kb_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (n >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &jb_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  s.n = n;
  b_st.site = &xi_emlrtRSI;
  if (nzmax < 0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &kb_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (nzmax >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &jb_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  numalloc = muIntScalarMax_sint32(nzmax, 1);
  s.d.set_size(&ij_emlrtRTEI, &st, numalloc);
  for (i = 0; i < numalloc; i++) {
    s.d[i] = 0.0;
  }
  s.colidx.set_size(&ij_emlrtRTEI, &st, n + 1);
  for (i = 0; i <= n; i++) {
    s.colidx[i] = 0;
  }
  s.colidx[0] = 1;
  s.rowidx.set_size(&ij_emlrtRTEI, &st, numalloc);
  for (i = 0; i < numalloc; i++) {
    s.rowidx[i] = 0;
  }
  for (numalloc = 0; numalloc < n; numalloc++) {
    s.colidx[numalloc + 1] = 1;
  }
  i = s.colidx.size(0);
  for (numalloc = 0; numalloc <= i - 2; numalloc++) {
    s.colidx[numalloc] = 1;
  }
  s.colidx[s.colidx.size(0) - 1] = 1;
}

void sparse::b_parenReference(const emlrtStack &sp,
                              const array<real_T, 2U> &varargin_2,
                              b_sparse &s) const
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T i;
  int32_T nd;
  int32_T nd_tmp;
  int32_T ub;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &ni_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &oi_emlrtRSI;
  c_st.site = &pi_emlrtRSI;
  i = varargin_2.size(0) * varargin_2.size(1);
  for (int32_T k{0}; k < i; k++) {
    if ((!(muDoubleScalarFloor(varargin_2[k]) == varargin_2[k])) ||
        muDoubleScalarIsInf(varargin_2[k])) {
      emlrtErrorWithMessageIdR2018a(&c_st, &ib_emlrtRTEI,
                                    "Coder:MATLAB:badsubscript",
                                    "Coder:MATLAB:badsubscript", 0);
    }
  }
  ub = 8000 * i;
  nd = 0;
  c_st.site = &qi_emlrtRSI;
  if (i > 2147483646) {
    d_st.site = &ge_emlrtRSI;
    check_forloop_overflow_error(d_st);
  }
  for (int32_T cidx{0}; cidx < i; cidx++) {
    nd_tmp = static_cast<int32_T>(varargin_2[cidx]);
    nd = (nd + colidx[nd_tmp]) - colidx[nd_tmp - 1];
  }
  if ((nd > ub) && (ub != 0)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &hb_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  c_st.site = &ri_emlrtRSI;
  sparse::spallocLike(c_st, i, nd, s);
  if (nd != 0) {
    int32_T outIdx;
    outIdx = 0;
    c_st.site = &si_emlrtRSI;
    for (int32_T cidx{0}; cidx < i; cidx++) {
      int32_T colstart_tmp;
      ub = static_cast<int32_T>(varargin_2[cidx]);
      colstart_tmp = colidx[ub - 1];
      ub = colidx[ub] - colstart_tmp;
      c_st.site = &ti_emlrtRSI;
      if (ub > 2147483646) {
        d_st.site = &ge_emlrtRSI;
        check_forloop_overflow_error(d_st);
      }
      for (int32_T k{0}; k < ub; k++) {
        nd = (colstart_tmp + k) - 1;
        nd_tmp = outIdx + k;
        s.d[nd_tmp] = d[nd];
        s.rowidx[nd_tmp] = rowidx[nd];
      }
      if (ub - 1 >= 0) {
        outIdx += ub;
      }
      s.colidx[cidx + 1] = s.colidx[cidx] + ub;
    }
  }
}

void sparse::parenReference(const emlrtStack &sp,
                            const array<real_T, 2U> &varargin_2,
                            b_sparse &s) const
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T b_d;
  int32_T nd;
  int32_T sn;
  int32_T ub;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &ni_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &oi_emlrtRSI;
  c_st.site = &pi_emlrtRSI;
  ub = varargin_2.size(1);
  for (int32_T k{0}; k < ub; k++) {
    b_d = varargin_2[k];
    if ((!(muDoubleScalarFloor(b_d) == b_d)) || muDoubleScalarIsInf(b_d)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &ib_emlrtRTEI,
                                    "Coder:MATLAB:badsubscript",
                                    "Coder:MATLAB:badsubscript", 0);
    }
  }
  sn = varargin_2.size(1) - 1;
  ub = 8000 * varargin_2.size(1);
  nd = 0;
  c_st.site = &qi_emlrtRSI;
  if (varargin_2.size(1) > 2147483646) {
    d_st.site = &ge_emlrtRSI;
    check_forloop_overflow_error(d_st);
  }
  for (int32_T cidx{0}; cidx <= sn; cidx++) {
    b_d = varargin_2[cidx];
    nd = (nd + colidx[static_cast<int32_T>(b_d)]) -
         colidx[static_cast<int32_T>(b_d) - 1];
  }
  if ((nd > ub) && (ub != 0)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &hb_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  c_st.site = &ri_emlrtRSI;
  sparse::spallocLike(c_st, varargin_2.size(1), nd, s);
  if (nd != 0) {
    nd = 0;
    c_st.site = &si_emlrtRSI;
    for (int32_T cidx{0}; cidx <= sn; cidx++) {
      int32_T colNnz;
      int32_T colstart_tmp;
      b_d = varargin_2[cidx];
      colstart_tmp = colidx[static_cast<int32_T>(b_d) - 1];
      colNnz = colidx[static_cast<int32_T>(b_d)] - colstart_tmp;
      c_st.site = &ti_emlrtRSI;
      if (colNnz > 2147483646) {
        d_st.site = &ge_emlrtRSI;
        check_forloop_overflow_error(d_st);
      }
      for (int32_T k{0}; k < colNnz; k++) {
        int32_T i;
        ub = (colstart_tmp + k) - 1;
        i = nd + k;
        s.d[i] = d[ub];
        s.rowidx[i] = rowidx[ub];
      }
      if (colNnz - 1 >= 0) {
        nd += colNnz;
      }
      s.colidx[cidx + 1] = s.colidx[cidx] + colNnz;
    }
  }
}

} // namespace coder

// End of code generation (sparse.cpp)
