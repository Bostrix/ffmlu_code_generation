//
// flip.cpp
//
// Code generation for function 'flip'
//

// Include files
#include "flip.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Definitions
namespace coder {
void flip(array<real_T, 2U> &x)
{
  if (x.size(1) > 1) {
    int32_T n;
    int32_T nd2;
    n = x.size(1) - 1;
    nd2 = x.size(1) >> 1;
    for (int32_T k{0}; k < nd2; k++) {
      real_T tmp;
      int32_T i;
      tmp = x[k];
      i = n - k;
      x[k] = x[i];
      x[i] = tmp;
    }
  }
}

} // namespace coder

// End of code generation (flip.cpp)
