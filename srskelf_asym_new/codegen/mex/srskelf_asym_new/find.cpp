//
// find.cpp
//
// Code generation for function 'find'
//

// Include files
#include "find.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "sparse.h"
#include "srskelf_asym_new_data.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo ve_emlrtRSI{
    144,                                                           // lineNo
    "eml_find",                                                    // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo we_emlrtRSI{
    382,                                                           // lineNo
    "find_first_indices",                                          // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo cj_emlrtRSI{
    138,                                                           // lineNo
    "eml_find",                                                    // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo dj_emlrtRSI{
    202,                                                           // lineNo
    "find_first_nonempty_triples",                                 // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo ej_emlrtRSI{
    205,                                                           // lineNo
    "find_first_nonempty_triples",                                 // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo fj_emlrtRSI{
    253,                                                           // lineNo
    "find_first_nonempty_triples",                                 // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo gj_emlrtRSI{
    254,                                                           // lineNo
    "find_first_nonempty_triples",                                 // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo hj_emlrtRSI{
    255,                                                           // lineNo
    "find_first_nonempty_triples",                                 // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo uj_emlrtRSI{
    402,                                                           // lineNo
    "find_first_indices",                                          // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRTEInfo ab_emlrtRTEI{
    392,                                                           // lineNo
    1,                                                             // colNo
    "find_first_indices",                                          // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo lb_emlrtRTEI{
    239,                                                           // lineNo
    1,                                                             // colNo
    "find_first_nonempty_triples",                                 // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtDCInfo xb_emlrtDCI{
    195,                                                            // lineNo
    30,                                                             // colNo
    "find_first_nonempty_triples",                                  // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m", // pName
    4                                                               // checkKind
};

static emlrtRTEInfo mg_emlrtRTEI{
    364,                                                           // lineNo
    24,                                                            // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo ng_emlrtRTEI{
    144,                                                           // lineNo
    9,                                                             // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo jj_emlrtRTEI{
    195,                                                           // lineNo
    24,                                                            // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo kj_emlrtRTEI{
    197,                                                           // lineNo
    24,                                                            // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo lj_emlrtRTEI{
    199,                                                           // lineNo
    24,                                                            // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo mj_emlrtRTEI{
    253,                                                           // lineNo
    5,                                                             // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo nj_emlrtRTEI{
    254,                                                           // lineNo
    5,                                                             // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo oj_emlrtRTEI{
    255,                                                           // lineNo
    5,                                                             // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo pj_emlrtRTEI{
    247,                                                           // lineNo
    17,                                                            // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo qj_emlrtRTEI{
    248,                                                           // lineNo
    13,                                                            // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo rj_emlrtRTEI{
    249,                                                           // lineNo
    13,                                                            // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo sj_emlrtRTEI{
    133,                                                           // lineNo
    17,                                                            // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo tj_emlrtRTEI{
    134,                                                           // lineNo
    13,                                                            // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo uj_emlrtRTEI{
    135,                                                           // lineNo
    13,                                                            // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo dk_emlrtRTEI{
    369,                                                           // lineNo
    24,                                                            // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

// Function Definitions
namespace coder {
void b_eml_find(const emlrtStack &sp, const b_sparse &x, array<int32_T, 1U> &i,
                array<int32_T, 1U> &j, array<real_T, 1U> &v)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T nx;
  int32_T nx_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx_tmp = x.colidx[x.colidx.size(0) - 1];
  nx = nx_tmp - 2;
  if (nx_tmp - 1 == 0) {
    i.set_size(&sj_emlrtRTEI, &sp, 0);
    j.set_size(&tj_emlrtRTEI, &sp, 0);
    v.set_size(&uj_emlrtRTEI, &sp, 0);
  } else {
    int32_T idx;
    st.site = &cj_emlrtRSI;
    if (nx_tmp - 1 < 0) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(nx_tmp - 1), &xb_emlrtDCI,
                                  &st);
    }
    i.set_size(&jj_emlrtRTEI, &st, nx_tmp - 1);
    j.set_size(&kj_emlrtRTEI, &st, nx_tmp - 1);
    v.set_size(&lj_emlrtRTEI, &st, nx_tmp - 1);
    b_st.site = &dj_emlrtRSI;
    if (nx_tmp - 1 > 2147483646) {
      c_st.site = &fe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (idx = 0; idx <= nx; idx++) {
      i[idx] = x.rowidx[idx];
    }
    b_st.site = &ej_emlrtRSI;
    if (nx_tmp - 1 > 2147483646) {
      c_st.site = &fe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (idx = 0; idx <= nx; idx++) {
      v[idx] = x.d[idx];
    }
    idx = 0;
    nx = 1;
    while (idx < nx_tmp - 1) {
      if (idx == x.colidx[nx] - 1) {
        nx++;
      } else {
        idx++;
        j[idx - 1] = nx;
      }
    }
    if (idx > nx_tmp - 1) {
      emlrtErrorWithMessageIdR2018a(&st, &lb_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nx_tmp - 1 == 1) {
      if (idx == 0) {
        i.set_size(&pj_emlrtRTEI, &st, 0);
        j.set_size(&qj_emlrtRTEI, &st, 0);
        v.set_size(&rj_emlrtRTEI, &st, 0);
      }
    } else {
      int32_T iv[2];
      iv[0] = 1;
      iv[1] = idx;
      b_st.site = &fj_emlrtRSI;
      internal::indexShapeCheck(b_st, i.size(0), iv);
      i.set_size(&mj_emlrtRTEI, &st, idx);
      iv[0] = 1;
      iv[1] = idx;
      b_st.site = &gj_emlrtRSI;
      internal::indexShapeCheck(b_st, j.size(0), iv);
      j.set_size(&nj_emlrtRTEI, &st, idx);
      iv[0] = 1;
      iv[1] = idx;
      b_st.site = &hj_emlrtRSI;
      internal::indexShapeCheck(b_st, v.size(0), iv);
      v.set_size(&oj_emlrtRTEI, &st, idx);
    }
  }
}

void c_eml_find(const emlrtStack &sp, const array<boolean_T, 1U> &x,
                array<int32_T, 1U> &i)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T idx;
  int32_T ii;
  int32_T nx_tmp;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx_tmp = x.size(0);
  st.site = &ve_emlrtRSI;
  idx = 0;
  i.set_size(&dk_emlrtRTEI, &st, x.size(0));
  b_st.site = &we_emlrtRSI;
  if (x.size(0) > 2147483646) {
    c_st.site = &fe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= nx_tmp - 1)) {
    if (x[ii]) {
      idx++;
      i[idx - 1] = ii + 1;
      if (idx >= nx_tmp) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (idx > x.size(0)) {
    emlrtErrorWithMessageIdR2018a(&st, &ab_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (x.size(0) == 1) {
    if (idx == 0) {
      i.set_size(&ng_emlrtRTEI, &st, 0);
    }
  } else {
    int32_T iv[2];
    if (idx < 1) {
      nx_tmp = 0;
    } else {
      nx_tmp = idx;
    }
    iv[0] = 1;
    iv[1] = nx_tmp;
    b_st.site = &uj_emlrtRSI;
    internal::indexShapeCheck(b_st, i.size(0), iv);
    i.set_size(&ng_emlrtRTEI, &st, nx_tmp);
  }
}

void eml_find(const emlrtStack &sp, const array<boolean_T, 2U> &x,
              array<int32_T, 2U> &i)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T idx;
  int32_T ii;
  int32_T nx_tmp;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx_tmp = x.size(1);
  st.site = &ve_emlrtRSI;
  idx = 0;
  i.set_size(&mg_emlrtRTEI, &st, 1, x.size(1));
  b_st.site = &we_emlrtRSI;
  if (x.size(1) > 2147483646) {
    c_st.site = &fe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= nx_tmp - 1)) {
    if (x[ii]) {
      idx++;
      i[idx - 1] = ii + 1;
      if (idx >= nx_tmp) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (idx > x.size(1)) {
    emlrtErrorWithMessageIdR2018a(&st, &ab_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (x.size(1) == 1) {
    if (idx == 0) {
      i.set_size(&ng_emlrtRTEI, &st, 1, 0);
    }
  } else {
    if (idx < 1) {
      idx = 0;
    }
    i.set_size(&ng_emlrtRTEI, &st, i.size(0), idx);
  }
}

} // namespace coder

// End of code generation (find.cpp)
