//
// srskelf_asym_new_types1.h
//
// Code generation for function 'srskelf_asym_new_types1'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "srskelf_asym_new_types11.h"
#include "srskelf_asym_new_types2.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Definitions
struct d_struct_T {
  struct0_T opts;
};

struct struct1_T {
  real_T N;
  real_T nlvl;
  coder::array<int32_T, 2U> lvp;
  coder::array<empty, 1U> factors;
  char_T symm;
};

// End of code generation (srskelf_asym_new_types1.h)
