//
// _coder_spget_api.cpp
//
// Code generation for function '_coder_spget_api'
//

// Include files
#include "_coder_spget_api.h"
#include "rt_nonfinite.h"
#include "spget.h"
#include "spget_data.h"
#include "spget_types.h"
#include "coder_array.h"
#include "coder_bounded_array.h"

// Function Declarations
static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static real_T (*b_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[110];

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[3]);

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[3]);

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y_data[], int32_T y_size[2]);

static real_T (*c_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[980];

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[6]);

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y_data[], int32_T y_size[2]);

static real_T (*d_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[2072];

static char_T d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[3]);

static void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y_data[], int32_T y_size[2]);

static real_T e_emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                                 const char_T *identifier);

static void e_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y_data[], int32_T y_size[2]);

static real_T (*e_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[1032];

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, char_T y[3]);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                             const char_T *identifier, char_T y[3]);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                             const char_T *identifier, struct0_T &y);

static real_T emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static real_T (*emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                                 const char_T *identifier))[1032];

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, real_T y[6]);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct0_T &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                             const char_T *identifier, struct2_T &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct2_T &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             struct3_T y[1032]);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             real_T y_data[], int32_T y_size[2]);

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 2U> &u);

static void f_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y_data[], int32_T y_size[2]);

static real_T (*f_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[110];

static struct4_T f_emlrt_marshallIn(const emlrtStack &sp,
                                    const mxArray *b_nullptr,
                                    const char_T *identifier);

static void g_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret_data[], int32_T ret_size[2]);

static real_T (*g_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[980];

static void h_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret_data[], int32_T ret_size[2]);

static real_T (*h_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[2072];

static void i_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret_data[], int32_T ret_size[2]);

static struct4_T i_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static boolean_T j_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static void j_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret_data[], int32_T ret_size[2]);

static real_T k_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static void k_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret_data[], int32_T ret_size[2]);

static void l_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId);

static void l_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret_data[], int32_T ret_size[2]);

static char_T m_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static real_T (*n_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[1032];

static real_T (*o_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[110];

static real_T (*p_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[980];

static real_T (*q_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[2072];

static boolean_T r_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId);

// Function Definitions
static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[3])
{
  static const int32_T dims[2]{1, 3};
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "char", false, 2U,
                          (const void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtConstCTX)&sp, src, &ret[0], 3);
  emlrtDestroyArray(&src);
}

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims{1032};
  static const char_T *fieldNames[10]{"sk", "rd", "nbr", "T", "E",
                                      "F",  "L",  "U",   "C", "D"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)&sp, parentId, u, 10,
                         (const char_T **)&fieldNames[0], 1U,
                         (const void *)&dims);
  for (int32_T i{0}; i < 1032; i++) {
    thisId.fIdentifier = "sk";
    c_emlrt_marshallIn(
        sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, i, 0, "sk")),
        &thisId);
    thisId.fIdentifier = "rd";
    c_emlrt_marshallIn(
        sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, i, 1, "rd")),
        &thisId);
    thisId.fIdentifier = "nbr";
    c_emlrt_marshallIn(
        sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, i, 2, "nbr")),
        &thisId);
    thisId.fIdentifier = "T";
    c_emlrt_marshallIn(
        sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, i, 3, "T")),
        &thisId);
    thisId.fIdentifier = "E";
    c_emlrt_marshallIn(
        sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, i, 4, "E")),
        &thisId);
    thisId.fIdentifier = "F";
    c_emlrt_marshallIn(
        sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, i, 5, "F")),
        &thisId);
    thisId.fIdentifier = "L";
    c_emlrt_marshallIn(
        sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, i, 6, "L")),
        &thisId);
    thisId.fIdentifier = "U";
    c_emlrt_marshallIn(
        sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, i, 7, "U")),
        &thisId);
    thisId.fIdentifier = "C";
    c_emlrt_marshallIn(
        sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, i, 8, "C")),
        &thisId);
    thisId.fIdentifier = "D";
    c_emlrt_marshallIn(
        sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, i, 9, "D")),
        &thisId);
  }
  emlrtDestroyArray(&u);
}

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y_data[], int32_T y_size[2])
{
  h_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static real_T (*b_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[110]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[110];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[3])
{
  d_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[6])
{
  static const int32_T dims[2]{1, 6};
  real_T(*r)[6];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[6])emlrtMxGetData(src);
  for (int32_T i{0}; i < 6; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId)
{
  l_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
}

static real_T (*c_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[980]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[980];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = g_emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y_data[], int32_T y_size[2])
{
  i_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static char_T d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  char_T y;
  y = m_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y_data[], int32_T y_size[2])
{
  j_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[3])
{
  static const int32_T dims[2]{1, 3};
  real_T(*r)[3];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[3])emlrtMxGetData(src);
  ret[0] = (*r)[0];
  ret[1] = (*r)[1];
  ret[2] = (*r)[2];
  emlrtDestroyArray(&src);
}

static real_T (*d_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[2072]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[2072];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[1032]
{
  real_T(*y)[1032];
  y = n_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T e_emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                                 const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y_data[], int32_T y_size[2])
{
  k_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             real_T y_data[], int32_T y_size[2])
{
  g_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                             const char_T *identifier, char_T y[3])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId, y);
  emlrtDestroyArray(&b_nullptr);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, real_T y[6])
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, char_T y[3])
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
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

static real_T emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = k_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct0_T &y)
{
  static const int32_T dims{0};
  static const char_T *fieldNames[5]{"N", "nlvl", "lvp", "factors", "symm"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)&sp, parentId, u, 5,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "N";
  y.N = emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 0, "N")),
      &thisId);
  thisId.fIdentifier = "nlvl";
  y.nlvl = emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 1, "nlvl")),
      &thisId);
  thisId.fIdentifier = "lvp";
  emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 2, "lvp")),
      &thisId, y.lvp);
  thisId.fIdentifier = "factors";
  b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 3, "factors")),
      &thisId);
  thisId.fIdentifier = "symm";
  y.symm = d_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 4, "symm")),
      &thisId);
  emlrtDestroyArray(&u);
}

static real_T (*emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                                 const char_T *identifier))[1032]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[1032];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = e_emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                             const char_T *identifier, struct2_T &y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId, y);
  emlrtDestroyArray(&b_nullptr);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct2_T &y)
{
  static const int32_T dims{0};
  static const char_T *fieldNames[4]{"nlvl", "lvp", "lrt", "nodes"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)&sp, parentId, u, 4,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "nlvl";
  y.nlvl = emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 0, "nlvl")),
      &thisId);
  thisId.fIdentifier = "lvp";
  emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 1, "lvp")),
      &thisId, y.lvp);
  thisId.fIdentifier = "lrt";
  y.lrt = emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 2, "lrt")),
      &thisId);
  thisId.fIdentifier = "nodes";
  emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 3, "nodes")),
      &thisId, y.nodes);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             struct3_T y[1032])
{
  static const int32_T dims{1032};
  static const char_T *fieldNames[7]{"ctr",  "xi",    "prnt", "chld",
                                     "nbor", "ilist", "snbor"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)&sp, parentId, u, 7,
                         (const char_T **)&fieldNames[0], 1U,
                         (const void *)&dims);
  for (int32_T i{0}; i < 1032; i++) {
    thisId.fIdentifier = "ctr";
    b_emlrt_marshallIn(
        sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, i, 0, "ctr")),
        &thisId, y[i].ctr);
    thisId.fIdentifier = "xi";
    emlrt_marshallIn(
        sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, i, 1, "xi")),
        &thisId, y[i].xi.data, y[i].xi.size);
    thisId.fIdentifier = "prnt";
    b_emlrt_marshallIn(
        sp,
        emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, i, 2, "prnt")),
        &thisId, y[i].prnt.data, y[i].prnt.size);
    thisId.fIdentifier = "chld";
    c_emlrt_marshallIn(
        sp,
        emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, i, 3, "chld")),
        &thisId, y[i].chld.data, y[i].chld.size);
    thisId.fIdentifier = "nbor";
    d_emlrt_marshallIn(
        sp,
        emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, i, 4, "nbor")),
        &thisId, y[i].nbor.data, y[i].nbor.size);
    thisId.fIdentifier = "ilist";
    e_emlrt_marshallIn(
        sp,
        emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, i, 5, "ilist")),
        &thisId, y[i].ilist.data, y[i].ilist.size);
    thisId.fIdentifier = "snbor";
    f_emlrt_marshallIn(
        sp,
        emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, i, 6, "snbor")),
        &thisId, y[i].snbor.data, y[i].snbor.size);
  }
  emlrtDestroyArray(&u);
}

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 2U> &u)
{
  static const int32_T iv[2]{0, 0};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, &(((coder::array<real_T, 2U> *)&u)->data())[0]);
  emlrtSetDimensions((mxArray *)m, ((coder::array<real_T, 2U> *)&u)->size(), 2);
  emlrtAssign(&y, m);
  return y;
}

static struct4_T f_emlrt_marshallIn(const emlrtStack &sp,
                                    const mxArray *b_nullptr,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  struct4_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = i_emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y_data[], int32_T y_size[2])
{
  l_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static real_T (*f_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[110]
{
  real_T(*y)[110];
  y = o_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*g_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[980]
{
  real_T(*y)[980];
  y = p_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void g_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret_data[], int32_T ret_size[2])
{
  static const int32_T dims[2]{1, 254};
  int32_T iv[2];
  boolean_T bv[2]{true, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret_size[0] = iv[0];
  ret_size[1] = iv[1];
  emlrtImportArrayR2015b((emlrtConstCTX)&sp, src, &ret_data[0], 8, false);
  emlrtDestroyArray(&src);
}

static real_T (*h_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[2072]
{
  real_T(*y)[2072];
  y = q_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void h_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret_data[], int32_T ret_size[2])
{
  static const int32_T dims[2]{1, 1};
  int32_T iv[2];
  boolean_T bv[2]{true, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret_size[0] = iv[0];
  ret_size[1] = iv[1];
  emlrtImportArrayR2015b((emlrtConstCTX)&sp, src, &ret_data[0], 8, false);
  emlrtDestroyArray(&src);
}

static struct4_T i_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims{0};
  static const char_T *fieldNames[4]{"verb", "symm", "zk", "lap_proxy"};
  emlrtMsgIdentifier thisId;
  struct4_T y;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)&sp, parentId, u, 4,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "verb";
  y.verb = emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 0, "verb")),
      &thisId);
  thisId.fIdentifier = "symm";
  y.symm = d_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 1, "symm")),
      &thisId);
  thisId.fIdentifier = "zk";
  y.zk = emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 2, "zk")),
      &thisId);
  thisId.fIdentifier = "lap_proxy";
  y.lap_proxy = j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 3, "lap_proxy")),
      &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static void i_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret_data[], int32_T ret_size[2])
{
  static const int32_T dims[2]{1, 8};
  int32_T iv[2];
  boolean_T bv[2]{true, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret_size[0] = iv[0];
  ret_size[1] = iv[1];
  emlrtImportArrayR2015b((emlrtConstCTX)&sp, src, &ret_data[0], 8, false);
  emlrtDestroyArray(&src);
}

static boolean_T j_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = r_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void j_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret_data[], int32_T ret_size[2])
{
  static const int32_T dims[2]{1, 21};
  int32_T iv[2];
  boolean_T bv[2]{true, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret_size[0] = iv[0];
  ret_size[1] = iv[1];
  emlrtImportArrayR2015b((emlrtConstCTX)&sp, src, &ret_data[0], 8, false);
  emlrtDestroyArray(&src);
}

static void k_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret_data[], int32_T ret_size[2])
{
  static const int32_T dims[2]{1, 39};
  int32_T iv[2];
  boolean_T bv[2]{true, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret_size[0] = iv[0];
  ret_size[1] = iv[1];
  emlrtImportArrayR2015b((emlrtConstCTX)&sp, src, &ret_data[0], 8, false);
  emlrtDestroyArray(&src);
}

static real_T k_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
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

static void l_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret_data[], int32_T ret_size[2])
{
  static const int32_T dims[2]{1, 38};
  int32_T iv[2];
  boolean_T bv[2]{true, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret_size[0] = iv[0];
  ret_size[1] = iv[1];
  emlrtImportArrayR2015b((emlrtConstCTX)&sp, src, &ret_data[0], 8, false);
  emlrtDestroyArray(&src);
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

static char_T m_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
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

static real_T (*n_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[1032]
{
  static const int32_T dims{1032};
  real_T(*ret)[1032];
  int32_T i;
  boolean_T b{false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 1U,
                            (const void *)&dims, &b, &i);
  ret = (real_T(*)[1032])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*o_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[110]
{
  static const int32_T dims[2]{1, 110};
  real_T(*ret)[110];
  int32_T iv[2];
  boolean_T bv[2]{false, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret = (real_T(*)[110])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*p_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[980]
{
  static const int32_T dims[2]{1, 980};
  real_T(*ret)[980];
  int32_T iv[2];
  boolean_T bv[2]{false, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret = (real_T(*)[980])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*q_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[2072]
{
  static const int32_T dims[2]{1, 2072};
  real_T(*ret)[2072];
  int32_T iv[2];
  boolean_T bv[2]{false, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret = (real_T(*)[2072])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static boolean_T r_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
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

void b_spget_api(spgetStackData *SD, const mxArray *const prhs[14],
                 const mxArray **plhs)
{
  coder::array<real_T, 2U> A;
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  struct0_T F;
  struct4_T opts;
  real_T(*lst)[2072];
  real_T(*lookup_list)[1032];
  real_T(*nbr)[980];
  real_T(*slf)[110];
  real_T i;
  real_T nbox;
  real_T nlst;
  real_T nnbr;
  real_T nslf;
  char_T Ityp[3];
  char_T Jtyp[3];
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  // Marshall function inputs
  emlrt_marshallIn(st, emlrtAliasP(prhs[0]), "Ityp", Ityp);
  emlrt_marshallIn(st, emlrtAliasP(prhs[1]), "Jtyp", Jtyp);
  emlrt_marshallIn(st, emlrtAliasP(prhs[2]), "F", F);
  lookup_list = emlrt_marshallIn(st, emlrtAlias(prhs[3]), "lookup_list");
  slf = b_emlrt_marshallIn(st, emlrtAlias(prhs[4]), "slf");
  nbr = c_emlrt_marshallIn(st, emlrtAlias(prhs[5]), "nbr");
  lst = d_emlrt_marshallIn(st, emlrtAlias(prhs[6]), "lst");
  nslf = e_emlrt_marshallIn(st, emlrtAliasP(prhs[7]), "nslf");
  nnbr = e_emlrt_marshallIn(st, emlrtAliasP(prhs[8]), "nnbr");
  nlst = e_emlrt_marshallIn(st, emlrtAliasP(prhs[9]), "nlst");
  nbox = e_emlrt_marshallIn(st, emlrtAliasP(prhs[10]), "nbox");
  emlrt_marshallIn(st, emlrtAliasP(prhs[11]), "t", SD->f0.t);
  i = e_emlrt_marshallIn(st, emlrtAliasP(prhs[12]), "i");
  opts = f_emlrt_marshallIn(st, emlrtAliasP(prhs[13]), "opts");
  // Invoke the target function
  spget(&st, Ityp, Jtyp, &F, *lookup_list, *slf, *nbr, *lst, nslf, nnbr, nlst,
        nbox, &SD->f0.t, i, &opts, A);
  // Marshall function outputs
  A.no_free();
  *plhs = emlrt_marshallOut(A);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

// End of code generation (_coder_spget_api.cpp)
