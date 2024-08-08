//
// _coder_srskelf_asym_new_mex.h
//
// Code generation for function '_coder_srskelf_asym_new_mex'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "srskelf_asym_new_types.h"
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

void srskelf_asym_new_mexFunction(srskelf_asym_newStackData *SD, int32_T nlhs,
                                  mxArray *plhs[1], int32_T nrhs,
                                  const mxArray *prhs[6]);

// End of code generation (_coder_srskelf_asym_new_mex.h)
