//
// _coder_updateMatrix_mex.cpp
//
// Code generation for function '_coder_updateMatrix_mex'
//

// Include files
#include "_coder_updateMatrix_mex.h"
#include "_coder_updateMatrix_api.h"
#include "rt_nonfinite.h"
#include "updateMatrix_data.h"
#include "updateMatrix_initialize.h"
#include "updateMatrix_terminate.h"
#include <stdexcept>

void emlrtExceptionBridge();
void emlrtExceptionBridge()
{
  throw std::runtime_error("");
}
// Function Definitions
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&updateMatrix_atexit);
  // Module initialization.
  updateMatrix_initialize();
  try { // Dispatch the entry-point.
    updateMatrix_mexFunction(nlhs, plhs, nrhs, prhs);
    // Module termination.
    updateMatrix_terminate();
  } catch (...) {
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           (void *)&emlrtExceptionBridge, "UTF-8", true);
  return emlrtRootTLSGlobal;
}

void updateMatrix_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                              const mxArray *prhs[5])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *b_prhs[5];
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 5, 4,
                        12, "updateMatrix");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 12,
                        "updateMatrix");
  }
  // Call the function.
  for (int32_T i{0}; i < 5; i++) {
    b_prhs[i] = prhs[i];
  }
  updateMatrix_api(b_prhs, &outputs);
  // Copy over outputs to the caller.
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

// End of code generation (_coder_updateMatrix_mex.cpp)
