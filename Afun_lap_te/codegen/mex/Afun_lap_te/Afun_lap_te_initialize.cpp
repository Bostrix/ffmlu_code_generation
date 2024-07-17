//
// Afun_lap_te_initialize.cpp
//
// Code generation for function 'Afun_lap_te_initialize'
//

// Include files
#include "Afun_lap_te_initialize.h"
#include "Afun_lap_te_data.h"
#include "_coder_Afun_lap_te_mex.h"
#include "rt_nonfinite.h"

// Function Declarations
static void Afun_lap_te_once();

// Function Definitions
static void Afun_lap_te_once()
{
  mex_InitInfAndNan();
}

void Afun_lap_te_initialize()
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
    Afun_lap_te_once();
  }
}

// End of code generation (Afun_lap_te_initialize.cpp)
