/*
 * _coder_computeKernel_api.c
 *
 * Code generation for function '_coder_computeKernel_api'
 *
 */

/* Include files */
#include "_coder_computeKernel_api.h"
#include "computeKernel.h"
#include "computeKernel_data.h"
#include "computeKernel_emxutil.h"
#include "computeKernel_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo d_emlrtRTEI = {
    1,                          /* lineNo */
    1,                          /* colNo */
    "_coder_computeKernel_api", /* fName */
    ""                          /* pName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                             const char_T *identifier, emxArray_real_T *y);

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims = -1;
  int32_T i;
  int32_T i1;
  boolean_T b = true;
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                            (const void *)&dims, &b, &i);
  ret->allocatedSize = i;
  i1 = ret->size[0];
  ret->size[0] = i;
  emxEnsureCapacity_real_T(sp, ret, i1, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                             const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId, y);
  emlrtDestroyArray(&nullptr);
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  static const int32_T i = 0;
  const mxArray *m;
  const mxArray *y;
  const real_T *u_data;
  u_data = u->data;
  y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u_data[0]);
  emlrtSetDimensions((mxArray *)m, &u->size[0], 1);
  emlrtAssign(&y, m);
  return y;
}

void computeKernel_api(const mxArray *const prhs[2], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *K;
  emxArray_real_T *dr;
  emxArray_real_T *rdotn;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  /* Marshall function inputs */
  emxInit_real_T(&st, &rdotn, &d_emlrtRTEI);
  rdotn->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "rdotn", rdotn);
  emxInit_real_T(&st, &dr, &d_emlrtRTEI);
  dr->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "dr", dr);
  /* Invoke the target function */
  emxInit_real_T(&st, &K, &d_emlrtRTEI);
  computeKernel(&st, rdotn, dr, K);
  emxFree_real_T(&st, &dr);
  emxFree_real_T(&st, &rdotn);
  /* Marshall function outputs */
  K->canFreeData = false;
  *plhs = emlrt_marshallOut(K);
  emxFree_real_T(&st, &K);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_computeKernel_api.c) */
