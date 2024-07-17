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
#include "spget_quadcorr_data.h"
#include "mwmathutil.h"
#include <cstring>

// Variable Definitions
static emlrtRSInfo
    e_emlrtRSI{
        72,     // lineNo
        "sort", // fcnName
        "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/"
        "sort.m" // pathName
    };

static emlrtRSInfo
    f_emlrtRSI{
        105,       // lineNo
        "sortIdx", // fcnName
        "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/"
        "sortIdx.m" // pathName
    };

static emlrtRSInfo
    g_emlrtRSI{
        301,                // lineNo
        "block_merge_sort", // fcnName
        "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/"
        "sortIdx.m" // pathName
    };

static emlrtRSInfo
    h_emlrtRSI{
        309,                // lineNo
        "block_merge_sort", // fcnName
        "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/"
        "sortIdx.m" // pathName
    };

static emlrtRSInfo
    i_emlrtRSI{
        310,                // lineNo
        "block_merge_sort", // fcnName
        "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/"
        "sortIdx.m" // pathName
    };

static emlrtRSInfo
    j_emlrtRSI{
        318,                // lineNo
        "block_merge_sort", // fcnName
        "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/"
        "sortIdx.m" // pathName
    };

static emlrtRSInfo
    k_emlrtRSI{
        326,                // lineNo
        "block_merge_sort", // fcnName
        "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/"
        "sortIdx.m" // pathName
    };

static emlrtRSInfo
    l_emlrtRSI{
        409,                      // lineNo
        "initialize_vector_sort", // fcnName
        "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/"
        "sortIdx.m" // pathName
    };

static emlrtRSInfo
    m_emlrtRSI{
        416,                      // lineNo
        "initialize_vector_sort", // fcnName
        "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/"
        "sortIdx.m" // pathName
    };

static emlrtRSInfo
    o_emlrtRSI{
        576,                // lineNo
        "merge_pow2_block", // fcnName
        "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/"
        "sortIdx.m" // pathName
    };

static emlrtRSInfo
    p_emlrtRSI{
        578,                // lineNo
        "merge_pow2_block", // fcnName
        "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/"
        "sortIdx.m" // pathName
    };

static emlrtRSInfo
    q_emlrtRSI{
        606,                // lineNo
        "merge_pow2_block", // fcnName
        "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/"
        "sortIdx.m" // pathName
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
  int32_T iwork[819];
  int32_T i;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T ib;
  int32_T nBlocks;
  int32_T nNaNs;
  int32_T quartetOffset;
  int16_T idx4[4];
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &e_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  std::memset(&idx[0], 0, 819U * sizeof(int32_T));
  b_st.site = &f_emlrtRSI;
  c_st.site = &g_emlrtRSI;
  x4[0] = 0.0;
  idx4[0] = 0;
  x4[1] = 0.0;
  idx4[1] = 0;
  x4[2] = 0.0;
  idx4[2] = 0;
  x4[3] = 0.0;
  idx4[3] = 0;
  nNaNs = 0;
  ib = 0;
  for (int32_T k{0}; k < 819; k++) {
    if (muDoubleScalarIsNaN(x[k])) {
      idx[818 - nNaNs] = k + 1;
      xwork[818 - nNaNs] = x[k];
      nNaNs++;
    } else {
      ib++;
      idx4[ib - 1] = static_cast<int16_T>(k + 1);
      x4[ib - 1] = x[k];
      if (ib == 4) {
        real_T d;
        real_T d1;
        quartetOffset = k - nNaNs;
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
            nBlocks = i2;
            ib = i3;
            i2 = i4;
          } else if (d1 <= x4[i4 - 1]) {
            i = ib;
            nBlocks = i3;
            ib = i2;
            i2 = i4;
          } else {
            i = ib;
            nBlocks = i3;
            ib = i4;
          }
        } else {
          d = x4[i4 - 1];
          if (d1 <= d) {
            if (x4[i2 - 1] <= d) {
              i = i3;
              nBlocks = ib;
              ib = i2;
              i2 = i4;
            } else {
              i = i3;
              nBlocks = ib;
              ib = i4;
            }
          } else {
            i = i3;
            nBlocks = i4;
          }
        }
        idx[quartetOffset - 3] = idx4[i - 1];
        idx[quartetOffset - 2] = idx4[nBlocks - 1];
        idx[quartetOffset - 1] = idx4[ib - 1];
        idx[quartetOffset] = idx4[i2 - 1];
        x[quartetOffset - 3] = x4[i - 1];
        x[quartetOffset - 2] = x4[nBlocks - 1];
        x[quartetOffset - 1] = x4[ib - 1];
        x[quartetOffset] = x4[i2 - 1];
        ib = 0;
      }
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
    d_st.site = &l_emlrtRSI;
    if (ib > 2147483646) {
      e_st.site = &n_emlrtRSI;
      check_forloop_overflow_error(e_st);
    }
    i = static_cast<uint8_T>(ib);
    for (int32_T k{0}; k < i; k++) {
      quartetOffset = ((k - nNaNs) - ib) + 819;
      nBlocks = perm[k];
      idx[quartetOffset] = idx4[nBlocks - 1];
      x[quartetOffset] = x4[nBlocks - 1];
    }
  }
  ib = (nNaNs >> 1) + 819;
  d_st.site = &m_emlrtRSI;
  for (int32_T k{0}; k <= ib - 820; k++) {
    i2 = (k - nNaNs) + 819;
    quartetOffset = idx[i2];
    idx[i2] = idx[818 - k];
    idx[818 - k] = quartetOffset;
    x[i2] = xwork[818 - k];
    x[818 - k] = xwork[i2];
  }
  if ((nNaNs & 1) != 0) {
    i = ib - nNaNs;
    x[i] = xwork[i];
  }
  std::memset(&iwork[0], 0, 819U * sizeof(int32_T));
  ib = 2;
  if (819 - nNaNs > 1) {
    nBlocks = (819 - nNaNs) >> 8;
    if (nBlocks > 0) {
      int32_T bLen;
      int32_T bLen2;
      c_st.site = &h_emlrtRSI;
      for (int32_T b{0}; b < nBlocks; b++) {
        real_T b_xwork[256];
        int16_T b_iwork[256];
        c_st.site = &i_emlrtRSI;
        i4 = (b << 8) - 1;
        for (int32_T b_b{0}; b_b < 6; b_b++) {
          bLen = 1 << (b_b + 2);
          bLen2 = bLen << 1;
          i = 256 >> (b_b + 3);
          d_st.site = &o_emlrtRSI;
          for (int32_T k{0}; k < i; k++) {
            i2 = (i4 + k * bLen2) + 1;
            d_st.site = &p_emlrtRSI;
            for (int32_T j{0}; j < bLen2; j++) {
              ib = i2 + j;
              b_iwork[j] = static_cast<int16_T>(idx[ib]);
              b_xwork[j] = x[ib];
            }
            i3 = 0;
            quartetOffset = bLen;
            ib = i2 - 1;
            int32_T exitg1;
            do {
              exitg1 = 0;
              ib++;
              if (b_xwork[i3] <= b_xwork[quartetOffset]) {
                idx[ib] = b_iwork[i3];
                x[ib] = b_xwork[i3];
                if (i3 + 1 < bLen) {
                  i3++;
                } else {
                  exitg1 = 1;
                }
              } else {
                idx[ib] = b_iwork[quartetOffset];
                x[ib] = b_xwork[quartetOffset];
                if (quartetOffset + 1 < bLen2) {
                  quartetOffset++;
                } else {
                  ib -= i3;
                  d_st.site = &q_emlrtRSI;
                  for (int32_T j{i3 + 1}; j <= bLen; j++) {
                    quartetOffset = ib + j;
                    idx[quartetOffset] = b_iwork[j - 1];
                    x[quartetOffset] = b_xwork[j - 1];
                  }
                  exitg1 = 1;
                }
              }
            } while (exitg1 == 0);
          }
        }
      }
      ib = nBlocks << 8;
      i3 = 819 - (nNaNs + ib);
      if (i3 > 0) {
        c_st.site = &j_emlrtRSI;
        std::memset(&iwork[0], 0, 819U * sizeof(int32_T));
        i4 = i3 >> 2;
        bLen = 4;
        while (i4 > 1) {
          if ((i4 & 1) != 0) {
            i4--;
            i2 = bLen * i4;
            quartetOffset = i3 - i2;
            if (quartetOffset > bLen) {
              d_st.site = &r_emlrtRSI;
              merge(d_st, idx, x, ib + i2, bLen, quartetOffset - bLen, iwork,
                    xwork);
            }
          }
          bLen2 = bLen << 1;
          i4 >>= 1;
          d_st.site = &s_emlrtRSI;
          for (int32_T k{0}; k < i4; k++) {
            d_st.site = &t_emlrtRSI;
            b_merge(d_st, idx, x, ib + k * bLen2, bLen, bLen, iwork, xwork);
          }
          bLen = bLen2;
        }
        if (i3 > bLen) {
          d_st.site = &u_emlrtRSI;
          merge(d_st, idx, x, ib, bLen, i3 - bLen, iwork, xwork);
        }
      }
      ib = 8;
    }
    c_st.site = &k_emlrtRSI;
    merge_block(c_st, idx, x, 819 - nNaNs, ib, iwork, xwork);
  }
}

} // namespace internal
} // namespace coder

// End of code generation (sort.cpp)
