//
// id.h
//
// Code generation for function 'id'
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
void id(const emlrtStack *sp, const real_T A[8510], real_T rank_or_tol,
        real_T Tmax, real_T rrqr_iter, real_T sk_data[], int32_T sk_size[2],
        real_T rd_data[], int32_T rd_size[2], real_T T_data[],
        int32_T T_size[2], real_T *niter);

// End of code generation (id.h)
