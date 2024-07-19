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
static emlrtRTEInfo nb_emlrtRTEI{
    60,                                                              // lineNo
    20,                                                              // colNo
    "bsxfun",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/bsxfun.m" // pName
};

// Function Definitions
namespace coder {
void bsxfun(const emlrtStack &sp, const array<real_T, 2U> &a,
            const real_T b_data[], array<boolean_T, 2U> &c)
{
  c.set_size(&nb_emlrtRTEI, &sp, 3, a.size(1));
  if (a.size(1) != 0) {
    int32_T acoef;
    int32_T i;
    acoef = (a.size(1) != 1);
    i = a.size(1) - 1;
    for (int32_T k{0}; k <= i; k++) {
      int32_T varargin_2;
      varargin_2 = acoef * k;
      c[3 * k] = (a[3 * varargin_2] > b_data[0]);
      c[3 * k + 1] = (a[3 * varargin_2 + 1] > b_data[1]);
      c[3 * k + 2] = (a[3 * varargin_2 + 2] > b_data[2]);
    }
  }
}

} // namespace coder

// End of code generation (bsxfun.cpp)
