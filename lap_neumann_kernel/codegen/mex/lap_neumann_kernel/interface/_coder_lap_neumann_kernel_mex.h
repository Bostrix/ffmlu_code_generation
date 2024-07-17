//
// _coder_lap_neumann_kernel_mex.h
//
// Code generation for function '_coder_lap_neumann_kernel_mex'
//

#pragma once

// Include files
#include "lap_neumann_kernel_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void lap_neumann_kernel_mexFunction(lap_neumann_kernelStackData *SD,
                                    int32_T nlhs, mxArray *plhs[1],
                                    int32_T nrhs, const mxArray *prhs[3]);

MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[],
                                     int32_T nrhs, const mxArray *prhs[]);

emlrtCTX mexFunctionCreateRootTLS();

// End of code generation (_coder_lap_neumann_kernel_mex.h)
