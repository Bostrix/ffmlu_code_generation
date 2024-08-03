//
// shypoct.h
//
// Code generation for function 'shypoct'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "srskelf_asym_new_types.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
real_T b_shypoct(srskelf_asym_newStackData *SD, const emlrtStack &sp,
                 const real_T x[24000], real_T occ, real_T lvlmax,
                 coder::array<c_struct_T, 1U> &T_nodes,
                 coder::array<real_T, 2U> &T_lvp, real_T &T_lrt);

// End of code generation (shypoct.h)
