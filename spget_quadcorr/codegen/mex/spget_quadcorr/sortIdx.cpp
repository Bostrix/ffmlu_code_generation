//
// sortIdx.cpp
//
// Code generation for function 'sortIdx'
//

// Include files
#include "sortIdx.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "spget_quadcorr_data.h"
#include <algorithm>

// Variable Definitions
static emlrtRSInfo v_emlrtRSI{
    550,     // lineNo
    "merge", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRSInfo w_emlrtRSI{
    519,     // lineNo
    "merge", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

// Function Definitions
namespace coder {
namespace internal {
void b_merge(const emlrtStack &sp, int32_T idx[819], real_T x[819],
             int32_T offset, int32_T np, int32_T nq, int32_T iwork[819],
             real_T xwork[819])
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T iout;
  int32_T n_tmp;
  int32_T p;
  int32_T q;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  n_tmp = np + nq;
  st.site = &w_emlrtRSI;
  if (n_tmp > 2147483646) {
    b_st.site = &n_emlrtRSI;
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
        st.site = &v_emlrtRSI;
        if ((p + 1 <= np) && (np > 2147483646)) {
          b_st.site = &n_emlrtRSI;
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

void merge(const emlrtStack &sp, int32_T idx[819], real_T x[819],
           int32_T offset, int32_T np, int32_T nq, int32_T iwork[819],
           real_T xwork[819])
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
    st.site = &w_emlrtRSI;
    if (n_tmp > 2147483646) {
      b_st.site = &n_emlrtRSI;
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
          st.site = &v_emlrtRSI;
          if ((p + 1 <= np) && (np > 2147483646)) {
            b_st.site = &n_emlrtRSI;
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

void merge_block(const emlrtStack &sp, int32_T idx[819], real_T x[819],
                 int32_T n, int32_T preSortLevel, int32_T iwork[819],
                 real_T xwork[819])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T bLen;
  int32_T iout;
  int32_T offset1;
  int32_T q;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  iout = n >> preSortLevel;
  bLen = 1 << preSortLevel;
  while (iout > 1) {
    if ((iout & 1) != 0) {
      iout--;
      offset1 = bLen * iout;
      q = n - offset1;
      if (q > bLen) {
        st.site = &r_emlrtRSI;
        merge(st, idx, x, offset1, bLen, q - bLen, iwork, xwork);
      }
    }
    offset1 = bLen << 1;
    iout >>= 1;
    st.site = &s_emlrtRSI;
    for (q = 0; q < iout; q++) {
      st.site = &t_emlrtRSI;
      b_merge(st, idx, x, q * offset1, bLen, bLen, iwork, xwork);
    }
    bLen = offset1;
  }
  if (n > bLen) {
    st.site = &u_emlrtRSI;
    offset1 = n - bLen;
    if (offset1 != 0) {
      int32_T p;
      offset1 += bLen;
      b_st.site = &w_emlrtRSI;
      if (offset1 > 2147483646) {
        c_st.site = &n_emlrtRSI;
        check_forloop_overflow_error(c_st);
      }
      if (offset1 - 1 >= 0) {
        std::copy(&idx[0], &idx[offset1], &iwork[0]);
        std::copy(&x[0], &x[offset1], &xwork[0]);
      }
      p = 0;
      q = bLen;
      iout = -1;
      int32_T exitg1;
      do {
        exitg1 = 0;
        iout++;
        if (xwork[p] <= xwork[q]) {
          idx[iout] = iwork[p];
          x[iout] = xwork[p];
          if (p + 1 < bLen) {
            p++;
          } else {
            exitg1 = 1;
          }
        } else {
          idx[iout] = iwork[q];
          x[iout] = xwork[q];
          if (q + 1 < offset1) {
            q++;
          } else {
            offset1 = iout - p;
            b_st.site = &v_emlrtRSI;
            for (iout = p + 1; iout <= bLen; iout++) {
              q = offset1 + iout;
              idx[q] = iwork[iout - 1];
              x[q] = xwork[iout - 1];
            }
            exitg1 = 1;
          }
        }
      } while (exitg1 == 0);
    }
  }
}

} // namespace internal
} // namespace coder

// End of code generation (sortIdx.cpp)
