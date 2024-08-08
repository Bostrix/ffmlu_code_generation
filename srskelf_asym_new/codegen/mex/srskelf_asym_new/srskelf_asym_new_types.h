//
// srskelf_asym_new_types.h
//
// Code generation for function 'srskelf_asym_new'
//

#pragma once

// Include files
#include "anonymous_function.h"
#include "ref.h"
#include "rtwtypes.h"
#include "srskelf_asym_new_types11.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "emlrt.h"

// Type Definitions
struct c_struct_T {
  real_T ctr[3];
  coder::bounded_array<real_T, 8000U, 2U> xi;
  real_T prnt;
  coder::array<real_T, 2U> chld;
  coder::array<real_T, 2U> nbor;
  coder::array<real_T, 2U> ilist;
  coder::array<real_T, 2U> snbor;
};

struct shypoct {
  c_struct_T rv[16000];
  real_T idx_data[8000];
};

struct b_srskelf_asym_new {
  coder::captured_var opts;
  coder::anonymous_function pxyfun;
};

struct srskelf_asym_new_api {
  struct0_T opts;
};

struct srskelf_asym_newStackData {
  shypoct f0;
  b_srskelf_asym_new f1;
  srskelf_asym_new_api f2;
};

// End of code generation (srskelf_asym_new_types.h)
