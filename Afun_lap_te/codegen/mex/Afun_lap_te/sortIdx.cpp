//
// sortIdx.cpp
//
// Code generation for function 'sortIdx'
//

// Include files
#include "sortIdx.h"
#include "Afun_lap_te_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include <algorithm>
#include <cstring>

// Variable Definitions
static emlrtRSInfo
    bb_emlrtRSI{
        550,     // lineNo
        "merge", // fcnName
        "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/"
        "sortIdx.m" // pathName
    };

static emlrtRSInfo
    cb_emlrtRSI{
        519,     // lineNo
        "merge", // fcnName
        "/Applications/MATLAB_R2024a.app/toolbox/eml/eml/+coder/+internal/"
        "sortIdx.m" // pathName
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
  st.site = &cb_emlrtRSI;
  if (n_tmp > 2147483646) {
    b_st.site = &s_emlrtRSI;
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
        st.site = &bb_emlrtRSI;
        if ((p + 1 <= np) && (np > 2147483646)) {
          b_st.site = &s_emlrtRSI;
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
    st.site = &cb_emlrtRSI;
    if (n_tmp > 2147483646) {
      b_st.site = &s_emlrtRSI;
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
          st.site = &bb_emlrtRSI;
          if ((p + 1 <= np) && (np > 2147483646)) {
            b_st.site = &s_emlrtRSI;
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
                 real_T xwork[819], int32_T iwork[819])
{
  emlrtStack st;
  int32_T bLen;
  int32_T iout;
  int32_T p;
  int32_T q;
  st.prev = &sp;
  st.tls = sp.tls;
  std::memset(&iwork[0], 0, 819U * sizeof(int32_T));
  iout = 12;
  bLen = 4;
  while (iout > 1) {
    if ((iout & 1) != 0) {
      iout--;
      q = bLen * iout;
      if (51 - q > bLen) {
        st.site = &w_emlrtRSI;
        merge(st, idx, x, q + 768, bLen, 51 - (q + bLen), iwork, xwork);
      }
    }
    q = bLen << 1;
    iout >>= 1;
    for (p = 0; p < iout; p++) {
      st.site = &y_emlrtRSI;
      b_merge(st, idx, x, p * q + 768, bLen, bLen, iwork, xwork);
    }
    bLen = q;
  }
  if (bLen < 51) {
    std::copy(&idx[768], &idx[819], &iwork[0]);
    std::copy(&x[768], &x[819], &xwork[0]);
    p = 0;
    q = bLen;
    iout = 767;
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
        if (q + 1 < 51) {
          q++;
        } else {
          q = iout - p;
          for (int32_T j{p + 1}; j <= bLen; j++) {
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

} // namespace internal
} // namespace coder

// End of code generation (sortIdx.cpp)
