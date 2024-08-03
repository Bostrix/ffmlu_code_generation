//
// qrupdate.h
//
// Code generation for function 'qrupdate'
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
void qrupdate(const emlrtStack &sp, array<real_T, 2U> &q, array<real_T, 2U> &r,
              const array<real_T, 1U> &u, const array<real_T, 1U> &v);

}

// End of code generation (qrupdate.h)
