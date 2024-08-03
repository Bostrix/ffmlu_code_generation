//
// srskelf_asym_new_types1.h
//
// Code generation for function 'srskelf_asym_new_types1'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "sparse.h"
#include "srskelf_asym_new_types2.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Definitions
struct struct1_T {
  real_T N;
  real_T nlvl;
  coder::array<int32_T, 2U> lvp;
  coder::array<struct2_T, 1U> factors;
  char_T symm;
};

struct b_struct_T {
  coder::array<struct_T, 1U> nodes;
  coder::array<real_T, 2U> lvp;
  real_T nlvl;
  real_T lrt;
};

struct struct0_T {
  real_T verb;
  char_T symm;
  real_T zk;
  boolean_T lap_proxy;
  real_T area[8000];
  real_T nu[24000];
  real_T P[8000];
  real_T contrast[8000];
  real_T wuse;
  coder::sparse qcorr;
  real_T lvlmax;
};

struct d_struct_T {
  struct0_T opts;
};

// End of code generation (srskelf_asym_new_types1.h)
