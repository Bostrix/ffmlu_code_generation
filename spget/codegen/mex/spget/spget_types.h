//
// spget_types.h
//
// Code generation for function 'spget'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_bounded_array.h"
#include "emlrt.h"

// Type Definitions
struct struct4_T {
  real_T verb;
  char_T symm;
  real_T zk;
  boolean_T lap_proxy;
};

struct struct3_T {
  real_T ctr[3];
  coder::bounded_array<real_T, 254U, 2U> xi;
  coder::bounded_array<real_T, 1U, 2U> prnt;
  coder::bounded_array<real_T, 8U, 2U> chld;
  coder::bounded_array<real_T, 21U, 2U> nbor;
  coder::bounded_array<real_T, 39U, 2U> ilist;
  coder::bounded_array<real_T, 38U, 2U> snbor;
};

struct struct2_T {
  real_T nlvl;
  real_T lvp[6];
  real_T lrt;
  struct3_T nodes[1032];
};

struct struct0_T {
  real_T N;
  real_T nlvl;
  real_T lvp[6];
  char_T symm;
};

struct spget_api {
  struct2_T t;
};

struct spgetStackData {
  spget_api f0;
};

// End of code generation (spget_types.h)
