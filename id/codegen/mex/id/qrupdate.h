//
// qrupdate.h
//
// Code generation for function 'qrupdate'
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
void qrupdate(const emlrtStack &sp, real_T q_data[], const int32_T q_size[2],
              real_T r_data[], const int32_T r_size[2], const real_T u_data[],
              int32_T u_size, const real_T v_data[], int32_T v_size);

}

// End of code generation (qrupdate.h)
