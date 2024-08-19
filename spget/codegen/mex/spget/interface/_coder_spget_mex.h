//
// _coder_spget_mex.h
//
// Code generation for function '_coder_spget_mex'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "spget_types.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[],
                                     int32_T nrhs, const mxArray *prhs[]);

emlrtCTX mexFunctionCreateRootTLS();

void spget_mexFunction(spgetStackData *SD, int32_T nlhs, mxArray *plhs[1],
                       int32_T nrhs, const mxArray *prhs[14]);

// End of code generation (_coder_spget_mex.h)
