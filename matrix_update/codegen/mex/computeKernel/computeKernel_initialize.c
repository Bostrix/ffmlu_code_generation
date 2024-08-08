/*
 * computeKernel_initialize.c
 *
 * Code generation for function 'computeKernel_initialize'
 *
 */

/* Include files */
#include "computeKernel_initialize.h"
#include "_coder_computeKernel_mex.h"
#include "computeKernel_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void computeKernel_once(void);

/* Function Definitions */
static void computeKernel_once(void)
{
  mex_InitInfAndNan();
}

void computeKernel_initialize(void)
{
  static const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    computeKernel_once();
  }
}

/* End of code generation (computeKernel_initialize.c) */
