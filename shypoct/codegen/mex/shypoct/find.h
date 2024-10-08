//
// find.h
//
// Code generation for function 'find'
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
void eml_find(const emlrtStack &sp, const array<boolean_T, 2U> &x,
              array<int32_T, 2U> &i);

}

// End of code generation (find.h)
