//
// _coder_spget_quadcorr_mex.cpp
//
// Code generation for function '_coder_spget_quadcorr_mex'
//

// Include files
#include "_coder_spget_quadcorr_mex.h"
#include "_coder_spget_quadcorr_api.h"
#include "rt_nonfinite.h"
#include "spget_quadcorr_data.h"
#include "spget_quadcorr_initialize.h"
#include "spget_quadcorr_terminate.h"
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
  mexAtExit(&spget_quadcorr_atexit);
  // Module initialization.
  spget_quadcorr_initialize();
  try { // Dispatch the entry-point.
    spget_quadcorr_mexFunction(nlhs, plhs, nrhs, prhs);
    // Module termination.
    spget_quadcorr_terminate();
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

void spget_quadcorr_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                                const mxArray *prhs[4])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 4, 4,
                        14, "spget_quadcorr");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 14,
                        "spget_quadcorr");
  }
  // Call the function.
  spget_quadcorr_api(prhs, &outputs);
  // Copy over outputs to the caller.
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

// End of code generation (_coder_spget_quadcorr_mex.cpp)
