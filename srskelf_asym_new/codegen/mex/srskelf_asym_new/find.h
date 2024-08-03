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

// Type Declarations
namespace coder {
class b_sparse;

}

// Function Declarations
namespace coder {
void b_eml_find(const emlrtStack &sp, const b_sparse &x, array<int32_T, 1U> &i,
                array<int32_T, 1U> &j, array<real_T, 1U> &v);

void c_eml_find(const emlrtStack &sp, const array<boolean_T, 1U> &x,
                array<int32_T, 1U> &i);

void eml_find(const emlrtStack &sp, const array<boolean_T, 2U> &x,
              array<int32_T, 2U> &i);

} // namespace coder

// End of code generation (find.h)
