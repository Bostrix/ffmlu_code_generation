//
// _coder_Afun_lap_te_mex.h
//
// Code generation for function '_coder_Afun_lap_te_mex'
//

#pragma once

// Include files
#include "Afun_lap_te_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void Afun_lap_te_mexFunction(Afun_lap_teStackData *SD, int32_T nlhs,
                             mxArray *plhs[1], int32_T nrhs,
                             const mxArray *prhs[9]);

MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[],
                                     int32_T nrhs, const mxArray *prhs[]);

emlrtCTX mexFunctionCreateRootTLS();

// End of code generation (_coder_Afun_lap_te_mex.h)
