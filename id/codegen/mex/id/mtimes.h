//
// mtimes.h
//
// Code generation for function 'mtimes'
//

#pragma once

// Include files
#include "rtwtypes.h"
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
void mtimes(const real_T A_data[], int32_T A_size, const real_T B_data[],
            const int32_T B_size[2], real_T C_data[], int32_T C_size[2]);

int32_T mtimes(const real_T A_data[], const int32_T A_size[2],
               const real_T B_data[], int32_T B_size, real_T C_data[]);

void mtimes(const real_T A[4], const real_T B_data[], const int32_T B_size[2],
            real_T C_data[], int32_T C_size[2]);

} // namespace blas
} // namespace internal
} // namespace coder

// End of code generation (mtimes.h)
