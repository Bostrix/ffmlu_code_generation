//
// _coder_srskelf_sv_nn_mex.cpp
//
// Code generation for function '_coder_srskelf_sv_nn_mex'
//

// Include files
#include "_coder_srskelf_sv_nn_mex.h"
#include "_coder_srskelf_sv_nn_api.h"
#include "rt_nonfinite.h"
#include "srskelf_sv_nn_data.h"
#include "srskelf_sv_nn_initialize.h"
#include "srskelf_sv_nn_terminate.h"
#include "srskelf_sv_nn_types.h"
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
  srskelf_sv_nnStackData *srskelf_sv_nnStackDataGlobal{nullptr};
  srskelf_sv_nnStackDataGlobal =
      static_cast<srskelf_sv_nnStackData *>(new srskelf_sv_nnStackData);
  mexAtExit(&srskelf_sv_nn_atexit);
  // Module initialization.
  srskelf_sv_nn_initialize();
  try { // Dispatch the entry-point.
    srskelf_sv_nn_mexFunction(srskelf_sv_nnStackDataGlobal, nlhs, plhs, nrhs,
                              prhs);
    // Module termination.
    srskelf_sv_nn_terminate();
  } catch (...) {
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
  delete srskelf_sv_nnStackDataGlobal;
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           (void *)&emlrtExceptionBridge, "UTF-8", true);
  return emlrtRootTLSGlobal;
}

void srskelf_sv_nn_mexFunction(srskelf_sv_nnStackData *SD, int32_T nlhs,
                               mxArray *plhs[1], int32_T nrhs,
                               const mxArray *prhs[2])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 2, 4,
                        13, "srskelf_sv_nn");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 13,
                        "srskelf_sv_nn");
  }
  // Call the function.
  b_srskelf_sv_nn_api(SD, prhs, &outputs);
  // Copy over outputs to the caller.
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

// End of code generation (_coder_srskelf_sv_nn_mex.cpp)
