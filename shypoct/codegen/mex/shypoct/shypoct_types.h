//
// shypoct_types.h
//
// Code generation for function 'shypoct'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "emlrt.h"

// Type Definitions
struct struct_T {
  real_T ctr[3];
  real_T xi[80000];
  real_T prnt;
  real_T chld[1000];
  real_T nbor[1000];
  real_T ilist[1000];
  real_T snbor[1000];
};

struct struct1_T {
  real_T ctr[3];
  real_T xi[80000];
  real_T prnt;
  coder::bounded_array<real_T, 1000U, 2U> chld;
  coder::bounded_array<real_T, 1000U, 2U> nbor;
  coder::bounded_array<real_T, 1000U, 2U> ilist;
  coder::bounded_array<real_T, 1000U, 2U> snbor;
};

struct struct0_T {
  coder::array<struct1_T, 2U> nodes;
  real_T nlvl;
  coder::bounded_array<real_T, 20U, 2U> lvp;
  real_T lrt;
};

struct b_shypoct {
  struct1_T rv[10000];
  struct_T empty_node[10000];
  struct_T b_empty_node;
  real_T t2_xi[80000];
  real_T dv[80000];
};

struct shypoctStackData {
  b_shypoct f0;
};

// End of code generation (shypoct_types.h)
