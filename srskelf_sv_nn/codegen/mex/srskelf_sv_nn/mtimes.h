//
// mtimes.h
//
// Code generation for function 'mtimes'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
namespace coder {
namespace internal {
namespace blas {
int32_T mtimes(const array<real_T, 2U> &A, const real_T B_data[],
               int32_T B_size, real_T C_data[]);

}
} // namespace internal
} // namespace coder

// End of code generation (mtimes.h)
