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
#include "srskelf_asym_new_types1.h"
#include "srskelf_asym_new_types2.h"
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

struct spget {
  real_T y[4000000];
  real_T A[4000000];
  real_T tmp2[2000000];
  real_T F[2000000];
};

struct b_spget {
  real_T y[4000000];
  real_T A[4000000];
  real_T tmp1[2000000];
  real_T F[2000000];
};

struct shypoct {
  c_struct_T rv[16000];
  real_T idx_data[8000];
};

struct b_srskelf_asym_new {
  struct2_T expl_temp;
  coder::captured_var opts;
  coder::anonymous_function pxyfun;
};

struct srskelf_asym_new_api {
  struct0_T opts;
};

struct srskelf_asym_newStackData {
  spget f0;
  spget f1;
  b_spget f2;
  shypoct f3;
  b_srskelf_asym_new f4;
  srskelf_asym_new_api f5;
};

// End of code generation (srskelf_asym_new_types.h)
