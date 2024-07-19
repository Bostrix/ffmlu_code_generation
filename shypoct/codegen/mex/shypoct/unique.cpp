//
// unique.cpp
//
// Code generation for function 'unique'
//

// Include files
#include "unique.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo n_emlrtRSI{
    164,                                                           // lineNo
    "unique_vector",                                               // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/unique.m" // pathName
};

static emlrtRSInfo o_emlrtRSI{
    166,                                                           // lineNo
    "unique_vector",                                               // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/unique.m" // pathName
};

static emlrtRSInfo p_emlrtRSI{
    183,                                                           // lineNo
    "unique_vector",                                               // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/unique.m" // pathName
};

static emlrtRSInfo q_emlrtRSI{
    210,                                                           // lineNo
    "unique_vector",                                               // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/unique.m" // pathName
};

static emlrtRSInfo r_emlrtRSI{
    223,                                                           // lineNo
    "unique_vector",                                               // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/unique.m" // pathName
};

static emlrtRSInfo s_emlrtRSI{
    234,                                                           // lineNo
    "unique_vector",                                               // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/unique.m" // pathName
};

static emlrtRSInfo t_emlrtRSI{
    248,                                                           // lineNo
    "unique_vector",                                               // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/unique.m" // pathName
};

static emlrtRSInfo u_emlrtRSI{
    145,       // lineNo
    "sortIdx", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/sortIdx.m" // pathName
};

static emlrtRTEInfo f_emlrtRTEI{
    241,                                                           // lineNo
    1,                                                             // colNo
    "unique_vector",                                               // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/unique.m" // pName
};

static emlrtRTEInfo ob_emlrtRTEI{
    164,                                                           // lineNo
    1,                                                             // colNo
    "unique",                                                      // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/unique.m" // pName
};

static emlrtRTEInfo pb_emlrtRTEI{
    52,          // lineNo
    9,           // colNo
    "mergesort", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/mergesort.m" // pName
};

static emlrtRTEInfo qb_emlrtRTEI{
    165,                                                           // lineNo
    20,                                                            // colNo
    "unique",                                                      // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/unique.m" // pName
};

static emlrtRTEInfo rb_emlrtRTEI{
    242,                                                           // lineNo
    1,                                                             // colNo
    "unique",                                                      // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/unique.m" // pName
};

// Function Definitions
namespace coder {
void unique_vector(const emlrtStack &sp, const array<real_T, 2U> &a,
                   array<real_T, 2U> &b)
{
  array<int32_T, 2U> idx;
  array<int32_T, 1U> iwork;
  emlrtStack b_st;
  emlrtStack st;
  real_T x;
  int32_T b_i;
  int32_T i;
  int32_T j;
  int32_T k;
  int32_T n;
  int32_T na_tmp;
  int32_T nb;
  int32_T qEnd;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  na_tmp = a.size(1);
  st.site = &n_emlrtRSI;
  n = a.size(1) + 1;
  idx.set_size(&ob_emlrtRTEI, &st, 1, a.size(1));
  for (i = 0; i < na_tmp; i++) {
    idx[i] = 0;
  }
  if (a.size(1) != 0) {
    b_st.site = &u_emlrtRSI;
    iwork.set_size(&pb_emlrtRTEI, &b_st, a.size(1));
    i = a.size(1) - 1;
    for (k = 1; k <= i; k += 2) {
      x = a[k];
      if ((a[k - 1] <= x) || muDoubleScalarIsNaN(x)) {
        idx[k - 1] = k;
        idx[k] = k + 1;
      } else {
        idx[k - 1] = k + 1;
        idx[k] = k;
      }
    }
    if ((a.size(1) & 1) != 0) {
      idx[a.size(1) - 1] = a.size(1);
    }
    b_i = 2;
    while (b_i < n - 1) {
      nb = b_i << 1;
      j = 1;
      for (int32_T pEnd{b_i + 1}; pEnd < n; pEnd = qEnd + b_i) {
        int32_T kEnd;
        int32_T p;
        int32_T q;
        p = j;
        q = pEnd - 1;
        qEnd = j + nb;
        if (qEnd > n) {
          qEnd = n;
        }
        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          x = a[idx[q] - 1];
          i = idx[p - 1];
          if ((a[i - 1] <= x) || muDoubleScalarIsNaN(x)) {
            iwork[k] = i;
            p++;
            if (p == pEnd) {
              while (q + 1 < qEnd) {
                k++;
                iwork[k] = idx[q];
                q++;
              }
            }
          } else {
            iwork[k] = idx[q];
            q++;
            if (q + 1 == qEnd) {
              while (p < pEnd) {
                k++;
                iwork[k] = idx[p - 1];
                p++;
              }
            }
          }
          k++;
        }
        for (k = 0; k < kEnd; k++) {
          idx[(j + k) - 1] = iwork[k];
        }
        j = qEnd;
      }
      b_i = nb;
    }
  }
  b.set_size(&qb_emlrtRTEI, &sp, 1, a.size(1));
  st.site = &o_emlrtRSI;
  for (k = 0; k < na_tmp; k++) {
    b[k] = a[idx[k] - 1];
  }
  k = 0;
  while ((k + 1 <= na_tmp) && muDoubleScalarIsInf(b[k]) && (b[k] < 0.0)) {
    k++;
  }
  n = k;
  k = a.size(1);
  while ((k >= 1) && muDoubleScalarIsNaN(b[k - 1])) {
    k--;
  }
  b_i = a.size(1) - k;
  exitg1 = false;
  while ((!exitg1) && (k >= 1)) {
    x = b[k - 1];
    if (muDoubleScalarIsInf(x) && (x > 0.0)) {
      k--;
    } else {
      exitg1 = true;
    }
  }
  na_tmp = (a.size(1) - k) - b_i;
  nb = 0;
  if (n > 0) {
    nb = 1;
    st.site = &p_emlrtRSI;
  }
  while (n + 1 <= k) {
    x = b[n];
    do {
      n++;
    } while (!((n + 1 > k) || (b[n] != x)));
    nb++;
    b[nb - 1] = x;
    st.site = &q_emlrtRSI;
  }
  if (na_tmp > 0) {
    nb++;
    b[nb - 1] = b[k];
    st.site = &r_emlrtRSI;
  }
  n = k + na_tmp;
  st.site = &s_emlrtRSI;
  for (j = 0; j < b_i; j++) {
    b[nb + j] = b[n + j];
  }
  if (b_i - 1 >= 0) {
    nb += b_i;
  }
  if (nb > a.size(1)) {
    emlrtErrorWithMessageIdR2018a(&sp, &f_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (nb < 1) {
    nb = 0;
  }
  b.set_size(&rb_emlrtRTEI, &sp, b.size(0), nb);
  st.site = &t_emlrtRSI;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (unique.cpp)
