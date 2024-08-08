//
// toc.h
//
// Code generation for function 'toc'
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
void b_toc(const emlrtStack &sp, real_T tstart_tv_sec, real_T tstart_tv_nsec);

real_T toc(const emlrtStack &sp, const emlrtTimespec &savedTime);

real_T toc(const emlrtStack &sp, real_T tstart_tv_sec, real_T tstart_tv_nsec);

} // namespace coder

// End of code generation (toc.h)
