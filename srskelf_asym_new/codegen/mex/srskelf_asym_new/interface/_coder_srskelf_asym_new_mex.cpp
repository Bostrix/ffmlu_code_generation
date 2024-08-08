//
// _coder_srskelf_asym_new_mex.cpp
//
// Code generation for function '_coder_srskelf_asym_new_mex'
//

// Include files
#include "_coder_srskelf_asym_new_mex.h"
#include "_coder_srskelf_asym_new_api.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "srskelf_asym_new_initialize.h"
#include "srskelf_asym_new_terminate.h"
#include "srskelf_asym_new_types.h"
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
  srskelf_asym_newStackData *srskelf_asym_newStackDataGlobal{nullptr};
  srskelf_asym_newStackDataGlobal =
      static_cast<srskelf_asym_newStackData *>(new srskelf_asym_newStackData);
  mexAtExit(&srskelf_asym_new_atexit);
  // Module initialization.
  srskelf_asym_new_initialize();
  try { // Dispatch the entry-point.
    srskelf_asym_new_mexFunction(srskelf_asym_newStackDataGlobal, nlhs, plhs,
                                 nrhs, prhs);
    // Module termination.
    srskelf_asym_new_terminate();
  } catch (...) {
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
  delete srskelf_asym_newStackDataGlobal;
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           (void *)&emlrtExceptionBridge, "UTF-8", true);
  return emlrtRootTLSGlobal;
}

void srskelf_asym_new_mexFunction(srskelf_asym_newStackData *SD, int32_T nlhs,
                                  mxArray *plhs[1], int32_T nrhs,
                                  const mxArray *prhs[6])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 6, 4,
                        16, "srskelf_asym_new");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 16,
                        "srskelf_asym_new");
  }
  // Call the function.
  b_srskelf_asym_new_api(SD, prhs, &outputs);
  // Copy over outputs to the caller.
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

// End of code generation (_coder_srskelf_asym_new_mex.cpp)
