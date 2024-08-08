//
// lap_neumann_kernel_types.h
//
// Code generation for function 'lap_neumann_kernel'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"

// Type Definitions
struct b_lap_neumann_kernel {
  real_T dx[227920];
  real_T dy[227920];
  real_T dz[227920];
  real_T dr[227920];
  real_T y[227920];
  real_T b_y[227920];
};

struct lap_neumann_kernelStackData {
  b_lap_neumann_kernel f0;
};

// End of code generation (lap_neumann_kernel_types.h)
