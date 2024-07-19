//
// _coder_shypoct_mex.h
//
// Code generation for function '_coder_shypoct_mex'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "shypoct_types.h"
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

void shypoct_mexFunction(shypoctStackData *SD, int32_T nlhs, mxArray *plhs[1],
                         int32_T nrhs, const mxArray *prhs[4]);

// End of code generation (_coder_shypoct_mex.h)
