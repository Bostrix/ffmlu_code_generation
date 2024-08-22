//
// spget.cpp
//
// Code generation for function 'spget'
//

// Include files
#include "spget.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "spget_data.h"
#include "spget_types.h"
#include "strcmp.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    8,       // lineNo
    "spget", // fcnName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    11,      // lineNo
    "spget", // fcnName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    14,      // lineNo
    "spget", // fcnName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    18,      // lineNo
    "spget", // fcnName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    21,      // lineNo
    "spget", // fcnName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    24,      // lineNo
    "spget", // fcnName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m" // pathName
};

static emlrtRSInfo g_emlrtRSI{
    27,      // lineNo
    "spget", // fcnName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    31,      // lineNo
    "spget", // fcnName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m" // pathName
};

static emlrtRSInfo i_emlrtRSI{
    37,      // lineNo
    "spget", // fcnName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m" // pathName
};

static emlrtRSInfo j_emlrtRSI{
    40,      // lineNo
    "spget", // fcnName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m" // pathName
};

static emlrtRSInfo k_emlrtRSI{
    54,      // lineNo
    "spget", // fcnName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m" // pathName
};

static emlrtRSInfo l_emlrtRSI{
    56,      // lineNo
    "spget", // fcnName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m" // pathName
};

static emlrtRSInfo m_emlrtRSI{
    63,      // lineNo
    "spget", // fcnName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m" // pathName
};

static emlrtRSInfo n_emlrtRSI{
    65,      // lineNo
    "spget", // fcnName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m" // pathName
};

static emlrtRSInfo o_emlrtRSI{
    71,      // lineNo
    "spget", // fcnName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m" // pathName
};

static emlrtRSInfo p_emlrtRSI{
    72,      // lineNo
    "spget", // fcnName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m" // pathName
};

static emlrtRSInfo q_emlrtRSI{
    85,      // lineNo
    "spget", // fcnName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m" // pathName
};

static emlrtRSInfo r_emlrtRSI{
    87,      // lineNo
    "spget", // fcnName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m" // pathName
};

static emlrtRSInfo v_emlrtRSI{
    241,       // lineNo
    "charcmp", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/strcmp.m" // pathName
};

static emlrtRSInfo ab_emlrtRSI{
    102,                     // lineNo
    "spget/get_update_list", // fcnName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m" // pathName
};

static emlrtRSInfo bb_emlrtRSI{
    39,                                                            // lineNo
    "find",                                                        // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo cb_emlrtRSI{
    144,                                                           // lineNo
    "eml_find",                                                    // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo db_emlrtRSI{
    382,                                                           // lineNo
    "find_first_indices",                                          // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo eb_emlrtRSI{
    402,                                                           // lineNo
    "find_first_indices",                                          // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo fb_emlrtRSI{
    20,                               // lineNo
    "eml_int_forloop_overflow_check", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/eml/"
    "eml_int_forloop_overflow_check.m" // pathName
};

static emlrtRSInfo hb_emlrtRSI{
    37,                                                            // lineNo
    "flip",                                                        // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/flip.m" // pathName
};

static emlrtMCInfo emlrtMCI{
    27,                                                            // lineNo
    5,                                                             // colNo
    "error",                                                       // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/lang/error.m" // pName
};

static emlrtRTEInfo b_emlrtRTEI{
    392,                                                           // lineNo
    1,                                                             // colNo
    "find_first_indices",                                          // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtBCInfo emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    114,                // lineNo
    36,                 // colNo
    "elements_to_find", // aName
    "find_locations_t", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m", // pName
    0          // checkKind
};

static emlrtBCInfo b_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    49,            // lineNo
    26,            // colNo
    "update_list", // aName
    "spget",       // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m", // pName
    0          // checkKind
};

static emlrtDCInfo emlrtDCI{
    36,      // lineNo
    25,      // colNo
    "spget", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m", // pName
    1          // checkKind
};

static emlrtDCInfo b_emlrtDCI{
    36,      // lineNo
    25,      // colNo
    "spget", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m", // pName
    4          // checkKind
};

static emlrtDCInfo c_emlrtDCI{
    35,      // lineNo
    15,      // colNo
    "spget", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m", // pName
    1          // checkKind
};

static emlrtDCInfo d_emlrtDCI{
    35,      // lineNo
    15,      // colNo
    "spget", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m", // pName
    4          // checkKind
};

static emlrtDCInfo e_emlrtDCI{
    35,      // lineNo
    19,      // colNo
    "spget", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m", // pName
    1          // checkKind
};

static emlrtDCInfo f_emlrtDCI{
    35,      // lineNo
    19,      // colNo
    "spget", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m", // pName
    4          // checkKind
};

static emlrtDCInfo g_emlrtDCI{
    35,      // lineNo
    5,       // colNo
    "spget", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m", // pName
    1          // checkKind
};

static emlrtBCInfo c_emlrtBCI{
    1,             // iFirst
    1032,          // iLast
    40,            // lineNo
    31,            // colNo
    "lookup_list", // aName
    "spget",       // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m", // pName
    0          // checkKind
};

static emlrtBCInfo d_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    41,            // lineNo
    31,            // colNo
    "update_list", // aName
    "spget",       // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m", // pName
    0          // checkKind
};

static emlrtBCInfo e_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    101,                     // lineNo
    28,                      // colNo
    "chld_nodes",            // aName
    "spget/get_update_list", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m", // pName
    0          // checkKind
};

static emlrtBCInfo f_emlrtBCI{
    1,                       // iFirst
    1032,                    // iLast
    96,                      // lineNo
    29,                      // colNo
    "t.nodes",               // aName
    "spget/get_update_list", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m", // pName
    0          // checkKind
};

static emlrtBCInfo g_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    95,                      // lineNo
    21,                      // colNo
    "update_list",           // aName
    "spget/get_update_list", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m", // pName
    0          // checkKind
};

static emlrtDCInfo h_emlrtDCI{
    95,                      // lineNo
    21,                      // colNo
    "spget/get_update_list", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m", // pName
    1          // checkKind
};

static emlrtDCInfo i_emlrtDCI{
    96,                      // lineNo
    21,                      // colNo
    "spget/get_update_list", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m", // pName
    1          // checkKind
};

static emlrtBCInfo h_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    96,                      // lineNo
    21,                      // colNo
    "update_list",           // aName
    "spget/get_update_list", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m", // pName
    0          // checkKind
};

static emlrtRTEInfo e_emlrtRTEI{
    35,      // lineNo
    5,       // colNo
    "spget", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m" // pName
};

static emlrtRTEInfo f_emlrtRTEI{
    37,      // lineNo
    5,       // colNo
    "spget", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m" // pName
};

static emlrtRTEInfo g_emlrtRTEI{
    369,                                                           // lineNo
    24,                                                            // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo h_emlrtRTEI{
    39,                                                            // lineNo
    5,                                                             // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo i_emlrtRTEI{
    40,      // lineNo
    36,      // colNo
    "spget", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m" // pName
};

static emlrtRTEInfo j_emlrtRTEI{
    1,       // lineNo
    14,      // colNo
    "spget", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/spget/"
    "spget.m" // pName
};

static emlrtRSInfo ib_emlrtRSI{
    27,                                                            // lineNo
    "error",                                                       // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/lang/error.m" // pathName
};

// Function Declarations
static void b_error(const emlrtStack &sp, const mxArray *m,
                    emlrtMCInfo &location);

static void get_update_list(const emlrtStack *sp,
                            coder::array<boolean_T, 1U> &update_list,
                            real_T node_idx, const struct3_T t_nodes[1032]);

// Function Definitions
static void b_error(const emlrtStack &sp, const mxArray *m,
                    emlrtMCInfo &location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtConstCTX)&sp, 0, nullptr, 1, &pArray, "error",
                        true, &location);
}

static void get_update_list(const emlrtStack *sp,
                            coder::array<boolean_T, 1U> &update_list,
                            real_T node_idx, const struct3_T t_nodes[1032])
{
  emlrtStack st;
  int32_T tmp_data[38];
  int32_T b_update_list;
  int32_T i;
  int32_T loop_ub;
  int32_T tmp_size_idx_0;
  int32_T tmp_size_idx_1;
  st.prev = sp;
  st.tls = sp->tls;
  if (*emlrtBreakCheckR2012bFlagVar != 0) {
    emlrtBreakCheckR2012b((emlrtConstCTX)sp);
  }
  i = update_list.size(0);
  if (node_idx != static_cast<int32_T>(muDoubleScalarFloor(node_idx))) {
    emlrtIntegerCheckR2012b(node_idx, &h_emlrtDCI, (emlrtConstCTX)sp);
  }
  if ((static_cast<int32_T>(node_idx) < 1) ||
      (static_cast<int32_T>(node_idx) > i)) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(node_idx), 1, i,
                                  &g_emlrtBCI, (emlrtConstCTX)sp);
  }
  update_list[static_cast<int32_T>(node_idx) - 1] = true;
  //  Ensure this remains logical
  if ((static_cast<int32_T>(node_idx) < 1) ||
      (static_cast<int32_T>(node_idx) > 1032)) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(node_idx), 1, 1032,
                                  &f_emlrtBCI, (emlrtConstCTX)sp);
  }
  tmp_size_idx_0 = t_nodes[static_cast<int32_T>(node_idx) - 1].snbor.size[0];
  tmp_size_idx_1 = t_nodes[static_cast<int32_T>(node_idx) - 1].snbor.size[1];
  b_update_list = update_list.size(0);
  loop_ub = tmp_size_idx_0 * tmp_size_idx_1;
  for (i = 0; i < loop_ub; i++) {
    real_T d;
    d = t_nodes[static_cast<int32_T>(node_idx) - 1].snbor.data[i];
    if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
      emlrtIntegerCheckR2012b(d, &i_emlrtDCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(d) < 1) ||
        (static_cast<int32_T>(d) > b_update_list)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, b_update_list,
                                    &h_emlrtBCI, (emlrtConstCTX)sp);
    }
    tmp_data[i] = static_cast<int32_T>(d);
  }
  for (i = 0; i < tmp_size_idx_1; i++) {
    for (b_update_list = 0; b_update_list < tmp_size_idx_0; b_update_list++) {
      update_list[tmp_data[tmp_size_idx_0 * i] - 1] = true;
    }
  }
  //  Get the child nodes array
  //  Determine the number of child nodes
  i = t_nodes[static_cast<int32_T>(node_idx) - 1].chld.size[0] *
      t_nodes[static_cast<int32_T>(node_idx) - 1].chld.size[1];
  for (b_update_list = 0; b_update_list < i; b_update_list++) {
    if (b_update_list + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_update_list + 1, 1, i, &e_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    st.site = &ab_emlrtRSI;
    get_update_list(
        &st, update_list,
        t_nodes[static_cast<int32_T>(node_idx) - 1].chld.data[b_update_list],
        t_nodes);
    //  Recursively update the list
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
}

void spget(const emlrtStack *sp, const char_T Ityp[3], const char_T Jtyp[3],
           const struct0_T *, const real_T lookup_list[1032], const real_T[110],
           const real_T[980], const real_T[2072], real_T nslf, real_T nnbr,
           real_T nlst, real_T nbox, const struct2_T *t, real_T i,
           const struct4_T *opts, coder::array<real_T, 2U> &A)
{
  static const int32_T iv[2]{1, 18};
  static const int32_T iv1[2]{1, 18};
  static const char_T b_varargin_1[18]{'U', 'n', 'k', 'n', 'o', 'w',
                                       'n', ' ', 'J', 't', 'y', 'p',
                                       ' ', 'v', 'a', 'l', 'u', 'e'};
  static const char_T varargin_1[18]{'U', 'n', 'k', 'n', 'o', 'w',
                                     'n', ' ', 'I', 't', 'y', 'p',
                                     ' ', 'v', 'a', 'l', 'u', 'e'};
  coder::array<int32_T, 1U> ii;
  coder::array<int32_T, 1U> r;
  coder::array<uint32_T, 2U> x;
  coder::array<boolean_T, 1U> update_list;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T d;
  real_T d1;
  real_T m_;
  real_T n_;
  int32_T idx;
  int32_T k;
  int32_T loop_ub;
  int32_T n;
  int32_T tmp;
  int32_T x_tmp;
  int16_T I__size_idx_1;
  int16_T J__size_idx_1;
  boolean_T exitg1;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  A = SPGET(ITYP, JTYP, F, lookup_list, slf, nbr, lst, nslf, nnbr, nlst,
  //  nbox, t, i, opts) Sparse matrix access function that grabs the accumulated
  //  Schur complement updates to a block of the matrix from
  //  previously-skeletonized levels. Index sets ITYP and JTYP can be 'slf',
  //  'nbr', or 'lst'. Translate input strings to index sets (and their lengths)
  st.site = &emlrtRSI;
  if (coder::internal::b_strcmp(st, Ityp)) {
    I__size_idx_1 = 110;
    m_ = nslf;
  } else {
    st.site = &b_emlrtRSI;
    if (coder::internal::c_strcmp(st, Ityp)) {
      I__size_idx_1 = 980;
      m_ = nnbr;
    } else {
      st.site = &c_emlrtRSI;
      if (coder::internal::d_strcmp(st, Ityp)) {
        I__size_idx_1 = 2072;
        m_ = nlst;
      } else {
        st.site = &d_emlrtRSI;
        y = nullptr;
        m = emlrtCreateCharArray(2, &iv[0]);
        emlrtInitCharArrayR2013a(&st, 18, m, &varargin_1[0]);
        emlrtAssign(&y, m);
        b_st.site = &ib_emlrtRSI;
        b_error(b_st, y, emlrtMCI);
      }
    }
  }
  st.site = &e_emlrtRSI;
  if (coder::internal::b_strcmp(st, Jtyp)) {
    J__size_idx_1 = 110;
    n_ = nslf;
  } else {
    st.site = &f_emlrtRSI;
    if (coder::internal::c_strcmp(st, Jtyp)) {
      J__size_idx_1 = 980;
      n_ = nnbr;
    } else {
      st.site = &g_emlrtRSI;
      if (coder::internal::d_strcmp(st, Jtyp)) {
        J__size_idx_1 = 2072;
        n_ = nlst;
      } else {
        st.site = &h_emlrtRSI;
        b_y = nullptr;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(&st, 18, m, &b_varargin_1[0]);
        emlrtAssign(&b_y, m);
        b_st.site = &ib_emlrtRSI;
        b_error(b_st, b_y, emlrtMCI);
      }
    }
  }
  //  Initialize matrix A based on the fully defined m_ and n_
  if (!(m_ >= 0.0)) {
    emlrtNonNegativeCheckR2012b(m_, &d_emlrtDCI, (emlrtConstCTX)sp);
  }
  d = static_cast<int32_T>(muDoubleScalarFloor(m_));
  if (m_ != d) {
    emlrtIntegerCheckR2012b(m_, &c_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (!(n_ >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n_, &f_emlrtDCI, (emlrtConstCTX)sp);
  }
  d1 = static_cast<int32_T>(muDoubleScalarFloor(n_));
  if (n_ != d1) {
    emlrtIntegerCheckR2012b(n_, &e_emlrtDCI, (emlrtConstCTX)sp);
  }
  A.set_size(&e_emlrtRTEI, sp, static_cast<int32_T>(m_),
             static_cast<int32_T>(n_));
  if (m_ != d) {
    emlrtIntegerCheckR2012b(m_, &g_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (n_ != d1) {
    emlrtIntegerCheckR2012b(n_, &g_emlrtDCI, (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(m_) * static_cast<int32_T>(n_);
  for (k = 0; k < loop_ub; k++) {
    A[k] = 0.0;
  }
  //  Ensure A is initialized as double
  if (!(nbox >= 0.0)) {
    emlrtNonNegativeCheckR2012b(nbox, &b_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (nbox != static_cast<int32_T>(muDoubleScalarFloor(nbox))) {
    emlrtIntegerCheckR2012b(nbox, &emlrtDCI, (emlrtConstCTX)sp);
  }
  //  Ensure update_list is initialized as logical
  tmp = static_cast<int32_T>(nbox);
  update_list.set_size(&f_emlrtRTEI, sp, tmp);
  for (k = 0; k < tmp; k++) {
    update_list[k] = false;
  }
  st.site = &i_emlrtRSI;
  get_update_list(&st, update_list, i, t->nodes);
  //  Pass update_list and t
  //  Use lookup_list to get the list of updates
  st.site = &j_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  n = update_list.size(0);
  c_st.site = &cb_emlrtRSI;
  idx = 0;
  ii.set_size(&g_emlrtRTEI, &c_st, update_list.size(0));
  d_st.site = &db_emlrtRSI;
  if (update_list.size(0) > 2147483646) {
    e_st.site = &fb_emlrtRSI;
    coder::check_forloop_overflow_error(e_st);
  }
  tmp = 0;
  exitg1 = false;
  while ((!exitg1) && (tmp <= n - 1)) {
    if (update_list[tmp]) {
      idx++;
      ii[idx - 1] = tmp + 1;
      if (idx >= n) {
        exitg1 = true;
      } else {
        tmp++;
      }
    } else {
      tmp++;
    }
  }
  if (idx > update_list.size(0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (update_list.size(0) == 1) {
    if (idx == 0) {
      ii.set_size(&h_emlrtRTEI, &c_st, 0);
    }
  } else {
    int32_T update_list_size[2];
    if (idx < 1) {
      k = 0;
    } else {
      k = idx;
    }
    update_list_size[0] = 1;
    update_list_size[1] = k;
    d_st.site = &eb_emlrtRSI;
    coder::internal::indexShapeCheck(d_st, ii.size(0), update_list_size);
    ii.set_size(&h_emlrtRTEI, &c_st, k);
  }
  st.site = &j_emlrtRSI;
  loop_ub = ii.size(0);
  x.set_size(&i_emlrtRTEI, &st, 1, ii.size(0));
  for (k = 0; k < loop_ub; k++) {
    x[k] = static_cast<uint32_T>(ii[k]);
  }
  if (ii.size(0) > 1) {
    n = ii.size(0) - 1;
    idx = ii.size(0) >> 1;
    b_st.site = &hb_emlrtRSI;
    for (k = 0; k < idx; k++) {
      tmp = static_cast<int32_T>(x[k]);
      x_tmp = n - k;
      x[k] = x[x_tmp];
      x[x_tmp] = static_cast<uint32_T>(tmp);
    }
  }
  for (k = 0; k < loop_ub; k++) {
    idx = static_cast<int32_T>(x[k]);
    if (idx > 1032) {
      emlrtDynamicBoundsCheckR2012b(idx, 1, 1032, &c_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
  }
  idx = x.size(1) - 1;
  n = 0;
  for (loop_ub = 0; loop_ub <= idx; loop_ub++) {
    if (lookup_list[static_cast<int32_T>(x[loop_ub]) - 1] != 0.0) {
      n++;
    }
  }
  r.set_size(&j_emlrtRTEI, sp, n);
  n = 0;
  for (loop_ub = 0; loop_ub <= idx; loop_ub++) {
    if (lookup_list[static_cast<int32_T>(x[loop_ub]) - 1] != 0.0) {
      r[n] = loop_ub;
      n++;
    }
  }
  tmp = r.size(0);
  for (k = 0; k < tmp; k++) {
    if (r[k] > idx) {
      emlrtDynamicBoundsCheckR2012b(r[k], 0, idx, &d_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
  }
  //  Ensure update_list is a row vector
  //  Get the number of updates
  for (x_tmp = 0; x_tmp < tmp; x_tmp++) {
    boolean_T b_bool;
    if (x_tmp + 1 > tmp) {
      emlrtDynamicBoundsCheckR2012b(x_tmp + 1, 1, tmp, &b_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    //  Access elements using the index
    st.site = &k_emlrtRSI;
    b_st.site = &s_emlrtRSI;
    c_st.site = &t_emlrtRSI;
    b_bool = false;
    n = 0;
    int32_T exitg2;
    do {
      exitg2 = 0;
      if (n < 3) {
        d_st.site = &u_emlrtRSI;
        k = static_cast<uint8_T>(Ityp[n]);
        if (k > 127) {
          emlrtErrorWithMessageIdR2018a(
              &d_st, &emlrtRTEI, "Coder:toolbox:unsupportedString",
              "Coder:toolbox:unsupportedString", 2, 12, 127);
        }
        d_st.site = &v_emlrtRSI;
        idx = static_cast<uint8_T>(Jtyp[n]);
        if (idx > 127) {
          emlrtErrorWithMessageIdR2018a(
              &d_st, &emlrtRTEI, "Coder:toolbox:unsupportedString",
              "Coder:toolbox:unsupportedString", 2, 12, 127);
        }
        d_st.site = &w_emlrtRSI;
        d_st.site = &w_emlrtRSI;
        if (cv[k] != cv[idx]) {
          exitg2 = 1;
        } else {
          n++;
        }
      } else {
        b_bool = true;
        exitg2 = 1;
      }
    } while (exitg2 == 0);
    if (b_bool) {
      //  For diagonal block
      st.site = &l_emlrtRSI;
      //  Define the find_locations_t function as a subfunction
      //  Initialize an empty array to store the locations
      //  Iterate over each element to find
      k = I__size_idx_1;
      for (loop_ub = 0; loop_ub < k; loop_ub++) {
        if (loop_ub + 1 > I__size_idx_1) {
          emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1,
                                        static_cast<int32_T>(I__size_idx_1),
                                        &emlrtBCI, &st);
        }
        //  Use the local function binary_search to find the location of the
        //  element If the element is found (location is not -1), add it to the
        //  locs array
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      //  Replace ismembc2
      //  Convert to double to ensure consistent types
      //  Ensure indexing is logical after conversion
      //  Different factorization depending on symmetry
      st.site = &m_emlrtRSI;
      if (!coder::internal::b_strcmp(st, opts->symm)) {
        st.site = &n_emlrtRSI;
        coder::internal::c_strcmp(st, opts->symm);
      }
    } else {
      //  For off-diagonal block
      st.site = &o_emlrtRSI;
      //  Define the find_locations_t function as a subfunction
      //  Initialize an empty array to store the locations
      //  Iterate over each element to find
      k = I__size_idx_1;
      for (loop_ub = 0; loop_ub < k; loop_ub++) {
        if (loop_ub + 1 > I__size_idx_1) {
          emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1,
                                        static_cast<int32_T>(I__size_idx_1),
                                        &emlrtBCI, &st);
        }
        //  Use the local function binary_search to find the location of the
        //  element If the element is found (location is not -1), add it to the
        //  locs array
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      //  Replace ismembc2
      st.site = &p_emlrtRSI;
      //  Define the find_locations_t function as a subfunction
      //  Initialize an empty array to store the locations
      //  Iterate over each element to find
      k = J__size_idx_1;
      for (loop_ub = 0; loop_ub < k; loop_ub++) {
        if (loop_ub + 1 > J__size_idx_1) {
          emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1,
                                        static_cast<int32_T>(J__size_idx_1),
                                        &emlrtBCI, &st);
        }
        //  Use the local function binary_search to find the location of the
        //  element If the element is found (location is not -1), add it to the
        //  locs array
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      //  Replace ismembc2
      //  Convert to double to ensure consistent types
      //  Ensure indexing is logical after conversion
      //  Ensure consistent types in concatenation
      //  Different factorization depending on symmetry
      st.site = &q_emlrtRSI;
      if (!coder::internal::b_strcmp(st, opts->symm)) {
        st.site = &r_emlrtRSI;
        coder::internal::c_strcmp(st, opts->symm);
      } else {
        //  No need for double conversion
      }
      //  No change needed
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (spget.cpp)
