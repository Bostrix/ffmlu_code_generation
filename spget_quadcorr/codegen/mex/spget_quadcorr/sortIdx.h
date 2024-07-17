//
// sortIdx.h
//
// Code generation for function 'sortIdx'
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
void b_merge(const emlrtStack &sp, int32_T idx[819], real_T x[819],
             int32_T offset, int32_T np, int32_T nq, int32_T iwork[819],
             real_T xwork[819]);

void merge(const emlrtStack &sp, int32_T idx[819], real_T x[819],
           int32_T offset, int32_T np, int32_T nq, int32_T iwork[819],
           real_T xwork[819]);

void merge_block(const emlrtStack &sp, int32_T idx[819], real_T x[819],
                 int32_T n, int32_T preSortLevel, int32_T iwork[819],
                 real_T xwork[819]);

} // namespace internal
} // namespace coder

// End of code generation (sortIdx.h)
