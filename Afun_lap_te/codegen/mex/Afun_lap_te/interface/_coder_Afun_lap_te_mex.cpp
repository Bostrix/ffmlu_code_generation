//
// _coder_Afun_lap_te_mex.cpp
//
// Code generation for function '_coder_Afun_lap_te_mex'
//

// Include files
#include "_coder_Afun_lap_te_mex.h"
#include "Afun_lap_te_data.h"
#include "Afun_lap_te_initialize.h"
#include "Afun_lap_te_terminate.h"
#include "Afun_lap_te_types.h"
#include "_coder_Afun_lap_te_api.h"
#include "rt_nonfinite.h"
#include <stdexcept>

void emlrtExceptionBridge();
void emlrtExceptionBridge()
{
  throw std::runtime_error("");
}
// Function Definitions
void Afun_lap_te_mexFunction(Afun_lap_teStackData *SD, int32_T nlhs,
                             mxArray *plhs[1], int32_T nrhs,
                             const mxArray *prhs[9])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 9) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 9, 4,
                        11, "Afun_lap_te");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 11,
                        "Afun_lap_te");
  }
  // Call the function.
  Afun_lap_te_api(SD, prhs, &outputs);
  // Copy over outputs to the caller.
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  Afun_lap_teStackData *Afun_lap_teStackDataGlobal{nullptr};
  Afun_lap_teStackDataGlobal =
      static_cast<Afun_lap_teStackData *>(new Afun_lap_teStackData);
  mexAtExit(&Afun_lap_te_atexit);
  // Module initialization.
  Afun_lap_te_initialize();
  try { // Dispatch the entry-point.
    Afun_lap_te_mexFunction(Afun_lap_teStackDataGlobal, nlhs, plhs, nrhs, prhs);
    // Module termination.
    Afun_lap_te_terminate();
  } catch (...) {
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
  delete Afun_lap_teStackDataGlobal;
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           (void *)&emlrtExceptionBridge, "UTF-8", true);
  return emlrtRootTLSGlobal;
}

// End of code generation (_coder_Afun_lap_te_mex.cpp)
