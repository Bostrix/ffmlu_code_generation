//
// srskelf_asym_new_types2.h
//
// Code generation for function 'srskelf_asym_new_types2'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Definitions
struct struct2_T {
  real_T sk[1000];
  real_T rd[1000];
  real_T nbr[1000];
  real_T T[1000000];
  real_T E[1000000];
  real_T F[1000000];
  real_T L[1000000];
  real_T U[1000000];
  real_T C[1000000];
  real_T D[1000000];
};

struct struct_T {
  real_T ctr[3];
  coder::array<real_T, 2U> xi;
  real_T prnt;
  coder::array<real_T, 2U> chld;
  coder::array<real_T, 2U> nbor;
  coder::array<real_T, 2U> ilist;
  coder::array<real_T, 2U> snbor;
};

// End of code generation (srskelf_asym_new_types2.h)
