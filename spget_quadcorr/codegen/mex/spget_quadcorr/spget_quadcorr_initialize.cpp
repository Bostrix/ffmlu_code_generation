//
// spget_quadcorr_initialize.cpp
//
// Code generation for function 'spget_quadcorr_initialize'
//

// Include files
#include "spget_quadcorr_initialize.h"
#include "_coder_spget_quadcorr_mex.h"
#include "rt_nonfinite.h"
#include "spget_quadcorr_data.h"

// Function Declarations
static void spget_quadcorr_once();

// Function Definitions
static void spget_quadcorr_once()
{
  mex_InitInfAndNan();
}

void spget_quadcorr_initialize()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, nullptr);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    spget_quadcorr_once();
  }
}

// End of code generation (spget_quadcorr_initialize.cpp)
