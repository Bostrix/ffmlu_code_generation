//
// Afun_lap_te_types.h
//
// Code generation for function 'Afun_lap_te'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"

// Type Definitions
struct b_Afun_lap_te {
  real_T P[8000];
  real_T b_I[4095];
  real_T J[4095];
  real_T c[4095];
  real_T dx[4095];
  real_T dy[4095];
};

struct Afun_lap_teStackData {
  b_Afun_lap_te f0;
};

// End of code generation (Afun_lap_te_types.h)
