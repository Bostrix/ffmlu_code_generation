//
// srskelf_sv_nn_types.h
//
// Code generation for function 'srskelf_sv_nn'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "emlrt.h"

// Type Definitions
struct struct1_T {
  coder::bounded_array<real_T, 23U, 2U> sk;
  coder::bounded_array<real_T, 195U, 2U> rd;
  coder::bounded_array<real_T, 887U, 2U> nbr;
  coder::bounded_array<real_T, 4485U, 2U> T;
  coder::bounded_array<real_T, 4485U, 2U> E;
  coder::bounded_array<real_T, 4485U, 2U> F;
  coder::array<real_T, 2U> L;
  coder::array<real_T, 2U> U;
  coder::array<real_T, 2U> C;
  coder::array<real_T, 2U> D;
};

struct struct0_T {
  real_T N;
  real_T nlvl;
  real_T lvp[6];
  struct1_T factors[149];
  char_T symm;
};

struct srskelf_sv_nn_api {
  struct0_T F;
};

struct srskelf_sv_nnStackData {
  srskelf_sv_nn_api f0;
};

// End of code generation (srskelf_sv_nn_types.h)
