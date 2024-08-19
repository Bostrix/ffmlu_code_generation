//
// spget_initialize.cpp
//
// Code generation for function 'spget_initialize'
//

// Include files
#include "spget_initialize.h"
#include "_coder_spget_mex.h"
#include "rt_nonfinite.h"
#include "spget_data.h"

// Function Declarations
static void spget_once();

// Function Definitions
static void spget_once()
{
  mex_InitInfAndNan();
}

void spget_initialize()
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
    spget_once();
  }
}

// End of code generation (spget_initialize.cpp)
