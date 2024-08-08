//
// _coder_lap_neumann_kernel_api.cpp
//
// Code generation for function '_coder_lap_neumann_kernel_api'
//

// Include files
#include "_coder_lap_neumann_kernel_api.h"
#include "lap_neumann_kernel.h"
#include "lap_neumann_kernel_data.h"
#include "lap_neumann_kernel_types.h"
#include "rt_nonfinite.h"

// Function Declarations
static real_T (*b_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[330];

static real_T (*b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[330];

static real_T (*c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[6216];

static real_T (*d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[330];

static real_T (*emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                                 const char_T *identifier))[6216];

static real_T (*emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId))[6216];

static const mxArray *emlrt_marshallOut(const real_T u[227920]);

// Function Definitions
static real_T (*b_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[330]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[330];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[330]
{
  real_T(*y)[330];
  y = d_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[6216]
{
  static const int32_T dims[2]{3, 2072};
  real_T(*ret)[6216];
  int32_T iv[2];
  boolean_T bv[2]{false, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret = (real_T(*)[6216])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[330]
{
  static const int32_T dims[2]{3, 110};
  real_T(*ret)[330];
  int32_T iv[2];
  boolean_T bv[2]{false, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret = (real_T(*)[330])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                                 const char_T *identifier))[6216]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[6216];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId))[6216]
{
  real_T(*y)[6216];
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u[227920])
{
  static const int32_T iv[2]{0, 0};
  static const int32_T iv1[2]{2072, 110};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &iv1[0], 2);
  emlrtAssign(&y, m);
  return y;
}

void lap_neumann_kernel_api(lap_neumann_kernelStackData *SD,
                            const mxArray *const prhs[3], const mxArray **plhs)
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  real_T(*K)[227920];
  real_T(*nuuse)[6216];
  real_T(*x)[6216];
  real_T(*y)[330];
  st.tls = emlrtRootTLSGlobal;
  K = (real_T(*)[227920])mxMalloc(sizeof(real_T[227920]));
  // Marshall function inputs
  x = emlrt_marshallIn(st, emlrtAlias(prhs[0]), "x");
  y = b_emlrt_marshallIn(st, emlrtAlias(prhs[1]), "y");
  nuuse = emlrt_marshallIn(st, emlrtAlias(prhs[2]), "nuuse");
  // Invoke the target function
  lap_neumann_kernel(SD, &st, *x, *y, *nuuse, *K);
  // Marshall function outputs
  *plhs = emlrt_marshallOut(*K);
}

// End of code generation (_coder_lap_neumann_kernel_api.cpp)
