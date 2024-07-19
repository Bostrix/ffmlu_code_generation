//
// shypoct_initialize.cpp
//
// Code generation for function 'shypoct_initialize'
//

// Include files
#include "shypoct_initialize.h"
#include "_coder_shypoct_mex.h"
#include "rt_nonfinite.h"
#include "shypoct_data.h"

// Function Declarations
static void shypoct_once();

// Function Definitions
static void shypoct_once()
{
  mex_InitInfAndNan();
}

void shypoct_initialize()
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
    shypoct_once();
  }
}

// End of code generation (shypoct_initialize.cpp)
