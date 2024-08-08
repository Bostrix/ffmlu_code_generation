//
// lu.h
//
// Code generation for function 'lu'
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
void lu(const emlrtStack &sp, const array<real_T, 2U> &A, array<real_T, 2U> &L,
        array<real_T, 2U> &U);

}

// End of code generation (lu.h)
