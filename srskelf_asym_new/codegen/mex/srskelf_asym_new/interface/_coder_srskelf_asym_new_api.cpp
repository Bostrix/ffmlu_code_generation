//
// _coder_srskelf_asym_new_api.cpp
//
// Code generation for function '_coder_srskelf_asym_new_api'
//

// Include files
#include "_coder_srskelf_asym_new_api.h"
#include "rt_nonfinite.h"
#include "sparse.h"
#include "srskelf_asym_new.h"
#include "srskelf_asym_new_data.h"
#include "srskelf_asym_new_mexutil.h"
#include "srskelf_asym_new_types.h"
#include "srskelf_asym_new_types1.h"
#include "srskelf_asym_new_types2.h"
#include "coder_array.h"

// Function Declarations
static real_T (*b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[24000];

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[24000]);

static real_T (*b_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[24000];

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<int32_T, 1U> &ret);

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 1U> &ret);

static char_T c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[8000]);

static boolean_T d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret[8000]);

static int32_T e_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                  const emlrtMsgIdentifier *parentId);

static void e_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret[24000]);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 1U> &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::sparse &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<int32_T, 1U> &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct0_T &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                             const char_T *identifier, struct0_T &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             real_T y[8000]);

static const mxArray *emlrt_marshallOut(const real_T u[1000000]);

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const struct1_T &u);

static void f_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret[8000]);

static void f_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static real_T (*h_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[24000];

static char_T i_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static boolean_T j_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId);

static int32_T k_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                  const emlrtMsgIdentifier *msgId);

static void l_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId);

// Function Definitions
static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[24000])
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*b_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[24000]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[24000];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[24000]
{
  real_T(*y)[24000];
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<int32_T, 1U> &ret)
{
  static const int32_T dims{-1};
  int32_T i;
  boolean_T b{true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "int32", false, 1U,
                            (const void *)&dims, &b, &i);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), &sp, i);
  emlrtImportArrayR2015b((emlrtConstCTX)&sp, src, &(ret.data())[0], 4, false);
  emlrtDestroyArray(&src);
}

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 1U> &ret)
{
  static const int32_T dims{-1};
  int32_T i;
  boolean_T b{true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 1U,
                            (const void *)&dims, &b, &i);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), &sp, i);
  emlrtImportArrayR2015b((emlrtConstCTX)&sp, src, &(ret.data())[0], 8, false);
  emlrtDestroyArray(&src);
}

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[8000])
{
  f_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static char_T c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  char_T y;
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = j_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret[8000])
{
  static const int32_T dims[2]{1, 8000};
  real_T(*r)[8000];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[8000])emlrtMxGetData(src);
  for (int32_T i{0}; i < 8000; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static int32_T e_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                  const emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = k_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret[24000])
{
  static const int32_T dims[2]{3, 8000};
  real_T(*r)[24000];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[24000])emlrtMxGetData(src);
  for (int32_T i{0}; i < 24000; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 1U> &y)
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<int32_T, 1U> &y)
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::sparse &y)
{
  emlrtMsgIdentifier thisId;
  const mxArray *propValues[4];
  int32_T iv[2];
  const char_T *propClasses[4]{"coder.internal.sparse", "coder.internal.sparse",
                               "coder.internal.sparse",
                               "coder.internal.sparse"};
  const char_T *propNames[4]{"d", "colidx", "rowidx", "maxnz"};
  boolean_T bv[2];
  propValues[0] = nullptr;
  propValues[1] = nullptr;
  propValues[2] = nullptr;
  propValues[3] = nullptr;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  bv[0] = false;
  iv[0] = 8000;
  bv[1] = false;
  iv[1] = 8000;
  emlrtCheckSparse((emlrtCTX)&sp, parentId, u, &iv[0], &bv[0], mxDOUBLE_CLASS,
                   mxREAL);
  emlrtCheckMcosClass2017a((emlrtCTX)&sp, parentId, u, "sparse");
  emlrtAssign(&u, emlrtConvertInstanceToRedirectTarget(
                      (emlrtCTX)&sp, u, 0, "coder.internal.sparse"));
  emlrtCheckMcosClass2017a((emlrtCTX)&sp, parentId, u, "coder.internal.sparse");
  emlrtGetAllProperties((emlrtCTX)&sp, u, 0, 4, (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  thisId.fIdentifier = "d";
  emlrt_marshallIn(sp, emlrtAlias(propValues[0]), &thisId, y.d);
  thisId.fIdentifier = "colidx";
  emlrt_marshallIn(sp, emlrtAlias(propValues[1]), &thisId, y.colidx);
  thisId.fIdentifier = "rowidx";
  emlrt_marshallIn(sp, emlrtAlias(propValues[2]), &thisId, y.rowidx);
  thisId.fIdentifier = "maxnz";
  e_emlrt_marshallIn(sp, emlrtAlias(propValues[3]), &thisId);
  emlrtDestroyArrays(4, &propValues[0]);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct0_T &y)
{
  static const int32_T dims{0};
  static const char_T *fieldNames[12]{"verb", "symm",  "zk",  "lap_proxy",
                                      "area", "nu",    "P",   "contrast",
                                      "wuse", "qcorr", "ext", "lvlmax"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)&sp, parentId, u, 12,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "verb";
  y.verb = emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 0, "verb")),
      &thisId);
  thisId.fIdentifier = "symm";
  y.symm = c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 1, "symm")),
      &thisId);
  thisId.fIdentifier = "zk";
  y.zk = emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 2, "zk")),
      &thisId);
  thisId.fIdentifier = "lap_proxy";
  y.lap_proxy = d_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 3, "lap_proxy")),
      &thisId);
  thisId.fIdentifier = "area";
  emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 4, "area")),
      &thisId, y.area);
  thisId.fIdentifier = "nu";
  b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 5, "nu")),
      &thisId, y.nu);
  thisId.fIdentifier = "P";
  c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 6, "P")),
      &thisId, y.P);
  thisId.fIdentifier = "contrast";
  c_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 7, "contrast")),
      &thisId, y.contrast);
  thisId.fIdentifier = "wuse";
  y.wuse = emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 8, "wuse")),
      &thisId);
  thisId.fIdentifier = "qcorr";
  emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 9, "qcorr")),
      &thisId, y.qcorr);
  thisId.fIdentifier = "ext";
  f_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 10, "ext")),
      &thisId);
  thisId.fIdentifier = "lvlmax";
  y.lvlmax = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 11, "lvlmax")),
      &thisId);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                             const char_T *identifier, struct0_T &y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId, y);
  emlrtDestroyArray(&b_nullptr);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, real_T y[8000])
{
  d_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const struct1_T &u)
{
  static const int32_T b_i{1000};
  static const int32_T i1{1000};
  static const int32_T i2{1000};
  static const char_T *sv1[10]{"sk", "rd", "nbr", "T", "E",
                               "F",  "L",  "U",   "C", "D"};
  static const char_T *sv[5]{"N", "nlvl", "lvp", "factors", "symm"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *m;
  const mxArray *y;
  real_T *b_pData;
  int32_T iv[2];
  int32_T b_j0;
  int32_T i;
  int32_T *pData;
  y = nullptr;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 5, (const char_T **)&sv[0]));
  b_y = nullptr;
  m = emlrtCreateDoubleScalar(u.N);
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, "N", b_y, 0);
  c_y = nullptr;
  m = emlrtCreateDoubleScalar(u.nlvl);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, "nlvl", c_y, 1);
  d_y = nullptr;
  iv[0] = 1;
  iv[1] = u.lvp.size(1);
  m = emlrtCreateNumericArray(2, &iv[0], mxINT32_CLASS, mxREAL);
  pData = static_cast<int32_T *>(emlrtMxGetData(m));
  b_j0 = 0;
  for (i = 0; i < u.lvp.size(1); i++) {
    pData[b_j0] = u.lvp[i];
    b_j0++;
  }
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, "lvp", d_y, 2);
  e_y = nullptr;
  emlrtAssign(&e_y, emlrtCreateStructArray(
                        1, ((coder::array<struct2_T, 1U> *)&u.factors)->size(),
                        10, (const char_T **)&sv1[0]));
  emlrtCreateField(e_y, "sk");
  emlrtCreateField(e_y, "rd");
  emlrtCreateField(e_y, "nbr");
  emlrtCreateField(e_y, "T");
  emlrtCreateField(e_y, "E");
  emlrtCreateField(e_y, "F");
  emlrtCreateField(e_y, "L");
  emlrtCreateField(e_y, "U");
  emlrtCreateField(e_y, "C");
  emlrtCreateField(e_y, "D");
  i = 0;
  for (b_j0 = 0; b_j0 < u.factors.size(0); b_j0++) {
    f_y = nullptr;
    m = emlrtCreateNumericArray(1, (const void *)&b_i, mxDOUBLE_CLASS, mxREAL);
    b_pData = emlrtMxGetPr(m);
    for (int32_T c_i{0}; c_i < 1000; c_i++) {
      b_pData[c_i] = u.factors[b_j0].sk[c_i];
    }
    emlrtAssign(&f_y, m);
    emlrtSetFieldR2017b(e_y, i, "sk", f_y, 0);
    h_y = nullptr;
    m = emlrtCreateNumericArray(1, (const void *)&i1, mxDOUBLE_CLASS, mxREAL);
    b_pData = emlrtMxGetPr(m);
    for (int32_T c_i{0}; c_i < 1000; c_i++) {
      b_pData[c_i] = u.factors[b_j0].rd[c_i];
    }
    emlrtAssign(&h_y, m);
    emlrtSetFieldR2017b(e_y, i, "rd", h_y, 1);
    i_y = nullptr;
    m = emlrtCreateNumericArray(1, (const void *)&i2, mxDOUBLE_CLASS, mxREAL);
    b_pData = emlrtMxGetPr(m);
    for (int32_T c_i{0}; c_i < 1000; c_i++) {
      b_pData[c_i] = u.factors[b_j0].nbr[c_i];
    }
    emlrtAssign(&i_y, m);
    emlrtSetFieldR2017b(e_y, i, "nbr", i_y, 2);
    emlrtSetFieldR2017b(e_y, i, "T", emlrt_marshallOut(u.factors[b_j0].T), 3);
    emlrtSetFieldR2017b(e_y, i, "E", emlrt_marshallOut(u.factors[b_j0].E), 4);
    emlrtSetFieldR2017b(e_y, i, "F", emlrt_marshallOut(u.factors[b_j0].F), 5);
    emlrtSetFieldR2017b(e_y, i, "L", emlrt_marshallOut(u.factors[b_j0].L), 6);
    emlrtSetFieldR2017b(e_y, i, "U", emlrt_marshallOut(u.factors[b_j0].U), 7);
    emlrtSetFieldR2017b(e_y, i, "C", emlrt_marshallOut(u.factors[b_j0].C), 8);
    emlrtSetFieldR2017b(e_y, i, "D", emlrt_marshallOut(u.factors[b_j0].D), 9);
    i++;
  }
  emlrtSetFieldR2017b(y, 0, "factors", e_y, 3);
  g_y = nullptr;
  m = emlrtCreateString1R2022a((emlrtCTX)&sp, u.symm);
  emlrtAssign(&g_y, m);
  emlrtSetFieldR2017b(y, 0, "symm", g_y, 4);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u[1000000])
{
  static const int32_T iv[2]{1000, 1000};
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T i;
  y = nullptr;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < 1000; b_i++) {
    for (int32_T c_i{0}; c_i < 1000; c_i++) {
      pData[i + c_i] = u[c_i + 1000 * b_i];
    }
    i += 1000;
  }
  emlrtAssign(&y, m);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId)
{
  l_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
}

static void f_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret[8000])
{
  static const int32_T dims{8000};
  real_T(*r)[8000];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 1U,
                          (const void *)&dims);
  r = (real_T(*)[8000])emlrtMxGetData(src);
  for (int32_T i{0}; i < 8000; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static real_T (*h_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[24000]
{
  static const int32_T dims[2]{3, 8000};
  real_T(*ret)[24000];
  int32_T iv[2];
  boolean_T bv[2]{false, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret = (real_T(*)[24000])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static char_T i_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  char_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "char", false, 0U,
                          (const void *)&dims);
  emlrtImportCharR2015b((emlrtCTX)&sp, src, &ret);
  emlrtDestroyArray(&src);
  return ret;
}

static boolean_T j_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  boolean_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "logical", false, 0U,
                          (const void *)&dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static int32_T k_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  int32_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "int32", false, 0U,
                          (const void *)&dims);
  ret = *static_cast<int32_T *>(emlrtMxGetData(src));
  emlrtDestroyArray(&src);
  return ret;
}

static void l_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims[2]{0, 0};
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  emlrtMxGetData(src);
  emlrtDestroyArray(&src);
}

void b_srskelf_asym_new_api(srskelf_asym_newStackData *SD,
                            const mxArray *const prhs[6], const mxArray **plhs)
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  struct1_T F;
  real_T(*x)[24000];
  real_T A_func_id;
  real_T occ;
  real_T pxyfun_func_id;
  real_T rank_or_tol;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  // Marshall function inputs
  A_func_id = emlrt_marshallIn(st, emlrtAliasP(prhs[0]), "A_func_id");
  x = b_emlrt_marshallIn(st, emlrtAlias(prhs[1]), "x");
  occ = emlrt_marshallIn(st, emlrtAliasP(prhs[2]), "occ");
  rank_or_tol = emlrt_marshallIn(st, emlrtAliasP(prhs[3]), "rank_or_tol");
  pxyfun_func_id = emlrt_marshallIn(st, emlrtAliasP(prhs[4]), "pxyfun_func_id");
  emlrt_marshallIn(st, emlrtAliasP(prhs[5]), "opts", SD->f5.opts);
  // Invoke the target function
  srskelf_asym_new(SD, &st, A_func_id, *x, occ, rank_or_tol, pxyfun_func_id,
                   &SD->f5.opts, &F);
  // Marshall function outputs
  *plhs = emlrt_marshallOut(st, F);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

// End of code generation (_coder_srskelf_asym_new_api.cpp)
