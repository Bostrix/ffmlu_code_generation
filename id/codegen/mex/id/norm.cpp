//
// norm.cpp
//
// Code generation for function 'norm'
//

// Include files
#include "norm.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "mwmathutil.h"
#include <cstddef>

// Function Definitions
namespace coder {
real_T b_norm(const real_T x_data[], int32_T x_size)
{
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  real_T y;
  if (x_size == 0) {
    y = 0.0;
  } else {
    n_t = (ptrdiff_t)x_size;
    incx_t = (ptrdiff_t)1;
    y = dnrm2(&n_t, (real_T *)&x_data[0], &incx_t);
  }
  return y;
}

real_T b_norm(const real_T x_data[], const int32_T x_size[2])
{
  real_T y;
  if ((x_size[0] == 1) || (x_size[1] == 1)) {
    int32_T i;
    y = 0.0;
    i = x_size[0] * x_size[1];
    for (int32_T j{0}; j < i; j++) {
      y += muDoubleScalarAbs(x_data[j]);
    }
  } else {
    int32_T j;
    boolean_T exitg1;
    y = 0.0;
    j = 0;
    exitg1 = false;
    while ((!exitg1) && (j <= x_size[1] - 1)) {
      real_T s;
      int32_T i;
      s = 0.0;
      i = x_size[0];
      for (int32_T b_i{0}; b_i < i; b_i++) {
        s += muDoubleScalarAbs(x_data[b_i + x_size[0] * j]);
      }
      if (muDoubleScalarIsNaN(s)) {
        y = rtNaN;
        exitg1 = true;
      } else {
        if (s > y) {
          y = s;
        }
        j++;
      }
    }
  }
  return y;
}

} // namespace coder

// End of code generation (norm.cpp)
