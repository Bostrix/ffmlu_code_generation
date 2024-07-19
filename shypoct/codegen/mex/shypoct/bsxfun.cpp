//
// bsxfun.cpp
//
// Code generation for function 'bsxfun'
//

// Include files
#include "bsxfun.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRTEInfo w_emlrtRTEI{
    60,                                                              // lineNo
    20,                                                              // colNo
    "bsxfun",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/bsxfun.m" // pName
};

// Function Definitions
namespace coder {
void b_bsxfun(const emlrtStack &sp, const real_T a[3],
              const array<real_T, 2U> &b, array<real_T, 2U> &c)
{
  c.set_size(&w_emlrtRTEI, &sp, b.size(0), 3);
  if (b.size(0) != 0) {
    int32_T bcoef;
    bcoef = (b.size(0) != 1);
    for (int32_T k{0}; k < 3; k++) {
      int32_T i;
      i = c.size(0) - 1;
      for (int32_T b_k{0}; b_k <= i; b_k++) {
        c[b_k + c.size(0) * k] = a[k] - b[bcoef * b_k + b.size(0) * k];
      }
    }
  }
}

void bsxfun(const emlrtStack &sp, const array<real_T, 2U> &a, const real_T b[3],
            array<boolean_T, 2U> &c)
{
  c.set_size(&w_emlrtRTEI, &sp, 3, a.size(1));
  if (a.size(1) != 0) {
    int32_T acoef;
    int32_T i;
    acoef = (a.size(1) != 1);
    i = a.size(1) - 1;
    for (int32_T k{0}; k <= i; k++) {
      int32_T varargin_2;
      varargin_2 = acoef * k;
      c[3 * k] = (a[3 * varargin_2] > b[0]);
      c[3 * k + 1] = (a[3 * varargin_2 + 1] > b[1]);
      c[3 * k + 2] = (a[3 * varargin_2 + 2] > b[2]);
    }
  }
}

} // namespace coder

// End of code generation (bsxfun.cpp)
