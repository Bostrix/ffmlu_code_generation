//
// _coder_lap_neumann_kernel_mex.cpp
//
// Code generation for function '_coder_lap_neumann_kernel_mex'
//

// Include files
#include "_coder_lap_neumann_kernel_mex.h"
#include "_coder_lap_neumann_kernel_api.h"
#include "lap_neumann_kernel_data.h"
#include "lap_neumann_kernel_initialize.h"
#include "lap_neumann_kernel_terminate.h"
#include "lap_neumann_kernel_types.h"
#include "rt_nonfinite.h"
#include <stdexcept>

void emlrtExceptionBridge();
void emlrtExceptionBridge()
{
  throw std::runtime_error("");
}
// Function Definitions
void lap_neumann_kernel_mexFunction(lap_neumann_kernelStackData *SD,
                                    int32_T nlhs, mxArray *plhs[1],
                                    int32_T nrhs, const mxArray *prhs[3])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 3, 4,
                        18, "lap_neumann_kernel");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 18,
                        "lap_neumann_kernel");
  }
  // Call the function.
  lap_neumann_kernel_api(SD, prhs, &outputs);
  // Copy over outputs to the caller.
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  lap_neumann_kernelStackData *c_lap_neumann_kernelStackDataGl{nullptr};
  c_lap_neumann_kernelStackDataGl = static_cast<lap_neumann_kernelStackData *>(
      new lap_neumann_kernelStackData);
  mexAtExit(&lap_neumann_kernel_atexit);
  // Module initialization.
  lap_neumann_kernel_initialize();
  try { // Dispatch the entry-point.
    lap_neumann_kernel_mexFunction(c_lap_neumann_kernelStackDataGl, nlhs, plhs,
                                   nrhs, prhs);
    // Module termination.
    lap_neumann_kernel_terminate();
  } catch (...) {
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
  delete c_lap_neumann_kernelStackDataGl;
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           (void *)&emlrtExceptionBridge, "UTF-8", true);
  return emlrtRootTLSGlobal;
}

// End of code generation (_coder_lap_neumann_kernel_mex.cpp)
