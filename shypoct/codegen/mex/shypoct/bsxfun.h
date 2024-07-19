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
void bsxfun(const emlrtStack &sp, const array<real_T, 2U> &a,
            const real_T b_data[], array<boolean_T, 2U> &c);

}

// End of code generation (bsxfun.h)
