//
// shypoct_types.h
//
// Code generation for function 'shypoct'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"

// Type Definitions
struct struct1_T {
  real_T ctr[3];
  coder::array<real_T, 2U> xi;
  real_T prnt;
  coder::array<real_T, 2U> chld;
  coder::array<real_T, 2U> nbor;
  coder::array<real_T, 2U> ilist;
  coder::array<real_T, 2U> snbor;
};

struct struct0_T {
  coder::array<struct1_T, 1U> nodes;
  coder::array<real_T, 2U> lvp;
  real_T nlvl;
  real_T lrt;
};

struct struct_T {
  real_T ctr[3];
  real_T prnt;
};

struct b_shypoct {
  struct1_T rv1[160000];
  struct_T rv[160000];
};

struct shypoctStackData {
  b_shypoct f0;
};

// End of code generation (shypoct_types.h)
