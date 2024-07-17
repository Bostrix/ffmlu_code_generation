//
// Afun_lap_te.h
//
// Code generation for function 'Afun_lap_te'
//

#pragma once

// Include files
#include "Afun_lap_te_types.h"
#include "rtwtypes.h"
#include "sparse.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void Afun_lap_te(Afun_lap_teStackData *SD, const emlrtStack *sp,
                 const real_T i[819], const real_T j[5], const real_T x[24000],
                 const real_T nu[24000], const real_T area[8000],
                 const real_T P[8000], const coder::sparse *S,
                 const real_T contrast[8000], real_T wuse, real_T A[4095]);

// End of code generation (Afun_lap_te.h)
