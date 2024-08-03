//
// unique.h
//
// Code generation for function 'unique'
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
void unique_vector(const emlrtStack &sp, const real_T a_data[],
                   const int32_T a_size[2], real_T b_data[], int32_T b_size[2]);

}

// End of code generation (unique.h)
