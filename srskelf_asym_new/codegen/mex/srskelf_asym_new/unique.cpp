//
// unique.cpp
//
// Code generation for function 'unique'
//

// Include files
#include "unique.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <cstring>

// Variable Definitions
static emlrtRTEInfo w_emlrtRTEI{
    241,                                                           // lineNo
    1,                                                             // colNo
    "unique_vector",                                               // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/unique.m" // pName
};

// Function Definitions
namespace coder {
void unique_vector(const emlrtStack &sp, const real_T a_data[],
                   const int32_T a_size[2], real_T b_data[], int32_T b_size[2])
{
  real_T x;
  int32_T idx_data[8000];
  int32_T iwork_data[8000];
  int32_T i;
  int32_T j;
  int32_T k;
  int32_T n;
  int32_T nNaN;
  int32_T na_tmp;
  int32_T qEnd;
  boolean_T exitg1;
  na_tmp = a_size[1];
  n = a_size[1] + 1;
  if (na_tmp - 1 >= 0) {
    std::memset(&idx_data[0], 0,
                static_cast<uint32_T>(na_tmp) * sizeof(int32_T));
  }
  if (a_size[1] != 0) {
    nNaN = a_size[1] - 1;
    for (k = 1; k <= nNaN; k += 2) {
      x = a_data[k];
      if ((a_data[k - 1] <= x) || muDoubleScalarIsNaN(x)) {
        idx_data[k - 1] = k;
        idx_data[k] = k + 1;
      } else {
        idx_data[k - 1] = k + 1;
        idx_data[k] = k;
      }
    }
    if ((a_size[1] & 1) != 0) {
      idx_data[a_size[1] - 1] = a_size[1];
    }
    i = 2;
    while (i < n - 1) {
      int32_T i2;
      i2 = i << 1;
      j = 1;
      for (int32_T pEnd{i + 1}; pEnd < n; pEnd = qEnd + i) {
        int32_T kEnd;
        int32_T p;
        int32_T q;
        p = j;
        q = pEnd - 1;
        qEnd = j + i2;
        if (qEnd > n) {
          qEnd = n;
        }
        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          x = a_data[idx_data[q] - 1];
          nNaN = idx_data[p - 1];
          if ((a_data[nNaN - 1] <= x) || muDoubleScalarIsNaN(x)) {
            iwork_data[k] = nNaN;
            p++;
            if (p == pEnd) {
              while (q + 1 < qEnd) {
                k++;
                iwork_data[k] = idx_data[q];
                q++;
              }
            }
          } else {
            iwork_data[k] = idx_data[q];
            q++;
            if (q + 1 == qEnd) {
              while (p < pEnd) {
                k++;
                iwork_data[k] = idx_data[p - 1];
                p++;
              }
            }
          }
          k++;
        }
        for (k = 0; k < kEnd; k++) {
          idx_data[(j + k) - 1] = iwork_data[k];
        }
        j = qEnd;
      }
      i = i2;
    }
  }
  b_size[0] = 1;
  b_size[1] = a_size[1];
  for (k = 0; k < na_tmp; k++) {
    b_data[k] = a_data[idx_data[k] - 1];
  }
  k = 0;
  while ((k + 1 <= na_tmp) && muDoubleScalarIsInf(b_data[k]) &&
         (b_data[k] < 0.0)) {
    k++;
  }
  n = k;
  k = a_size[1];
  while ((k >= 1) && muDoubleScalarIsNaN(b_data[k - 1])) {
    k--;
  }
  nNaN = a_size[1] - k;
  exitg1 = false;
  while ((!exitg1) && (k >= 1)) {
    x = b_data[k - 1];
    if (muDoubleScalarIsInf(x) && (x > 0.0)) {
      k--;
    } else {
      exitg1 = true;
    }
  }
  na_tmp = (a_size[1] - k) - nNaN;
  i = 0;
  if (n > 0) {
    i = 1;
  }
  while (n + 1 <= k) {
    x = b_data[n];
    do {
      n++;
    } while (!((n + 1 > k) || (b_data[n] != x)));
    i++;
    b_data[i - 1] = x;
  }
  if (na_tmp > 0) {
    i++;
    b_data[i - 1] = b_data[k];
  }
  n = k + na_tmp;
  for (j = 0; j < nNaN; j++) {
    b_data[i + j] = b_data[n + j];
  }
  if (nNaN - 1 >= 0) {
    i += nNaN;
  }
  if (i > a_size[1]) {
    emlrtErrorWithMessageIdR2018a(&sp, &w_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (i < 1) {
    b_size[1] = 0;
  } else {
    b_size[1] = i;
  }
}

} // namespace coder

// End of code generation (unique.cpp)
