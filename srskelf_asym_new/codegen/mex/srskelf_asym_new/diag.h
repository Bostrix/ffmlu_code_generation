//
// diag.h
//
// Code generation for function 'diag'
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
void diag(const emlrtStack &sp, const array<real_T, 2U> &v,
          array<real_T, 1U> &d);

}

// End of code generation (diag.h)
