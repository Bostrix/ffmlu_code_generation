/*
 * _coder_id_mex.c
 *
 * Code generation for function '_coder_id_mex'
 *
 */

/* Include files */
#include "_coder_id_mex.h"
#include "_coder_id_api.h"
#include "id_data.h"
#include "id_initialize.h"
#include "id_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void id_mexFunction(int32_T nlhs, mxArray *plhs[4], int32_T nrhs,
                    const mxArray *prhs[5])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[4];
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 5, 4,
                        2, "id");
  }
  if (nlhs > 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 2,
                        "id");
  }
  /* Call the function. */
  id_api(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&id_atexit);
  /* Module initialization. */
  id_initialize();
  /* Dispatch the entry-point. */
  id_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  id_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL, "UTF-8", true);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_id_mex.c) */
