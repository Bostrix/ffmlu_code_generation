//
// qr.h
//
// Code generation for function 'qr'
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
void qr(const emlrtStack &sp, const array<real_T, 2U> &A, array<real_T, 2U> &Q,
        array<real_T, 2U> &R);

}

// End of code generation (qr.h)
