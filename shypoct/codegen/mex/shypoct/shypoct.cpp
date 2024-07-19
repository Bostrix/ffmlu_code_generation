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
#include "find.h"
#include "horzcatStructList.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "shypoct_data.h"
#include "shypoct_types.h"
#include "unique.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    175,                                                           // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    172,                                                           // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    164,                                                           // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    160,                                                           // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    142,                                                           // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    140,                                                           // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo g_emlrtRSI{
    118,                                                           // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    109,                                                           // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo i_emlrtRSI{
    92,                                                            // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo j_emlrtRSI{
    90,                                                            // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo k_emlrtRSI{
    80,                                                            // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo l_emlrtRSI{
    78,                                                            // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo m_emlrtRSI{
    48,                                                            // lineNo
    "unique",                                                      // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/unique.m" // pathName
};

static emlrtRSInfo mb_emlrtRSI{
    39,                                                            // lineNo
    "find",                                                        // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo sb_emlrtRSI{
    41,                                                               // lineNo
    "cat",                                                            // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/cat.m" // pathName
};

static emlrtMCInfo emlrtMCI{
    13,                                                            // lineNo
    3,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtMCInfo b_emlrtMCI{
    14,                                                            // lineNo
    3,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo emlrtRTEI{
    74,                  // lineNo
    13,                  // colNo
    "reshapeSizeChecks", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" // pName
};

static emlrtBCInfo emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    71,                                                             // lineNo
    38,                                                             // colNo
    "T.lvp",                                                        // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtRTEInfo b_emlrtRTEI{
    71,                                                            // lineNo
    16,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtBCInfo b_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    83,                                                             // lineNo
    26,                                                             // colNo
    "unique_idx",                                                   // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtDCInfo emlrtDCI{
    109,                                                            // lineNo
    34,                                                             // colNo
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    1                                                               // checkKind
};

static emlrtBCInfo c_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    117,                                                            // lineNo
    19,                                                             // colNo
    "T.lvp",                                                        // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo d_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    118,                                                            // lineNo
    23,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtRTEInfo c_emlrtRTEI{
    124,                                                           // lineNo
    13,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo d_emlrtRTEI{
    131,                                                           // lineNo
    13,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtBCInfo e_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    133,                                                            // lineNo
    34,                                                             // colNo
    "T.lvp",                                                        // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtRTEInfo e_emlrtRTEI{
    133,                                                           // lineNo
    13,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtBCInfo f_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    134,                                                            // lineNo
    22,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo g_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    138,                                                            // lineNo
    19,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo h_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    144,                                                            // lineNo
    15,                                                             // colNo
    "j",                                                            // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo i_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    154,                                                            // lineNo
    32,                                                             // colNo
    "parent_neighbors",                                             // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo j_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    155,                                                            // lineNo
    31,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo k_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    156,                                                            // lineNo
    28,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo l_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    125,                                                            // lineNo
    16,                                                             // colNo
    "T.lvp",                                                        // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo m_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    125,                                                            // lineNo
    31,                                                             // colNo
    "T.lvp",                                                        // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo n_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    125,                                                            // lineNo
    10,                                                             // colNo
    "ilvl",                                                         // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo o_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    125,                                                            // lineNo
    25,                                                             // colNo
    "ilvl",                                                         // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo p_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    172,                                                            // lineNo
    43,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo q_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    145,                                                            // lineNo
    17,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo r_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    72,                                                             // lineNo
    20,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo s_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    99,                                                             // lineNo
    17,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo t_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    93,                                                             // lineNo
    19,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo u_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    95,                                                             // lineNo
    19,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo v_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    97,                                                             // lineNo
    41,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo w_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    149,                                                            // lineNo
    34,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo x_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    145,                                                            // lineNo
    37,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo y_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    152,                                                            // lineNo
    24,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo ab_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    176,                                                            // lineNo
    17,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo bb_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    165,                                                            // lineNo
    23,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo cb_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    160,                                                            // lineNo
    23,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo db_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    161,                                                            // lineNo
    43,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtDCInfo b_emlrtDCI{
    109,                                                            // lineNo
    25,                                                             // colNo
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    1                                                               // checkKind
};

static emlrtBCInfo eb_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    71,                                                             // lineNo
    22,                                                             // colNo
    "T.lvp",                                                        // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtDCInfo c_emlrtDCI{
    122,                                                            // lineNo
    16,                                                             // colNo
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    1                                                               // checkKind
};

static emlrtBCInfo fb_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    112,                                                            // lineNo
    13,                                                             // colNo
    "T.lvp",                                                        // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo gb_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    132,                                                            // lineNo
    14,                                                             // colNo
    "llvl",                                                         // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo hb_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    133,                                                            // lineNo
    19,                                                             // colNo
    "T.lvp",                                                        // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo ib_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    126,                                                            // lineNo
    10,                                                             // colNo
    "llvl",                                                         // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo jb_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    90,                                                             // lineNo
    11,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo kb_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    139,                                                            // lineNo
    16,                                                             // colNo
    "j",                                                            // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo lb_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    91,                                                             // lineNo
    23,                                                             // colNo
    "xi",                                                           // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo mb_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    144,                                                            // lineNo
    28,                                                             // colNo
    "nbor_indices",                                                 // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo nb_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    172,                                                            // lineNo
    35,                                                             // colNo
    "T.nodes",                                                      // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtBCInfo ob_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    157,                                                            // lineNo
    62,                                                             // colNo
    "llvl",                                                         // aName
    "shypoct",                                                      // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m", // pName
    0                                                               // checkKind
};

static emlrtRTEInfo k_emlrtRTEI{
    46,                                                            // lineNo
    3,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo l_emlrtRTEI{
    47,                                                            // lineNo
    3,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo m_emlrtRTEI{
    53,                                                            // lineNo
    3,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo n_emlrtRTEI{
    72,                                                            // lineNo
    7,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo o_emlrtRTEI{
    78,                                                            // lineNo
    27,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo p_emlrtRTEI{
    1,                                                             // lineNo
    14,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo q_emlrtRTEI{
    79,                                                            // lineNo
    9,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo r_emlrtRTEI{
    93,                                                            // lineNo
    11,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo s_emlrtRTEI{
    95,                                                            // lineNo
    11,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo t_emlrtRTEI{
    97,                                                            // lineNo
    33,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo u_emlrtRTEI{
    99,                                                            // lineNo
    9,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo v_emlrtRTEI{
    117,                                                           // lineNo
    3,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo w_emlrtRTEI{
    118,                                                           // lineNo
    3,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo x_emlrtRTEI{
    121,                                                           // lineNo
    3,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo y_emlrtRTEI{
    122,                                                           // lineNo
    10,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo ab_emlrtRTEI{
    139,                                                           // lineNo
    16,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo bb_emlrtRTEI{
    140,                                                           // lineNo
    7,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo cb_emlrtRTEI{
    142,                                                           // lineNo
    7,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo db_emlrtRTEI{
    145,                                                           // lineNo
    29,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo eb_emlrtRTEI{
    149,                                                           // lineNo
    7,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo fb_emlrtRTEI{
    152,                                                           // lineNo
    9,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo gb_emlrtRTEI{
    164,                                                           // lineNo
    31,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo hb_emlrtRTEI{
    165,                                                           // lineNo
    15,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo ib_emlrtRTEI{
    160,                                                           // lineNo
    15,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo jb_emlrtRTEI{
    161,                                                           // lineNo
    35,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo kb_emlrtRTEI{
    172,                                                           // lineNo
    27,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo lb_emlrtRTEI{
    175,                                                           // lineNo
    25,                                                            // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRTEInfo mb_emlrtRTEI{
    176,                                                           // lineNo
    9,                                                             // colNo
    "shypoct",                                                     // fName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pName
};

static emlrtRSInfo ub_emlrtRSI{
    13,                                                            // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo vb_emlrtRSI{
    14,                                                            // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo wb_emlrtRSI{
    87,                                                            // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

static emlrtRSInfo xb_emlrtRSI{
    46,                                                            // lineNo
    "shypoct",                                                     // fcnName
    "/home/user/Documents/ffmlu_code_generation/shypoct/shypoct.m" // pathName
};

// Function Declarations
static const mxArray *b_emlrt_marshallOut(const emlrtStack &sp,
                                          const char_T u[35]);

static void b_error(const emlrtStack &sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo &location);

static const mxArray *c_emlrt_marshallOut(const emlrtStack &sp,
                                          const char_T u[25]);

static void cast(const emlrtStack &sp, const struct_T r[160000],
                 struct1_T r1[160000]);

static const mxArray *d_emlrt_marshallOut(const emlrtStack &sp,
                                          const char_T u[38]);

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const char_T u[23]);

// Function Definitions
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

static void cast(const emlrtStack &sp, const struct_T r[160000],
                 struct1_T r1[160000])
{
  for (int32_T i{0}; i < 160000; i++) {
    r1[i].ctr[0] = r[i].ctr[0];
    r1[i].ctr[1] = r[i].ctr[1];
    r1[i].ctr[2] = r[i].ctr[2];
    r1[i].xi.set_size(&k_emlrtRTEI, &sp, 1, 0);
    r1[i].prnt = r[i].prnt;
    r1[i].chld.set_size(&k_emlrtRTEI, &sp, 1, 0);
    r1[i].nbor.set_size(&k_emlrtRTEI, &sp, 1, 0);
    r1[i].ilist.set_size(&k_emlrtRTEI, &sp, 1, 0);
    r1[i].snbor.set_size(&k_emlrtRTEI, &sp, 1, 0);
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
  static const struct_T r2{
      {0.0, 0.0, 0.0}, // ctr
      0.0              // prnt
  };
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
  __m128d r3;
  coder::array<struct1_T, 1U> b_T;
  coder::array<real_T, 2U> b_x;
  coder::array<real_T, 2U> c_idx;
  coder::array<real_T, 2U> nbor;
  coder::array<real_T, 2U> nbor_indices;
  coder::array<real_T, 2U> r6;
  coder::array<real_T, 2U> unique_idx;
  coder::array<real_T, 2U> xi;
  coder::array<real_T, 1U> llvl;
  coder::array<int32_T, 2U> ii;
  coder::array<int32_T, 2U> r4;
  coder::array<int32_T, 2U> r5;
  coder::array<uint32_T, 1U> ilvl;
  coder::array<boolean_T, 2U> b_idx;
  coder::array<boolean_T, 2U> c_x;
  emlrtStack b_st;
  emlrtStack st;
  real_T ext[6];
  real_T ctr_data[3];
  real_T dist[3];
  real_T minval[3];
  real_T dv[2];
  real_T dv1[2];
  real_T c_i;
  real_T d;
  real_T d1;
  real_T l;
  real_T mlvl;
  int32_T iv[2];
  int32_T b_i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T idx;
  int32_T k;
  int32_T loop_ub;
  int32_T n;
  int32_T nbox_;
  int32_T prnt;
  int32_T trueCount;
  uint32_T nbox;
  uint32_T nlvl;
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  SHYPOCT   Build hyperoctree.
  //  Set default parameters
  //  Check inputs
  if (!(occ >= 0.0)) {
    st.site = &ub_emlrtRSI;
    b_error(st, emlrt_marshallOut(st, cv), b_emlrt_marshallOut(st, cv1),
            emlrtMCI);
  }
  if (!(lvlmax >= 1.0)) {
    st.site = &vb_emlrtRSI;
    b_error(st, c_emlrt_marshallOut(st, cv2), d_emlrt_marshallOut(st, cv3),
            b_emlrtMCI);
  }
  //  Initialize top-level box extent, side lengths, center
  minval[0] = x[0];
  minval[1] = x[1];
  minval[2] = x[2];
  dist[0] = x[0];
  dist[1] = x[1];
  dist[2] = x[2];
  for (idx = 0; idx < 79999; idx++) {
    for (int32_T i{0}; i < 3; i++) {
      d = x[i + 3 * (idx + 1)];
      if (muDoubleScalarIsNaN(d)) {
        p = false;
      } else {
        d1 = minval[i];
        if (muDoubleScalarIsNaN(d1)) {
          p = true;
        } else {
          p = (d1 > d);
        }
      }
      if (p) {
        minval[i] = d;
      }
      if (muDoubleScalarIsNaN(d)) {
        p = false;
      } else {
        d1 = dist[i];
        if (muDoubleScalarIsNaN(d1)) {
          p = true;
        } else {
          p = (d1 < d);
        }
      }
      if (p) {
        dist[i] = d;
      }
    }
  }
  //  Declare variable-size arrays
  //  Declare ilist as variable-size
  r = _mm_loadu_pd(&minval[0]);
  _mm_storeu_pd(&ext[0], r);
  r1 = _mm_loadu_pd(&dist[0]);
  _mm_storeu_pd(&ext[3], r1);
  _mm_storeu_pd(&minval[0], _mm_sub_pd(r1, r));
  d = minval[2];
  ext[2] = minval[2];
  ext[5] = dist[2];
  minval[2] = dist[2] - minval[2];
  if (!muDoubleScalarIsNaN(minval[0])) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 4)) {
      if (!muDoubleScalarIsNaN(minval[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  if (idx == 0) {
    l = minval[0];
  } else {
    l = minval[idx - 1];
    b_i = idx + 1;
    for (k = b_i; k < 4; k++) {
      d1 = minval[k - 1];
      if (l < d1) {
        l = d1;
      }
    }
  }
  //  Initialize the structure fields
  //  Estimate a large enough number of nodes
  for (b_i = 0; b_i < 160000; b_i++) {
    SD->f0.rv[b_i] = r2;
  }
  st.site = &xb_emlrtRSI;
  cast(st, SD->f0.rv, SD->f0.rv1);
  T->nodes.set_size(&k_emlrtRTEI, sp, 160000);
  for (b_i = 0; b_i < 160000; b_i++) {
    T->nodes[b_i] = SD->f0.rv1[b_i];
  }
  T->lvp.set_size(&l_emlrtRTEI, sp, 1, 2);
  T->lvp[0] = 0.0;
  T->lvp[1] = 0.0;
  //  Initialize lvp with size [1, 2]
  T->nlvl = 1.0;
  T->lrt = l;
  //  Initialize the first node
  r = _mm_loadu_pd(&ext[0]);
  r1 = _mm_loadu_pd(&ext[3]);
  r3 = _mm_set1_pd(0.5);
  _mm_storeu_pd(&T->nodes[0].ctr[0], _mm_mul_pd(r3, _mm_add_pd(r, r1)));
  T->nodes[0].ctr[2] = 0.5 * (d + dist[2]);
  //  Ensure ctr is correctly reshaped
  T->nodes[0].xi.set_size(&m_emlrtRTEI, sp, 1, 80000);
  for (b_i = 0; b_i < 80000; b_i++) {
    T->nodes[0].xi[b_i] = static_cast<real_T>(b_i) + 1.0;
  }
  T->lvp[0] = 0.0;
  T->lvp[1] = 1.0;
  //  Set initial values for lvp
  nlvl = 1U;
  nbox = 1U;
  mlvl = 1.0;
  //  Main loop
  exitg1 = false;
  while (!(exitg1 || (nlvl >= lvlmax))) {
    //  Initialize current level
    nbox_ = static_cast<int32_T>(nbox);
    l *= 0.5;
    //  Loop over all boxes at current level
    if ((static_cast<int32_T>(nlvl) < 1) ||
        (static_cast<int32_T>(nlvl) > T->lvp.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nlvl), 1,
                                    T->lvp.size(1), &eb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    d = T->lvp[static_cast<int32_T>(nlvl) - 1] + 1.0;
    if ((static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0) < 1) ||
        (static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0) >
         T->lvp.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0), 1,
          T->lvp.size(1), &emlrtBCI, (emlrtConstCTX)sp);
    }
    d1 = T->lvp[static_cast<int32_T>(nlvl)];
    b_i = static_cast<int32_T>(d1 + (1.0 - d));
    emlrtForLoopVectorCheckR2021a(d, 1.0, d1, mxDOUBLE_CLASS, b_i, &b_emlrtRTEI,
                                  (emlrtConstCTX)sp);
    for (prnt = 0; prnt < b_i; prnt++) {
      c_i = d + static_cast<real_T>(prnt);
      p = ((static_cast<int32_T>(c_i) < 1) ||
           (static_cast<int32_T>(c_i) > T->nodes.size(0)));
      if (p) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i), 1,
                                      T->nodes.size(0), &r_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      loop_ub = T->nodes[static_cast<int32_T>(c_i) - 1].xi.size(1);
      xi.set_size(&n_emlrtRTEI, sp, 1, loop_ub);
      if ((static_cast<int32_T>(c_i) < 1) ||
          (static_cast<int32_T>(c_i) > T->nodes.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i), 1,
                                      T->nodes.size(0), &r_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      for (i1 = 0; i1 < loop_ub; i1++) {
        xi[i1] = T->nodes[static_cast<int32_T>(c_i) - 1].xi[i1];
      }
      //  Subdivide box if it contains too many points
      if (loop_ub > occ) {
        ctr_data[0] = T->nodes[static_cast<int32_T>(c_i) - 1].ctr[0];
        ctr_data[1] = T->nodes[static_cast<int32_T>(c_i) - 1].ctr[1];
        ctr_data[2] = T->nodes[static_cast<int32_T>(c_i) - 1].ctr[2];
        b_x.set_size(&o_emlrtRTEI, sp, 3, loop_ub);
        for (i1 = 0; i1 < loop_ub; i1++) {
          idx = 3 * (static_cast<int32_T>(
                         T->nodes[static_cast<int32_T>(c_i) - 1].xi[i1]) -
                     1);
          b_x[3 * i1] = x[idx];
          b_x[3 * i1 + 1] = x[idx + 1];
          b_x[3 * i1 + 2] = x[idx + 2];
        }
        minval[0] = T->nodes[static_cast<int32_T>(c_i) - 1].ctr[0];
        minval[1] = T->nodes[static_cast<int32_T>(c_i) - 1].ctr[1];
        minval[2] = T->nodes[static_cast<int32_T>(c_i) - 1].ctr[2];
        st.site = &l_emlrtRSI;
        coder::bsxfun(st, b_x, minval, b_idx);
        loop_ub = b_idx.size(1);
        c_idx.set_size(&q_emlrtRTEI, sp, 1, b_idx.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          c_idx[i1] = ((static_cast<real_T>(b_idx[3 * i1]) +
                        2.0 * static_cast<real_T>(b_idx[3 * i1 + 1])) +
                       4.0 * static_cast<real_T>(b_idx[3 * i1 + 2])) +
                      1.0;
        }
        st.site = &k_emlrtRSI;
        b_st.site = &m_emlrtRSI;
        coder::unique_vector(b_st, c_idx, unique_idx);
        i1 = unique_idx.size(1);
        for (k = 0; k < i1; k++) {
          uint32_T u;
          if (k + 1 > i1) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &b_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          u = (nbox + static_cast<uint32_T>(k)) + 1U;
          if (static_cast<real_T>(u) > T->nodes.size(0)) {
            //  Double the preallocated space if necessary
            for (i2 = 0; i2 < 160000; i2++) {
              SD->f0.rv[i2] = r2;
            }
            st.site = &wb_emlrtRSI;
            cast(st, SD->f0.rv, SD->f0.rv1);
            i2 = T->nodes.size(0);
            T->nodes.set_size(&p_emlrtRTEI, sp, T->nodes.size(0) + 160000);
            for (i3 = 0; i3 < 160000; i3++) {
              T->nodes[i2 + i3] = SD->f0.rv1[i3];
            }
          }
          //  Properly initialize non-empty values
          st.site = &j_emlrtRSI;
          coder::bitget(st, unique_idx[k] - 1.0, minval);
          r = _mm_loadu_pd(&minval[0]);
          _mm_storeu_pd(&minval[0], _mm_sub_pd(r, r3));
          minval[2] -= 0.5;
          r = _mm_loadu_pd(&minval[0]);
          r1 = _mm_loadu_pd(&ctr_data[0]);
          if ((static_cast<int32_T>(u) < 1) ||
              (static_cast<int32_T>(u) > T->nodes.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(u), 1,
                                          T->nodes.size(0), &jb_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          _mm_storeu_pd(&T->nodes[static_cast<int32_T>(u) - 1].ctr[0],
                        _mm_add_pd(r1, _mm_mul_pd(_mm_set1_pd(l), r)));
          if ((static_cast<int32_T>(u) < 1) ||
              (static_cast<int32_T>(u) > T->nodes.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(u), 1,
                                          T->nodes.size(0), &jb_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          T->nodes[static_cast<int32_T>(u) - 1].ctr[2] =
              ctr_data[2] + l * minval[2];
          //  Ensure ctr_value is a row vector
          idx = c_idx.size(1) - 1;
          trueCount = 0;
          for (int32_T i{0}; i <= idx; i++) {
            if (c_idx[i] == unique_idx[k]) {
              trueCount++;
            }
          }
          r5.set_size(&p_emlrtRTEI, sp, 1, trueCount);
          trueCount = 0;
          for (int32_T i{0}; i <= idx; i++) {
            if (c_idx[i] == unique_idx[k]) {
              r5[trueCount] = i;
              trueCount++;
            }
          }
          trueCount = r5.size(1);
          for (i2 = 0; i2 < trueCount; i2++) {
            if ((r5[i2] < 0) || (r5[i2] > xi.size(1) - 1)) {
              emlrtDynamicBoundsCheckR2012b(r5[i2], 0, xi.size(1) - 1,
                                            &lb_emlrtBCI, (emlrtConstCTX)sp);
            }
          }
          st.site = &i_emlrtRSI;
          n = 1;
          if (r5.size(1) > 1) {
            n = r5.size(1);
          }
          if (r5.size(1) > muIntScalarMax_sint32(trueCount, n)) {
            emlrtErrorWithMessageIdR2018a(
                &st, &emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
                "Coder:toolbox:reshape_emptyReshapeLimit", 0);
          }
          //  Ensure xi_idx is a row vector
          p = ((static_cast<int32_T>(u) < 1) ||
               (static_cast<int32_T>(u) > T->nodes.size(0)));
          if (p) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(u), 1,
                                          T->nodes.size(0), &t_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          T->nodes[static_cast<int32_T>(u) - 1].xi.set_size(
              &r_emlrtRTEI, sp, 1,
              T->nodes[static_cast<int32_T>(u) - 1].xi.size(1));
          T->nodes[static_cast<int32_T>(u) - 1].xi.set_size(
              &r_emlrtRTEI, sp,
              T->nodes[static_cast<int32_T>(u) - 1].xi.size(0), r5.size(1));
          if ((static_cast<int32_T>(u) < 1) ||
              (static_cast<int32_T>(u) > T->nodes.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(u), 1,
                                          T->nodes.size(0), &t_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          for (i2 = 0; i2 < trueCount; i2++) {
            T->nodes[static_cast<int32_T>(u) - 1].xi[i2] = xi[r5[i2]];
          }
          T->nodes[static_cast<int32_T>(u) - 1].prnt = c_i;
          T->nodes[static_cast<int32_T>(u) - 1].chld.set_size(
              &s_emlrtRTEI, sp, 1,
              T->nodes[static_cast<int32_T>(u) - 1].chld.size(1));
          T->nodes[static_cast<int32_T>(u) - 1].chld.set_size(
              &s_emlrtRTEI, sp,
              T->nodes[static_cast<int32_T>(u) - 1].chld.size(0), 0);
          if ((static_cast<int32_T>(u) < 1) ||
              (static_cast<int32_T>(u) > T->nodes.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(u), 1,
                                          T->nodes.size(0), &u_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          //  Initialize chld as an empty array
          //  Update parent chld field
          p = ((static_cast<int32_T>(c_i) < 1) ||
               (static_cast<int32_T>(c_i) > T->nodes.size(0)));
          if (p) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i), 1,
                                          T->nodes.size(0), &v_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          loop_ub = T->nodes[static_cast<int32_T>(c_i) - 1].chld.size(1);
          r6.set_size(&t_emlrtRTEI, sp, 1, loop_ub);
          if ((static_cast<int32_T>(c_i) < 1) ||
              (static_cast<int32_T>(c_i) > T->nodes.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i), 1,
                                          T->nodes.size(0), &v_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          for (i2 = 0; i2 < loop_ub; i2++) {
            r6[i2] = T->nodes[static_cast<int32_T>(c_i) - 1].chld[i2];
          }
          T->nodes[static_cast<int32_T>(c_i) - 1].chld.set_size(
              &p_emlrtRTEI, sp,
              T->nodes[static_cast<int32_T>(c_i) - 1].chld.size(0),
              r6.size(1) + 1);
          T->nodes[static_cast<int32_T>(c_i) - 1].chld[r6.size(1)] = u;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        }
        if (unique_idx.size(1) - 1 >= 0) {
          nbox += static_cast<uint32_T>(unique_idx.size(1));
        }
        p = ((static_cast<int32_T>(c_i) < 1) ||
             (static_cast<int32_T>(c_i) > T->nodes.size(0)));
        if (p) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i), 1,
                                        T->nodes.size(0), &s_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        T->nodes[static_cast<int32_T>(c_i) - 1].xi.set_size(
            &u_emlrtRTEI, sp, 1,
            T->nodes[static_cast<int32_T>(c_i) - 1].xi.size(1));
        T->nodes[static_cast<int32_T>(c_i) - 1].xi.set_size(
            &u_emlrtRTEI, sp,
            T->nodes[static_cast<int32_T>(c_i) - 1].xi.size(0), 0);
        if ((static_cast<int32_T>(c_i) < 1) ||
            (static_cast<int32_T>(c_i) > T->nodes.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i), 1,
                                        T->nodes.size(0), &s_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        //  Reset xi to the initial state
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    if (static_cast<int32_T>(nbox) <= nbox_) {
      exitg1 = true;
    } else {
      nlvl++;
      T->nlvl = nlvl;
      while (mlvl < nlvl) {
        st.site = &h_emlrtRSI;
        c_i = muDoubleScalarPower(2.0, mlvl);
        b_i = T->lvp.size(1);
        if (c_i != static_cast<int32_T>(c_i)) {
          emlrtIntegerCheckR2012b(c_i, &b_emlrtDCI, (emlrtConstCTX)sp);
        }
        loop_ub = static_cast<int32_T>(c_i);
        T->lvp.set_size(&p_emlrtRTEI, sp, T->lvp.size(0),
                        T->lvp.size(1) + static_cast<int32_T>(c_i));
        if (c_i != static_cast<int32_T>(c_i)) {
          emlrtIntegerCheckR2012b(c_i, &emlrtDCI, (emlrtConstCTX)sp);
        }
        for (i1 = 0; i1 < loop_ub; i1++) {
          T->lvp[b_i + i1] = 0.0;
        }
        //  Ensure consistent dimensions
        mlvl *= 2.0;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      if ((static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0) < 1) ||
          (static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0) >
           T->lvp.size(1))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0), 1,
            T->lvp.size(1), &fb_emlrtBCI, (emlrtConstCTX)sp);
      }
      T->lvp[static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0) - 1] = nbox;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
  }
  //  Memory cleanup
  if ((static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0) < 1) ||
      (static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0) >
       T->lvp.size(1))) {
    emlrtDynamicBoundsCheckR2012b(
        static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0), 1,
        T->lvp.size(1), &c_emlrtBCI, (emlrtConstCTX)sp);
  }
  T->lvp.set_size(&v_emlrtRTEI, sp, T->lvp.size(0),
                  static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0));
  loop_ub = static_cast<int32_T>(nbox);
  if ((static_cast<int32_T>(nbox) < 1) ||
      (static_cast<int32_T>(nbox) > T->nodes.size(0))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbox), 1,
                                  T->nodes.size(0), &d_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  iv[0] = 1;
  iv[1] = static_cast<int32_T>(nbox);
  st.site = &g_emlrtRSI;
  coder::internal::indexShapeCheck(st, T->nodes.size(0), iv);
  T->nodes.set_size(&w_emlrtRTEI, sp, static_cast<int32_T>(nbox));
  //  Initialize data for neighbor calculation
  ilvl.set_size(&x_emlrtRTEI, sp, static_cast<int32_T>(nbox));
  for (b_i = 0; b_i < loop_ub; b_i++) {
    ilvl[b_i] = 0U;
  }
  if (static_cast<real_T>(nlvl) != static_cast<int32_T>(nlvl)) {
    emlrtIntegerCheckR2012b(static_cast<real_T>(nlvl), &c_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  llvl.set_size(&y_emlrtRTEI, sp, static_cast<int32_T>(nlvl));
  l = T->lrt;
  b_i = static_cast<int32_T>(nlvl);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, static_cast<real_T>(nlvl),
                                mxDOUBLE_CLASS, static_cast<int32_T>(nlvl),
                                &c_emlrtRTEI, (emlrtConstCTX)sp);
  for (int32_T lvl{0}; lvl < b_i; lvl++) {
    if ((lvl + 1 < 1) ||
        (lvl + 1 > static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0))) {
      emlrtDynamicBoundsCheckR2012b(
          lvl + 1, 1, static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0),
          &l_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>((static_cast<real_T>(lvl) + 1.0) + 1.0) < 1) ||
        (static_cast<int32_T>((static_cast<real_T>(lvl) + 1.0) + 1.0) >
         static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>((static_cast<real_T>(lvl) + 1.0) + 1.0), 1,
          static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0), &m_emlrtBCI,
          (emlrtConstCTX)sp);
    }
    d = T->lvp[lvl + 1];
    if (T->lvp[lvl] + 1.0 > d) {
      i1 = 0;
      i2 = 0;
    } else {
      i1 = static_cast<int32_T>(T->lvp[lvl] + 1.0);
      if ((i1 < 1) || (i1 > static_cast<int32_T>(nbox))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, static_cast<int32_T>(nbox),
                                      &n_emlrtBCI, (emlrtConstCTX)sp);
      }
      i1--;
      if ((static_cast<int32_T>(d) < 1) ||
          (static_cast<int32_T>(d) > static_cast<int32_T>(nbox))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                      static_cast<int32_T>(nbox), &o_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i2 = static_cast<int32_T>(d);
    }
    loop_ub = i2 - i1;
    for (i2 = 0; i2 < loop_ub; i2++) {
      ilvl[i1 + i2] = static_cast<uint32_T>(lvl) + 1U;
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(lvl) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(lvl) + 1U) >
         llvl.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(lvl) + 1U), 1,
          llvl.size(0), &ib_emlrtBCI, (emlrtConstCTX)sp);
    }
    llvl[lvl] = l;
    l *= 0.5;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  //  Find neighbors and interaction list of each box
  b_i = static_cast<int32_T>(static_cast<real_T>(nlvl) - 1.0);
  emlrtForLoopVectorCheckR2021a(
      2.0, 1.0, static_cast<real_T>(nlvl), mxDOUBLE_CLASS,
      static_cast<int32_T>(static_cast<real_T>(nlvl) - 1.0), &d_emlrtRTEI,
      (emlrtConstCTX)sp);
  for (int32_T lvl{0}; lvl < b_i; lvl++) {
    i1 = llvl.size(0);
    if ((static_cast<int32_T>(static_cast<uint32_T>(lvl) + 2U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(lvl) + 2U) >
         llvl.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(lvl) + 2U), 1,
          llvl.size(0), &gb_emlrtBCI, (emlrtConstCTX)sp);
    }
    l = llvl[lvl + 1];
    if ((static_cast<int32_T>(static_cast<uint32_T>(lvl) + 2U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(lvl) + 2U) >
         static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(lvl) + 2U), 1,
          static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0), &hb_emlrtBCI,
          (emlrtConstCTX)sp);
    }
    d = T->lvp[lvl + 1] + 1.0;
    if ((static_cast<int32_T>((static_cast<real_T>(lvl) + 2.0) + 1.0) < 1) ||
        (static_cast<int32_T>((static_cast<real_T>(lvl) + 2.0) + 1.0) >
         static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>((static_cast<real_T>(lvl) + 2.0) + 1.0), 1,
          static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0), &e_emlrtBCI,
          (emlrtConstCTX)sp);
    }
    d1 = T->lvp[lvl + 1] + 1.0;
    c_i = T->lvp[lvl + 2];
    i2 = static_cast<int32_T>(c_i + (1.0 - d1));
    emlrtForLoopVectorCheckR2021a(d1, 1.0, c_i, mxDOUBLE_CLASS, i2,
                                  &e_emlrtRTEI, (emlrtConstCTX)sp);
    for (int32_T i{0}; i < i2; i++) {
      c_i = d + static_cast<real_T>(i);
      if ((static_cast<int32_T>(c_i) < 1) ||
          (static_cast<int32_T>(c_i) > static_cast<int32_T>(nbox))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i), 1,
                                      static_cast<int32_T>(nbox), &f_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      //  Add all non-self children of parent
      i3 = static_cast<int32_T>(T->nodes[static_cast<int32_T>(c_i) - 1].prnt);
      if ((i3 < 1) || (i3 > static_cast<int32_T>(nbox))) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, static_cast<int32_T>(nbox),
                                      &g_emlrtBCI, (emlrtConstCTX)sp);
      }
      loop_ub = T->nodes[static_cast<int32_T>(
                             T->nodes[static_cast<int32_T>(c_i) - 1].prnt) -
                         1]
                    .chld.size(1);
      c_x.set_size(&ab_emlrtRTEI, sp, 1, loop_ub);
      for (prnt = 0; prnt < loop_ub; prnt++) {
        c_x[prnt] = (T->nodes[i3 - 1].chld[prnt] != c_i);
      }
      idx = c_x.size(1) - 1;
      trueCount = 0;
      for (nbox_ = 0; nbox_ <= idx; nbox_++) {
        if (c_x[nbox_]) {
          trueCount++;
        }
      }
      r4.set_size(&p_emlrtRTEI, sp, 1, trueCount);
      trueCount = 0;
      for (nbox_ = 0; nbox_ <= idx; nbox_++) {
        if (c_x[nbox_]) {
          r4[trueCount] = nbox_;
          trueCount++;
        }
      }
      trueCount = r4.size(1);
      for (prnt = 0; prnt < trueCount; prnt++) {
        if ((r4[prnt] < 0) || (r4[prnt] > idx)) {
          emlrtDynamicBoundsCheckR2012b(r4[prnt], 0, idx, &kb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      st.site = &f_emlrtRSI;
      n = 1;
      if (r4.size(1) > 1) {
        n = r4.size(1);
      }
      if (r4.size(1) > muIntScalarMax_sint32(trueCount, n)) {
        emlrtErrorWithMessageIdR2018a(
            &st, &emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
            "Coder:toolbox:reshape_emptyReshapeLimit", 0);
      }
      T->nodes[static_cast<int32_T>(c_i) - 1].nbor.set_size(
          &bb_emlrtRTEI, sp, 1,
          T->nodes[static_cast<int32_T>(c_i) - 1].nbor.size(1));
      T->nodes[static_cast<int32_T>(c_i) - 1].nbor.set_size(
          &bb_emlrtRTEI, sp,
          T->nodes[static_cast<int32_T>(c_i) - 1].nbor.size(0), r4.size(1));
      for (prnt = 0; prnt < trueCount; prnt++) {
        T->nodes[static_cast<int32_T>(c_i) - 1].nbor[prnt] =
            T->nodes[static_cast<int32_T>(
                         T->nodes[static_cast<int32_T>(c_i) - 1].prnt) -
                     1]
                .chld[r4[prnt]];
      }
      //  Ensure nbor is a row vector
      //  Use explicit index array
      st.site = &e_emlrtRSI;
      b_st.site = &mb_emlrtRSI;
      coder::eml_find(b_st, c_x, ii);
      loop_ub = ii.size(1);
      nbor_indices.set_size(&cb_emlrtRTEI, &st, 1, ii.size(1));
      for (prnt = 0; prnt < loop_ub; prnt++) {
        nbor_indices[prnt] = ii[prnt];
      }
      for (idx = 0; idx < loop_ub; idx++) {
        prnt = T->nodes[static_cast<int32_T>(
                            T->nodes[static_cast<int32_T>(c_i) - 1].prnt) -
                        1]
                   .chld.size(1);
        if (idx + 1 > loop_ub) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, loop_ub, &mb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        nbox_ = static_cast<int32_T>(nbor_indices[idx]);
        if ((nbox_ < 1) || (nbox_ > prnt)) {
          emlrtDynamicBoundsCheckR2012b(nbox_, 1, prnt, &h_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        prnt = static_cast<int32_T>(
            T->nodes[static_cast<int32_T>(
                         T->nodes[static_cast<int32_T>(c_i) - 1].prnt) -
                     1]
                .chld[static_cast<int32_T>(nbor_indices[idx]) - 1]);
        if ((prnt < 1) || (prnt > static_cast<int32_T>(nbox))) {
          emlrtDynamicBoundsCheckR2012b(prnt, 1, static_cast<int32_T>(nbox),
                                        &x_emlrtBCI, (emlrtConstCTX)sp);
        }
        trueCount =
            T->nodes[static_cast<int32_T>(
                         T->nodes[static_cast<int32_T>(
                                      T->nodes[static_cast<int32_T>(c_i) - 1]
                                          .prnt) -
                                  1]
                             .chld[static_cast<int32_T>(nbor_indices[idx]) -
                                   1]) -
                     1]
                .snbor.size(1);
        r6.set_size(&db_emlrtRTEI, sp, 1, trueCount);
        if ((prnt < 1) || (prnt > static_cast<int32_T>(nbox))) {
          emlrtDynamicBoundsCheckR2012b(prnt, 1, static_cast<int32_T>(nbox),
                                        &x_emlrtBCI, (emlrtConstCTX)sp);
        }
        for (nbox_ = 0; nbox_ < trueCount; nbox_++) {
          r6[nbox_] = T->nodes[prnt - 1].snbor[nbox_];
        }
        T->nodes[prnt - 1].snbor.set_size(
            &p_emlrtRTEI, sp, T->nodes[prnt - 1].snbor.size(0), r6.size(1) + 1);
        if (prnt > static_cast<int32_T>(nbox)) {
          emlrtDynamicBoundsCheckR2012b(prnt, 1, static_cast<int32_T>(nbox),
                                        &q_emlrtBCI, (emlrtConstCTX)sp);
        }
        T->nodes[prnt - 1].snbor[r6.size(1)] = c_i;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      //  Get the neighbors array
      if (i3 > static_cast<int32_T>(nbox)) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, static_cast<int32_T>(nbox),
                                      &w_emlrtBCI, (emlrtConstCTX)sp);
      }
      loop_ub = T->nodes[static_cast<int32_T>(
                             T->nodes[static_cast<int32_T>(c_i) - 1].prnt) -
                         1]
                    .nbor.size(1);
      nbor_indices.set_size(&eb_emlrtRTEI, sp, 1, loop_ub);
      if (i3 > static_cast<int32_T>(nbox)) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, static_cast<int32_T>(nbox),
                                      &w_emlrtBCI, (emlrtConstCTX)sp);
      }
      for (prnt = 0; prnt < loop_ub; prnt++) {
        nbor_indices[prnt] = T->nodes[i3 - 1].nbor[prnt];
      }
      if (loop_ub != 0) {
        //  Declare nbor as variable-size
        trueCount = T->nodes[static_cast<int32_T>(c_i) - 1].nbor.size(1);
        nbor.set_size(&fb_emlrtRTEI, sp, 1, trueCount);
        if ((static_cast<int32_T>(c_i) < 1) ||
            (static_cast<int32_T>(c_i) > static_cast<int32_T>(nbox))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i), 1,
                                        static_cast<int32_T>(nbox), &y_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        for (prnt = 0; prnt < trueCount; prnt++) {
          nbor[prnt] = T->nodes[static_cast<int32_T>(c_i) - 1].nbor[prnt];
        }
        for (k = 0; k < loop_ub; k++) {
          if (k + 1 > nbor_indices.size(1)) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, nbor_indices.size(1),
                                          &i_emlrtBCI, (emlrtConstCTX)sp);
          }
          prnt = static_cast<int32_T>(nbor_indices[k]);
          if ((prnt < 1) || (prnt > static_cast<int32_T>(nbox))) {
            emlrtDynamicBoundsCheckR2012b(prnt, 1, static_cast<int32_T>(nbox),
                                          &j_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (T->nodes[static_cast<int32_T>(nbor_indices[k]) - 1].xi.size(1) !=
              0) {
            boolean_T b_dist[3];
            if (prnt > static_cast<int32_T>(nbox)) {
              emlrtDynamicBoundsCheckR2012b(prnt, 1, static_cast<int32_T>(nbox),
                                            &k_emlrtBCI, (emlrtConstCTX)sp);
            }
            r = _mm_loadu_pd(&T->nodes[static_cast<int32_T>(c_i) - 1].ctr[0]);
            r1 = _mm_loadu_pd(&T->nodes[prnt - 1].ctr[0]);
            _mm_storeu_pd(&dv[0], _mm_sub_pd(r, r1));
            dv1[0] = muDoubleScalarAbs(dv[0]);
            dv1[1] = muDoubleScalarAbs(dv[1]);
            r = _mm_loadu_pd(&dv1[0]);
            _mm_storeu_pd(&dist[0], r);
            nbox_ = static_cast<int32_T>(ilvl[prnt - 1]);
            if ((nbox_ < 1) || (nbox_ > i1)) {
              emlrtDynamicBoundsCheckR2012b(nbox_, 1, i1, &ob_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            d1 = 0.5 * (l + llvl[nbox_ - 1]);
            b_dist[0] = (muDoubleScalarRound((dist[0] - d1) / l) <= 0.0);
            b_dist[1] = (muDoubleScalarRound((dist[1] - d1) / l) <= 0.0);
            b_dist[2] =
                (muDoubleScalarRound(
                     (muDoubleScalarAbs(
                          T->nodes[static_cast<int32_T>(c_i) - 1].ctr[2] -
                          T->nodes[prnt - 1].ctr[2]) -
                      d1) /
                     l) <= 0.0);
            if (coder::all(b_dist)) {
              nbox_ = nbor.size(1);
              trueCount = nbor.size(1) + 1;
              nbor.set_size(&p_emlrtRTEI, sp, nbor.size(0), nbor.size(1) + 1);
              nbor[nbox_] = nbor_indices[k];
              st.site = &d_emlrtRSI;
              n = 1;
              if (nbor.size(1) > 1) {
                n = nbor.size(1);
              }
              if (nbor.size(1) > muIntScalarMax_sint32(trueCount, n)) {
                emlrtErrorWithMessageIdR2018a(
                    &st, &emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
                    "Coder:toolbox:reshape_emptyReshapeLimit", 0);
              }
              T->nodes[static_cast<int32_T>(c_i) - 1].nbor.set_size(
                  &ib_emlrtRTEI, sp, 1,
                  T->nodes[static_cast<int32_T>(c_i) - 1].nbor.size(1));
              T->nodes[static_cast<int32_T>(c_i) - 1].nbor.set_size(
                  &ib_emlrtRTEI, sp,
                  T->nodes[static_cast<int32_T>(c_i) - 1].nbor.size(0),
                  trueCount);
              if ((static_cast<int32_T>(c_i) < 1) ||
                  (static_cast<int32_T>(c_i) > static_cast<int32_T>(nbox))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i), 1,
                                              static_cast<int32_T>(nbox),
                                              &cb_emlrtBCI, (emlrtConstCTX)sp);
              }
              for (nbox_ = 0; nbox_ < trueCount; nbox_++) {
                T->nodes[static_cast<int32_T>(c_i) - 1].nbor[nbox_] =
                    nbor[nbox_];
              }
              //  Ensure nbor is a row vector
              trueCount = T->nodes[static_cast<int32_T>(nbor_indices[k]) - 1]
                              .snbor.size(1);
              r6.set_size(&jb_emlrtRTEI, sp, 1, trueCount);
              if (prnt > static_cast<int32_T>(nbox)) {
                emlrtDynamicBoundsCheckR2012b(prnt, 1,
                                              static_cast<int32_T>(nbox),
                                              &db_emlrtBCI, (emlrtConstCTX)sp);
              }
              for (nbox_ = 0; nbox_ < trueCount; nbox_++) {
                r6[nbox_] = T->nodes[prnt - 1].snbor[nbox_];
              }
              T->nodes[prnt - 1].snbor.set_size(
                  &p_emlrtRTEI, sp, T->nodes[prnt - 1].snbor.size(0),
                  r6.size(1) + 1);
              T->nodes[prnt - 1].snbor[r6.size(1)] = c_i;
            } else {
              trueCount = T->nodes[static_cast<int32_T>(c_i) - 1].ilist.size(1);
              idx = trueCount + 1;
              r6.set_size(&gb_emlrtRTEI, sp, 1, trueCount + 1);
              for (prnt = 0; prnt < trueCount; prnt++) {
                r6[prnt] = T->nodes[static_cast<int32_T>(c_i) - 1].ilist[prnt];
              }
              r6[trueCount] = nbor_indices[k];
              st.site = &c_emlrtRSI;
              n = 1;
              if (r6.size(1) > 1) {
                n = r6.size(1);
              }
              if (r6.size(1) > muIntScalarMax_sint32(idx, n)) {
                emlrtErrorWithMessageIdR2018a(
                    &st, &emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
                    "Coder:toolbox:reshape_emptyReshapeLimit", 0);
              }
              T->nodes[static_cast<int32_T>(c_i) - 1].ilist.set_size(
                  &hb_emlrtRTEI, sp, 1,
                  T->nodes[static_cast<int32_T>(c_i) - 1].ilist.size(1));
              T->nodes[static_cast<int32_T>(c_i) - 1].ilist.set_size(
                  &hb_emlrtRTEI, sp,
                  T->nodes[static_cast<int32_T>(c_i) - 1].ilist.size(0),
                  trueCount + 1);
              if ((static_cast<int32_T>(c_i) < 1) ||
                  (static_cast<int32_T>(c_i) > static_cast<int32_T>(nbox))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i), 1,
                                              static_cast<int32_T>(nbox),
                                              &bb_emlrtBCI, (emlrtConstCTX)sp);
              }
              for (prnt = 0; prnt < idx; prnt++) {
                T->nodes[static_cast<int32_T>(c_i) - 1].ilist[prnt] = r6[prnt];
              }
              //  Ensure ilist is a row vector
            }
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        }
      }
      //  Add children of parent-neighbors if adjacent
      if (i3 > static_cast<int32_T>(nbox)) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, static_cast<int32_T>(nbox),
                                      &p_emlrtBCI, (emlrtConstCTX)sp);
      }
      iv[0] = (*(int32_T(*)[2])T
                    ->nodes[static_cast<int32_T>(
                                T->nodes[static_cast<int32_T>(c_i) - 1].prnt) -
                            1]
                    .nbor.size())[0];
      iv[1] = (*(int32_T(*)[2])T
                    ->nodes[static_cast<int32_T>(
                                T->nodes[static_cast<int32_T>(c_i) - 1].prnt) -
                            1]
                    .nbor.size())[1];
      st.site = &b_emlrtRSI;
      coder::internal::indexShapeCheck(st, T->nodes.size(0), iv);
      loop_ub = T->nodes[static_cast<int32_T>(
                             T->nodes[static_cast<int32_T>(c_i) - 1].prnt) -
                         1]
                    .nbor.size(1);
      b_T.set_size(&kb_emlrtRTEI, sp, loop_ub);
      for (i3 = 0; i3 < loop_ub; i3++) {
        prnt = static_cast<int32_T>(
            T->nodes[static_cast<int32_T>(
                         T->nodes[static_cast<int32_T>(c_i) - 1].prnt) -
                     1]
                .nbor[i3]);
        if ((prnt < 1) || (prnt > static_cast<int32_T>(nbox))) {
          emlrtDynamicBoundsCheckR2012b(prnt, 1, static_cast<int32_T>(nbox),
                                        &nb_emlrtBCI, (emlrtConstCTX)sp);
        }
        b_T[i3] = T->nodes[prnt - 1];
      }
      st.site = &b_emlrtRSI;
      coder::internal::horzcatStructList(st, b_T, nbor_indices);
      if (nbor_indices.size(1) != 0) {
        st.site = &emlrtRSI;
        b_st.site = &sb_emlrtRSI;
        i3 = T->nodes[static_cast<int32_T>(c_i) - 1].ilist.size(1);
        if (i3 != 0) {
          loop_ub = i3;
        } else {
          loop_ub = 0;
        }
        trueCount = loop_ub + nbor_indices.size(1);
        r6.set_size(&lb_emlrtRTEI, &b_st, 1, trueCount);
        for (i3 = 0; i3 < loop_ub; i3++) {
          r6[i3] = T->nodes[static_cast<int32_T>(c_i) - 1].ilist[i3];
        }
        idx = nbor_indices.size(1);
        for (i3 = 0; i3 < idx; i3++) {
          r6[i3 + loop_ub] = nbor_indices[i3];
        }
        st.site = &emlrtRSI;
        n = 1;
        if (r6.size(1) > 1) {
          n = r6.size(1);
        }
        if (r6.size(1) > muIntScalarMax_sint32(trueCount, n)) {
          emlrtErrorWithMessageIdR2018a(
              &st, &emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
              "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }
        T->nodes[static_cast<int32_T>(c_i) - 1].ilist.set_size(
            &mb_emlrtRTEI, sp, 1,
            T->nodes[static_cast<int32_T>(c_i) - 1].ilist.size(1));
        T->nodes[static_cast<int32_T>(c_i) - 1].ilist.set_size(
            &mb_emlrtRTEI, sp,
            T->nodes[static_cast<int32_T>(c_i) - 1].ilist.size(0), trueCount);
        if ((static_cast<int32_T>(c_i) < 1) ||
            (static_cast<int32_T>(c_i) > static_cast<int32_T>(nbox))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i), 1,
                                        static_cast<int32_T>(nbox),
                                        &ab_emlrtBCI, (emlrtConstCTX)sp);
        }
        for (i3 = 0; i3 < trueCount; i3++) {
          T->nodes[static_cast<int32_T>(c_i) - 1].ilist[i3] = r6[i3];
        }
        //  Ensure ilist is a row vector
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
