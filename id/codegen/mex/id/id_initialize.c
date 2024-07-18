/*
 * id_initialize.c
 *
 * Code generation for function 'id_initialize'
 *
 */

/* Include files */
#include "id_initialize.h"
#include "_coder_id_mex.h"
#include "id_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void id_once(void);

/* Function Definitions */
static void id_once(void)
{
  mex_InitInfAndNan();
}

void id_initialize(void)
{
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
    id_once();
  }
}

/* End of code generation (id_initialize.c) */
