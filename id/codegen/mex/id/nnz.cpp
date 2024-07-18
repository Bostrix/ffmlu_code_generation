//
// nnz.cpp
//
// Code generation for function 'nnz'
//

// Include files
#include "nnz.h"
#include "rt_nonfinite.h"

// Function Definitions
namespace coder {
int32_T intnnz(const boolean_T s[5])
{
  int32_T n;
  n = 0;
  for (int32_T k{0}; k < 5; k++) {
    if (s[k]) {
      n++;
    }
  }
  return n;
}

} // namespace coder

// End of code generation (nnz.cpp)
