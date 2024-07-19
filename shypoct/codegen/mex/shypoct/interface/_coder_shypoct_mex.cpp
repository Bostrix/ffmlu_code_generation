//
// _coder_shypoct_mex.cpp
//
// Code generation for function '_coder_shypoct_mex'
//

// Include files
#include "_coder_shypoct_mex.h"
#include "_coder_shypoct_api.h"
#include "rt_nonfinite.h"
#include "shypoct_data.h"
#include "shypoct_initialize.h"
#include "shypoct_terminate.h"
#include "shypoct_types.h"
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
  shypoctStackData *shypoctStackDataGlobal{nullptr};
  shypoctStackDataGlobal =
      static_cast<shypoctStackData *>(new shypoctStackData);
  mexAtExit(&shypoct_atexit);
  // Module initialization.
  shypoct_initialize();
  try { // Dispatch the entry-point.
    shypoct_mexFunction(shypoctStackDataGlobal, nlhs, plhs, nrhs, prhs);
    // Module termination.
    shypoct_terminate();
  } catch (...) {
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
  delete shypoctStackDataGlobal;
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           (void *)&emlrtExceptionBridge, "UTF-8", true);
  return emlrtRootTLSGlobal;
}

void shypoct_mexFunction(shypoctStackData *SD, int32_T nlhs, mxArray *plhs[1],
                         int32_T nrhs, const mxArray *prhs[4])
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
                        7, "shypoct");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 7,
                        "shypoct");
  }
  // Call the function.
  shypoct_api(SD, prhs, &outputs);
  // Copy over outputs to the caller.
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

// End of code generation (_coder_shypoct_mex.cpp)
