//
// sort.cpp
//
// Code generation for function 'sort'
//

// Include files
#include "sort.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"
#include "srskelf_asym_new_data.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo wf_emlrtRSI{
    72,     // lineNo
    "sort", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sort.m" // pathName
};

static emlrtRSInfo qg_emlrtRSI{
    90,     // lineNo
    "sort", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sort.m" // pathName
};

static emlrtRSInfo rg_emlrtRSI{
    87,     // lineNo
    "sort", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sort.m" // pathName
};

static emlrtRSInfo sg_emlrtRSI{
    84,     // lineNo
    "sort", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sort.m" // pathName
};

static emlrtRSInfo tg_emlrtRSI{
    81,     // lineNo
    "sort", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sort.m" // pathName
};

static emlrtRSInfo ug_emlrtRSI{
    79,     // lineNo
    "sort", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sort.m" // pathName
};

static emlrtRSInfo vg_emlrtRSI{
    76,     // lineNo
    "sort", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sort.m" // pathName
};

static emlrtRTEInfo no_emlrtRTEI{
    56,                                                                // lineNo
    24,                                                                // colNo
    "sort",                                                            // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sort.m" // pName
};

static emlrtRTEInfo po_emlrtRTEI{
    75,                                                                // lineNo
    26,                                                                // colNo
    "sort",                                                            // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sort.m" // pName
};

// Function Definitions
namespace coder {
namespace internal {
void b_sort(const emlrtStack &sp, array<real_T, 2U> &x)
{
  array<real_T, 1U> vwork;
  array<int32_T, 1U> vr_emlrtRSI;
  emlrtStack b_st;
  emlrtStack st;
  int32_T dim;
  int32_T i;
  int32_T npages;
  int32_T vlen;
  int32_T vstride;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  dim = 1;
  if (x.size(0) != 1) {
    dim = 0;
  }
  i = x.size(dim);
  vlen = i - 1;
  vwork.set_size(&no_emlrtRTEI, &sp, i);
  st.site = &vg_emlrtRSI;
  vstride = 1;
  for (int32_T k{0}; k < dim; k++) {
    vstride *= x.size(0);
  }
  npages = 1;
  dim += 2;
  for (int32_T k{dim}; k < 3; k++) {
    npages *= x.size(1);
  }
  dim = i * vstride;
  st.site = &ug_emlrtRSI;
  if (npages > 2147483646) {
    b_st.site = &fe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T b_i{0}; b_i < npages; b_i++) {
    int32_T pageoffset;
    pageoffset = b_i * dim;
    st.site = &tg_emlrtRSI;
    if (vstride > 2147483646) {
      b_st.site = &fe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (int32_T j{0}; j < vstride; j++) {
      int32_T idx0;
      idx0 = pageoffset + j;
      st.site = &sg_emlrtRSI;
      if (i > 2147483646) {
        b_st.site = &fe_emlrtRSI;
        check_forloop_overflow_error(b_st);
      }
      for (int32_T k{0}; k <= vlen; k++) {
        vwork[k] = x[idx0 + k * vstride];
      }
      st.site = &rg_emlrtRSI;
      sortIdx(st, vwork, vr_emlrtRSI);
      st.site = &qg_emlrtRSI;
      for (int32_T k{0}; k <= vlen; k++) {
        x[idx0 + k * vstride] = vwork[k];
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void b_sort(const emlrtStack &sp, array<real_T, 2U> &x, array<int32_T, 2U> &idx)
{
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &wf_emlrtRSI;
  sortIdx(st, x, idx);
}

void sort(const emlrtStack &sp, array<real_T, 2U> &x)
{
  array<int32_T, 2U> vr_emlrtRSI;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &wf_emlrtRSI;
  sortIdx(st, x, vr_emlrtRSI);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void sort(const emlrtStack &sp, array<real_T, 2U> &x, array<int32_T, 2U> &idx)
{
  array<real_T, 1U> vwork;
  array<int32_T, 1U> iidx;
  emlrtStack b_st;
  emlrtStack st;
  int32_T dim;
  int32_T i;
  int32_T npages;
  int32_T vlen;
  int32_T vstride;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  dim = 1;
  if (x.size(0) != 1) {
    dim = 0;
  }
  i = x.size(dim);
  vlen = i - 1;
  vwork.set_size(&no_emlrtRTEI, &sp, i);
  idx.set_size(&po_emlrtRTEI, &sp, x.size(0), x.size(1));
  st.site = &vg_emlrtRSI;
  vstride = 1;
  for (int32_T k{0}; k < dim; k++) {
    vstride *= x.size(0);
  }
  npages = 1;
  dim += 2;
  for (int32_T k{dim}; k < 3; k++) {
    npages *= x.size(1);
  }
  dim = i * vstride;
  st.site = &ug_emlrtRSI;
  if (npages > 2147483646) {
    b_st.site = &fe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T b_i{0}; b_i < npages; b_i++) {
    int32_T pageoffset;
    pageoffset = b_i * dim;
    st.site = &tg_emlrtRSI;
    if (vstride > 2147483646) {
      b_st.site = &fe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (int32_T j{0}; j < vstride; j++) {
      int32_T idx0;
      idx0 = pageoffset + j;
      st.site = &sg_emlrtRSI;
      if (i > 2147483646) {
        b_st.site = &fe_emlrtRSI;
        check_forloop_overflow_error(b_st);
      }
      for (int32_T k{0}; k <= vlen; k++) {
        vwork[k] = x[idx0 + k * vstride];
      }
      st.site = &rg_emlrtRSI;
      sortIdx(st, vwork, iidx);
      st.site = &qg_emlrtRSI;
      for (int32_T k{0}; k <= vlen; k++) {
        int32_T i1;
        i1 = idx0 + k * vstride;
        x[i1] = vwork[k];
        idx[i1] = iidx[k];
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace internal
} // namespace coder

// End of code generation (sort.cpp)
