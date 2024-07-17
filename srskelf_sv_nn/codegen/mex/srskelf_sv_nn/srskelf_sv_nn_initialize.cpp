//
// srskelf_sv_nn_initialize.cpp
//
// Code generation for function 'srskelf_sv_nn_initialize'
//

// Include files
#include "srskelf_sv_nn_initialize.h"
#include "_coder_srskelf_sv_nn_mex.h"
#include "rt_nonfinite.h"
#include "srskelf_sv_nn_data.h"

// Function Declarations
static void srskelf_sv_nn_once();

// Function Definitions
static void srskelf_sv_nn_once()
{
  mex_InitInfAndNan();
}

void srskelf_sv_nn_initialize()
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
    srskelf_sv_nn_once();
  }
}

// End of code generation (srskelf_sv_nn_initialize.cpp)
