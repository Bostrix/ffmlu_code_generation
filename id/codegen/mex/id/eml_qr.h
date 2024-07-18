//
// eml_qr.h
//
// Code generation for function 'eml_qr'
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
void eml_qr(const emlrtStack &sp, const real_T A[25], real_T Q[25],
            real_T R[25], int32_T E[5]);

}

// End of code generation (eml_qr.h)
