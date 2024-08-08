/*
 * _coder_computeKernel_mex.c
 *
 * Code generation for function '_coder_computeKernel_mex'
 *
 */

/* Include files */
#include "_coder_computeKernel_mex.h"
#include "_coder_computeKernel_api.h"
#include "computeKernel_data.h"
#include "computeKernel_initialize.h"
#include "computeKernel_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void computeKernel_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                               const mxArray *prhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 2, 4,
                        13, "computeKernel");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 13,
                        "computeKernel");
  }
  /* Call the function. */
  computeKernel_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&computeKernel_atexit);
  /* Module initialization. */
  computeKernel_initialize();
  /* Dispatch the entry-point. */
  computeKernel_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  computeKernel_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL, "UTF-8", true);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_computeKernel_mex.c) */
