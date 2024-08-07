//
// sortIdx.cpp
//
// Code generation for function 'sortIdx'
//

// Include files
#include "sortIdx.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo xf_emlrtRSI{
    105,       // lineNo
    "sortIdx", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo yf_emlrtRSI{
    301,                // lineNo
    "block_merge_sort", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo ag_emlrtRSI{
    309,                // lineNo
    "block_merge_sort", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo bg_emlrtRSI{
    310,                // lineNo
    "block_merge_sort", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo cg_emlrtRSI{
    318,                // lineNo
    "block_merge_sort", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo dg_emlrtRSI{
    326,                // lineNo
    "block_merge_sort", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo eg_emlrtRSI{
    381,                      // lineNo
    "initialize_vector_sort", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo fg_emlrtRSI{
    409,                      // lineNo
    "initialize_vector_sort", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo gg_emlrtRSI{
    416,                      // lineNo
    "initialize_vector_sort", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo hg_emlrtRSI{
    576,                // lineNo
    "merge_pow2_block", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo ig_emlrtRSI{
    578,                // lineNo
    "merge_pow2_block", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo jg_emlrtRSI{
    606,                // lineNo
    "merge_pow2_block", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo kg_emlrtRSI{
    488,           // lineNo
    "merge_block", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo mg_emlrtRSI{
    496,           // lineNo
    "merge_block", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo ng_emlrtRSI{
    503,           // lineNo
    "merge_block", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo og_emlrtRSI{
    550,     // lineNo
    "merge", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo pg_emlrtRSI{
    519,     // lineNo
    "merge", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRTEInfo ko_emlrtRTEI{
    56,        // lineNo
    5,         // colNo
    "sortIdx", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pName
};

static emlrtRTEInfo lo_emlrtRTEI{
    296,       // lineNo
    1,         // colNo
    "sortIdx", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pName
};

static emlrtRTEInfo mo_emlrtRTEI{
    298,       // lineNo
    24,        // colNo
    "sortIdx", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pName
};

static emlrtRTEInfo oo_emlrtRTEI{
    61,        // lineNo
    5,         // colNo
    "sortIdx", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pName
};

// Function Declarations
namespace coder {
namespace internal {
static void merge(const emlrtStack &sp, array<int32_T, 1U> &idx,
                  array<real_T, 1U> &x, int32_T offset, int32_T np, int32_T nq,
                  array<int32_T, 1U> &iwork, array<real_T, 1U> &xwork);

static void merge(const emlrtStack &sp, array<int32_T, 2U> &idx,
                  array<real_T, 2U> &x, int32_T offset, int32_T np, int32_T nq,
                  array<int32_T, 1U> &iwork, array<real_T, 1U> &xwork);

static void merge_block(const emlrtStack &sp, array<int32_T, 1U> &idx,
                        array<real_T, 1U> &x, int32_T offset, int32_T n,
                        int32_T preSortLevel, array<int32_T, 1U> &iwork,
                        array<real_T, 1U> &xwork);

static void merge_block(const emlrtStack &sp, array<int32_T, 2U> &idx,
                        array<real_T, 2U> &x, int32_T offset, int32_T n,
                        int32_T preSortLevel, array<int32_T, 1U> &iwork,
                        array<real_T, 1U> &xwork);

} // namespace internal
} // namespace coder

// Function Definitions
namespace coder {
namespace internal {
static void merge(const emlrtStack &sp, array<int32_T, 1U> &idx,
                  array<real_T, 1U> &x, int32_T offset, int32_T np, int32_T nq,
                  array<int32_T, 1U> &iwork, array<real_T, 1U> &xwork)
{
  emlrtStack b_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (nq != 0) {
    int32_T iout;
    int32_T n_tmp;
    int32_T p;
    int32_T q;
    n_tmp = np + nq;
    st.site = &pg_emlrtRSI;
    if (n_tmp > 2147483646) {
      b_st.site = &fe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (int32_T j{0}; j < n_tmp; j++) {
      iout = offset + j;
      iwork[j] = idx[iout];
      xwork[j] = x[iout];
    }
    p = 0;
    q = np;
    iout = offset - 1;
    int32_T exitg1;
    do {
      exitg1 = 0;
      iout++;
      if (xwork[p] <= xwork[q]) {
        idx[iout] = iwork[p];
        x[iout] = xwork[p];
        if (p + 1 < np) {
          p++;
        } else {
          exitg1 = 1;
        }
      } else {
        idx[iout] = iwork[q];
        x[iout] = xwork[q];
        if (q + 1 < n_tmp) {
          q++;
        } else {
          q = iout - p;
          st.site = &og_emlrtRSI;
          if ((p + 1 <= np) && (np > 2147483646)) {
            b_st.site = &fe_emlrtRSI;
            check_forloop_overflow_error(b_st);
          }
          for (int32_T j{p + 1}; j <= np; j++) {
            iout = q + j;
            idx[iout] = iwork[j - 1];
            x[iout] = xwork[j - 1];
          }
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);
  }
}

static void merge(const emlrtStack &sp, array<int32_T, 2U> &idx,
                  array<real_T, 2U> &x, int32_T offset, int32_T np, int32_T nq,
                  array<int32_T, 1U> &iwork, array<real_T, 1U> &xwork)
{
  emlrtStack b_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (nq != 0) {
    int32_T iout;
    int32_T n_tmp;
    int32_T p;
    int32_T q;
    n_tmp = np + nq;
    st.site = &pg_emlrtRSI;
    if (n_tmp > 2147483646) {
      b_st.site = &fe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (int32_T j{0}; j < n_tmp; j++) {
      iout = offset + j;
      iwork[j] = idx[iout];
      xwork[j] = x[iout];
    }
    p = 0;
    q = np;
    iout = offset - 1;
    int32_T exitg1;
    do {
      exitg1 = 0;
      iout++;
      if (xwork[p] <= xwork[q]) {
        idx[iout] = iwork[p];
        x[iout] = xwork[p];
        if (p + 1 < np) {
          p++;
        } else {
          exitg1 = 1;
        }
      } else {
        idx[iout] = iwork[q];
        x[iout] = xwork[q];
        if (q + 1 < n_tmp) {
          q++;
        } else {
          q = iout - p;
          st.site = &og_emlrtRSI;
          if ((p + 1 <= np) && (np > 2147483646)) {
            b_st.site = &fe_emlrtRSI;
            check_forloop_overflow_error(b_st);
          }
          for (int32_T j{p + 1}; j <= np; j++) {
            iout = q + j;
            idx[iout] = iwork[j - 1];
            x[iout] = xwork[j - 1];
          }
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);
  }
}

static void merge_block(const emlrtStack &sp, array<int32_T, 1U> &idx,
                        array<real_T, 1U> &x, int32_T offset, int32_T n,
                        int32_T preSortLevel, array<int32_T, 1U> &iwork,
                        array<real_T, 1U> &xwork)
{
  emlrtStack st;
  int32_T bLen;
  int32_T nPairs;
  st.prev = &sp;
  st.tls = sp.tls;
  nPairs = n >> preSortLevel;
  bLen = 1 << preSortLevel;
  while (nPairs > 1) {
    int32_T nTail;
    int32_T tailOffset;
    if ((nPairs & 1) != 0) {
      nPairs--;
      tailOffset = bLen * nPairs;
      nTail = n - tailOffset;
      if (nTail > bLen) {
        st.site = &kg_emlrtRSI;
        merge(st, idx, x, offset + tailOffset, bLen, nTail - bLen, iwork,
              xwork);
      }
    }
    tailOffset = bLen << 1;
    nPairs >>= 1;
    for (nTail = 0; nTail < nPairs; nTail++) {
      st.site = &mg_emlrtRSI;
      merge(st, idx, x, offset + nTail * tailOffset, bLen, bLen, iwork, xwork);
    }
    bLen = tailOffset;
  }
  if (n > bLen) {
    st.site = &ng_emlrtRSI;
    merge(st, idx, x, offset, bLen, n - bLen, iwork, xwork);
  }
}

static void merge_block(const emlrtStack &sp, array<int32_T, 2U> &idx,
                        array<real_T, 2U> &x, int32_T offset, int32_T n,
                        int32_T preSortLevel, array<int32_T, 1U> &iwork,
                        array<real_T, 1U> &xwork)
{
  emlrtStack st;
  int32_T bLen;
  int32_T nPairs;
  st.prev = &sp;
  st.tls = sp.tls;
  nPairs = n >> preSortLevel;
  bLen = 1 << preSortLevel;
  while (nPairs > 1) {
    int32_T nTail;
    int32_T tailOffset;
    if ((nPairs & 1) != 0) {
      nPairs--;
      tailOffset = bLen * nPairs;
      nTail = n - tailOffset;
      if (nTail > bLen) {
        st.site = &kg_emlrtRSI;
        merge(st, idx, x, offset + tailOffset, bLen, nTail - bLen, iwork,
              xwork);
      }
    }
    tailOffset = bLen << 1;
    nPairs >>= 1;
    for (nTail = 0; nTail < nPairs; nTail++) {
      st.site = &mg_emlrtRSI;
      merge(st, idx, x, offset + nTail * tailOffset, bLen, bLen, iwork, xwork);
    }
    bLen = tailOffset;
  }
  if (n > bLen) {
    st.site = &ng_emlrtRSI;
    merge(st, idx, x, offset, bLen, n - bLen, iwork, xwork);
  }
}

void sortIdx(const emlrtStack &sp, array<real_T, 1U> &x,
             array<int32_T, 1U> &idx)
{
  array<real_T, 1U> xwork;
  array<int32_T, 1U> iwork;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T bLen2;
  int32_T i;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  bLen2 = x.size(0);
  idx.set_size(&oo_emlrtRTEI, &sp, bLen2);
  for (i = 0; i < bLen2; i++) {
    idx[i] = 0;
  }
  if (x.size(0) != 0) {
    real_T x4[4];
    int32_T idx4[4];
    int32_T bLen;
    int32_T i1;
    int32_T i2;
    int32_T i3;
    int32_T i4;
    int32_T ib;
    int32_T idx_tmp;
    int32_T nBlocks;
    int32_T wOffset_tmp;
    st.site = &xf_emlrtRSI;
    iwork.set_size(&lo_emlrtRTEI, &st, bLen2);
    for (i = 0; i < bLen2; i++) {
      iwork[i] = 0;
    }
    xwork.set_size(&mo_emlrtRTEI, &st, bLen2);
    b_st.site = &yf_emlrtRSI;
    x4[0] = 0.0;
    idx4[0] = 0;
    x4[1] = 0.0;
    idx4[1] = 0;
    x4[2] = 0.0;
    idx4[2] = 0;
    x4[3] = 0.0;
    idx4[3] = 0;
    nBlocks = 0;
    ib = 0;
    c_st.site = &eg_emlrtRSI;
    if (x.size(0) > 2147483646) {
      d_st.site = &fe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (int32_T k{0}; k < bLen2; k++) {
      if (muDoubleScalarIsNaN(x[k])) {
        idx_tmp = (bLen2 - nBlocks) - 1;
        idx[idx_tmp] = k + 1;
        xwork[idx_tmp] = x[k];
        nBlocks++;
      } else {
        ib++;
        idx4[ib - 1] = k + 1;
        x4[ib - 1] = x[k];
        if (ib == 4) {
          real_T d;
          real_T d1;
          ib = k - nBlocks;
          if (x4[0] <= x4[1]) {
            i1 = 1;
            i2 = 2;
          } else {
            i1 = 2;
            i2 = 1;
          }
          if (x4[2] <= x4[3]) {
            i3 = 3;
            i4 = 4;
          } else {
            i3 = 4;
            i4 = 3;
          }
          d = x4[i3 - 1];
          d1 = x4[i1 - 1];
          if (d1 <= d) {
            d1 = x4[i2 - 1];
            if (d1 <= d) {
              i = i1;
              bLen = i2;
              i1 = i3;
              i2 = i4;
            } else if (d1 <= x4[i4 - 1]) {
              i = i1;
              bLen = i3;
              i1 = i2;
              i2 = i4;
            } else {
              i = i1;
              bLen = i3;
              i1 = i4;
            }
          } else {
            d = x4[i4 - 1];
            if (d1 <= d) {
              if (x4[i2 - 1] <= d) {
                i = i3;
                bLen = i1;
                i1 = i2;
                i2 = i4;
              } else {
                i = i3;
                bLen = i1;
                i1 = i4;
              }
            } else {
              i = i3;
              bLen = i4;
            }
          }
          idx[ib - 3] = idx4[i - 1];
          idx[ib - 2] = idx4[bLen - 1];
          idx[ib - 1] = idx4[i1 - 1];
          idx[ib] = idx4[i2 - 1];
          x[ib - 3] = x4[i - 1];
          x[ib - 2] = x4[bLen - 1];
          x[ib - 1] = x4[i1 - 1];
          x[ib] = x4[i2 - 1];
          ib = 0;
        }
      }
    }
    wOffset_tmp = x.size(0) - nBlocks;
    if (ib > 0) {
      int8_T perm[4];
      perm[1] = 0;
      perm[2] = 0;
      perm[3] = 0;
      if (ib == 1) {
        perm[0] = 1;
      } else if (ib == 2) {
        if (x4[0] <= x4[1]) {
          perm[0] = 1;
          perm[1] = 2;
        } else {
          perm[0] = 2;
          perm[1] = 1;
        }
      } else if (x4[0] <= x4[1]) {
        if (x4[1] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 2;
          perm[2] = 3;
        } else if (x4[0] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 3;
          perm[2] = 2;
        } else {
          perm[0] = 3;
          perm[1] = 1;
          perm[2] = 2;
        }
      } else if (x4[0] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 1;
        perm[2] = 3;
      } else if (x4[1] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 3;
        perm[2] = 1;
      } else {
        perm[0] = 3;
        perm[1] = 2;
        perm[2] = 1;
      }
      c_st.site = &fg_emlrtRSI;
      if (ib > 2147483646) {
        d_st.site = &fe_emlrtRSI;
        check_forloop_overflow_error(d_st);
      }
      i = static_cast<uint8_T>(ib);
      for (int32_T k{0}; k < i; k++) {
        idx_tmp = (wOffset_tmp - ib) + k;
        bLen = perm[k];
        idx[idx_tmp] = idx4[bLen - 1];
        x[idx_tmp] = x4[bLen - 1];
      }
    }
    i1 = nBlocks >> 1;
    c_st.site = &gg_emlrtRSI;
    for (int32_T k{0}; k < i1; k++) {
      ib = wOffset_tmp + k;
      i2 = idx[ib];
      idx_tmp = (bLen2 - k) - 1;
      idx[ib] = idx[idx_tmp];
      idx[idx_tmp] = i2;
      x[ib] = xwork[idx_tmp];
      x[idx_tmp] = xwork[ib];
    }
    if ((nBlocks & 1) != 0) {
      i = wOffset_tmp + i1;
      x[i] = xwork[i];
    }
    ib = 2;
    if (wOffset_tmp > 1) {
      if (x.size(0) >= 256) {
        nBlocks = wOffset_tmp >> 8;
        if (nBlocks > 0) {
          b_st.site = &ag_emlrtRSI;
          for (int32_T b{0}; b < nBlocks; b++) {
            real_T b_xwork[256];
            int32_T b_iwork[256];
            b_st.site = &bg_emlrtRSI;
            i4 = (b << 8) - 1;
            for (int32_T b_b{0}; b_b < 6; b_b++) {
              bLen = 1 << (b_b + 2);
              bLen2 = bLen << 1;
              i = 256 >> (b_b + 3);
              c_st.site = &hg_emlrtRSI;
              for (int32_T k{0}; k < i; k++) {
                i2 = (i4 + k * bLen2) + 1;
                c_st.site = &ig_emlrtRSI;
                for (i1 = 0; i1 < bLen2; i1++) {
                  ib = i2 + i1;
                  b_iwork[i1] = idx[ib];
                  b_xwork[i1] = x[ib];
                }
                i3 = 0;
                i1 = bLen;
                ib = i2 - 1;
                int32_T exitg1;
                do {
                  exitg1 = 0;
                  ib++;
                  if (b_xwork[i3] <= b_xwork[i1]) {
                    idx[ib] = b_iwork[i3];
                    x[ib] = b_xwork[i3];
                    if (i3 + 1 < bLen) {
                      i3++;
                    } else {
                      exitg1 = 1;
                    }
                  } else {
                    idx[ib] = b_iwork[i1];
                    x[ib] = b_xwork[i1];
                    if (i1 + 1 < bLen2) {
                      i1++;
                    } else {
                      ib -= i3;
                      c_st.site = &jg_emlrtRSI;
                      for (i1 = i3 + 1; i1 <= bLen; i1++) {
                        idx_tmp = ib + i1;
                        idx[idx_tmp] = b_iwork[i1 - 1];
                        x[idx_tmp] = b_xwork[i1 - 1];
                      }
                      exitg1 = 1;
                    }
                  }
                } while (exitg1 == 0);
              }
            }
          }
          ib = nBlocks << 8;
          i1 = wOffset_tmp - ib;
          if (i1 > 0) {
            b_st.site = &cg_emlrtRSI;
            merge_block(b_st, idx, x, ib, i1, 2, iwork, xwork);
          }
          ib = 8;
        }
      }
      b_st.site = &dg_emlrtRSI;
      merge_block(b_st, idx, x, 0, wOffset_tmp, ib, iwork, xwork);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void sortIdx(const emlrtStack &sp, array<real_T, 2U> &x,
             array<int32_T, 2U> &idx)
{
  array<real_T, 1U> xwork;
  array<int32_T, 1U> iwork;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T bLen2;
  int32_T i;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  bLen2 = x.size(1);
  idx.set_size(&ko_emlrtRTEI, &sp, 1, bLen2);
  for (i = 0; i < bLen2; i++) {
    idx[i] = 0;
  }
  if (x.size(1) != 0) {
    real_T x4[4];
    int32_T idx4[4];
    int32_T bLen;
    int32_T i1;
    int32_T i2;
    int32_T i3;
    int32_T i4;
    int32_T ib;
    int32_T idx_tmp;
    int32_T nBlocks;
    int32_T wOffset_tmp;
    st.site = &xf_emlrtRSI;
    iwork.set_size(&lo_emlrtRTEI, &st, bLen2);
    for (i = 0; i < bLen2; i++) {
      iwork[i] = 0;
    }
    xwork.set_size(&mo_emlrtRTEI, &st, bLen2);
    b_st.site = &yf_emlrtRSI;
    x4[0] = 0.0;
    idx4[0] = 0;
    x4[1] = 0.0;
    idx4[1] = 0;
    x4[2] = 0.0;
    idx4[2] = 0;
    x4[3] = 0.0;
    idx4[3] = 0;
    nBlocks = 0;
    ib = 0;
    c_st.site = &eg_emlrtRSI;
    if (x.size(1) > 2147483646) {
      d_st.site = &fe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (int32_T k{0}; k < bLen2; k++) {
      if (muDoubleScalarIsNaN(x[k])) {
        idx_tmp = (bLen2 - nBlocks) - 1;
        idx[idx_tmp] = k + 1;
        xwork[idx_tmp] = x[k];
        nBlocks++;
      } else {
        ib++;
        idx4[ib - 1] = k + 1;
        x4[ib - 1] = x[k];
        if (ib == 4) {
          real_T d;
          real_T d1;
          ib = k - nBlocks;
          if (x4[0] <= x4[1]) {
            i1 = 1;
            i2 = 2;
          } else {
            i1 = 2;
            i2 = 1;
          }
          if (x4[2] <= x4[3]) {
            i3 = 3;
            i4 = 4;
          } else {
            i3 = 4;
            i4 = 3;
          }
          d = x4[i3 - 1];
          d1 = x4[i1 - 1];
          if (d1 <= d) {
            d1 = x4[i2 - 1];
            if (d1 <= d) {
              i = i1;
              bLen = i2;
              i1 = i3;
              i2 = i4;
            } else if (d1 <= x4[i4 - 1]) {
              i = i1;
              bLen = i3;
              i1 = i2;
              i2 = i4;
            } else {
              i = i1;
              bLen = i3;
              i1 = i4;
            }
          } else {
            d = x4[i4 - 1];
            if (d1 <= d) {
              if (x4[i2 - 1] <= d) {
                i = i3;
                bLen = i1;
                i1 = i2;
                i2 = i4;
              } else {
                i = i3;
                bLen = i1;
                i1 = i4;
              }
            } else {
              i = i3;
              bLen = i4;
            }
          }
          idx[ib - 3] = idx4[i - 1];
          idx[ib - 2] = idx4[bLen - 1];
          idx[ib - 1] = idx4[i1 - 1];
          idx[ib] = idx4[i2 - 1];
          x[ib - 3] = x4[i - 1];
          x[ib - 2] = x4[bLen - 1];
          x[ib - 1] = x4[i1 - 1];
          x[ib] = x4[i2 - 1];
          ib = 0;
        }
      }
    }
    wOffset_tmp = x.size(1) - nBlocks;
    if (ib > 0) {
      int8_T perm[4];
      perm[1] = 0;
      perm[2] = 0;
      perm[3] = 0;
      if (ib == 1) {
        perm[0] = 1;
      } else if (ib == 2) {
        if (x4[0] <= x4[1]) {
          perm[0] = 1;
          perm[1] = 2;
        } else {
          perm[0] = 2;
          perm[1] = 1;
        }
      } else if (x4[0] <= x4[1]) {
        if (x4[1] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 2;
          perm[2] = 3;
        } else if (x4[0] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 3;
          perm[2] = 2;
        } else {
          perm[0] = 3;
          perm[1] = 1;
          perm[2] = 2;
        }
      } else if (x4[0] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 1;
        perm[2] = 3;
      } else if (x4[1] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 3;
        perm[2] = 1;
      } else {
        perm[0] = 3;
        perm[1] = 2;
        perm[2] = 1;
      }
      c_st.site = &fg_emlrtRSI;
      if (ib > 2147483646) {
        d_st.site = &fe_emlrtRSI;
        check_forloop_overflow_error(d_st);
      }
      i = static_cast<uint8_T>(ib);
      for (int32_T k{0}; k < i; k++) {
        idx_tmp = (wOffset_tmp - ib) + k;
        bLen = perm[k];
        idx[idx_tmp] = idx4[bLen - 1];
        x[idx_tmp] = x4[bLen - 1];
      }
    }
    i1 = nBlocks >> 1;
    c_st.site = &gg_emlrtRSI;
    for (int32_T k{0}; k < i1; k++) {
      ib = wOffset_tmp + k;
      i2 = idx[ib];
      idx_tmp = (bLen2 - k) - 1;
      idx[ib] = idx[idx_tmp];
      idx[idx_tmp] = i2;
      x[ib] = xwork[idx_tmp];
      x[idx_tmp] = xwork[ib];
    }
    if ((nBlocks & 1) != 0) {
      i = wOffset_tmp + i1;
      x[i] = xwork[i];
    }
    ib = 2;
    if (wOffset_tmp > 1) {
      if (x.size(1) >= 256) {
        nBlocks = wOffset_tmp >> 8;
        if (nBlocks > 0) {
          b_st.site = &ag_emlrtRSI;
          for (int32_T b{0}; b < nBlocks; b++) {
            real_T b_xwork[256];
            int32_T b_iwork[256];
            b_st.site = &bg_emlrtRSI;
            i4 = (b << 8) - 1;
            for (int32_T b_b{0}; b_b < 6; b_b++) {
              bLen = 1 << (b_b + 2);
              bLen2 = bLen << 1;
              i = 256 >> (b_b + 3);
              c_st.site = &hg_emlrtRSI;
              for (int32_T k{0}; k < i; k++) {
                i2 = (i4 + k * bLen2) + 1;
                c_st.site = &ig_emlrtRSI;
                for (i1 = 0; i1 < bLen2; i1++) {
                  ib = i2 + i1;
                  b_iwork[i1] = idx[ib];
                  b_xwork[i1] = x[ib];
                }
                i3 = 0;
                i1 = bLen;
                ib = i2 - 1;
                int32_T exitg1;
                do {
                  exitg1 = 0;
                  ib++;
                  if (b_xwork[i3] <= b_xwork[i1]) {
                    idx[ib] = b_iwork[i3];
                    x[ib] = b_xwork[i3];
                    if (i3 + 1 < bLen) {
                      i3++;
                    } else {
                      exitg1 = 1;
                    }
                  } else {
                    idx[ib] = b_iwork[i1];
                    x[ib] = b_xwork[i1];
                    if (i1 + 1 < bLen2) {
                      i1++;
                    } else {
                      ib -= i3;
                      c_st.site = &jg_emlrtRSI;
                      for (i1 = i3 + 1; i1 <= bLen; i1++) {
                        idx_tmp = ib + i1;
                        idx[idx_tmp] = b_iwork[i1 - 1];
                        x[idx_tmp] = b_xwork[i1 - 1];
                      }
                      exitg1 = 1;
                    }
                  }
                } while (exitg1 == 0);
              }
            }
          }
          ib = nBlocks << 8;
          i1 = wOffset_tmp - ib;
          if (i1 > 0) {
            b_st.site = &cg_emlrtRSI;
            merge_block(b_st, idx, x, ib, i1, 2, iwork, xwork);
          }
          ib = 8;
        }
      }
      b_st.site = &dg_emlrtRSI;
      merge_block(b_st, idx, x, 0, wOffset_tmp, ib, iwork, xwork);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace internal
} // namespace coder

// End of code generation (sortIdx.cpp)