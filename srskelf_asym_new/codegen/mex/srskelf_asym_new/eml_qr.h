//
// eml_qr.h
//
// Code generation for function 'eml_qr'
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
void eml_qr(const emlrtStack &sp, const array<real_T, 2U> &A,
            array<real_T, 2U> &Q, array<real_T, 2U> &R, array<int32_T, 2U> &E);

}

// End of code generation (eml_qr.h)
