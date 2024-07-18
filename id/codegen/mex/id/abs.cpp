//
// abs.cpp
//
// Code generation for function 'abs'
//

// Include files
#include "abs.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

// Function Definitions
namespace coder {
int32_T b_abs(const real_T x_data[], int32_T x_size, real_T y_data[])
{
  int32_T y_size;
  y_size = x_size;
  for (int32_T k{0}; k < x_size; k++) {
    y_data[k] = muDoubleScalarAbs(x_data[k]);
  }
  return y_size;
}

void b_abs(const real_T x_data[], const int32_T x_size[2], real_T y_data[],
           int32_T y_size[2])
{
  int32_T i;
  i = x_size[1];
  y_size[0] = 1;
  y_size[1] = x_size[1];
  for (int32_T k{0}; k < i; k++) {
    y_data[k] = muDoubleScalarAbs(x_data[k]);
  }
}

} // namespace coder

// End of code generation (abs.cpp)
