//
// lap_neumann_kernel_initialize.cpp
//
// Code generation for function 'lap_neumann_kernel_initialize'
//

// Include files
#include "lap_neumann_kernel_initialize.h"
#include "_coder_lap_neumann_kernel_mex.h"
#include "lap_neumann_kernel_data.h"
#include "rt_nonfinite.h"

// Function Declarations
static void lap_neumann_kernel_once();

// Function Definitions
static void lap_neumann_kernel_once()
{
  mex_InitInfAndNan();
}

void lap_neumann_kernel_initialize()
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
    lap_neumann_kernel_once();
  }
}

// End of code generation (lap_neumann_kernel_initialize.cpp)
