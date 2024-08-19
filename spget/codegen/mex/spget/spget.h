//
// spget.h
//
// Code generation for function 'spget'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "spget_types.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void spget(const emlrtStack *sp, const char_T Ityp[3], const char_T Jtyp[3],
           const struct0_T *F, const real_T lookup_list[1032],
           const real_T slf[110], const real_T nbr[980], const real_T lst[2072],
           real_T nslf, real_T nnbr, real_T nlst, real_T nbox,
           const struct2_T *t, real_T i, const struct4_T *opts,
           coder::array<real_T, 2U> &A);

// End of code generation (spget.h)
