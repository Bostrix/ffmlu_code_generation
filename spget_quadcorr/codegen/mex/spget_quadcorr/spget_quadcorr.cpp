//
// spget_quadcorr.cpp
//
// Code generation for function 'spget_quadcorr'
//

// Include files
#include "spget_quadcorr.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sparse.h"
#include "spget_quadcorr_data.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstring>

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    11,               // lineNo
    "spget_quadcorr", // fcnName
    "/Users/abidrk/LocalStorage/Projects/ffmlu_optimize/fn-codegen/"
    "ffmlu_code_generation/spget_quadcorr/spget_quadcorr.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    14,               // lineNo
    "spget_quadcorr", // fcnName
    "/Users/abidrk/LocalStorage/Projects/ffmlu_optimize/fn-codegen/"
    "ffmlu_code_generation/spget_quadcorr/spget_quadcorr.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    16,               // lineNo
    "spget_quadcorr", // fcnName
    "/Users/abidrk/LocalStorage/Projects/ffmlu_optimize/fn-codegen/"
    "ffmlu_code_generation/spget_quadcorr/spget_quadcorr.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    37,     // lineNo
    "sort", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/datafun/sort.m" // pathName
};

static emlrtRSInfo x_emlrtRSI{
    250,                     // lineNo
    "sparse/parenReference", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" // pathName
};

static emlrtRSInfo y_emlrtRSI{
    20,                        // lineNo
    "sparse/parenReference2D", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenReference2D.m" // pathName
};

static emlrtRSInfo ab_emlrtRSI{
    81,                        // lineNo
    "parenReference2DColumns", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenReference2D.m" // pathName
};

static emlrtRSInfo bb_emlrtRSI{
    93,                        // lineNo
    "parenReference2DColumns", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenReference2D.m" // pathName
};

static emlrtRSInfo cb_emlrtRSI{
    104,                       // lineNo
    "parenReference2DColumns", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenReference2D.m" // pathName
};

static emlrtRSInfo db_emlrtRSI{
    1476,                 // lineNo
    "sparse/spallocLike", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" // pathName
};

static emlrtRSInfo fb_emlrtRSI{
    176,             // lineNo
    "sparse/sparse", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" // pathName
};

static emlrtRSInfo ib_emlrtRSI{
    31,     // lineNo
    "find", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo jb_emlrtRSI{
    138,        // lineNo
    "eml_find", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo kb_emlrtRSI{
    202,                           // lineNo
    "find_first_nonempty_triples", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo lb_emlrtRSI{
    205,                           // lineNo
    "find_first_nonempty_triples", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo mb_emlrtRSI{
    253,                           // lineNo
    "find_first_nonempty_triples", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo nb_emlrtRSI{
    254,                           // lineNo
    "find_first_nonempty_triples", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo ob_emlrtRSI{
    255,                           // lineNo
    "find_first_nonempty_triples", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtECInfo emlrtECI{
    -1,               // nDims
    24,               // lineNo
    5,                // colNo
    "spget_quadcorr", // fName
    "/Users/abidrk/LocalStorage/Projects/ffmlu_optimize/fn-codegen/"
    "ffmlu_code_generation/spget_quadcorr/spget_quadcorr.m" // pName
};

static emlrtRTEInfo emlrtRTEI{
    92,                        // lineNo
    1,                         // colNo
    "parenReference2DColumns", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenReference2D.m" // pName
};

static emlrtRTEInfo b_emlrtRTEI{
    11,                                   // lineNo
    27,                                   // colNo
    "sparse/sparse_validateNumericIndex", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/private/validateNumericIndex.m" // pName
};

static emlrtRTEInfo c_emlrtRTEI{
    12,                                   // lineNo
    27,                                   // colNo
    "sparse/sparse_validateNumericIndex", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/private/validateNumericIndex.m" // pName
};

static emlrtRTEInfo d_emlrtRTEI{
    1623,              // lineNo
    9,                 // colNo
    "assertValidSize", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" // pName
};

static emlrtRTEInfo e_emlrtRTEI{
    239,                           // lineNo
    1,                             // colNo
    "find_first_nonempty_triples", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtBCInfo emlrtBCI{
    1,                // iFirst
    8000,             // iLast
    12,               // lineNo
    5,                // colNo
    "P",              // aName
    "spget_quadcorr", // fName
    "/Users/abidrk/LocalStorage/Projects/ffmlu_optimize/fn-codegen/"
    "ffmlu_code_generation/spget_quadcorr/spget_quadcorr.m", // pName
    3                                                        // checkKind
};

static emlrtDCInfo emlrtDCI{
    12,               // lineNo
    5,                // colNo
    "spget_quadcorr", // fName
    "/Users/abidrk/LocalStorage/Projects/ffmlu_optimize/fn-codegen/"
    "ffmlu_code_generation/spget_quadcorr/spget_quadcorr.m", // pName
    1                                                        // checkKind
};

static emlrtDCInfo b_emlrtDCI{
    195,                           // lineNo
    30,                            // colNo
    "find_first_nonempty_triples", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/elmat/find.m", // pName
    4 // checkKind
};

static emlrtBCInfo b_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    33,                 // lineNo
    36,                 // colNo
    "elements_to_find", // aName
    "find_locations_t", // fName
    "/Users/abidrk/LocalStorage/Projects/ffmlu_optimize/fn-codegen/"
    "ffmlu_code_generation/spget_quadcorr/spget_quadcorr.m", // pName
    0                                                        // checkKind
};

static emlrtBCInfo c_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    38,                 // lineNo
    14,                 // colNo
    "locs",             // aName
    "find_locations_t", // fName
    "/Users/abidrk/LocalStorage/Projects/ffmlu_optimize/fn-codegen/"
    "ffmlu_code_generation/spget_quadcorr/spget_quadcorr.m", // pName
    0                                                        // checkKind
};

static emlrtBCInfo d_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    20,               // lineNo
    11,               // colNo
    "I",              // aName
    "spget_quadcorr", // fName
    "/Users/abidrk/LocalStorage/Projects/ffmlu_optimize/fn-codegen/"
    "ffmlu_code_generation/spget_quadcorr/spget_quadcorr.m", // pName
    0                                                        // checkKind
};

static emlrtBCInfo e_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    21,               // lineNo
    11,               // colNo
    "J",              // aName
    "spget_quadcorr", // fName
    "/Users/abidrk/LocalStorage/Projects/ffmlu_optimize/fn-codegen/"
    "ffmlu_code_generation/spget_quadcorr/spget_quadcorr.m", // pName
    0                                                        // checkKind
};

static emlrtBCInfo f_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    22,               // lineNo
    13,               // colNo
    "S_",             // aName
    "spget_quadcorr", // fName
    "/Users/abidrk/LocalStorage/Projects/ffmlu_optimize/fn-codegen/"
    "ffmlu_code_generation/spget_quadcorr/spget_quadcorr.m", // pName
    0                                                        // checkKind
};

static emlrtBCInfo g_emlrtBCI{
    1,                // iFirst
    8000,             // iLast
    24,               // lineNo
    9,                // colNo
    "P",              // aName
    "spget_quadcorr", // fName
    "/Users/abidrk/LocalStorage/Projects/ffmlu_optimize/fn-codegen/"
    "ffmlu_code_generation/spget_quadcorr/spget_quadcorr.m", // pName
    0                                                        // checkKind
};

static emlrtDCInfo c_emlrtDCI{
    24,               // lineNo
    7,                // colNo
    "spget_quadcorr", // fName
    "/Users/abidrk/LocalStorage/Projects/ffmlu_optimize/fn-codegen/"
    "ffmlu_code_generation/spget_quadcorr/spget_quadcorr.m", // pName
    1                                                        // checkKind
};

static emlrtBCInfo h_emlrtBCI{
    1,                // iFirst
    4095,             // iLast
    24,               // lineNo
    7,                // colNo
    "A",              // aName
    "spget_quadcorr", // fName
    "/Users/abidrk/LocalStorage/Projects/ffmlu_optimize/fn-codegen/"
    "ffmlu_code_generation/spget_quadcorr/spget_quadcorr.m", // pName
    3                                                        // checkKind
};

static emlrtRTEInfo h_emlrtRTEI{
    14,               // lineNo
    23,               // colNo
    "spget_quadcorr", // fName
    "/Users/abidrk/LocalStorage/Projects/ffmlu_optimize/fn-codegen/"
    "ffmlu_code_generation/spget_quadcorr/spget_quadcorr.m" // pName
};

static emlrtRTEInfo i_emlrtRTEI{
    195,    // lineNo
    24,     // colNo
    "find", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo j_emlrtRTEI{
    197,    // lineNo
    24,     // colNo
    "find", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo k_emlrtRTEI{
    199,    // lineNo
    24,     // colNo
    "find", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo l_emlrtRTEI{
    253,    // lineNo
    5,      // colNo
    "find", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo m_emlrtRTEI{
    254,    // lineNo
    5,      // colNo
    "find", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo n_emlrtRTEI{
    255,    // lineNo
    5,      // colNo
    "find", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo o_emlrtRTEI{
    247,    // lineNo
    17,     // colNo
    "find", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo p_emlrtRTEI{
    248,    // lineNo
    13,     // colNo
    "find", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo q_emlrtRTEI{
    249,    // lineNo
    13,     // colNo
    "find", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo r_emlrtRTEI{
    133,    // lineNo
    17,     // colNo
    "find", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo s_emlrtRTEI{
    134,    // lineNo
    13,     // colNo
    "find", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo t_emlrtRTEI{
    135,    // lineNo
    13,     // colNo
    "find", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo u_emlrtRTEI{
    16,               // lineNo
    5,                // colNo
    "spget_quadcorr", // fName
    "/Users/abidrk/LocalStorage/Projects/ffmlu_optimize/fn-codegen/"
    "ffmlu_code_generation/spget_quadcorr/spget_quadcorr.m" // pName
};

static emlrtRTEInfo v_emlrtRTEI{
    1,                // lineNo
    14,               // colNo
    "spget_quadcorr", // fName
    "/Users/abidrk/LocalStorage/Projects/ffmlu_optimize/fn-codegen/"
    "ffmlu_code_generation/spget_quadcorr/spget_quadcorr.m" // pName
};

static emlrtRTEInfo w_emlrtRTEI{
    24,               // lineNo
    14,               // colNo
    "spget_quadcorr", // fName
    "/Users/abidrk/LocalStorage/Projects/ffmlu_optimize/fn-codegen/"
    "ffmlu_code_generation/spget_quadcorr/spget_quadcorr.m" // pName
};

static emlrtRTEInfo x_emlrtRTEI{
    24,               // lineNo
    7,                // colNo
    "spget_quadcorr", // fName
    "/Users/abidrk/LocalStorage/Projects/ffmlu_optimize/fn-codegen/"
    "ffmlu_code_generation/spget_quadcorr/spget_quadcorr.m" // pName
};

static emlrtRSInfo qb_emlrtRSI{
    24,               // lineNo
    "spget_quadcorr", // fcnName
    "/Users/abidrk/LocalStorage/Projects/ffmlu_optimize/fn-codegen/"
    "ffmlu_code_generation/spget_quadcorr/spget_quadcorr.m" // pathName
};

// Function Declarations
static void binary_expand_op(const emlrtStack &sp,
                             coder::array<int32_T, 1U> &in1,
                             const real_T in2[8000],
                             const coder::array<int32_T, 1U> &in3,
                             const coder::array<real_T, 1U> &in4);

// Function Definitions
static void binary_expand_op(const emlrtStack &sp,
                             coder::array<int32_T, 1U> &in1,
                             const real_T in2[8000],
                             const coder::array<int32_T, 1U> &in3,
                             const coder::array<real_T, 1U> &in4)
{
  coder::array<int32_T, 1U> b_in2;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in4.size(0) == 1) {
    loop_ub = in3.size(0);
  } else {
    loop_ub = in4.size(0);
  }
  b_in2.set_size(&x_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in3.size(0) != 1);
  stride_1_0 = (in4.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    real_T d;
    d = in2[in1[in3[i * stride_0_0]] - 1] + in4[i * stride_1_0];
    if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
      emlrtIntegerCheckR2012b(d, &c_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > 4095)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 4095,
                                    &h_emlrtBCI, (emlrtConstCTX)&sp);
    }
    b_in2[i] = static_cast<int32_T>(d);
  }
  loop_ub = b_in2.size(0);
  in1.set_size(&x_emlrtRTEI, &sp, b_in2.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = b_in2[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void spget_quadcorr(const emlrtStack *sp, const real_T b_I[819],
                    const real_T J[5], real_T P[8000], const coder::sparse *S,
                    real_T A[4095])
{
  coder::sparse x;
  coder::array<real_T, 1U> idx;
  coder::array<real_T, 1U> v;
  coder::array<int32_T, 1U> c_I;
  coder::array<int32_T, 1U> j;
  coder::array<int32_T, 1U> r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  real_T y[819];
  real_T d;
  int32_T iidx[819];
  int32_T i;
  int32_T left;
  int32_T mid;
  int32_T nd;
  int32_T numalloc;
  int32_T right;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  SPGET_quadcorr(I,J,P,S) computes entries of a sparse matrix of near-field
  //  corrections that should be added to the kernel matrix, as used in
  //  AFUN. P is the permutation required for extracting near
  //  quadrature correction and is only used as a temporary array,
  //  and S stores the sparse matrix corresponding
  //  to the quadrature correction
  st.site = &emlrtRSI;
  std::copy(&b_I[0], &b_I[819], &y[0]);
  b_st.site = &d_emlrtRSI;
  coder::internal::sort(b_st, y, iidx);
  for (i = 0; i < 819; i++) {
    d = y[i];
    if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
      emlrtIntegerCheckR2012b(d, &emlrtDCI, &st);
    }
    if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > 8000)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 8000, &emlrtBCI,
                                    &st);
    }
    P[static_cast<int32_T>(d) - 1] = iidx[i];
  }
  std::memset(&A[0], 0, 4095U * sizeof(real_T));
  st.site = &b_emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &x_emlrtRSI;
  d_st.site = &y_emlrtRSI;
  e_st.site = &ab_emlrtRSI;
  for (mid = 0; mid < 5; mid++) {
    d = J[mid];
    if ((!(muDoubleScalarFloor(d) == d)) || muDoubleScalarIsInf(d) ||
        (!(d > 0.0))) {
      emlrtErrorWithMessageIdR2018a(&e_st, &b_emlrtRTEI,
                                    "Coder:MATLAB:badsubscript",
                                    "Coder:MATLAB:badsubscript", 0);
    }
    if (!(d <= 8000.0)) {
      emlrtErrorWithMessageIdR2018a(
          &e_st, &c_emlrtRTEI, "Coder:builtins:IndexOutOfBounds",
          "Coder:builtins:IndexOutOfBounds", 6, 6, d, 12, 1, 12, 8000);
    }
  }
  nd = 0;
  for (int32_T cidx{0}; cidx < 5; cidx++) {
    numalloc = static_cast<int32_T>(J[cidx]);
    nd = (nd + S->colidx[numalloc]) - S->colidx[numalloc - 1];
  }
  if (nd > 40000) {
    emlrtErrorWithMessageIdR2018a(&d_st, &emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  e_st.site = &bb_emlrtRSI;
  f_st.site = &db_emlrtRSI;
  g_st.site = &fb_emlrtRSI;
  if (nd < 0) {
    emlrtErrorWithMessageIdR2018a(&g_st, &d_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  numalloc = muIntScalarMax_sint32(nd, 1);
  x.d.set_size(&h_emlrtRTEI, &f_st, numalloc);
  for (i = 0; i < numalloc; i++) {
    x.d[i] = 0.0;
  }
  x.colidx.set_size(&h_emlrtRTEI, &f_st, 6);
  for (i = 0; i < 6; i++) {
    x.colidx[i] = 0;
  }
  x.colidx[0] = 1;
  x.rowidx.set_size(&h_emlrtRTEI, &f_st, numalloc);
  for (i = 0; i < numalloc; i++) {
    x.rowidx[i] = 0;
  }
  for (numalloc = 0; numalloc < 5; numalloc++) {
    x.colidx[numalloc + 1] = 1;
  }
  for (numalloc = 0; numalloc < 5; numalloc++) {
    x.colidx[numalloc] = 1;
  }
  x.colidx[5] = 1;
  if (nd != 0) {
    nd = 0;
    for (int32_T cidx{0}; cidx < 5; cidx++) {
      numalloc = static_cast<int32_T>(J[cidx]);
      left = S->colidx[numalloc - 1];
      numalloc = S->colidx[numalloc] - left;
      e_st.site = &cb_emlrtRSI;
      if (numalloc > 2147483646) {
        f_st.site = &n_emlrtRSI;
        coder::check_forloop_overflow_error(f_st);
      }
      for (mid = 0; mid < numalloc; mid++) {
        i = (left + mid) - 1;
        right = nd + mid;
        x.d[right] = S->d[i];
        x.rowidx[right] = S->rowidx[i];
      }
      if (numalloc - 1 >= 0) {
        nd += numalloc;
      }
      x.colidx[cidx + 1] = x.colidx[cidx] + numalloc;
    }
  }
  b_st.site = &ib_emlrtRSI;
  nd = x.colidx[5] - 2;
  if (x.colidx[5] - 1 == 0) {
    c_I.set_size(&r_emlrtRTEI, &b_st, 0);
    j.set_size(&s_emlrtRTEI, &b_st, 0);
    v.set_size(&t_emlrtRTEI, &b_st, 0);
  } else {
    c_st.site = &jb_emlrtRSI;
    if (x.colidx[5] - 1 < 0) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(x.colidx[5] - 1),
                                  &b_emlrtDCI, &c_st);
    }
    c_I.set_size(&i_emlrtRTEI, &c_st, x.colidx[5] - 1);
    j.set_size(&j_emlrtRTEI, &c_st, x.colidx[5] - 1);
    v.set_size(&k_emlrtRTEI, &c_st, x.colidx[5] - 1);
    d_st.site = &kb_emlrtRSI;
    if (x.colidx[5] - 1 > 2147483646) {
      e_st.site = &n_emlrtRSI;
      coder::check_forloop_overflow_error(e_st);
    }
    for (left = 0; left <= nd; left++) {
      c_I[left] = x.rowidx[left];
    }
    d_st.site = &lb_emlrtRSI;
    if (x.colidx[5] - 1 > 2147483646) {
      e_st.site = &n_emlrtRSI;
      coder::check_forloop_overflow_error(e_st);
    }
    for (numalloc = 0; numalloc <= nd; numalloc++) {
      v[numalloc] = x.d[numalloc];
    }
    left = 0;
    numalloc = 1;
    while (left < nd + 1) {
      if (left == x.colidx[numalloc] - 1) {
        numalloc++;
      } else {
        left++;
        j[left - 1] = numalloc;
      }
    }
    if (left > x.colidx[5] - 1) {
      emlrtErrorWithMessageIdR2018a(&c_st, &e_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (x.colidx[5] - 1 == 1) {
      if (left == 0) {
        c_I.set_size(&o_emlrtRTEI, &c_st, 0);
        j.set_size(&p_emlrtRTEI, &c_st, 0);
        v.set_size(&q_emlrtRTEI, &c_st, 0);
      }
    } else {
      int32_T iv[2];
      iv[0] = 1;
      iv[1] = left;
      d_st.site = &mb_emlrtRSI;
      coder::internal::indexShapeCheck(d_st, c_I.size(0), iv);
      c_I.set_size(&l_emlrtRTEI, &c_st, left);
      iv[0] = 1;
      iv[1] = left;
      d_st.site = &nb_emlrtRSI;
      coder::internal::indexShapeCheck(d_st, j.size(0), iv);
      j.set_size(&m_emlrtRTEI, &c_st, left);
      iv[0] = 1;
      iv[1] = left;
      d_st.site = &ob_emlrtRSI;
      coder::internal::indexShapeCheck(d_st, v.size(0), iv);
      v.set_size(&n_emlrtRTEI, &c_st, left);
    }
  }
  st.site = &c_emlrtRSI;
  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  //  Initialize an empty array to store the locations
  numalloc = c_I.size(0);
  idx.set_size(&u_emlrtRTEI, &st, c_I.size(0));
  for (i = 0; i < numalloc; i++) {
    idx[i] = 0.0;
  }
  //  Iterate over each element to find
  for (int32_T cidx{0}; cidx < numalloc; cidx++) {
    if (cidx + 1 > numalloc) {
      emlrtDynamicBoundsCheckR2012b(cidx + 1, 1, numalloc, &b_emlrtBCI, &st);
    }
    nd = c_I[cidx];
    //  Use the local function binary_search to find the location of the element
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    //  Initialize the bounds for the search
    left = 1;
    right = 819;
    //  Perform the binary search
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (left <= right) {
        //  Calculate the midpoint
        mid = static_cast<int32_T>(muDoubleScalarFloor(
                  static_cast<real_T>(left + right) / 2.0)) -
              1;
        //  Check if the target is found
        i = static_cast<int16_T>(y[mid]);
        if (i == nd) {
          if (cidx + 1 > idx.size(0)) {
            emlrtDynamicBoundsCheckR2012b(cidx + 1, 1, idx.size(0), &c_emlrtBCI,
                                          &st);
          }
          idx[cidx] = static_cast<real_T>(mid) + 1.0;
          exitg1 = 1;
        } else {
          if (i < nd) {
            left = mid + 2;
          } else {
            right = mid;
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
      } else {
        //  If the element is not found, return -1
        if (cidx + 1 > idx.size(0)) {
          emlrtDynamicBoundsCheckR2012b(cidx + 1, 1, idx.size(0), &c_emlrtBCI,
                                        &st);
        }
        idx[cidx] = -1.0;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
    //  If the element is found (location is not -1), add it to the locs array
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  //  Replace ismembc with custom function
  //  Filter out invalid indices
  nd = idx.size(0) - 1;
  numalloc = 0;
  for (int32_T cidx{0}; cidx <= nd; cidx++) {
    if (idx[cidx] > 0.0) {
      numalloc++;
    }
  }
  r.set_size(&v_emlrtRTEI, sp, numalloc);
  numalloc = 0;
  for (int32_T cidx{0}; cidx <= nd; cidx++) {
    if (idx[cidx] > 0.0) {
      r[numalloc] = cidx;
      numalloc++;
    }
  }
  numalloc = r.size(0);
  for (i = 0; i < numalloc; i++) {
    if (r[i] > c_I.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r[i], 0, c_I.size(0) - 1, &d_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
  }
  for (i = 0; i < numalloc; i++) {
    if (r[i] > j.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r[i], 0, j.size(0) - 1, &e_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
  }
  for (i = 0; i < numalloc; i++) {
    if (r[i] > v.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(r[i], 0, v.size(0) - 1, &f_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
  }
  for (i = 0; i < numalloc; i++) {
    right = c_I[r[i]];
    if ((right < 1) || (right > 8000)) {
      emlrtDynamicBoundsCheckR2012b(right, 1, 8000, &g_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
  }
  idx.set_size(&w_emlrtRTEI, sp, r.size(0));
  for (i = 0; i < numalloc; i++) {
    idx[i] = (static_cast<real_T>(j[r[i]]) - 1.0) * 819.0;
  }
  if (r.size(0) == idx.size(0)) {
    j.set_size(&x_emlrtRTEI, sp, r.size(0));
    for (i = 0; i < numalloc; i++) {
      d = P[c_I[r[i]] - 1] + idx[i];
      if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
        emlrtIntegerCheckR2012b(d, &c_emlrtDCI, (emlrtConstCTX)sp);
      }
      if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > 4095)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 4095,
                                      &h_emlrtBCI, (emlrtConstCTX)sp);
      }
      j[i] = static_cast<int32_T>(d);
    }
    numalloc = j.size(0);
    c_I.set_size(&x_emlrtRTEI, sp, j.size(0));
    for (i = 0; i < numalloc; i++) {
      c_I[i] = j[i];
    }
  } else {
    st.site = &qb_emlrtRSI;
    binary_expand_op(st, c_I, P, r, idx);
  }
  numalloc = r.size(0);
  if (c_I.size(0) != r.size(0)) {
    emlrtSubAssignSizeCheck1dR2017a(c_I.size(0), r.size(0), &emlrtECI,
                                    (emlrtConstCTX)sp);
  }
  for (i = 0; i < numalloc; i++) {
    A[c_I[i] - 1] = v[r[i]];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (spget_quadcorr.cpp)
