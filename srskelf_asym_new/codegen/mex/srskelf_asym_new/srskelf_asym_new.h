//
// srskelf_asym_new.h
//
// Code generation for function 'srskelf_asym_new'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "srskelf_asym_new_types.h"
#include "srskelf_asym_new_types1.h"
#include "srskelf_asym_new_types11.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void plus(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
          const coder::array<real_T, 2U> &in2);

void srskelf_asym_new(srskelf_asym_newStackData *SD, const emlrtStack *sp,
                      real_T A_func_id, const real_T x[24000], real_T occ,
                      real_T rank_or_tol, real_T pxyfun_func_id,
                      const struct0_T *opts, struct1_T *F);

// End of code generation (srskelf_asym_new.h)
