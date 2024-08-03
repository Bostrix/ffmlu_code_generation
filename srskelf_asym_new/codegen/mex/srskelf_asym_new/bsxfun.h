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
              const array<real_T, 2U> &b, array<real_T, 2U> &c);

void bsxfun(const emlrtStack &sp, const array<real_T, 2U> &a,
            const array<real_T, 2U> &b, array<real_T, 2U> &c);

void bsxfun(const emlrtStack &sp, const array<real_T, 1U> &a,
            const array<real_T, 2U> &b, array<real_T, 2U> &c);

void bsxfun(const emlrtStack &sp, const real_T a[3], const array<real_T, 2U> &b,
            array<real_T, 2U> &c);

void c_bsxfun(const emlrtStack &sp, const array<real_T, 2U> &a,
              const array<real_T, 2U> &b, array<real_T, 2U> &c);

void d_bsxfun(const array<real_T, 2U> &a, const real_T b_data[],
              boolean_T c_data[], int32_T c_size[2]);

} // namespace coder

// End of code generation (bsxfun.h)
