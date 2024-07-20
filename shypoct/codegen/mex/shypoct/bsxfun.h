//
// bsxfun.h
//
// Code generation for function 'bsxfun'
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
void b_bsxfun(const emlrtStack &sp, const array<real_T, 2U> &a,
              const real_T b_data[], array<boolean_T, 2U> &c);

void bsxfun(const emlrtStack &sp, const real_T a[3], const array<real_T, 2U> &b,
            array<real_T, 2U> &c);

} // namespace coder

// End of code generation (bsxfun.h)
