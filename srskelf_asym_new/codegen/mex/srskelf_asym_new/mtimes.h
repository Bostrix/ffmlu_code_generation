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
void b_mtimes(const emlrtStack &sp, const array<real_T, 2U> &A,
              const array<real_T, 2U> &B, array<real_T, 2U> &C);

void mtimes(const emlrtStack &sp, const real_T A[4], const array<real_T, 2U> &B,
            array<real_T, 2U> &C);

void mtimes(const emlrtStack &sp, const array<real_T, 2U> &A,
            const array<real_T, 1U> &B, array<real_T, 1U> &C);

void mtimes(const emlrtStack &sp, const array<real_T, 1U> &A,
            const array<real_T, 2U> &B, array<real_T, 2U> &C);

void mtimes(const emlrtStack &sp, const array<real_T, 2U> &A,
            const array<real_T, 2U> &B, array<real_T, 2U> &C);

} // namespace blas
} // namespace internal
} // namespace coder

// End of code generation (mtimes.h)
