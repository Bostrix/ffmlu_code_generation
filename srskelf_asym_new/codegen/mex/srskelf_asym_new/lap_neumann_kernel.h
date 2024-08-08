//
// lap_neumann_kernel.h
//
// Code generation for function 'lap_neumann_kernel'
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
void lap_neumann_kernel(const emlrtStack &sp, const coder::array<real_T, 2U> &x,
                        const coder::array<real_T, 2U> &y,
                        const coder::array<real_T, 2U> &nuuse,
                        coder::array<real_T, 2U> &K);

// End of code generation (lap_neumann_kernel.h)
