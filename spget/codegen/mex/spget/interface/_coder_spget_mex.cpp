//
// _coder_spget_mex.cpp
//
// Code generation for function '_coder_spget_mex'
//

// Include files
#include "_coder_spget_mex.h"
#include "_coder_spget_api.h"
#include "rt_nonfinite.h"
#include "spget_data.h"
#include "spget_initialize.h"
#include "spget_terminate.h"
#include "spget_types.h"
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
  spgetStackData *spgetStackDataGlobal{nullptr};
  spgetStackDataGlobal = static_cast<spgetStackData *>(new spgetStackData);
  mexAtExit(&spget_atexit);
  // Module initialization.
  spget_initialize();
  try { // Dispatch the entry-point.
    spget_mexFunction(spgetStackDataGlobal, nlhs, plhs, nrhs, prhs);
    // Module termination.
    spget_terminate();
  } catch (...) {
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
  delete spgetStackDataGlobal;
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           (void *)&emlrtExceptionBridge, "UTF-8", true);
  return emlrtRootTLSGlobal;
}

void spget_mexFunction(spgetStackData *SD, int32_T nlhs, mxArray *plhs[1],
                       int32_T nrhs, const mxArray *prhs[14])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 14) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 14, 4,
                        5, "spget");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 5,
                        "spget");
  }
  // Call the function.
  b_spget_api(SD, prhs, &outputs);
  // Copy over outputs to the caller.
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

// End of code generation (_coder_spget_mex.cpp)
