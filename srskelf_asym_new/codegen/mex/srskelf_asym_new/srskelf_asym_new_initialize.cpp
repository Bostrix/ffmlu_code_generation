//
// srskelf_asym_new_initialize.cpp
//
// Code generation for function 'srskelf_asym_new_initialize'
//

// Include files
#include "srskelf_asym_new_initialize.h"
#include "_coder_srskelf_asym_new_mex.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "timeKeeper.h"

// Function Declarations
static void srskelf_asym_new_once();

// Function Definitions
static void srskelf_asym_new_once()
{
  mex_InitInfAndNan();
  timeKeeper_init();
}

void srskelf_asym_new_initialize()
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
    srskelf_asym_new_once();
  }
}

// End of code generation (srskelf_asym_new_initialize.cpp)
