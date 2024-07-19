//
// shypoct.cpp
//
// Code generation for function 'shypoct'
//

// Include files
#include "shypoct.h"
#include "all.h"
#include "bitget.h"
#include "bsxfun.h"
#include "error.h"
#include "find.h"
#include "horzcatStructList.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "shypoct_data.h"
#include "shypoct_internal_types.h"
#include "shypoct_types.h"
#include "unique.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    332,                                                           // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    331,                                                           // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    330,                                                           // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    234,                                                           // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    198,                                                           // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    196,                                                           // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo g_emlrtRSI{
    189,                                                           // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    48,                                                            // lineNo
    "unique",                                                      // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/unique.m" // pathName
};

static emlrtRSInfo y_emlrtRSI{
    51,                  // lineNo
    "reshapeSizeChecks", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" // pathName
};

static emlrtMCInfo emlrtMCI{
    56,                                                            // lineNo
    3,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtMCInfo b_emlrtMCI{
    58,                                                            // lineNo
    3,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo emlrtRTEI{
    126,               // lineNo
    9,                 // colNo
    "computeDimsData", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" // pName
};

static emlrtRTEInfo b_emlrtRTEI{
    81,                  // lineNo
    23,                  // colNo
    "reshapeSizeChecks", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" // pName
};

static emlrtRTEInfo c_emlrtRTEI{
    74,                  // lineNo
    13,                  // colNo
    "reshapeSizeChecks", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" // pName
};

static emlrtBCInfo emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    179,                                                            // lineNo
    36,                                                             // colNo
    "T.lvp",                                                        // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtRTEInfo d_emlrtRTEI{
    179,                                                           // lineNo
    12,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtBCInfo b_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    180,                                                            // lineNo
    20,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo c_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    193,                                                            // lineNo
    26,                                                             // colNo
    "unique_idx",                                                   // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo d_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    245,                                                            // lineNo
    18,                                                             // colNo
    "T.lvp",                                                        // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtECInfo emlrtECI{
    2,                                                             // nDims
    246,                                                           // lineNo
    3,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtBCInfo e_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    265,                                                            // lineNo
    32,                                                             // colNo
    "T.lvp",                                                        // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtRTEInfo e_emlrtRTEI{
    265,                                                           // lineNo
    13,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtBCInfo f_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    270,                                                            // lineNo
    19,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo g_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    279,                                                            // lineNo
    23,                                                             // colNo
    "valid_indices",                                                // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo h_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    280,                                                            // lineNo
    33,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtECInfo b_emlrtECI{
    2,                                                             // nDims
    280,                                                           // lineNo
    5,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtBCInfo i_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    303,                                                            // lineNo
    22,                                                             // colNo
    "parent_nbors",                                                 // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo j_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    304,                                                            // lineNo
    25,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo k_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    257,                                                            // lineNo
    16,                                                             // colNo
    "T.lvp",                                                        // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo l_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    257,                                                            // lineNo
    29,                                                             // colNo
    "T.lvp",                                                        // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo m_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    257,                                                            // lineNo
    10,                                                             // colNo
    "ilvl",                                                         // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo n_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    257,                                                            // lineNo
    23,                                                             // colNo
    "ilvl",                                                         // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtECInfo c_emlrtECI{
    2,                                                             // nDims
    308,                                                           // lineNo
    13,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtBCInfo o_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    309,                                                            // lineNo
    37,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtECInfo d_emlrtECI{
    2,                                                             // nDims
    314,                                                           // lineNo
    13,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtECInfo e_emlrtECI{
    2,                                                             // nDims
    321,                                                           // lineNo
    13,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtBCInfo p_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    342,                                                            // lineNo
    15,                                                             // colNo
    "j",                                                            // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo q_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    343,                                                            // lineNo
    33,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtECInfo f_emlrtECI{
    2,                                                             // nDims
    348,                                                           // lineNo
    9,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtBCInfo r_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    358,                                                            // lineNo
    15,                                                             // colNo
    "j",                                                            // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo s_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    359,                                                            // lineNo
    33,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtECInfo g_emlrtECI{
    2,                                                             // nDims
    364,                                                           // lineNo
    9,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtBCInfo t_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    300,                                                            // lineNo
    24,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo u_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    308,                                                            // lineNo
    21,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo v_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    330,                                                            // lineNo
    30,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo w_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    264,                                                            // lineNo
    14,                                                             // colNo
    "llvl",                                                         // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo x_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    258,                                                            // lineNo
    10,                                                             // colNo
    "llvl",                                                         // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo y_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    179,                                                            // lineNo
    18,                                                             // colNo
    "T.lvp",                                                        // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo ab_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    272,                                                            // lineNo
    27,                                                             // colNo
    "j",                                                            // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo bb_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    276,                                                            // lineNo
    19,                                                             // colNo
    "j",                                                            // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo cb_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    200,                                                            // lineNo
    23,                                                             // colNo
    "xi",                                                           // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo db_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    300,                                                            // lineNo
    16,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo eb_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    306,                                                            // lineNo
    56,                                                             // colNo
    "llvl",                                                         // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo fb_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    306,                                                            // lineNo
    61,                                                             // colNo
    "ilvl",                                                         // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo gb_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    330,                                                            // lineNo
    22,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo hb_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    331,                                                            // lineNo
    17,                                                             // colNo
    "idx",                                                          // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo ib_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    332,                                                            // lineNo
    28,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo jb_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    334,                                                            // lineNo
    15,                                                             // colNo
    "idx",                                                          // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo kb_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    352,                                                            // lineNo
    15,                                                             // colNo
    "idx",                                                          // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo lb_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    265,                                                            // lineNo
    13,                                                             // colNo
    "T.lvp",                                                        // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo mb_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    266,                                                            // lineNo
    14,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo nb_emlrtBCI{
    1,                                                              // iFirst
    80000,                                                          // iLast
    186,                                                            // lineNo
    32,                                                             // colNo
    "x",                                                            // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtRTEInfo i_emlrtRTEI{
    107,                                                           // lineNo
    3,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo j_emlrtRTEI{
    1,                                                             // lineNo
    14,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo k_emlrtRTEI{
    181,                                                           // lineNo
    7,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo l_emlrtRTEI{
    186,                                                           // lineNo
    27,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo m_emlrtRTEI{
    187,                                                           // lineNo
    9,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo n_emlrtRTEI{
    246,                                                           // lineNo
    3,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo o_emlrtRTEI{
    254,                                                           // lineNo
    10,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo p_emlrtRTEI{
    330,                                                           // lineNo
    14,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo q_emlrtRTEI{
    332,                                                           // lineNo
    20,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo r_emlrtRTEI{
    332,                                                           // lineNo
    11,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo s_emlrtRTEI{
    333,                                                           // lineNo
    7,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo
    t_emlrtRTEI{
        485,             // lineNo
        21,              // colNo
        "unaryMinOrMax", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
        "unaryMinOrMax.m" // pName
    };

static emlrtRTEInfo u_emlrtRTEI{
    352,                                                           // lineNo
    15,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo v_emlrtRTEI{
    352,                                                           // lineNo
    36,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo db_emlrtRTEI{
    30,                    // lineNo
    21,                    // colNo
    "applyScalarFunction", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "applyScalarFunction.m" // pName
};

static emlrtRSInfo ab_emlrtRSI{
    186,                                                           // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo bb_emlrtRSI{
    333,                                                           // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo cb_emlrtRSI{
    56,                                                            // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo db_emlrtRSI{
    57,                                                            // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo eb_emlrtRSI{
    58,                                                            // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo fb_emlrtRSI{
    59,                                                            // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo gb_emlrtRSI{
    107,                                                           // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo ib_emlrtRSI{
    352,                                                           // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

// Function Declarations
static void b_and(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
                  const coder::array<boolean_T, 1U> &in2,
                  const coder::array<boolean_T, 1U> &in3);

static void b_cast(const emlrtStack &sp, const coder::array<struct1_T, 2U> &r,
                   coder::array<b_struct_T, 2U> &r1);

static const mxArray *b_emlrt_marshallOut(const emlrtStack &sp,
                                          const char_T u[35]);

static void b_error(const emlrtStack &sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo &location);

static const mxArray *c_emlrt_marshallOut(const emlrtStack &sp,
                                          const char_T u[25]);

static real_T cast(const real_T t0_ctr[3], const real_T t0_xi[80000],
                   const real_T t0_chld[1000], const real_T t0_nbor[1000],
                   const real_T t0_ilist[1000], const real_T t0_snbor[1000],
                   real_T t1_ctr[3], real_T t1_xi[80000], real_T t1_chld_data[],
                   int32_T t1_chld_size[2], real_T t1_nbor_data[],
                   int32_T t1_nbor_size[2], real_T t1_ilist_data[],
                   int32_T t1_ilist_size[2], real_T t1_snbor_data[],
                   int32_T t1_snbor_size[2]);

static void cast(const emlrtStack &sp, const struct_T r[10000],
                 struct1_T r1[10000]);

static void cast(const emlrtStack &sp, const coder::array<struct1_T, 2U> &r,
                 coder::array<b_struct_T, 2U> &r1);

static const mxArray *d_emlrt_marshallOut(const emlrtStack &sp,
                                          const char_T u[38]);

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const char_T u[23]);

// Function Definitions
static void b_and(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
                  const coder::array<boolean_T, 1U> &in2,
                  const coder::array<boolean_T, 1U> &in3)
{
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  in1.set_size(&u_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = (in2[i * stride_0_0] && in3[i * stride_1_0]);
  }
}

static void b_cast(const emlrtStack &sp, const coder::array<struct1_T, 2U> &r,
                   coder::array<b_struct_T, 2U> &r1)
{
  int32_T i;
  r1.set_size(&q_emlrtRTEI, &sp, 1, r.size(1));
  i = r.size(1) - 1;
  for (int32_T i1{0}; i1 <= i; i1++) {
    r1[i1].ctr[0] = r[i1].ctr[0];
    r1[i1].ctr[1] = r[i1].ctr[1];
    r1[i1].ctr[2] = r[i1].ctr[2];
    r1[i1].chld.size[0] = 1;
    r1[i1].chld.size[1] = r[i1].chld.size[1];
    for (int32_T i2{0}; i2 < 1000; i2++) {
      r1[i1].chld.data[i2] = r[i1].chld.data[i2];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
}

static const mxArray *b_emlrt_marshallOut(const emlrtStack &sp,
                                          const char_T u[35])
{
  static const int32_T iv[2]{1, 35};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 35, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void b_error(const emlrtStack &sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo &location)
{
  const mxArray *pArrays[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  emlrtCallMATLABR2012b((emlrtConstCTX)&sp, 0, nullptr, 2, &pArrays[0], "error",
                        true, &location);
}

static const mxArray *c_emlrt_marshallOut(const emlrtStack &sp,
                                          const char_T u[25])
{
  static const int32_T iv[2]{1, 25};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 25, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static real_T cast(const real_T t0_ctr[3], const real_T t0_xi[80000],
                   const real_T t0_chld[1000], const real_T t0_nbor[1000],
                   const real_T t0_ilist[1000], const real_T t0_snbor[1000],
                   real_T t1_ctr[3], real_T t1_xi[80000], real_T t1_chld_data[],
                   int32_T t1_chld_size[2], real_T t1_nbor_data[],
                   int32_T t1_nbor_size[2], real_T t1_ilist_data[],
                   int32_T t1_ilist_size[2], real_T t1_snbor_data[],
                   int32_T t1_snbor_size[2])
{
  real_T t1_prnt;
  t1_ctr[0] = t0_ctr[0];
  t1_ctr[1] = t0_ctr[1];
  t1_ctr[2] = t0_ctr[2];
  std::copy(&t0_xi[0], &t0_xi[80000], &t1_xi[0]);
  t1_prnt = 0.0;
  t1_chld_size[0] = 1;
  t1_chld_size[1] = 1000;
  t1_nbor_size[0] = 1;
  t1_nbor_size[1] = 1000;
  t1_ilist_size[0] = 1;
  t1_ilist_size[1] = 1000;
  t1_snbor_size[0] = 1;
  t1_snbor_size[1] = 1000;
  std::copy(&t0_chld[0], &t0_chld[1000], &t1_chld_data[0]);
  std::copy(&t0_nbor[0], &t0_nbor[1000], &t1_nbor_data[0]);
  std::copy(&t0_ilist[0], &t0_ilist[1000], &t1_ilist_data[0]);
  std::copy(&t0_snbor[0], &t0_snbor[1000], &t1_snbor_data[0]);
  return t1_prnt;
}

static void cast(const emlrtStack &sp, const struct_T r[10000],
                 struct1_T r1[10000])
{
  for (int32_T i{0}; i < 10000; i++) {
    r1[i].ctr[0] = r[i].ctr[0];
    r1[i].ctr[1] = r[i].ctr[1];
    r1[i].ctr[2] = r[i].ctr[2];
    std::copy(&r[i].xi[0], &r[i].xi[80000], &r1[i].xi[0]);
    r1[i].prnt = r[i].prnt;
    r1[i].chld.size[0] = 1;
    r1[i].chld.size[1] = 1000;
    r1[i].nbor.size[0] = 1;
    r1[i].nbor.size[1] = 1000;
    r1[i].ilist.size[0] = 1;
    r1[i].ilist.size[1] = 1000;
    r1[i].snbor.size[0] = 1;
    r1[i].snbor.size[1] = 1000;
    std::copy(&r[i].chld[0], &r[i].chld[1000], &r1[i].chld.data[0]);
    std::copy(&r[i].nbor[0], &r[i].nbor[1000], &r1[i].nbor.data[0]);
    std::copy(&r[i].ilist[0], &r[i].ilist[1000], &r1[i].ilist.data[0]);
    std::copy(&r[i].snbor[0], &r[i].snbor[1000], &r1[i].snbor.data[0]);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
}

static void cast(const emlrtStack &sp, const coder::array<struct1_T, 2U> &r,
                 coder::array<b_struct_T, 2U> &r1)
{
  int32_T i;
  r1.set_size(&p_emlrtRTEI, &sp, 1, r.size(1));
  i = r.size(1) - 1;
  for (int32_T i1{0}; i1 <= i; i1++) {
    r1[i1].ctr[0] = r[i1].ctr[0];
    r1[i1].ctr[1] = r[i1].ctr[1];
    r1[i1].ctr[2] = r[i1].ctr[2];
    r1[i1].chld.size[0] = 1;
    r1[i1].chld.size[1] = r[i1].chld.size[1];
    for (int32_T i2{0}; i2 < 1000; i2++) {
      r1[i1].chld.data[i2] = r[i1].chld.data[i2];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
}

static const mxArray *d_emlrt_marshallOut(const emlrtStack &sp,
                                          const char_T u[38])
{
  static const int32_T iv[2]{1, 38};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 38, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const char_T u[23])
{
  static const int32_T iv[2]{1, 23};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 23, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

void shypoct(shypoctStackData *SD, const emlrtStack *sp, const real_T x[240000],
             real_T occ, real_T lvlmax, struct0_T *T)
{
  static const char_T cv3[38]{'M', 'a', 'x', 'i', 'm', 'u', 'm', ' ', 't', 'r',
                              'e', 'e', ' ', 'd', 'e', 'p', 't', 'h', ' ', 'm',
                              'u', 's', 't', ' ', 'b', 'e', ' ', 'a', 't', ' ',
                              'l', 'e', 'a', 's', 't', ' ', '1', '.'};
  static const char_T cv1[35]{'L', 'e', 'a', 'f', ' ', 'o', 'c', 'c', 'u',
                              'p', 'a', 'n', 'c', 'y', ' ', 'm', 'u', 's',
                              't', ' ', 'b', 'e', ' ', 'n', 'o', 'n', 'n',
                              'e', 'g', 'a', 't', 'i', 'v', 'e', '.'};
  static const char_T cv2[25]{'R', 'S', 'S', ':', 's', 'h', 'y', 'p', 'o',
                              'c', 't', ':', 'i', 'n', 'v', 'a', 'l', 'i',
                              'd', 'L', 'v', 'l', 'm', 'a', 'x'};
  static const char_T cv[23]{'R', 'S', 'S', ':', 's', 'h', 'y', 'p',
                             'o', 'c', 't', ':', 'n', 'e', 'g', 'a',
                             't', 'i', 'v', 'e', 'O', 'c', 'c'};
  __m128d r;
  __m128d r1;
  __m128d r2;
  __m128d r5;
  coder::array<b_struct_T, 2U> r6;
  coder::array<b_struct_T, 2U> r8;
  coder::array<struct1_T, 2U> b_T;
  coder::array<struct1_T, 2U> c_T;
  coder::array<real_T, 2U> b_dist;
  coder::array<real_T, 2U> b_x;
  coder::array<real_T, 2U> c_idx;
  coder::array<real_T, 2U> r10;
  coder::array<real_T, 2U> r9;
  coder::array<real_T, 2U> unique_idx;
  coder::array<real_T, 2U> varargin_1;
  coder::array<real_T, 2U> xi;
  coder::array<real_T, 1U> llvl;
  coder::array<real_T, 1U> r11;
  coder::array<int32_T, 2U> r3;
  coder::array<int32_T, 2U> r4;
  coder::array<int32_T, 1U> r12;
  coder::array<int32_T, 1U> r16;
  coder::array<int32_T, 1U> r7;
  coder::array<boolean_T, 2U> b_idx;
  coder::array<boolean_T, 1U> r13;
  coder::array<boolean_T, 1U> r14;
  coder::array<boolean_T, 1U> r15;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T j_data[1000];
  real_T t2_ilist[1000];
  real_T t2_nbor[1000];
  real_T t2_snbor[1000];
  real_T ext[6];
  real_T ctr[3];
  real_T ictr[3];
  real_T dv1[2];
  real_T dv2[2];
  real_T d;
  real_T l;
  real_T prnt;
  int32_T iv[2];
  int32_T tmp_size[2];
  int32_T b_i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T idx;
  int32_T k;
  int32_T loop_ub;
  int32_T maxdimlen;
  int32_T nbox;
  int32_T nlvl;
  int32_T nx;
  int32_T partialTrueCount;
  int32_T trueCount;
  uint32_T ilvl_data[10000];
  int16_T b_tmp_data[1000];
  int16_T tmp_data[1000];
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  SHYPOCT   Build hyperoctree.
  //
  //     T = SHYPOCT(X,OCC) builds a hyperoctree T over a set of points X such
  //     that each nonempty hypercube node in T is recursively subdivided until
  //     it contains at most OCC points. The tree T is structured as follows:
  //
  //         NLVL  - tree depth
  //         LVP   - tree level pointer array
  //         LRT   - size of tree root
  //
  //     It also contains the tree node data array NODES, with structure:
  //
  //         CTR   - node center
  //         XI    - node point indices
  //         PRNT  - node parent
  //         CHLD  - node children
  //         NBOR  - node neighbors
  //         ILIST - node interaction list
  //         SNBOR - node symmetric neighbors (for non-uniform tree)
  //
  //     Note that SNBOR is defined such that i is in NBOR(j) iff j is in
  //     SNBOR(i).
  //
  //     Some examples of how to access the tree data are given below:
  //
  //       - The nodes on level I are T.NODES(T.LVP(I)+1:T.LVP(I+1)).
  //       - The size of each node on level I is T.LRT/2^(I-1).
  //       - The points in node index I are X(:,T.NODES(I).XI).
  //       - The parent of node index I is T.NODES(T.NODES(I).PRNT).
  //       - The children of node index I are [T.NODES(T.NODES(I).CHLD)].
  //       - The neighbors of node index I are [T.NODES(T.NODES(I).NBOR)].
  //
  //     T = SHYPOCT(X,OCC,LVLMAX) builds a hyperoctree to a maximum depth
  //     LVLMAX (default: LVLMAX = INF).
  //
  //     T = SHYPOCT(X,OCC,LVLMAX,EXT) sets the root node extent to
  //     [EXT(I,1) EXT(I,2)] along dimension I. If EXT is empty (default), then
  //     the root extent is calculated from the data.
  //
  //     References:
  //
  //       H. Samet. The quadtree and related hierarchical data structures. ACM
  //         Comput. Surv. 16 (2): 187-260, 1984.
  //  Set sane default parameters
  //  Check that inputs arae sensible
  if (!(occ >= 0.0)) {
    st.site = &cb_emlrtRSI;
    b_st.site = &db_emlrtRSI;
    b_error(st, emlrt_marshallOut(st, cv), b_emlrt_marshallOut(b_st, cv1),
            emlrtMCI);
  }
  if (!(lvlmax >= 1.0)) {
    st.site = &eb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_error(st, c_emlrt_marshallOut(st, cv2), d_emlrt_marshallOut(b_st, cv3),
            b_emlrtMCI);
  }
  //  Initialize top-level box extent, side lengths, center.
  //  if isempty(ext)
  //    ext = [min(x,[],2) max(x,[],2)];
  //  end
  //  l = max(ext(:,2) - ext(:,1));
  //  ctr = 0.5*(ext(:,1) + ext(:,2));
  //  % Check if x is empty or has incompatible dimensions
  //     if isempty(x) || size(x, 1) < 2 || size(x, 2) < 2
  //         error('Input array x must have at least 2 rows and 2 columns.');
  //     end
  //  % Calculate the extents if ext is empty
  //  ext = [min(x, [], 2), max(x, [], 2)];
  ctr[0] = x[0];
  ctr[1] = x[1];
  ctr[2] = x[2];
  ictr[0] = x[0];
  ictr[1] = x[1];
  ictr[2] = x[2];
  for (nx = 0; nx < 79999; nx++) {
    for (int32_T i{0}; i < 3; i++) {
      d = x[i + 3 * (nx + 1)];
      if (muDoubleScalarIsNaN(d)) {
        p = false;
      } else {
        prnt = ctr[i];
        if (muDoubleScalarIsNaN(prnt)) {
          p = true;
        } else {
          p = (prnt > d);
        }
      }
      if (p) {
        ctr[i] = d;
      }
      if (muDoubleScalarIsNaN(d)) {
        p = false;
      } else {
        prnt = ictr[i];
        if (muDoubleScalarIsNaN(prnt)) {
          p = true;
        } else {
          p = (prnt < d);
        }
      }
      if (p) {
        ictr[i] = d;
      }
    }
  }
  //  % Check if ext has the correct dimensions
  //  if size(ext, 2) ~= 2
  //      error('Size mismatch in ext calculation. Expected ext to be Nx2.');
  //  end
  //  Calculate the length and center
  r = _mm_loadu_pd(&ctr[0]);
  _mm_storeu_pd(&ext[0], r);
  r1 = _mm_loadu_pd(&ictr[0]);
  _mm_storeu_pd(&ext[3], r1);
  _mm_storeu_pd(&ctr[0], _mm_sub_pd(r1, r));
  d = ctr[2];
  ext[2] = ctr[2];
  ext[5] = ictr[2];
  ctr[2] = ictr[2] - ctr[2];
  if (!muDoubleScalarIsNaN(ctr[0])) {
    idx = 1;
  } else {
    boolean_T exitg1;
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 4)) {
      if (!muDoubleScalarIsNaN(ctr[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  if (idx == 0) {
    l = ctr[0];
  } else {
    l = ctr[idx - 1];
    b_i = idx + 1;
    for (k = b_i; k < 4; k++) {
      prnt = ctr[k - 1];
      if (l < prnt) {
        l = prnt;
      }
    }
  }
  //  s = struct('ctr',ctr','xi',1:n,'prnt',[],'chld',[],'nbor',[], ...
  //             'ilist',[],'snbor',[]);
  //  T = struct('nlvl',1,'lvp',[0 1],'lrt',l,'nodes',s);
  //  Memory allocation for nodes
  //  Preallocate a large enough array
  //  Consistent size for fields
  //  Adjust this based on expected maximum depth
  //  Adjust this based on expected size
  SD->f0.b_empty_node.ctr[0] = 0.0;
  SD->f0.b_empty_node.ctr[1] = 0.0;
  SD->f0.b_empty_node.ctr[2] = 0.0;
  std::memset(&SD->f0.b_empty_node.xi[0], 0, 80000U * sizeof(real_T));
  SD->f0.b_empty_node.prnt = 0.0;
  std::memset(&SD->f0.b_empty_node.chld[0], 0, 1000U * sizeof(real_T));
  std::memset(&SD->f0.b_empty_node.nbor[0], 0, 1000U * sizeof(real_T));
  std::memset(&SD->f0.b_empty_node.ilist[0], 0, 1000U * sizeof(real_T));
  std::memset(&SD->f0.b_empty_node.snbor[0], 0, 1000U * sizeof(real_T));
  for (b_i = 0; b_i < 10000; b_i++) {
    SD->f0.empty_node[b_i] = SD->f0.b_empty_node;
  }
  st.site = &gb_emlrtRSI;
  cast(st, SD->f0.empty_node, SD->f0.rv);
  T->nodes.set_size(&i_emlrtRTEI, sp, 1, 10000);
  for (b_i = 0; b_i < 10000; b_i++) {
    T->nodes[b_i] = SD->f0.rv[b_i];
  }
  T->nlvl = 1.0;
  T->lvp.size[0] = 1;
  T->lvp.size[1] = 20;
  std::memset(&T->lvp.data[0], 0, 20U * sizeof(real_T));
  T->lrt = l;
  //  Declare variable size arrays
  r = _mm_loadu_pd(&ext[0]);
  r1 = _mm_loadu_pd(&ext[3]);
  r2 = _mm_set1_pd(0.5);
  _mm_storeu_pd(&ctr[0], _mm_mul_pd(r2, _mm_add_pd(r, r1)));
  ctr[2] = 0.5 * (d + ictr[2]);
  for (b_i = 0; b_i < 80000; b_i++) {
    SD->f0.t2_xi[b_i] = static_cast<real_T>(b_i) + 1.0;
  }
  int32_T iv1[2];
  int32_T iv2[2];
  std::memset(&j_data[0], 0, 1000U * sizeof(real_T));
  std::memset(&t2_nbor[0], 0, 1000U * sizeof(real_T));
  std::memset(&t2_ilist[0], 0, 1000U * sizeof(real_T));
  std::memset(&t2_snbor[0], 0, 1000U * sizeof(real_T));
  d = cast(ctr, SD->f0.t2_xi, j_data, t2_nbor, t2_ilist, t2_snbor, ictr,
           SD->f0.dv, T->nodes[0].chld.data, iv, T->nodes[0].nbor.data,
           tmp_size, T->nodes[0].ilist.data, iv1, T->nodes[0].snbor.data, iv2);
  T->nodes[0].snbor.size[0] = iv2[0];
  T->nodes[0].snbor.size[1] = iv2[1];
  T->nodes[0].ilist.size[0] = iv1[0];
  T->nodes[0].ilist.size[1] = iv1[1];
  T->nodes[0].nbor.size[0] = tmp_size[0];
  T->nodes[0].nbor.size[1] = tmp_size[1];
  T->nodes[0].chld.size[0] = iv[0];
  T->nodes[0].chld.size[1] = iv[1];
  T->nodes[0].prnt = d;
  std::copy(&SD->f0.dv[0], &SD->f0.dv[80000], &T->nodes[0].xi[0]);
  T->nodes[0].ctr[0] = ictr[0];
  T->nodes[0].ctr[1] = ictr[1];
  T->nodes[0].ctr[2] = ictr[2];
  nlvl = 1;
  nbox = 0;
  //  mbox = 1;
  //  Loop until all boxes are sufficiently subdivided (natural termination)
  int32_T exitg2;
  do {
    exitg2 = 0;
    //  Terminate if at maximum depth (unnatural termination)
    if (nlvl >= lvlmax) {
      exitg2 = 1;
    } else {
      //  Initialize the current level, which has side lengths diminished by a
      //  factor of two
      idx = nbox;
      l *= 0.5;
      //  % Loop over all boxes at current level
      //   for prnt = T.lvp(nlvl)+1:T.lvp(nlvl+1)
      //     xi = T.nodes(prnt).xi;
      //     xn = length(xi);
      //
      //     % Subdivide this box if it contains too many points
      //     if xn > occ
      //       % Complicated way of finding the assignments of this box's points
      //       % to its child boxes
      //       ctr = T.nodes(prnt).ctr;
      //       idx = bsxfun(@gt,x(:,xi),ctr');
      //       idx = 2.^((1:d) - 1)*idx + 1;
      //       for i = unique(idx)
      //         nbox = nbox + 1;
      //         while mbox < nbox
      //           e = cell(mbox,1);
      //           s = struct('ctr',e,'xi',e,'prnt',e,'chld',e,'nbor',e, ...
      //                      'ilist',e,'snbor',e);
      //           T.nodes = [T.nodes; s];
      //           mbox = 2*mbox;
      //         end
      //         s = struct( 'ctr', ctr + l*(bitget(i-1,1:d) - 0.5), ...
      //                      'xi', xi(idx == i),                    ...
      //                    'prnt', prnt,                            ...
      //                    'chld', [],                              ...
      //                    'nbor', [],                              ...
      //                    'ilist', [],                             ...
      //                    'snbor', []);
      //         T.nodes(nbox) = s;
      //         T.nodes(prnt).chld = [T.nodes(prnt).chld nbox];
      //       end
      //       T.nodes(prnt).xi = [];
      //     end
      //  end
      if (nlvl > 20) {
        emlrtDynamicBoundsCheckR2012b(21, 1, 20, &y_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      d = T->lvp.data[nlvl - 1] + 1.0;
      b_i = nlvl + 1;
      if (nlvl + 1 > 20) {
        emlrtDynamicBoundsCheckR2012b(21, 1, 20, &emlrtBCI, (emlrtConstCTX)sp);
      }
      i1 = static_cast<int32_T>(T->lvp.data[nlvl] + (1.0 - d));
      emlrtForLoopVectorCheckR2021a(d, 1.0, T->lvp.data[nlvl], mxDOUBLE_CLASS,
                                    i1, &d_emlrtRTEI, (emlrtConstCTX)sp);
      for (int32_T b_prnt{0}; b_prnt < i1; b_prnt++) {
        prnt = d + static_cast<real_T>(b_prnt);
        if ((static_cast<int32_T>(prnt) < 1) ||
            (static_cast<int32_T>(prnt) > 10000)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(prnt), 1, 10000,
                                        &b_emlrtBCI, (emlrtConstCTX)sp);
        }
        trueCount = 0;
        for (int32_T i{0}; i < 80000; i++) {
          if (T->nodes[static_cast<int32_T>(prnt) - 1].xi[i] > 0.0) {
            trueCount++;
          }
        }
        r3.set_size(&j_emlrtRTEI, sp, 1, trueCount);
        partialTrueCount = 0;
        for (int32_T i{0}; i < 80000; i++) {
          if (T->nodes[static_cast<int32_T>(prnt) - 1].xi[i] > 0.0) {
            r3[partialTrueCount] = i;
            partialTrueCount++;
          }
        }
        nx = r3.size(1);
        xi.set_size(&k_emlrtRTEI, sp, 1, r3.size(1));
        for (i2 = 0; i2 < nx; i2++) {
          xi[i2] = T->nodes[static_cast<int32_T>(prnt) - 1].xi[r3[i2]];
        }
        //  Remove zero entries
        if (r3.size(1) > occ) {
          ctr[0] = T->nodes[static_cast<int32_T>(prnt) - 1].ctr[0];
          ctr[1] = T->nodes[static_cast<int32_T>(prnt) - 1].ctr[1];
          ctr[2] = T->nodes[static_cast<int32_T>(prnt) - 1].ctr[2];
          b_x.set_size(&l_emlrtRTEI, sp, 3, r3.size(1));
          for (i2 = 0; i2 < nx; i2++) {
            i3 = static_cast<int32_T>(
                T->nodes[static_cast<int32_T>(prnt) - 1].xi[r3[i2]]);
            if ((i3 < 1) || (i3 > 80000)) {
              emlrtDynamicBoundsCheckR2012b(i3, 1, 80000, &nb_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            maxdimlen = 3 * (i3 - 1);
            b_x[3 * i2] = x[maxdimlen];
            b_x[3 * i2 + 1] = x[maxdimlen + 1];
            b_x[3 * i2 + 2] = x[maxdimlen + 2];
          }
          ictr[0] = T->nodes[static_cast<int32_T>(prnt) - 1].ctr[0];
          ictr[1] = T->nodes[static_cast<int32_T>(prnt) - 1].ctr[1];
          ictr[2] = T->nodes[static_cast<int32_T>(prnt) - 1].ctr[2];
          st.site = &ab_emlrtRSI;
          coder::bsxfun(st, b_x, ictr, b_idx);
          loop_ub = b_idx.size(1);
          c_idx.set_size(&m_emlrtRTEI, sp, 1, b_idx.size(1));
          for (i2 = 0; i2 < loop_ub; i2++) {
            c_idx[i2] = ((static_cast<real_T>(b_idx[3 * i2]) +
                          2.0 * static_cast<real_T>(b_idx[3 * i2 + 1])) +
                         4.0 * static_cast<real_T>(b_idx[3 * i2 + 2])) +
                        1.0;
          }
          st.site = &g_emlrtRSI;
          c_st.site = &h_emlrtRSI;
          coder::unique_vector(c_st, c_idx, unique_idx);
          i2 = unique_idx.size(1);
          for (k = 0; k < i2; k++) {
            boolean_T T_data[1000];
            if (k + 1 > i2) {
              emlrtDynamicBoundsCheckR2012b(k + 1, 1, i2, &c_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            i3 = nbox + k;
            if (i3 + 2 > 10000) {
              st.site = &f_emlrtRSI;
              coder::c_error(st);
            }
            st.site = &e_emlrtRSI;
            coder::bitget(st, unique_idx[k] - 1.0, ictr);
            r = _mm_loadu_pd(&ictr[0]);
            r = _mm_sub_pd(r, r2);
            _mm_storeu_pd(&ictr[0], r);
            r1 = _mm_loadu_pd(&ctr[0]);
            _mm_storeu_pd(&T->nodes[i3 + 1].ctr[0],
                          _mm_add_pd(r1, _mm_mul_pd(_mm_set1_pd(l), r)));
            T->nodes[(nbox + k) + 1].ctr[2] = ctr[2] + l * (ictr[2] - 0.5);
            for (maxdimlen = 0; maxdimlen < 80000; maxdimlen++) {
              T->nodes[(nbox + k) + 1].xi[maxdimlen] = 0.0;
            }
            //  Preallocate xi with fixed size
            maxdimlen = c_idx.size(1) - 1;
            trueCount = 0;
            for (int32_T i{0}; i <= maxdimlen; i++) {
              if (c_idx[i] == unique_idx[k]) {
                trueCount++;
              }
            }
            r4.set_size(&j_emlrtRTEI, sp, 1, trueCount);
            partialTrueCount = 0;
            for (int32_T i{0}; i <= maxdimlen; i++) {
              if (c_idx[i] == unique_idx[k]) {
                r4[partialTrueCount] = i;
                partialTrueCount++;
              }
            }
            nx = r4.size(1);
            for (maxdimlen = 0; maxdimlen < nx; maxdimlen++) {
              if ((r4[maxdimlen] < 0) || (r4[maxdimlen] > r3.size(1) - 1)) {
                emlrtDynamicBoundsCheckR2012b(r4[maxdimlen], 0, r3.size(1) - 1,
                                              &cb_emlrtBCI, (emlrtConstCTX)sp);
              }
            }
            for (maxdimlen = 0; maxdimlen < nx; maxdimlen++) {
              T->nodes[(nbox + k) + 1].xi[maxdimlen] = xi[r4[maxdimlen]];
            }
            T->nodes[i3 + 1].prnt = prnt;
            T->nodes[(nbox + k) + 1].chld.size[0] = 1;
            T->nodes[(nbox + k) + 1].chld.size[1] = 1000;
            //  Use fixed size
            T->nodes[(nbox + k) + 1].nbor.size[0] = 1;
            T->nodes[(nbox + k) + 1].nbor.size[1] = 1000;
            //  Use fixed size
            T->nodes[(nbox + k) + 1].ilist.size[0] = 1;
            T->nodes[(nbox + k) + 1].ilist.size[1] = 1000;
            //  Use fixed size
            T->nodes[(nbox + k) + 1].snbor.size[0] = 1;
            T->nodes[(nbox + k) + 1].snbor.size[1] = 1000;
            for (maxdimlen = 0; maxdimlen < 1000; maxdimlen++) {
              T->nodes[(nbox + k) + 1].chld.data[maxdimlen] = 0.0;
              T->nodes[(nbox + k) + 1].nbor.data[maxdimlen] = 0.0;
              T->nodes[(nbox + k) + 1].ilist.data[maxdimlen] = 0.0;
              T->nodes[(nbox + k) + 1].snbor.data[maxdimlen] = 0.0;
            }
            //  Use fixed size
            //  Find the next empty spot in the child array
            loop_ub = T->nodes[static_cast<int32_T>(prnt) - 1].chld.size[1];
            for (maxdimlen = 0; maxdimlen < loop_ub; maxdimlen++) {
              T_data[maxdimlen] = (T->nodes[static_cast<int32_T>(prnt) - 1]
                                       .chld.data[maxdimlen] == 0.0);
            }
            coder::eml_find(T_data, (int32_T *)&maxdimlen, tmp_size);
            if (tmp_size[1] - 1 >= 0) {
              T->nodes[static_cast<int32_T>(prnt) - 1]
                  .chld.data[maxdimlen - 1] = static_cast<int16_T>(i3 + 2);
            }
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)sp);
            }
          }
          if (unique_idx.size(1) - 1 >= 0) {
            nbox += unique_idx.size(1);
          }
          for (i2 = 0; i2 < 80000; i2++) {
            T->nodes[static_cast<int32_T>(prnt) - 1].xi[i2] = 0.0;
          }
          //  Reset xi to empty
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      //  If no boxes were subdivided into new boxes, terminate, otherwise
      //  update for the next iteration
      if (nbox + 1 <= idx + 1) {
        exitg2 = 1;
      } else {
        nlvl++;
        T->nlvl = b_i;
        //  while mlvl < nlvl
        //    T.lvp = [T.lvp zeros(1,mlvl)];
        //    mlvl = 2*mlvl;
        //  end
        //  T.lvp(nlvl+1) = nbox;
        if (b_i + 1 > 20) {
          st.site = &d_emlrtRSI;
          coder::d_error(st);
        }
        T->lvp.data[b_i] = nbox + 1;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
    }
  } while (exitg2 == 0);
  //  Memory cleanup, if we made arrays too big
  //  T.lvp = T.lvp(1:nlvl+1);
  if (nlvl + 1 > 20) {
    emlrtDynamicBoundsCheckR2012b(nlvl + 1, 1, 20, &d_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  T->lvp.size[1] = nlvl + 1;
  if (nbox + 1 > 10000) {
    emlrtDimSizeGeqCheckR2012b(10000, nbox + 1, &emlrtECI, (emlrtCTX)sp);
  }
  T->nodes.set_size(&n_emlrtRTEI, sp, T->nodes.size(0), nbox + 1);
  //  Next, we have to compute adjacency, neighbor, interaction list info for
  //  each box.
  //  Initialize data for neighbor calculation
  if (nbox >= 0) {
    std::memset(&ilvl_data[0], 0,
                static_cast<uint32_T>(nbox + 1) * sizeof(uint32_T));
  }
  llvl.set_size(&o_emlrtRTEI, sp, nlvl);
  l = T->lrt;
  for (int32_T b_prnt{0}; b_prnt < nlvl; b_prnt++) {
    if (b_prnt > nlvl) {
      emlrtDynamicBoundsCheckR2012b(b_prnt + 1, 1, nlvl + 1, &k_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (b_prnt + 2 > nlvl + 1) {
      emlrtDynamicBoundsCheckR2012b(b_prnt + 2, 1, nlvl + 1, &l_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    d = T->lvp.data[b_prnt];
    prnt = T->lvp.data[b_prnt + 1];
    if (d + 1.0 > prnt) {
      b_i = 0;
      i1 = 0;
    } else {
      if ((static_cast<int32_T>(d + 1.0) < 1) ||
          (static_cast<int32_T>(d + 1.0) > nbox + 1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d + 1.0), 1,
                                      nbox + 1, &m_emlrtBCI, (emlrtConstCTX)sp);
      }
      b_i = static_cast<int32_T>(d + 1.0) - 1;
      if ((static_cast<int32_T>(prnt) < 1) ||
          (static_cast<int32_T>(prnt) > nbox + 1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(prnt), 1, nbox + 1,
                                      &n_emlrtBCI, (emlrtConstCTX)sp);
      }
      i1 = static_cast<int32_T>(prnt);
    }
    loop_ub = i1 - b_i;
    for (i1 = 0; i1 < loop_ub; i1++) {
      ilvl_data[b_i + i1] = static_cast<uint32_T>(b_prnt + 1);
    }
    if (b_prnt + 1 > llvl.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_prnt + 1, 1, llvl.size(0), &x_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    llvl[b_prnt] = l;
    l *= 0.5;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  //  Find neighbors and interaction list of each box
  for (int32_T b_prnt{0}; b_prnt <= nlvl - 2; b_prnt++) {
    b_i = llvl.size(0);
    if (b_prnt + 2 > llvl.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_prnt + 2, 1, llvl.size(0), &w_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    l = llvl[b_prnt + 1];
    if (b_prnt + 2 > nlvl + 1) {
      emlrtDynamicBoundsCheckR2012b(b_prnt + 2, 1, nlvl + 1, &lb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    d = T->lvp.data[b_prnt + 1];
    if (b_prnt + 3 > nlvl + 1) {
      emlrtDynamicBoundsCheckR2012b(b_prnt + 3, 1, nlvl + 1, &e_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    prnt = T->lvp.data[b_prnt + 2];
    i1 = static_cast<int32_T>(prnt + (1.0 - (d + 1.0)));
    emlrtForLoopVectorCheckR2021a(d + 1.0, 1.0, prnt, mxDOUBLE_CLASS, i1,
                                  &e_emlrtRTEI, (emlrtConstCTX)sp);
    for (int32_T i{0}; i < i1; i++) {
      real_T c_i;
      real_T prnt_tmp;
      int16_T i4;
      c_i = (d + 1.0) + static_cast<real_T>(i);
      i2 = T->nodes.size(1);
      p = ((static_cast<int32_T>(c_i) < 1) ||
           (static_cast<int32_T>(c_i) > T->nodes.size(1)));
      if (p) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i), 1,
                                      T->nodes.size(1), &mb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      ictr[0] = T->nodes[static_cast<int32_T>(c_i) - 1].ctr[0];
      ictr[1] = T->nodes[static_cast<int32_T>(c_i) - 1].ctr[1];
      ictr[2] = T->nodes[static_cast<int32_T>(c_i) - 1].ctr[2];
      prnt_tmp = T->nodes[static_cast<int32_T>(c_i) - 1].prnt;
      //  Add all non-self children of parent
      if ((static_cast<int32_T>(prnt_tmp) < 1) ||
          (static_cast<int32_T>(prnt_tmp) > T->nodes.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(prnt_tmp), 1,
                                      T->nodes.size(1), &f_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      trueCount = 0;
      for (idx = 0; idx < 1000; idx++) {
        if (T->nodes[static_cast<int32_T>(
                         T->nodes[static_cast<int32_T>(c_i) - 1].prnt) -
                     1]
                .chld.data[idx] > 0.0) {
          trueCount++;
        }
      }
      partialTrueCount = 0;
      for (idx = 0; idx < 1000; idx++) {
        if (T->nodes[static_cast<int32_T>(
                         T->nodes[static_cast<int32_T>(c_i) - 1].prnt) -
                     1]
                .chld.data[idx] > 0.0) {
          tmp_data[partialTrueCount] = static_cast<int16_T>(idx);
          partialTrueCount++;
        }
      }
      for (i3 = 0; i3 < trueCount; i3++) {
        j_data[i3] =
            T->nodes[static_cast<int32_T>(
                         T->nodes[static_cast<int32_T>(c_i) - 1].prnt) -
                     1]
                .chld.data[tmp_data[i3]];
      }
      //  Remove zero entries
      maxdimlen = trueCount - 1;
      nx = 0;
      partialTrueCount = 0;
      for (idx = 0; idx <= maxdimlen; idx++) {
        if (j_data[idx] != c_i) {
          nx++;
          b_tmp_data[partialTrueCount] = static_cast<int16_T>(idx);
          partialTrueCount++;
        }
      }
      for (i3 = 0; i3 < nx; i3++) {
        i4 = b_tmp_data[i3];
        if ((i4 < 0) || (i4 > trueCount - 1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(i4), 0,
                                        trueCount - 1, &ab_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      T->nodes[static_cast<int32_T>(c_i) - 1].nbor.size[0] = 1;
      T->nodes[static_cast<int32_T>(c_i) - 1].nbor.size[1] = nx;
      for (i3 = 0; i3 < nx; i3++) {
        T->nodes[static_cast<int32_T>(c_i) - 1].nbor.data[i3] =
            T->nodes[static_cast<int32_T>(
                         T->nodes[static_cast<int32_T>(c_i) - 1].prnt) -
                     1]
                .chld.data[tmp_data[b_tmp_data[i3]]];
      }
      //  for k = j(j~=i)
      //      T.nodes(k).snbor = [T.nodes(k).snbor i];
      //  end
      for (i3 = 0; i3 < nx; i3++) {
        i4 = b_tmp_data[i3];
        if ((i4 < 0) || (i4 > trueCount - 1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(i4), 0,
                                        trueCount - 1, &bb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      for (idx = 0; idx < nx; idx++) {
        if (idx + 1 > nx) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, nx, &g_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i3 = static_cast<int32_T>(j_data[b_tmp_data[idx]]);
        if ((i3 < 1) || (i3 > i2)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &h_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        emlrtDimSizeGeqCheckR2012b(1000, 1001, &b_emlrtECI, (emlrtCTX)sp);
      }
      //  % Add coarser parent-neighbors if adjacent (non-uniform
      //  % discretization only)
      //  for j = T.nodes(prnt).nbor
      //    if ~isempty(T.nodes(j).xi)
      //      jctr = T.nodes(j).ctr;
      //      dist = round((abs(ictr - jctr) - 0.5*(l + llvl(ilvl(j))))/l);
      //      if all(dist <= 0)
      //        T.nodes(i).nbor = [T.nodes(i).nbor j];
      //        T.nodes(j).snbor = [T.nodes(j).snbor i];
      //      else
      //          T.nodes(i).ilist = [T.nodes(i).ilist, j];
      //      end
      //
      //    end
      //  end
      //  Add coarser parent-neighbors if adjacent (non-uniform
      //  discretization only)
      i3 = static_cast<int32_T>(T->nodes[static_cast<int32_T>(c_i) - 1].prnt);
      p = ((i3 < 1) || (i3 > T->nodes.size(1)));
      if (p) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, T->nodes.size(1), &t_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      loop_ub = T->nodes[static_cast<int32_T>(
                             T->nodes[static_cast<int32_T>(c_i) - 1].prnt) -
                         1]
                    .nbor.size[1];
      if ((i3 < 1) || (i3 > T->nodes.size(1))) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, T->nodes.size(1), &t_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      for (i3 = 0; i3 < loop_ub; i3++) {
        if ((static_cast<int32_T>(prnt_tmp) < 1) ||
            (static_cast<int32_T>(prnt_tmp) > i2)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(prnt_tmp), 1, i2,
                                        &db_emlrtBCI, (emlrtConstCTX)sp);
        }
        j_data[i3] = T->nodes[static_cast<int32_T>(prnt_tmp) - 1].nbor.data[i3];
      }
      if (loop_ub - 1 >= 0) {
        r5 = _mm_loadu_pd(&ictr[0]);
      }
      for (idx = 0; idx < loop_ub; idx++) {
        boolean_T dist[3];
        if (idx + 1 > loop_ub) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, loop_ub, &i_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i3 = static_cast<int32_T>(j_data[idx]);
        if ((i3 < 1) || (i3 > i2)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &j_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        r = _mm_loadu_pd(&T->nodes[i3 - 1].ctr[0]);
        _mm_storeu_pd(&dv1[0], _mm_sub_pd(r5, r));
        dv2[0] = muDoubleScalarAbs(dv1[0]);
        dv2[1] = muDoubleScalarAbs(dv1[1]);
        r = _mm_loadu_pd(&dv2[0]);
        _mm_storeu_pd(&ctr[0], r);
        if (i3 > nbox + 1) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, nbox + 1, &fb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        maxdimlen = static_cast<int32_T>(ilvl_data[i3 - 1]);
        if ((maxdimlen < 1) || (maxdimlen > b_i)) {
          emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, b_i, &eb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        prnt = 0.5 * (l + llvl[maxdimlen - 1]);
        dist[0] = (muDoubleScalarRound((ctr[0] - prnt) / l) <= 0.0);
        dist[1] = (muDoubleScalarRound((ctr[1] - prnt) / l) <= 0.0);
        dist[2] =
            (muDoubleScalarRound(
                 (muDoubleScalarAbs(ictr[2] - T->nodes[i3 - 1].ctr[2]) - prnt) /
                 l) <= 0.0);
        if (coder::all(dist)) {
          maxdimlen = T->nodes[static_cast<int32_T>(c_i) - 1].nbor.size[1];
          if (maxdimlen + 1 > 1000) {
            emlrtDimSizeGeqCheckR2012b(1000, 1001, &c_emlrtECI, (emlrtCTX)sp);
          }
          if ((static_cast<int32_T>(c_i) < 1) ||
              (static_cast<int32_T>(c_i) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i), 1, i2,
                                          &u_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (i3 > i2) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &o_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          emlrtDimSizeGeqCheckR2012b(1000, 1001, &d_emlrtECI, (emlrtCTX)sp);
        } else {
          emlrtDimSizeGeqCheckR2012b(1000, 1001, &e_emlrtECI, (emlrtCTX)sp);
        }
      }
      //  Add children of parent-neighbors if adjacent
      i3 = static_cast<int32_T>(T->nodes[static_cast<int32_T>(c_i) - 1].prnt);
      p = ((i3 < 1) || (i3 > T->nodes.size(1)));
      if (p) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, T->nodes.size(1), &v_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      loop_ub = T->nodes[static_cast<int32_T>(
                             T->nodes[static_cast<int32_T>(c_i) - 1].prnt) -
                         1]
                    .nbor.size[1];
      b_T.set_size(&p_emlrtRTEI, sp, 1, loop_ub);
      if ((i3 < 1) || (i3 > T->nodes.size(1))) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, T->nodes.size(1), &v_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      for (i3 = 0; i3 < loop_ub; i3++) {
        if ((static_cast<int32_T>(prnt_tmp) < 1) ||
            (static_cast<int32_T>(prnt_tmp) > i2)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(prnt_tmp), 1, i2,
                                        &gb_emlrtBCI, (emlrtConstCTX)sp);
        }
        maxdimlen = static_cast<int32_T>(
            T->nodes[static_cast<int32_T>(prnt_tmp) - 1].nbor.data[i3]);
        if ((maxdimlen < 1) || (maxdimlen > i2)) {
          emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i2, &gb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        b_T[i3] = T->nodes[maxdimlen - 1];
      }
      st.site = &c_emlrtRSI;
      cast(st, b_T, r6);
      st.site = &c_emlrtRSI;
      coder::internal::horzcatStructList(st, r6, varargin_1);
      tmp_size[0] = 1;
      tmp_size[1] = varargin_1.size(1);
      iv[0] = (*(int32_T(*)[2])varargin_1.size())[0];
      iv[1] = (*(int32_T(*)[2])varargin_1.size())[1];
      st.site = &b_emlrtRSI;
      coder::internal::indexShapeCheck(st, iv, tmp_size);
      maxdimlen = varargin_1.size(1) - 1;
      trueCount = 0;
      for (idx = 0; idx <= maxdimlen; idx++) {
        if (varargin_1[idx] > 0.0) {
          trueCount++;
        }
      }
      r7.set_size(&j_emlrtRTEI, sp, trueCount);
      partialTrueCount = 0;
      for (idx = 0; idx <= maxdimlen; idx++) {
        if (varargin_1[idx] > 0.0) {
          r7[partialTrueCount] = idx;
          partialTrueCount++;
        }
      }
      nx = r7.size(0);
      for (i3 = 0; i3 < nx; i3++) {
        if (r7[i3] > maxdimlen) {
          emlrtDynamicBoundsCheckR2012b(r7[i3], 0, maxdimlen, &hb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      //  Remove zero entries
      iv[0] = (*(int32_T(*)[2])T->nodes.size())[0];
      iv[1] = (*(int32_T(*)[2])T->nodes.size())[1];
      st.site = &emlrtRSI;
      coder::internal::indexShapeCheck(st, iv, r7.size(0));
      c_T.set_size(&q_emlrtRTEI, sp, 1, r7.size(0));
      for (i3 = 0; i3 < nx; i3++) {
        maxdimlen = static_cast<int32_T>(varargin_1[r7[i3]]);
        if ((maxdimlen < 1) || (maxdimlen > i2)) {
          emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i2, &ib_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        c_T[i3] = T->nodes[maxdimlen - 1];
      }
      st.site = &emlrtRSI;
      b_cast(st, c_T, r8);
      st.site = &emlrtRSI;
      coder::internal::b_horzcatStructList(st, r8, r9);
      st.site = &emlrtRSI;
      nx = r9.size(1);
      c_st.site = &y_emlrtRSI;
      idx = static_cast<int32_T>(static_cast<uint32_T>(r9.size(1)) / 3U);
      if (idx > r9.size(1)) {
        emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                      "Coder:builtins:AssertionFailed",
                                      "Coder:builtins:AssertionFailed", 0);
      }
      maxdimlen = 1;
      if (r9.size(1) > 1) {
        maxdimlen = r9.size(1);
      }
      maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
      if (maxdimlen < 3) {
        emlrtErrorWithMessageIdR2018a(
            &st, &c_emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
            "Coder:toolbox:reshape_emptyReshapeLimit", 0);
      }
      if (idx > maxdimlen) {
        emlrtErrorWithMessageIdR2018a(
            &st, &c_emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
            "Coder:toolbox:reshape_emptyReshapeLimit", 0);
      }
      if (3 * idx != r9.size(1)) {
        emlrtErrorWithMessageIdR2018a(
            &st, &b_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
            "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
      }
      b_dist.set_size(&r_emlrtRTEI, sp, idx, 3);
      for (i3 = 0; i3 < 3; i3++) {
        for (maxdimlen = 0; maxdimlen < idx; maxdimlen++) {
          b_dist[maxdimlen + b_dist.size(0) * i3] = r9[i3 + 3 * maxdimlen];
        }
      }
      ictr[0] = T->nodes[static_cast<int32_T>(c_i) - 1].ctr[0];
      ictr[1] = T->nodes[static_cast<int32_T>(c_i) - 1].ctr[1];
      ictr[2] = T->nodes[static_cast<int32_T>(c_i) - 1].ctr[2];
      st.site = &bb_emlrtRSI;
      coder::b_bsxfun(st, ictr, b_dist, r10);
      nx = r10.size(0) * 3;
      b_dist.set_size(&db_emlrtRTEI, sp, r10.size(0), 3);
      for (k = 0; k < nx; k++) {
        b_dist[k] = muDoubleScalarAbs(r10[k]);
      }
      loop_ub = b_dist.size(0) * 3;
      b_dist.set_size(&s_emlrtRTEI, sp, b_dist.size(0), 3);
      maxdimlen = (loop_ub / 2) << 1;
      nx = maxdimlen - 2;
      for (i3 = 0; i3 <= nx; i3 += 2) {
        r = _mm_loadu_pd(&b_dist[i3]);
        _mm_storeu_pd(&b_dist[i3], _mm_div_pd(r, _mm_set1_pd(l)));
      }
      for (i3 = maxdimlen; i3 < loop_ub; i3++) {
        b_dist[i3] = b_dist[i3] / l;
      }
      nx = b_dist.size(0) * 3;
      for (k = 0; k < nx; k++) {
        b_dist[k] = muDoubleScalarRound(b_dist[k]);
      }
      maxdimlen = b_dist.size(0) - 1;
      loop_ub = b_dist.size(0);
      r11.set_size(&t_emlrtRTEI, sp, b_dist.size(0));
      if (b_dist.size(0) >= 1) {
        for (idx = 0; idx <= maxdimlen; idx++) {
          r11[idx] = b_dist[idx];
        }
        for (nx = 0; nx < 2; nx++) {
          for (idx = 0; idx <= maxdimlen; idx++) {
            prnt = b_dist[idx + b_dist.size(0) * (nx + 1)];
            if (muDoubleScalarIsNaN(prnt)) {
              p = false;
            } else if (muDoubleScalarIsNaN(r11[idx])) {
              p = true;
            } else {
              p = (r11[idx] < prnt);
            }
            if (p) {
              r11[idx] = prnt;
            }
          }
        }
      }
      trueCount = 0;
      for (idx = 0; idx <= maxdimlen; idx++) {
        if (r11[idx] <= 1.0) {
          trueCount++;
        }
      }
      r12.set_size(&j_emlrtRTEI, sp, trueCount);
      partialTrueCount = 0;
      for (idx = 0; idx <= maxdimlen; idx++) {
        if (r11[idx] <= 1.0) {
          r12[partialTrueCount] = idx;
          partialTrueCount++;
        }
      }
      nx = r12.size(0);
      for (i3 = 0; i3 < nx; i3++) {
        if (r12[i3] > r7.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(r12[i3], 0, r7.size(0) - 1,
                                        &jb_emlrtBCI, (emlrtConstCTX)sp);
        }
      }
      //  if ~isempty(j)
      //    T.nodes(i).nbor  = [T.nodes(i).nbor j];
      //  for k = j
      //      T.nodes(k).snbor = [T.nodes(k).snbor i];
      //  end
      for (maxdimlen = 0; maxdimlen < nx; maxdimlen++) {
        if (maxdimlen + 1 > nx) {
          emlrtDynamicBoundsCheckR2012b(maxdimlen + 1, 1, nx, &p_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i3 = static_cast<int32_T>(varargin_1[r7[r12[maxdimlen]]]);
        if ((i3 < 1) || (i3 > i2)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &q_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        emlrtDimSizeGeqCheckR2012b(1000, 1001, &f_emlrtECI, (emlrtCTX)sp);
      }
      //  Add non-adjacent parent-neighbors-children to interaction list
      r13.set_size(&u_emlrtRTEI, sp, b_dist.size(0));
      r14.set_size(&v_emlrtRTEI, sp, b_dist.size(0));
      for (i3 = 0; i3 < loop_ub; i3++) {
        r13[i3] = (r11[i3] > 1.0);
        r14[i3] = (r11[i3] < 2.5);
      }
      if (r13.size(0) == r14.size(0)) {
        r15.set_size(&u_emlrtRTEI, sp, b_dist.size(0));
        for (i3 = 0; i3 < loop_ub; i3++) {
          r15[i3] = (r13[i3] && r14[i3]);
        }
      } else {
        st.site = &ib_emlrtRSI;
        b_and(st, r15, r13, r14);
      }
      maxdimlen = r15.size(0) - 1;
      trueCount = 0;
      for (idx = 0; idx <= maxdimlen; idx++) {
        if (r15[idx]) {
          trueCount++;
        }
      }
      r16.set_size(&j_emlrtRTEI, sp, trueCount);
      partialTrueCount = 0;
      for (idx = 0; idx <= maxdimlen; idx++) {
        if (r15[idx]) {
          r16[partialTrueCount] = idx;
          partialTrueCount++;
        }
      }
      nx = r16.size(0);
      for (i3 = 0; i3 < nx; i3++) {
        if (r16[i3] > r7.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(r16[i3], 0, r7.size(0) - 1,
                                        &kb_emlrtBCI, (emlrtConstCTX)sp);
        }
      }
      //  if ~isempty(j)
      //    T.nodes(i).ilist = [T.nodes(i).ilist j];
      //  end
      for (maxdimlen = 0; maxdimlen < nx; maxdimlen++) {
        if (maxdimlen + 1 > nx) {
          emlrtDynamicBoundsCheckR2012b(maxdimlen + 1, 1, nx, &r_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if ((static_cast<int32_T>(c_i) < 1) ||
            (static_cast<int32_T>(c_i) > i2)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i), 1, i2,
                                        &s_emlrtBCI, (emlrtConstCTX)sp);
        }
        emlrtDimSizeGeqCheckR2012b(1000, 1001, &g_emlrtECI, (emlrtCTX)sp);
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (shypoct.cpp)
