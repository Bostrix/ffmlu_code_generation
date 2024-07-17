//
// sort.cpp
//
// Code generation for function 'sort'
//

// Include files
#include "sort.h"
#include "Afun_lap_te_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"
#include <algorithm>
#include <cstring>

// Variable Definitions
static emlrtRSInfo j_emlrtRSI{
    72,     // lineNo
    "sort", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sort.m" // pathName
};

static emlrtRSInfo k_emlrtRSI{
    105,       // lineNo
    "sortIdx", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo l_emlrtRSI{
    326,                // lineNo
    "block_merge_sort", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo m_emlrtRSI{
    318,                // lineNo
    "block_merge_sort", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo n_emlrtRSI{
    310,                // lineNo
    "block_merge_sort", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo o_emlrtRSI{
    309,                // lineNo
    "block_merge_sort", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo p_emlrtRSI{
    301,                // lineNo
    "block_merge_sort", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo q_emlrtRSI{
    416,                      // lineNo
    "initialize_vector_sort", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo r_emlrtRSI{
    409,                      // lineNo
    "initialize_vector_sort", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo t_emlrtRSI{
    576,                // lineNo
    "merge_pow2_block", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo u_emlrtRSI{
    578,                // lineNo
    "merge_pow2_block", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo v_emlrtRSI{
    606,                // lineNo
    "merge_pow2_block", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo x_emlrtRSI{
    495,           // lineNo
    "merge_block", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo ab_emlrtRSI{
    503,           // lineNo
    "merge_block", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

// Function Definitions
namespace coder {
namespace internal {
void sort(const emlrtStack &sp, real_T x[819], int32_T idx[819])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T xwork[819];
  real_T x4[4];
  int32_T b_iwork[819];
  int32_T exitg1;
  int32_T i;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T ib;
  int32_T offset;
  int16_T idx4[4];
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &j_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  std::memset(&idx[0], 0, 819U * sizeof(int32_T));
  b_st.site = &k_emlrtRSI;
  c_st.site = &p_emlrtRSI;
  x4[0] = 0.0;
  idx4[0] = 0;
  x4[1] = 0.0;
  idx4[1] = 0;
  x4[2] = 0.0;
  idx4[2] = 0;
  x4[3] = 0.0;
  idx4[3] = 0;
  ib = 0;
  for (int32_T k{0}; k < 819; k++) {
    ib++;
    idx4[ib - 1] = static_cast<int16_T>(k + 1);
    x4[ib - 1] = x[k];
    if (ib == 4) {
      real_T d;
      real_T d1;
      if (x4[0] <= x4[1]) {
        ib = 1;
        i2 = 2;
      } else {
        ib = 2;
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
      d1 = x4[ib - 1];
      if (d1 <= d) {
        d1 = x4[i2 - 1];
        if (d1 <= d) {
          i = ib;
          offset = i2;
          ib = i3;
          i2 = i4;
        } else if (d1 <= x4[i4 - 1]) {
          i = ib;
          offset = i3;
          ib = i2;
          i2 = i4;
        } else {
          i = ib;
          offset = i3;
          ib = i4;
        }
      } else {
        d = x4[i4 - 1];
        if (d1 <= d) {
          if (x4[i2 - 1] <= d) {
            i = i3;
            offset = ib;
            ib = i2;
            i2 = i4;
          } else {
            i = i3;
            offset = ib;
            ib = i4;
          }
        } else {
          i = i3;
          offset = i4;
        }
      }
      idx[k - 3] = idx4[i - 1];
      idx[k - 2] = idx4[offset - 1];
      idx[k - 1] = idx4[ib - 1];
      idx[k] = idx4[i2 - 1];
      x[k - 3] = x4[i - 1];
      x[k - 2] = x4[offset - 1];
      x[k - 1] = x4[ib - 1];
      x[k] = x4[i2 - 1];
      ib = 0;
    }
  }
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
    d_st.site = &r_emlrtRSI;
    if (ib > 2147483646) {
      e_st.site = &s_emlrtRSI;
      check_forloop_overflow_error(e_st);
    }
    i = static_cast<uint8_T>(ib);
    for (int32_T k{0}; k < i; k++) {
      i2 = (k - ib) + 819;
      offset = perm[k];
      idx[i2] = idx4[offset - 1];
      x[i2] = x4[offset - 1];
    }
  }
  d_st.site = &q_emlrtRSI;
  c_st.site = &o_emlrtRSI;
  for (int32_T b{0}; b < 3; b++) {
    real_T b_xwork[256];
    int16_T iwork[256];
    c_st.site = &n_emlrtRSI;
    offset = (b << 8) - 1;
    for (int32_T b_b{0}; b_b < 6; b_b++) {
      int32_T bLen;
      int32_T bLen2;
      bLen = 1 << (b_b + 2);
      bLen2 = bLen << 1;
      i = 256 >> (b_b + 3);
      d_st.site = &t_emlrtRSI;
      for (int32_T k{0}; k < i; k++) {
        i3 = (offset + k * bLen2) + 1;
        d_st.site = &u_emlrtRSI;
        for (int32_T j{0}; j < bLen2; j++) {
          ib = i3 + j;
          iwork[j] = static_cast<int16_T>(idx[ib]);
          b_xwork[j] = x[ib];
        }
        i4 = 0;
        i2 = bLen;
        ib = i3 - 1;
        do {
          exitg1 = 0;
          ib++;
          if (b_xwork[i4] <= b_xwork[i2]) {
            idx[ib] = iwork[i4];
            x[ib] = b_xwork[i4];
            if (i4 + 1 < bLen) {
              i4++;
            } else {
              exitg1 = 1;
            }
          } else {
            idx[ib] = iwork[i2];
            x[ib] = b_xwork[i2];
            if (i2 + 1 < bLen2) {
              i2++;
            } else {
              ib -= i4;
              d_st.site = &v_emlrtRSI;
              for (int32_T j{i4 + 1}; j <= bLen; j++) {
                i2 = ib + j;
                idx[i2] = iwork[j - 1];
                x[i2] = b_xwork[j - 1];
              }
              exitg1 = 1;
            }
          }
        } while (exitg1 == 0);
      }
    }
  }
  c_st.site = &m_emlrtRSI;
  merge_block(c_st, idx, x, xwork, b_iwork);
  c_st.site = &l_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  merge(d_st, idx, x, 512, 256, 51, b_iwork, xwork);
  d_st.site = &x_emlrtRSI;
  d_st.site = &y_emlrtRSI;
  b_merge(d_st, idx, x, 0, 256, 256, b_iwork, xwork);
  d_st.site = &ab_emlrtRSI;
  std::copy(&idx[0], &idx[819], &b_iwork[0]);
  std::copy(&x[0], &x[819], &xwork[0]);
  i4 = 0;
  i2 = 512;
  ib = -1;
  do {
    exitg1 = 0;
    ib++;
    if (xwork[i4] <= xwork[i2]) {
      idx[ib] = b_iwork[i4];
      x[ib] = xwork[i4];
      if (i4 + 1 < 512) {
        i4++;
      } else {
        exitg1 = 1;
      }
    } else {
      idx[ib] = b_iwork[i2];
      x[ib] = xwork[i2];
      if (i2 + 1 < 819) {
        i2++;
      } else {
        ib -= i4;
        for (int32_T j{i4 + 1}; j < 513; j++) {
          i2 = ib + j;
          idx[i2] = b_iwork[j - 1];
          x[i2] = xwork[j - 1];
        }
        exitg1 = 1;
      }
    }
  } while (exitg1 == 0);
}

} // namespace internal
} // namespace coder

// End of code generation (sort.cpp)
