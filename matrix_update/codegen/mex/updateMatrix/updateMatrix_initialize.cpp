//
// updateMatrix_initialize.cpp
//
// Code generation for function 'updateMatrix_initialize'
//

// Include files
#include "updateMatrix_initialize.h"
#include "_coder_updateMatrix_mex.h"
#include "rt_nonfinite.h"
#include "updateMatrix_data.h"

// Function Declarations
static void updateMatrix_once();

// Function Definitions
static void updateMatrix_once()
{
  mex_InitInfAndNan();
}

void updateMatrix_initialize()
{
  static const volatile char_T *emlrtBreakCheckR2012bFlagVar{nullptr};
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
    updateMatrix_once();
  }
}

// End of code generation (updateMatrix_initialize.cpp)
