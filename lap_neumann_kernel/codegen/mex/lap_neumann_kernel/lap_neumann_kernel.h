//
// lap_neumann_kernel.h
//
// Code generation for function 'lap_neumann_kernel'
//

#pragma once

// Include files
#include "lap_neumann_kernel_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void lap_neumann_kernel(lap_neumann_kernelStackData *SD, const emlrtStack *sp,
                        const real_T x[6216], const real_T y[330],
                        const real_T nuuse[6216], real_T K[227920]);

// End of code generation (lap_neumann_kernel.h)
