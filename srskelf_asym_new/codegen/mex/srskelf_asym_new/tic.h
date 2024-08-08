//
// tic.h
//
// Code generation for function 'tic'
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
void tic(const emlrtStack &sp, emlrtTimespec &savedTime);

emlrtTimespec tic(const emlrtStack &sp);

} // namespace coder

// End of code generation (tic.h)
