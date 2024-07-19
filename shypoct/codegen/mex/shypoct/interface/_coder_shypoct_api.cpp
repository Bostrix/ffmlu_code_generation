//
// _coder_shypoct_api.cpp
//
// Code generation for function '_coder_shypoct_api'
//

// Include files
#include "_coder_shypoct_api.h"
#include "rt_nonfinite.h"
#include "shypoct.h"
#include "shypoct_data.h"
#include "shypoct_types.h"
#include "coder_array.h"
#include "coder_bounded_array.h"

// Function Declarations
static real_T b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                                 const char_T *identifier);

static real_T b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                               const char_T *identifier);

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static real_T (*d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[240000];

static real_T e_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static real_T (*emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                                 const char_T *identifier))[240000];

static real_T (*emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId))[240000];

static const mxArray *emlrt_marshallOut(const struct0_T &u);

static const mxArray *emlrt_marshallOut(const real_T u_data[],
                                        const int32_T u_size[2]);

static void f_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId);

// Function Definitions
static real_T b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                                 const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = e_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                               const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  c_emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
}

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId)
{
  f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
}

static real_T (*d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[240000]
{
  static const int32_T dims[2]{3, 80000};
  real_T(*ret)[240000];
  int32_T iv[2];
  boolean_T bv[2]{false, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret = (real_T(*)[240000])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T e_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 0U,
                          (const void *)&dims);
  ret = *static_cast<real_T *>(emlrtMxGetData(src));
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                                 const char_T *identifier))[240000]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[240000];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId))[240000]
{
  real_T(*y)[240000];
  y = d_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *emlrt_marshallOut(const struct0_T &u)
{
  static const int32_T iv1[2]{1, 3};
  static const int32_T iv2[2]{1, 80000};
  static const char_T *sv1[7]{"ctr",  "xi",    "prnt", "chld",
                              "nbor", "ilist", "snbor"};
  static const char_T *sv[4]{"nodes", "nlvl", "lvp", "lrt"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_j1;
  int32_T i;
  y = nullptr;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 4, (const char_T **)&sv[0]));
  b_y = nullptr;
  iv[0] = 1;
  iv[1] = u.nodes.size(1);
  emlrtAssign(&b_y,
              emlrtCreateStructArray(2, &iv[0], 7, (const char_T **)&sv1[0]));
  emlrtCreateField(b_y, "ctr");
  emlrtCreateField(b_y, "xi");
  emlrtCreateField(b_y, "prnt");
  emlrtCreateField(b_y, "chld");
  emlrtCreateField(b_y, "nbor");
  emlrtCreateField(b_y, "ilist");
  emlrtCreateField(b_y, "snbor");
  i = 0;
  for (b_j1 = 0; b_j1 < u.nodes.size(1); b_j1++) {
    c_y = nullptr;
    m = emlrtCreateNumericArray(2, (const void *)&iv1[0], mxDOUBLE_CLASS,
                                mxREAL);
    pData = emlrtMxGetPr(m);
    pData[0] = u.nodes[b_j1].ctr[0];
    pData[1] = u.nodes[b_j1].ctr[1];
    pData[2] = u.nodes[b_j1].ctr[2];
    emlrtAssign(&c_y, m);
    emlrtSetFieldR2017b(b_y, i, "ctr", c_y, 0);
    f_y = nullptr;
    m = emlrtCreateNumericArray(2, (const void *)&iv2[0], mxDOUBLE_CLASS,
                                mxREAL);
    pData = emlrtMxGetPr(m);
    for (int32_T b_i{0}; b_i < 80000; b_i++) {
      pData[b_i] = u.nodes[b_j1].xi[b_i];
    }
    emlrtAssign(&f_y, m);
    emlrtSetFieldR2017b(b_y, i, "xi", f_y, 1);
    g_y = nullptr;
    m = emlrtCreateDoubleScalar(u.nodes[b_j1].prnt);
    emlrtAssign(&g_y, m);
    emlrtSetFieldR2017b(b_y, i, "prnt", g_y, 2);
    emlrtSetFieldR2017b(
        b_y, i, "chld",
        emlrt_marshallOut(u.nodes[b_j1].chld.data, u.nodes[b_j1].chld.size), 3);
    emlrtSetFieldR2017b(
        b_y, i, "nbor",
        emlrt_marshallOut(u.nodes[b_j1].nbor.data, u.nodes[b_j1].nbor.size), 4);
    emlrtSetFieldR2017b(
        b_y, i, "ilist",
        emlrt_marshallOut(u.nodes[b_j1].ilist.data, u.nodes[b_j1].ilist.size),
        5);
    emlrtSetFieldR2017b(
        b_y, i, "snbor",
        emlrt_marshallOut(u.nodes[b_j1].snbor.data, u.nodes[b_j1].snbor.size),
        6);
    i++;
  }
  emlrtSetFieldR2017b(y, 0, "nodes", b_y, 0);
  d_y = nullptr;
  m = emlrtCreateDoubleScalar(u.nlvl);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, "nlvl", d_y, 1);
  e_y = nullptr;
  iv[0] = 1;
  iv[1] = u.lvp.size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  b_j1 = 0;
  for (i = 0; i < u.lvp.size[1]; i++) {
    pData[b_j1] = u.lvp.data[i];
    b_j1++;
  }
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, "lvp", e_y, 2);
  h_y = nullptr;
  m = emlrtCreateDoubleScalar(u.lrt);
  emlrtAssign(&h_y, m);
  emlrtSetFieldR2017b(y, 0, "lrt", h_y, 3);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u_data[],
                                        const int32_T u_size[2])
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T i;
  y = nullptr;
  iv[0] = 1;
  iv[1] = u_size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u_size[1]; b_i++) {
    pData[i] = u_data[b_i];
    i++;
  }
  emlrtAssign(&y, m);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims[2]{0, 0};
  int32_T iv[2];
  boolean_T bv[2]{false, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  emlrtMxGetData(src);
  emlrtDestroyArray(&src);
}

void shypoct_api(shypoctStackData *SD, const mxArray *const prhs[4],
                 const mxArray **plhs)
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  struct0_T T;
  real_T(*x)[240000];
  real_T lvlmax;
  real_T occ;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  // Marshall function inputs
  x = emlrt_marshallIn(st, emlrtAlias(prhs[0]), "x");
  occ = b_emlrt_marshallIn(st, emlrtAliasP(prhs[1]), "occ");
  lvlmax = b_emlrt_marshallIn(st, emlrtAliasP(prhs[2]), "lvlmax");
  c_emlrt_marshallIn(st, emlrtAlias(prhs[3]), "ext");
  // Invoke the target function
  shypoct(SD, &st, *x, occ, lvlmax, &T);
  // Marshall function outputs
  *plhs = emlrt_marshallOut(T);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

// End of code generation (_coder_shypoct_api.cpp)
