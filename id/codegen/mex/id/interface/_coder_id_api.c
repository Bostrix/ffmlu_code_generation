/*
 * _coder_id_api.c
 *
 * Code generation for function '_coder_id_api'
 *
 */

/* Include files */
#include "_coder_id_api.h"
#include "id.h"
#include "id_data.h"
#include "id_mexutil.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[8510];

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[8510];

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                 const char_T *identifier);

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier);

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static const mxArray *h_emlrt_marshallOut(const real_T u_data[],
                                          const int32_T u_size[2]);

static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[8510];

static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId);

/* Function Definitions */
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[8510]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[8510];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[8510]
{
  real_T(*y)[8510];
  y = j_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                 const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = k_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId)
{
  l_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
}

static const mxArray *h_emlrt_marshallOut(const real_T u_data[],
                                          const int32_T u_size[2])
{
  static const int32_T b_iv[2] = {0, 0};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&b_iv[0], mxDOUBLE_CLASS,
                              mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u_data[0]);
  emlrtSetDimensions((mxArray *)m, &u_size[0], 2);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[8510]
{
  static const int32_T dims[2] = {1702, 5};
  real_T(*ret)[8510];
  int32_T b_iv[2];
  boolean_T bv[2] = {false, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &b_iv[0]);
  ret = (real_T(*)[8510])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 0U,
                          (const void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims[2] = {0, 0};
  int32_T b_iv[2];
  boolean_T bv[2] = {false, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &b_iv[0]);
  emlrtMxGetData(src);
  emlrtDestroyArray(&src);
}

void id_api(const mxArray *const prhs[5], int32_T nlhs, const mxArray *plhs[4])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  real_T(*A)[8510];
  real_T(*T_data)[25];
  real_T(*rd_data)[5];
  real_T(*sk_data)[5];
  real_T Tmax;
  real_T niter;
  real_T rank_or_tol;
  real_T rrqr_iter;
  int32_T T_size[2];
  int32_T rd_size[2];
  int32_T sk_size[2];
  st.tls = emlrtRootTLSGlobal;
  sk_data = (real_T(*)[5])mxMalloc(sizeof(real_T[5]));
  rd_data = (real_T(*)[5])mxMalloc(sizeof(real_T[5]));
  T_data = (real_T(*)[25])mxMalloc(sizeof(real_T[25]));
  /* Marshall function inputs */
  A = c_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "A");
  rank_or_tol = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "rank_or_tol");
  Tmax = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "Tmax");
  rrqr_iter = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "rrqr_iter");
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "fixed");
  /* Invoke the target function */
  id(&st, *A, rank_or_tol, Tmax, rrqr_iter, *sk_data, sk_size, *rd_data,
     rd_size, *T_data, T_size, &niter);
  /* Marshall function outputs */
  plhs[0] = h_emlrt_marshallOut(*sk_data, sk_size);
  if (nlhs > 1) {
    plhs[1] = h_emlrt_marshallOut(*rd_data, rd_size);
  }
  if (nlhs > 2) {
    plhs[2] = h_emlrt_marshallOut(*T_data, T_size);
  }
  if (nlhs > 3) {
    plhs[3] = g_emlrt_marshallOut(niter);
  }
}

/* End of code generation (_coder_id_api.c) */
