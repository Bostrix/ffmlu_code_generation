//
// eml_ipiv2perm.h
//
// Code generation for function 'eml_ipiv2perm'
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
void eml_ipiv2perm(const emlrtStack &sp, const array<int32_T, 2U> &ipiv,
                   int32_T m, array<int32_T, 2U> &perm);

}

// End of code generation (eml_ipiv2perm.h)
