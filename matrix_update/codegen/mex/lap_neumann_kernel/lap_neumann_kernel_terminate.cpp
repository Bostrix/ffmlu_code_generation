//
// lap_neumann_kernel_terminate.cpp
//
// Code generation for function 'lap_neumann_kernel_terminate'
//

// Include files
#include "lap_neumann_kernel_terminate.h"
#include "_coder_lap_neumann_kernel_mex.h"
#include "lap_neumann_kernel_data.h"
#include "rt_nonfinite.h"

// Function Declarations
static void emlrtExitTimeCleanupDtorFcn(const void *r);

// Function Definitions
static void emlrtExitTimeCleanupDtorFcn(const void *r)
{
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void lap_neumann_kernel_atexit()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  try {
    emlrtPushHeapReferenceStackR2021a(&st, false, nullptr,
                                      (void *)&emlrtExitTimeCleanupDtorFcn,
                                      nullptr, nullptr, nullptr);
    emlrtEnterRtStackR2012b(&st);
    emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
    emlrtExitTimeCleanup(&emlrtContextGlobal);
  } catch (...) {
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
}

void lap_neumann_kernel_terminate()
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

// End of code generation (lap_neumann_kernel_terminate.cpp)
