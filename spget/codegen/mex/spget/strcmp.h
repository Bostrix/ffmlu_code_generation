//
// strcmp.h
//
// Code generation for function 'strcmp'
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
namespace internal {
boolean_T b_strcmp(const emlrtStack &sp, const char_T a[3]);

boolean_T b_strcmp(const emlrtStack &sp, char_T a);

boolean_T c_strcmp(const emlrtStack &sp, const char_T a[3]);

boolean_T c_strcmp(const emlrtStack &sp, char_T a);

boolean_T d_strcmp(const emlrtStack &sp, const char_T a[3]);

} // namespace internal
} // namespace coder

// End of code generation (strcmp.h)
