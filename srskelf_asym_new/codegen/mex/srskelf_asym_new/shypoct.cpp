//
// shypoct.cpp
//
// Code generation for function 'shypoct'
//

// Include files
#include "shypoct.h"
#include "abs.h"
#include "all.h"
#include "bitget.h"
#include "bsxfun.h"
#include "find.h"
#include "horzcatStructList.h"
#include "indexShapeCheck.h"
#include "round.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "srskelf_asym_new_mexutil.h"
#include "srskelf_asym_new_types.h"
#include "srskelf_asym_new_types2.h"
#include "unique.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "mwmathutil.h"
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo
    cd_emlrtRSI{
        299,       // lineNo
        "shypoct", // fcnName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pathName
    };

static emlrtRSInfo
    dd_emlrtRSI{
        284,       // lineNo
        "shypoct", // fcnName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pathName
    };

static emlrtRSInfo
    ed_emlrtRSI{
        280,       // lineNo
        "shypoct", // fcnName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pathName
    };

static emlrtRSInfo
    fd_emlrtRSI{
        277,       // lineNo
        "shypoct", // fcnName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pathName
    };

static emlrtRSInfo
    gd_emlrtRSI{
        276,       // lineNo
        "shypoct", // fcnName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pathName
    };

static emlrtRSInfo
    hd_emlrtRSI{
        275,       // lineNo
        "shypoct", // fcnName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pathName
    };

static emlrtRSInfo
    id_emlrtRSI{
        272,       // lineNo
        "shypoct", // fcnName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pathName
    };

static emlrtRSInfo
    jd_emlrtRSI{
        251,       // lineNo
        "shypoct", // fcnName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pathName
    };

static emlrtRSInfo
    kd_emlrtRSI{
        247,       // lineNo
        "shypoct", // fcnName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pathName
    };

static emlrtRSInfo
    ld_emlrtRSI{
        245,       // lineNo
        "shypoct", // fcnName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pathName
    };

static emlrtRSInfo
    md_emlrtRSI{
        219,       // lineNo
        "shypoct", // fcnName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pathName
    };

static emlrtRSInfo
    nd_emlrtRSI{
        217,       // lineNo
        "shypoct", // fcnName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pathName
    };

static emlrtRSInfo
    od_emlrtRSI{
        189,       // lineNo
        "shypoct", // fcnName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pathName
    };

static emlrtRSInfo
    pd_emlrtRSI{
        180,       // lineNo
        "shypoct", // fcnName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pathName
    };

static emlrtRSInfo
    qd_emlrtRSI{
        162,       // lineNo
        "shypoct", // fcnName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pathName
    };

static emlrtRSInfo
    rd_emlrtRSI{
        160,       // lineNo
        "shypoct", // fcnName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pathName
    };

static emlrtRSInfo
    sd_emlrtRSI{
        130,       // lineNo
        "shypoct", // fcnName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pathName
    };

static emlrtRSInfo
    td_emlrtRSI{
        126,       // lineNo
        "shypoct", // fcnName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pathName
    };

static emlrtRSInfo ud_emlrtRSI{
    48,                                                            // lineNo
    "unique",                                                      // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/unique.m" // pathName
};

static emlrtRSInfo se_emlrtRSI{
    51,                  // lineNo
    "reshapeSizeChecks", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" // pathName
};

static emlrtMCInfo
    d_emlrtMCI{
        55,        // lineNo
        3,         // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtMCInfo
    e_emlrtMCI{
        56,        // lineNo
        3,         // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtBCInfo
    hd_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        283,       // lineNo
        13,        // colNo
        "j",       // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    id_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        272,       // lineNo
        37,        // colNo
        "T.nodes", // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    jd_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        196,       // lineNo
        25,        // colNo
        "ilvl",    // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    kd_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        196,       // lineNo
        10,        // colNo
        "ilvl",    // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    ld_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        196,       // lineNo
        31,        // colNo
        "T.lvp",   // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    md_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        196,       // lineNo
        16,        // colNo
        "T.lvp",   // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    nd_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        240,       // lineNo
        22,        // colNo
        "T.nodes", // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    od_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        239,       // lineNo
        25,        // colNo
        "T.nodes", // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    pd_emlrtBCI{
        -1,                 // iFirst
        -1,                 // iLast
        237,                // lineNo
        26,                 // colNo
        "parent_neighbors", // aName
        "shypoct",          // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    qd_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        221,       // lineNo
        15,        // colNo
        "j",       // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    rd_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        209,       // lineNo
        19,        // colNo
        "T.nodes", // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    sd_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        205,       // lineNo
        22,        // colNo
        "T.nodes", // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtRTEInfo
    p_emlrtRTEI{
        204,       // lineNo
        13,        // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtBCInfo
    td_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        204,       // lineNo
        34,        // colNo
        "T.lvp",   // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtRTEInfo
    q_emlrtRTEI{
        202,       // lineNo
        13,        // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    r_emlrtRTEI{
        195,       // lineNo
        13,        // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtBCInfo
    ud_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        189,       // lineNo
        23,        // colNo
        "T.nodes", // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    vd_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        188,       // lineNo
        19,        // colNo
        "T.lvp",   // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtDCInfo
    mb_emlrtDCI{
        180,       // lineNo
        34,        // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        1            // checkKind
    };

static emlrtBCInfo
    wd_emlrtBCI{
        -1,           // iFirst
        -1,           // iLast
        132,          // lineNo
        26,           // colNo
        "unique_idx", // aName
        "shypoct",    // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtRTEInfo
    s_emlrtRTEI{
        119,       // lineNo
        16,        // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtBCInfo
    xd_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        119,       // lineNo
        38,        // colNo
        "T.lvp",   // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtRTEInfo t_emlrtRTEI{
    74,                  // lineNo
    13,                  // colNo
    "reshapeSizeChecks", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" // pName
};

static emlrtRTEInfo u_emlrtRTEI{
    81,                  // lineNo
    23,                  // colNo
    "reshapeSizeChecks", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" // pName
};

static emlrtRTEInfo v_emlrtRTEI{
    126,               // lineNo
    9,                 // colNo
    "computeDimsData", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" // pName
};

static emlrtBCInfo
    yd_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        222,       // lineNo
        17,        // colNo
        "T.nodes", // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    ae_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        120,       // lineNo
        20,        // colNo
        "T.nodes", // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    be_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        169,       // lineNo
        17,        // colNo
        "T.nodes", // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    ce_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        222,       // lineNo
        37,        // colNo
        "T.nodes", // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    de_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        232,       // lineNo
        32,        // colNo
        "T.nodes", // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    ee_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        163,       // lineNo
        19,        // colNo
        "T.nodes", // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    fe_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        235,       // lineNo
        20,        // colNo
        "T.nodes", // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    ge_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        165,       // lineNo
        19,        // colNo
        "T.nodes", // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    he_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        167,       // lineNo
        41,        // colNo
        "T.nodes", // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    ie_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        252,       // lineNo
        17,        // colNo
        "T.nodes", // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    je_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        246,       // lineNo
        17,        // colNo
        "T.nodes", // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    ke_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        247,       // lineNo
        17,        // colNo
        "T.nodes", // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    le_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        281,       // lineNo
        13,        // colNo
        "T.nodes", // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    me_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        300,       // lineNo
        13,        // colNo
        "T.nodes", // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    ne_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        284,       // lineNo
        15,        // colNo
        "T.nodes", // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtDCInfo
    nb_emlrtDCI{
        180,       // lineNo
        25,        // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        1            // checkKind
    };

static emlrtBCInfo
    oe_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        119,       // lineNo
        22,        // colNo
        "T.lvp",   // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtDCInfo
    ob_emlrtDCI{
        193,       // lineNo
        16,        // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        1            // checkKind
    };

static emlrtBCInfo
    pe_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        183,       // lineNo
        13,        // colNo
        "T.lvp",   // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    qe_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        203,       // lineNo
        14,        // colNo
        "llvl",    // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    re_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        204,       // lineNo
        19,        // colNo
        "T.lvp",   // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    se_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        197,       // lineNo
        10,        // colNo
        "llvl",    // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    te_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        216,       // lineNo
        16,        // colNo
        "j",       // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    ue_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        160,       // lineNo
        11,        // colNo
        "T.nodes", // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    ve_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        161,       // lineNo
        23,        // colNo
        "xi",      // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    we_emlrtBCI{
        -1,             // iFirst
        -1,             // iLast
        221,            // lineNo
        28,             // colNo
        "nbor_indices", // aName
        "shypoct",      // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    xe_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        272,       // lineNo
        29,        // colNo
        "T.nodes", // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    ye_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        241,       // lineNo
        56,        // colNo
        "llvl",    // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    af_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        276,       // lineNo
        24,        // colNo
        "T.nodes", // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    bf_emlrtBCI{
        -1,                 // iFirst
        -1,                 // iLast
        278,                // lineNo
        24,                 // colNo
        "parent_nbor_chld", // aName
        "shypoct",          // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    cf_emlrtBCI{
        -1,                 // iFirst
        -1,                 // iLast
        296,                // lineNo
        24,                 // colNo
        "parent_nbor_chld", // aName
        "shypoct",          // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtBCInfo
    df_emlrtBCI{
        -1,        // iFirst
        -1,        // iLast
        284,       // lineNo
        34,        // colNo
        "T.nodes", // aName
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m", // pName
        0            // checkKind
    };

static emlrtRTEInfo
    we_emlrtRTEI{
        92,        // lineNo
        3,         // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    xe_emlrtRTEI{
        93,        // lineNo
        3,         // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    ye_emlrtRTEI{
        126,       // lineNo
        27,        // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    af_emlrtRTEI{
        1,         // lineNo
        14,        // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    bf_emlrtRTEI{
        157,       // lineNo
        33,        // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    cf_emlrtRTEI{
        165,       // lineNo
        11,        // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    df_emlrtRTEI{
        167,       // lineNo
        33,        // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    ef_emlrtRTEI{
        188,       // lineNo
        3,         // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    ff_emlrtRTEI{
        189,       // lineNo
        3,         // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    gf_emlrtRTEI{
        192,       // lineNo
        3,         // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    hf_emlrtRTEI{
        193,       // lineNo
        10,        // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    if_emlrtRTEI{
        216,       // lineNo
        16,        // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    jf_emlrtRTEI{
        216,       // lineNo
        7,         // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    kf_emlrtRTEI{
        217,       // lineNo
        7,         // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    lf_emlrtRTEI{
        219,       // lineNo
        7,         // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    mf_emlrtRTEI{
        222,       // lineNo
        29,        // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    nf_emlrtRTEI{
        232,       // lineNo
        5,         // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    of_emlrtRTEI{
        235,       // lineNo
        5,         // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    pf_emlrtRTEI{
        251,       // lineNo
        25,        // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    qf_emlrtRTEI{
        252,       // lineNo
        9,         // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    rf_emlrtRTEI{
        245,       // lineNo
        23,        // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    sf_emlrtRTEI{
        245,       // lineNo
        8,         // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    tf_emlrtRTEI{
        246,       // lineNo
        9,         // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    uf_emlrtRTEI{
        247,       // lineNo
        36,        // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    vf_emlrtRTEI{
        247,       // lineNo
        9,         // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    wf_emlrtRTEI{
        272,       // lineNo
        21,        // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    yf_emlrtRTEI{
        276,       // lineNo
        16,        // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    ag_emlrtRTEI{
        276,       // lineNo
        7,         // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    bg_emlrtRTEI{
        277,       // lineNo
        3,         // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    cg_emlrtRTEI{
        485,             // lineNo
        21,              // colNo
        "unaryMinOrMax", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
        "unaryMinOrMax.m" // pName
    };

static emlrtRTEInfo
    dg_emlrtRTEI{
        280,       // lineNo
        20,        // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    eg_emlrtRTEI{
        281,       // lineNo
        5,         // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    fg_emlrtRTEI{
        284,       // lineNo
        34,        // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    gg_emlrtRTEI{
        284,       // lineNo
        7,         // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    hg_emlrtRTEI{
        296,       // lineNo
        24,        // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    ig_emlrtRTEI{
        296,       // lineNo
        47,        // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    jg_emlrtRTEI{
        299,       // lineNo
        21,        // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRTEInfo
    kg_emlrtRTEI{
        300,       // lineNo
        5,         // colNo
        "shypoct", // fName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pName
    };

static emlrtRSInfo
    er_emlrtRSI{
        56,        // lineNo
        "shypoct", // fcnName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pathName
    };

static emlrtRSInfo
    gr_emlrtRSI{
        55,        // lineNo
        "shypoct", // fcnName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pathName
    };

static emlrtRSInfo
    pr_emlrtRSI{
        296,       // lineNo
        "shypoct", // fcnName
        "/home/user/ffmlu_code_generation/ffmlu_code_generation/shypoct/"
        "shypoct.m" // pathName
    };

// Function Declarations
static void b_and(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
                  const coder::array<boolean_T, 1U> &in2,
                  const coder::array<boolean_T, 1U> &in3);

static const mxArray *d_emlrt_marshallOut(const emlrtStack &sp,
                                          const char_T u[23]);

static const mxArray *e_emlrt_marshallOut(const emlrtStack &sp,
                                          const char_T u[35]);

static const mxArray *f_emlrt_marshallOut(const emlrtStack &sp,
                                          const char_T u[25]);

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
  in1.set_size(&hg_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = (in2[i * stride_0_0] && in3[i * stride_1_0]);
  }
}

static const mxArray *d_emlrt_marshallOut(const emlrtStack &sp,
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

static const mxArray *e_emlrt_marshallOut(const emlrtStack &sp,
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

static const mxArray *f_emlrt_marshallOut(const emlrtStack &sp,
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

real_T b_shypoct(srskelf_asym_newStackData *SD, const emlrtStack &sp,
                 const real_T x[24000], real_T occ, real_T lvlmax,
                 coder::array<c_struct_T, 1U> &T_nodes,
                 coder::array<real_T, 2U> &T_lvp, real_T &T_lrt)
{
  static const char_T cv3[38]{'M', 'a', 'x', 'i', 'm', 'u', 'm', ' ', 't', 'r',
                              'e', 'e', ' ', 'd', 'e', 'p', 't', 'h', ' ', 'm',
                              'u', 's', 't', ' ', 'b', 'e', ' ', 'a', 't', ' ',
                              'l', 'e', 'a', 's', 't', ' ', '1', '.'};
  static const char_T b_cv1[35]{'L', 'e', 'a', 'f', ' ', 'o', 'c', 'c', 'u',
                                'p', 'a', 'n', 'c', 'y', ' ', 'm', 'u', 's',
                                't', ' ', 'b', 'e', ' ', 'n', 'o', 'n', 'n',
                                'e', 'g', 'a', 't', 'i', 'v', 'e', '.'};
  static const char_T b_cv2[25]{'R', 'S', 'S', ':', 's', 'h', 'y', 'p', 'o',
                                'c', 't', ':', 'i', 'n', 'v', 'a', 'l', 'i',
                                'd', 'L', 'v', 'l', 'm', 'a', 'x'};
  static const char_T b_cv[23]{'R', 'S', 'S', ':', 's', 'h', 'y', 'p',
                               'o', 'c', 't', ':', 'n', 'e', 'g', 'a',
                               't', 'i', 'v', 'e', 'O', 'c', 'c'};
  __m128d r;
  __m128d r1;
  __m128d r2;
  coder::array<c_struct_T, 1U> T;
  coder::array<struct_T, 1U> r5;
  coder::array<real_T, 2U> b_x;
  coder::array<real_T, 2U> c_dist;
  coder::array<real_T, 2U> nbor;
  coder::array<real_T, 2U> nbor_indices;
  coder::array<real_T, 2U> r4;
  coder::array<real_T, 2U> r6;
  coder::array<real_T, 1U> llvl;
  coder::array<real_T, 1U> r7;
  coder::array<int32_T, 2U> ii;
  coder::array<int32_T, 2U> r3;
  coder::array<int32_T, 1U> r12;
  coder::array<int32_T, 1U> r8;
  coder::array<uint32_T, 1U> ilvl;
  coder::array<boolean_T, 2U> c_x;
  coder::array<boolean_T, 1U> r10;
  coder::array<boolean_T, 1U> r11;
  coder::array<boolean_T, 1U> r9;
  emlrtStack b_st;
  emlrtStack st;
  real_T unique_idx_data[8000];
  real_T ext[6];
  real_T ctr_data[3];
  real_T dist[3];
  real_T minval[3];
  real_T dv[2];
  real_T dv1[2];
  real_T T_nlvl;
  real_T b_prnt;
  real_T d;
  real_T d1;
  real_T l;
  real_T mlvl;
  int32_T b_idx_size[2];
  int32_T idx_size[2];
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T idx;
  int32_T k;
  int32_T loop_ub;
  int32_T nbox_;
  int32_T partialTrueCount;
  int32_T trueCount;
  uint32_T b_T_nlvl;
  uint32_T nbox;
  uint32_T nlvl;
  int16_T tmp_data[8000];
  boolean_T idx_data[24000];
  boolean_T exitg1;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
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
  //  Set default parameters
  //  Check inputs
  if (!(occ >= 0.0)) {
    st.site = &gr_emlrtRSI;
    b_error(st, d_emlrt_marshallOut(st, b_cv), e_emlrt_marshallOut(st, b_cv1),
            d_emlrtMCI);
  }
  if (!(lvlmax >= 1.0)) {
    st.site = &er_emlrtRSI;
    b_error(st, f_emlrt_marshallOut(st, b_cv2), c_emlrt_marshallOut(st, cv3),
            e_emlrtMCI);
  }
  //  Initialize top-level box extent, side lengths, center
  minval[0] = x[0];
  minval[1] = x[1];
  minval[2] = x[2];
  dist[0] = x[0];
  dist[1] = x[1];
  dist[2] = x[2];
  for (nbox_ = 0; nbox_ < 7999; nbox_++) {
    for (int32_T i{0}; i < 3; i++) {
      d = x[i + 3 * (nbox_ + 1)];
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
  //  s = struct('ctr',ctr','xi',1:n,'prnt',[],'chld',[],'nbor',[], ...
  //             'ilist',[],'snbor',[]);
  //  T = struct('nlvl',1,'lvp',[0 1],'lrt',l,'nodes',s);
  //  Initialize the structure fields
  //  Estimate a large enough number of nodes
  for (int32_T i{0}; i < 16000; i++) {
    SD->f0.rv[i].ctr[0] = 0.0;
    SD->f0.rv[i].ctr[1] = 0.0;
    SD->f0.rv[i].ctr[2] = 0.0;
    SD->f0.rv[i].xi.size[0] = 1;
    SD->f0.rv[i].xi.size[1] = 0;
    SD->f0.rv[i].prnt = 0.0;
    SD->f0.rv[i].chld.set_size(&we_emlrtRTEI, &sp, 1, 0);
    SD->f0.rv[i].nbor.set_size(&we_emlrtRTEI, &sp, 1, 0);
    SD->f0.rv[i].ilist.set_size(&we_emlrtRTEI, &sp, 1, 0);
    SD->f0.rv[i].snbor.set_size(&we_emlrtRTEI, &sp, 1, 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  T_nodes.set_size(&we_emlrtRTEI, &sp, 16000);
  for (b_i = 0; b_i < 16000; b_i++) {
    T_nodes[b_i] = SD->f0.rv[b_i];
  }
  T_lvp.set_size(&xe_emlrtRTEI, &sp, 1, 2);
  //  Initialize lvp with size [1, 2]
  b_T_nlvl = 1U;
  T_lrt = l;
  //  Initialize the first node
  r = _mm_loadu_pd(&ext[0]);
  r1 = _mm_loadu_pd(&ext[3]);
  r2 = _mm_set1_pd(0.5);
  _mm_storeu_pd(&T_nodes[0].ctr[0], _mm_mul_pd(r2, _mm_add_pd(r, r1)));
  T_nodes[0].ctr[2] = 0.5 * (d + dist[2]);
  //  Ensure ctr is correctly reshaped
  T_nodes[0].xi.size[0] = 1;
  T_nodes[0].xi.size[1] = 8000;
  for (b_i = 0; b_i < 8000; b_i++) {
    T_nodes[0].xi.data[b_i] = static_cast<real_T>(b_i) + 1.0;
  }
  T_lvp[0] = 0.0;
  T_lvp[1] = 1.0;
  //  Set initial values for lvp
  nlvl = 1U;
  nbox = 1U;
  mlvl = 1.0;
  //  mbox = 1;
  //  Main loop
  //  while 1
  exitg1 = false;
  while (!(exitg1 || (nlvl >= lvlmax))) {
    //  Initialize current level
    nbox_ = static_cast<int32_T>(nbox);
    l *= 0.5;
    //  Loop over all boxes at current level
    if ((static_cast<int32_T>(nlvl) < 1) ||
        (static_cast<int32_T>(nlvl) > T_lvp.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nlvl), 1,
                                    T_lvp.size(1), &oe_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    d = T_lvp[static_cast<int32_T>(nlvl) - 1] + 1.0;
    if ((static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0) < 1) ||
        (static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0) >
         T_lvp.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0), 1,
          T_lvp.size(1), &xd_emlrtBCI, (emlrtConstCTX)&sp);
    }
    d1 = T_lvp[static_cast<int32_T>(nlvl)];
    b_i = static_cast<int32_T>(d1 + (1.0 - d));
    emlrtForLoopVectorCheckR2021a(d, 1.0, d1, mxDOUBLE_CLASS, b_i, &s_emlrtRTEI,
                                  (emlrtConstCTX)&sp);
    for (int32_T prnt{0}; prnt < b_i; prnt++) {
      int16_T xi_data[8000];
      b_prnt = d + static_cast<real_T>(prnt);
      p = ((static_cast<int32_T>(b_prnt) < 1) ||
           (static_cast<int32_T>(b_prnt) > T_nodes.size(0)));
      if (p) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_prnt), 1,
                                      T_nodes.size(0), &ae_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      loop_ub = T_nodes[static_cast<int32_T>(b_prnt) - 1].xi.size[1];
      if ((static_cast<int32_T>(b_prnt) < 1) ||
          (static_cast<int32_T>(b_prnt) > T_nodes.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_prnt), 1,
                                      T_nodes.size(0), &ae_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      for (i1 = 0; i1 < loop_ub; i1++) {
        xi_data[i1] = static_cast<int16_T>(
            T_nodes[static_cast<int32_T>(b_prnt) - 1].xi.data[i1]);
      }
      //  Subdivide box if it contains too many points
      if (loop_ub > occ) {
        ctr_data[0] = T_nodes[static_cast<int32_T>(b_prnt) - 1].ctr[0];
        ctr_data[1] = T_nodes[static_cast<int32_T>(b_prnt) - 1].ctr[1];
        ctr_data[2] = T_nodes[static_cast<int32_T>(b_prnt) - 1].ctr[2];
        b_x.set_size(&ye_emlrtRTEI, &sp, 3, loop_ub);
        for (i1 = 0; i1 < loop_ub; i1++) {
          idx =
              3 * (static_cast<int32_T>(
                       T_nodes[static_cast<int32_T>(b_prnt) - 1].xi.data[i1]) -
                   1);
          b_x[3 * i1] = x[idx];
          b_x[3 * i1 + 1] = x[idx + 1];
          b_x[3 * i1 + 2] = x[idx + 2];
        }
        minval[0] = T_nodes[static_cast<int32_T>(b_prnt) - 1].ctr[0];
        minval[1] = T_nodes[static_cast<int32_T>(b_prnt) - 1].ctr[1];
        minval[2] = T_nodes[static_cast<int32_T>(b_prnt) - 1].ctr[2];
        st.site = &td_emlrtRSI;
        coder::d_bsxfun(b_x, minval, idx_data, idx_size);
        b_idx_size[0] = 1;
        b_loop_ub = idx_size[1];
        b_idx_size[1] = idx_size[1];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          SD->f0.idx_data[i1] = static_cast<real_T>((idx_data[3 * i1] +
                                                     2 * idx_data[3 * i1 + 1]) +
                                                    4 * idx_data[3 * i1 + 2]) +
                                1.0;
        }
        //  for i = unique(idx)
        st.site = &sd_emlrtRSI;
        b_st.site = &ud_emlrtRSI;
        coder::unique_vector(b_st, SD->f0.idx_data, b_idx_size, unique_idx_data,
                             idx_size);
        i1 = idx_size[1];
        for (k = 0; k < i1; k++) {
          uint32_T u;
          if (k + 1 > i1) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &wd_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          //  % while mbox < nbox
          //  %            e = cell(mbox,1);
          //  %            s = struct('ctr',e,'xi',e,'prnt',e,'chld',e,'nbor',e,
          //  ... %                       'ilist',e,'snbor',e); % T.nodes =
          //  [T.nodes; s]; %            mbox = 2*mbox; %          end % s =
          //  struct( 'ctr', ctr + l*(bitget(i-1,1:d) - 0.5), ... % 'xi', xi(idx
          //  == i),                    ... %                     'prnt', prnt,
          //  ... %                     'chld', [], ... % 'nbor', [], ... %
          //  'ilist', [],                             ... % 'snbor', []); %
          //  T.nodes(nbox) = s; %          T.nodes(prnt).chld =
          //  [T.nodes(prnt).chld nbox]; %        end %        T.nodes(prnt).xi
          //  = [];
          u = (nbox + static_cast<uint32_T>(k)) + 1U;
          if (u > static_cast<uint32_T>(T_nodes.size(0))) {
            //  Double the preallocated space if necessary
            for (int32_T i{0}; i < 16000; i++) {
              SD->f0.rv[i].ctr[0] = 0.0;
              SD->f0.rv[i].ctr[1] = 0.0;
              SD->f0.rv[i].ctr[2] = 0.0;
              SD->f0.rv[i].xi.size[0] = 1;
              SD->f0.rv[i].xi.size[1] = 0;
              SD->f0.rv[i].prnt = 0.0;
              SD->f0.rv[i].chld.set_size(&bf_emlrtRTEI, &sp, 1, 0);
              SD->f0.rv[i].nbor.set_size(&bf_emlrtRTEI, &sp, 1, 0);
              SD->f0.rv[i].ilist.set_size(&bf_emlrtRTEI, &sp, 1, 0);
              SD->f0.rv[i].snbor.set_size(&bf_emlrtRTEI, &sp, 1, 0);
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
              }
            }
            i2 = T_nodes.size(0);
            T_nodes.set_size(&af_emlrtRTEI, &sp, T_nodes.size(0) + 16000);
            for (i3 = 0; i3 < 16000; i3++) {
              T_nodes[i2 + i3] = SD->f0.rv[i3];
            }
          }
          //  Properly initialize non-empty values
          st.site = &rd_emlrtRSI;
          coder::bitget(st, unique_idx_data[k] - 1.0, minval);
          r = _mm_loadu_pd(&minval[0]);
          _mm_storeu_pd(&minval[0], _mm_sub_pd(r, r2));
          minval[2] -= 0.5;
          r = _mm_loadu_pd(&minval[0]);
          r1 = _mm_loadu_pd(&ctr_data[0]);
          if ((static_cast<int32_T>(u) < 1) ||
              (static_cast<int32_T>(u) > T_nodes.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(u), 1,
                                          T_nodes.size(0), &ue_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          _mm_storeu_pd(&T_nodes[static_cast<int32_T>(u) - 1].ctr[0],
                        _mm_add_pd(r1, _mm_mul_pd(_mm_set1_pd(l), r)));
          if ((static_cast<int32_T>(u) < 1) ||
              (static_cast<int32_T>(u) > T_nodes.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(u), 1,
                                          T_nodes.size(0), &ue_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          T_nodes[static_cast<int32_T>(u) - 1].ctr[2] =
              ctr_data[2] + l * minval[2];
          //  Ensure ctr_value is a row vector
          idx = b_loop_ub - 1;
          trueCount = 0;
          partialTrueCount = 0;
          for (int32_T i{0}; i <= idx; i++) {
            if (SD->f0.idx_data[i] == unique_idx_data[k]) {
              trueCount++;
              tmp_data[partialTrueCount] = static_cast<int16_T>(i);
              partialTrueCount++;
            }
          }
          for (i2 = 0; i2 < trueCount; i2++) {
            int16_T i4;
            i4 = tmp_data[i2];
            if ((i4 < 0) || (i4 > loop_ub - 1)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(i4), 0,
                                            loop_ub - 1, &ve_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
          }
          st.site = &qd_emlrtRSI;
          partialTrueCount = 1;
          if (trueCount > 1) {
            partialTrueCount = trueCount;
          }
          if (trueCount > muIntScalarMax_sint32(trueCount, partialTrueCount)) {
            emlrtErrorWithMessageIdR2018a(
                &st, &t_emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
                "Coder:toolbox:reshape_emptyReshapeLimit", 0);
          }
          //  Ensure xi_idx is a row vector
          p = ((static_cast<int32_T>(u) < 1) ||
               (static_cast<int32_T>(u) > T_nodes.size(0)));
          if (p) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(u), 1,
                                          T_nodes.size(0), &ee_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          T_nodes[static_cast<int32_T>(u) - 1].xi.size[0] = 1;
          T_nodes[static_cast<int32_T>(u) - 1].xi.size[1] = trueCount;
          if ((static_cast<int32_T>(u) < 1) ||
              (static_cast<int32_T>(u) > T_nodes.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(u), 1,
                                          T_nodes.size(0), &ee_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          for (i2 = 0; i2 < trueCount; i2++) {
            T_nodes[static_cast<int32_T>(u) - 1].xi.data[i2] =
                xi_data[tmp_data[i2]];
          }
          T_nodes[static_cast<int32_T>(u) - 1].prnt = b_prnt;
          T_nodes[static_cast<int32_T>(u) - 1].chld.set_size(
              &cf_emlrtRTEI, &sp, 1,
              T_nodes[static_cast<int32_T>(u) - 1].chld.size(1));
          T_nodes[static_cast<int32_T>(u) - 1].chld.set_size(
              &cf_emlrtRTEI, &sp,
              T_nodes[static_cast<int32_T>(u) - 1].chld.size(0), 0);
          if ((static_cast<int32_T>(u) < 1) ||
              (static_cast<int32_T>(u) > T_nodes.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(u), 1,
                                          T_nodes.size(0), &ge_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          //  Initialize chld as an empty array
          //  Update parent chld field
          p = ((static_cast<int32_T>(b_prnt) < 1) ||
               (static_cast<int32_T>(b_prnt) > T_nodes.size(0)));
          if (p) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_prnt), 1,
                                          T_nodes.size(0), &he_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          idx = T_nodes[static_cast<int32_T>(b_prnt) - 1].chld.size(1);
          r4.set_size(&df_emlrtRTEI, &sp, 1, idx);
          if ((static_cast<int32_T>(b_prnt) < 1) ||
              (static_cast<int32_T>(b_prnt) > T_nodes.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_prnt), 1,
                                          T_nodes.size(0), &he_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          for (i2 = 0; i2 < idx; i2++) {
            r4[i2] = T_nodes[static_cast<int32_T>(b_prnt) - 1].chld[i2];
          }
          T_nodes[static_cast<int32_T>(b_prnt) - 1].chld.set_size(
              &af_emlrtRTEI, &sp,
              T_nodes[static_cast<int32_T>(b_prnt) - 1].chld.size(0),
              r4.size(1) + 1);
          T_nodes[static_cast<int32_T>(b_prnt) - 1].chld[r4.size(1)] = u;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
          }
        }
        if (idx_size[1] - 1 >= 0) {
          nbox += static_cast<uint32_T>(idx_size[1]);
        }
        p = ((static_cast<int32_T>(b_prnt) < 1) ||
             (static_cast<int32_T>(b_prnt) > T_nodes.size(0)));
        if (p) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_prnt), 1,
                                        T_nodes.size(0), &be_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        T_nodes[static_cast<int32_T>(b_prnt) - 1].xi.size[0] = 1;
        T_nodes[static_cast<int32_T>(b_prnt) - 1].xi.size[1] = 0;
        if ((static_cast<int32_T>(b_prnt) < 1) ||
            (static_cast<int32_T>(b_prnt) > T_nodes.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_prnt), 1,
                                        T_nodes.size(0), &be_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        //  Reset xi to the initial state
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }
    if (static_cast<int32_T>(nbox) <= nbox_) {
      exitg1 = true;
    } else {
      nlvl++;
      b_T_nlvl = nlvl;
      while (mlvl < nlvl) {
        //  T.lvp = [T.lvp zeros(1,mlvl)];
        st.site = &pd_emlrtRSI;
        b_prnt = muDoubleScalarPower(2.0, mlvl);
        b_i = T_lvp.size(1);
        if (b_prnt != static_cast<int32_T>(b_prnt)) {
          emlrtIntegerCheckR2012b(b_prnt, &nb_emlrtDCI, (emlrtConstCTX)&sp);
        }
        loop_ub = static_cast<int32_T>(b_prnt);
        T_lvp.set_size(&af_emlrtRTEI, &sp, T_lvp.size(0),
                       T_lvp.size(1) + static_cast<int32_T>(b_prnt));
        if (b_prnt != static_cast<int32_T>(b_prnt)) {
          emlrtIntegerCheckR2012b(b_prnt, &mb_emlrtDCI, (emlrtConstCTX)&sp);
        }
        for (i1 = 0; i1 < loop_ub; i1++) {
          T_lvp[b_i + i1] = 0.0;
        }
        //  Ensure consistent dimensions
        mlvl *= 2.0;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
        }
      }
      if ((static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0) < 1) ||
          (static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0) >
           T_lvp.size(1))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0), 1,
            T_lvp.size(1), &pe_emlrtBCI, (emlrtConstCTX)&sp);
      }
      T_lvp[static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0) - 1] = nbox;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }
  }
  //  Memory cleanup
  if ((static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0) < 1) ||
      (static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0) > T_lvp.size(1))) {
    emlrtDynamicBoundsCheckR2012b(
        static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0), 1, T_lvp.size(1),
        &vd_emlrtBCI, (emlrtConstCTX)&sp);
  }
  T_lvp.set_size(&ef_emlrtRTEI, &sp, T_lvp.size(0),
                 static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0));
  loop_ub = static_cast<int32_T>(nbox);
  if ((static_cast<int32_T>(nbox) < 1) ||
      (static_cast<int32_T>(nbox) > T_nodes.size(0))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbox), 1,
                                  T_nodes.size(0), &ud_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  idx_size[0] = 1;
  idx_size[1] = static_cast<int32_T>(nbox);
  st.site = &od_emlrtRSI;
  coder::internal::indexShapeCheck(st, T_nodes.size(0), idx_size);
  T_nodes.set_size(&ff_emlrtRTEI, &sp, static_cast<int32_T>(nbox));
  //  Initialize data for neighbor calculation
  ilvl.set_size(&gf_emlrtRTEI, &sp, static_cast<int32_T>(nbox));
  for (b_i = 0; b_i < loop_ub; b_i++) {
    ilvl[b_i] = 0U;
  }
  if (static_cast<real_T>(nlvl) != static_cast<int32_T>(nlvl)) {
    emlrtIntegerCheckR2012b(static_cast<real_T>(nlvl), &ob_emlrtDCI,
                            (emlrtConstCTX)&sp);
  }
  llvl.set_size(&hf_emlrtRTEI, &sp, static_cast<int32_T>(nlvl));
  l = T_lrt;
  b_i = static_cast<int32_T>(nlvl);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, static_cast<real_T>(nlvl),
                                mxDOUBLE_CLASS, static_cast<int32_T>(nlvl),
                                &r_emlrtRTEI, (emlrtConstCTX)&sp);
  for (int32_T prnt{0}; prnt < b_i; prnt++) {
    if ((prnt + 1 < 1) ||
        (prnt + 1 > static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0))) {
      emlrtDynamicBoundsCheckR2012b(
          prnt + 1, 1, static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0),
          &md_emlrtBCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>((static_cast<real_T>(prnt) + 1.0) + 1.0) < 1) ||
        (static_cast<int32_T>((static_cast<real_T>(prnt) + 1.0) + 1.0) >
         static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>((static_cast<real_T>(prnt) + 1.0) + 1.0), 1,
          static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0), &ld_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    d = T_lvp[prnt + 1];
    if (T_lvp[prnt] + 1.0 > d) {
      i1 = 0;
      i2 = 0;
    } else {
      i1 = static_cast<int32_T>(T_lvp[prnt] + 1.0);
      if ((i1 < 1) || (i1 > static_cast<int32_T>(nbox))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, static_cast<int32_T>(nbox),
                                      &kd_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i1--;
      if ((static_cast<int32_T>(d) < 1) ||
          (static_cast<int32_T>(d) > static_cast<int32_T>(nbox))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                      static_cast<int32_T>(nbox), &jd_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      i2 = static_cast<int32_T>(d);
    }
    loop_ub = i2 - i1;
    for (i2 = 0; i2 < loop_ub; i2++) {
      ilvl[i1 + i2] = static_cast<uint32_T>(prnt) + 1U;
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(prnt) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(prnt) + 1U) >
         llvl.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(prnt) + 1U), 1,
          llvl.size(0), &se_emlrtBCI, (emlrtConstCTX)&sp);
    }
    llvl[prnt] = l;
    l *= 0.5;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  //  Find neighbors and interaction list of each box
  b_i = static_cast<int32_T>(static_cast<real_T>(nlvl) - 1.0);
  emlrtForLoopVectorCheckR2021a(
      2.0, 1.0, static_cast<real_T>(nlvl), mxDOUBLE_CLASS,
      static_cast<int32_T>(static_cast<real_T>(nlvl) - 1.0), &q_emlrtRTEI,
      (emlrtConstCTX)&sp);
  for (int32_T prnt{0}; prnt < b_i; prnt++) {
    i1 = llvl.size(0);
    if ((static_cast<int32_T>(static_cast<uint32_T>(prnt) + 2U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(prnt) + 2U) >
         llvl.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(prnt) + 2U), 1,
          llvl.size(0), &qe_emlrtBCI, (emlrtConstCTX)&sp);
    }
    l = llvl[prnt + 1];
    if ((static_cast<int32_T>(static_cast<uint32_T>(prnt) + 2U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(prnt) + 2U) >
         static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(prnt) + 2U), 1,
          static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0), &re_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    d = T_lvp[prnt + 1] + 1.0;
    if ((static_cast<int32_T>((static_cast<real_T>(prnt) + 2.0) + 1.0) < 1) ||
        (static_cast<int32_T>((static_cast<real_T>(prnt) + 2.0) + 1.0) >
         static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>((static_cast<real_T>(prnt) + 2.0) + 1.0), 1,
          static_cast<int32_T>(static_cast<real_T>(nlvl) + 1.0), &td_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    d1 = T_lvp[prnt + 1] + 1.0;
    b_prnt = T_lvp[prnt + 2];
    i2 = static_cast<int32_T>(b_prnt + (1.0 - d1));
    emlrtForLoopVectorCheckR2021a(d1, 1.0, b_prnt, mxDOUBLE_CLASS, i2,
                                  &p_emlrtRTEI, (emlrtConstCTX)&sp);
    for (int32_T i{0}; i < i2; i++) {
      mlvl = d + static_cast<real_T>(i);
      if ((static_cast<int32_T>(mlvl) < 1) ||
          (static_cast<int32_T>(mlvl) > static_cast<int32_T>(nbox))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(mlvl), 1,
                                      static_cast<int32_T>(nbox), &sd_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      //  Add all non-self children of parent
      i3 = static_cast<int32_T>(T_nodes[static_cast<int32_T>(mlvl) - 1].prnt);
      if ((i3 < 1) || (i3 > static_cast<int32_T>(nbox))) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, static_cast<int32_T>(nbox),
                                      &rd_emlrtBCI, (emlrtConstCTX)&sp);
      }
      //  T.nodes(i).nbor = j(j ~= i);
      //       for k = j(j~=i)
      //           T.nodes(k).snbor = [T.nodes(k).snbor i];
      //       end
      loop_ub = T_nodes[static_cast<int32_T>(
                            T_nodes[static_cast<int32_T>(mlvl) - 1].prnt) -
                        1]
                    .chld.size(1);
      c_x.set_size(&if_emlrtRTEI, &sp, 1, loop_ub);
      for (k = 0; k < loop_ub; k++) {
        c_x[k] = (T_nodes[i3 - 1].chld[k] != mlvl);
      }
      idx = c_x.size(1) - 1;
      trueCount = 0;
      for (b_loop_ub = 0; b_loop_ub <= idx; b_loop_ub++) {
        if (c_x[b_loop_ub]) {
          trueCount++;
        }
      }
      r3.set_size(&af_emlrtRTEI, &sp, 1, trueCount);
      partialTrueCount = 0;
      for (b_loop_ub = 0; b_loop_ub <= idx; b_loop_ub++) {
        if (c_x[b_loop_ub]) {
          r3[partialTrueCount] = b_loop_ub;
          partialTrueCount++;
        }
      }
      nbox_ = r3.size(1);
      nbor.set_size(&jf_emlrtRTEI, &sp, 1, r3.size(1));
      for (k = 0; k < nbox_; k++) {
        if ((r3[k] < 0) || (r3[k] > idx)) {
          emlrtDynamicBoundsCheckR2012b(r3[k], 0, idx, &te_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        nbor[k] = T_nodes[static_cast<int32_T>(
                              T_nodes[static_cast<int32_T>(mlvl) - 1].prnt) -
                          1]
                      .chld[r3[k]];
      }
      st.site = &nd_emlrtRSI;
      partialTrueCount = 1;
      if (r3.size(1) > 1) {
        partialTrueCount = r3.size(1);
      }
      if (r3.size(1) > muIntScalarMax_sint32(nbox_, partialTrueCount)) {
        emlrtErrorWithMessageIdR2018a(
            &st, &t_emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
            "Coder:toolbox:reshape_emptyReshapeLimit", 0);
      }
      T_nodes[static_cast<int32_T>(mlvl) - 1].nbor.set_size(
          &kf_emlrtRTEI, &sp, 1,
          T_nodes[static_cast<int32_T>(mlvl) - 1].nbor.size(1));
      T_nodes[static_cast<int32_T>(mlvl) - 1].nbor.set_size(
          &kf_emlrtRTEI, &sp,
          T_nodes[static_cast<int32_T>(mlvl) - 1].nbor.size(0), r3.size(1));
      for (k = 0; k < nbox_; k++) {
        T_nodes[static_cast<int32_T>(mlvl) - 1].nbor[k] =
            T_nodes[static_cast<int32_T>(
                        T_nodes[static_cast<int32_T>(mlvl) - 1].prnt) -
                    1]
                .chld[r3[k]];
      }
      //  Ensure nbor is a row vector
      //  Use explicit index array
      st.site = &md_emlrtRSI;
      b_st.site = &ue_emlrtRSI;
      coder::eml_find(b_st, c_x, ii);
      loop_ub = ii.size(1);
      nbor_indices.set_size(&lf_emlrtRTEI, &st, 1, ii.size(1));
      for (k = 0; k < loop_ub; k++) {
        nbor_indices[k] = ii[k];
      }
      for (idx = 0; idx < loop_ub; idx++) {
        k = T_nodes[static_cast<int32_T>(
                        T_nodes[static_cast<int32_T>(mlvl) - 1].prnt) -
                    1]
                .chld.size(1);
        if (idx + 1 > loop_ub) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, loop_ub, &we_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        partialTrueCount = static_cast<int32_T>(nbor_indices[idx]);
        if ((partialTrueCount < 1) || (partialTrueCount > k)) {
          emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, k, &qd_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        k = static_cast<int32_T>(
            T_nodes[static_cast<int32_T>(
                        T_nodes[static_cast<int32_T>(mlvl) - 1].prnt) -
                    1]
                .chld[static_cast<int32_T>(nbor_indices[idx]) - 1]);
        if ((k < 1) || (k > static_cast<int32_T>(nbox))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, static_cast<int32_T>(nbox),
                                        &ce_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_loop_ub =
            T_nodes
                [static_cast<int32_T>(
                     T_nodes[static_cast<int32_T>(
                                 T_nodes[static_cast<int32_T>(mlvl) - 1].prnt) -
                             1]
                         .chld[static_cast<int32_T>(nbor_indices[idx]) - 1]) -
                 1]
                    .snbor.size(1);
        r4.set_size(&mf_emlrtRTEI, &sp, 1, b_loop_ub);
        if ((k < 1) || (k > static_cast<int32_T>(nbox))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, static_cast<int32_T>(nbox),
                                        &ce_emlrtBCI, (emlrtConstCTX)&sp);
        }
        for (partialTrueCount = 0; partialTrueCount < b_loop_ub;
             partialTrueCount++) {
          r4[partialTrueCount] = T_nodes[k - 1].snbor[partialTrueCount];
        }
        T_nodes[k - 1].snbor.set_size(
            &af_emlrtRTEI, &sp, T_nodes[k - 1].snbor.size(0), r4.size(1) + 1);
        if (k > static_cast<int32_T>(nbox)) {
          emlrtDynamicBoundsCheckR2012b(k, 1, static_cast<int32_T>(nbox),
                                        &yd_emlrtBCI, (emlrtConstCTX)&sp);
        }
        T_nodes[k - 1].snbor[r4.size(1)] = mlvl;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
        }
      }
      //  % Add coarser parent-neighbors if adjacent (non-uniform
      //      % discretization only)
      //      for j = T.nodes(prnt).nbor
      //        if ~isempty(T.nodes(j).xi)
      //  Get the neighbors array
      if (i3 > static_cast<int32_T>(nbox)) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, static_cast<int32_T>(nbox),
                                      &de_emlrtBCI, (emlrtConstCTX)&sp);
      }
      loop_ub = T_nodes[static_cast<int32_T>(
                            T_nodes[static_cast<int32_T>(mlvl) - 1].prnt) -
                        1]
                    .nbor.size(1);
      nbor_indices.set_size(&nf_emlrtRTEI, &sp, 1, loop_ub);
      if (i3 > static_cast<int32_T>(nbox)) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, static_cast<int32_T>(nbox),
                                      &de_emlrtBCI, (emlrtConstCTX)&sp);
      }
      for (k = 0; k < loop_ub; k++) {
        nbor_indices[k] = T_nodes[i3 - 1].nbor[k];
      }
      if (loop_ub != 0) {
        //  Declare nbor as variable-size
        b_loop_ub = T_nodes[static_cast<int32_T>(mlvl) - 1].nbor.size(1);
        nbor.set_size(&of_emlrtRTEI, &sp, 1, b_loop_ub);
        if ((static_cast<int32_T>(mlvl) < 1) ||
            (static_cast<int32_T>(mlvl) > static_cast<int32_T>(nbox))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(mlvl), 1,
                                        static_cast<int32_T>(nbox),
                                        &fe_emlrtBCI, (emlrtConstCTX)&sp);
        }
        for (k = 0; k < b_loop_ub; k++) {
          nbor[k] = T_nodes[static_cast<int32_T>(mlvl) - 1].nbor[k];
        }
        for (trueCount = 0; trueCount < loop_ub; trueCount++) {
          if (trueCount + 1 > nbor_indices.size(1)) {
            emlrtDynamicBoundsCheckR2012b(trueCount + 1, 1,
                                          nbor_indices.size(1), &pd_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          k = static_cast<int32_T>(nbor_indices[trueCount]);
          if ((k < 1) || (k > static_cast<int32_T>(nbox))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, static_cast<int32_T>(nbox),
                                          &od_emlrtBCI, (emlrtConstCTX)&sp);
          }
          if (T_nodes[static_cast<int32_T>(nbor_indices[trueCount]) - 1]
                  .xi.size[1] != 0) {
            boolean_T b_dist[3];
            if (k > static_cast<int32_T>(nbox)) {
              emlrtDynamicBoundsCheckR2012b(k, 1, static_cast<int32_T>(nbox),
                                            &nd_emlrtBCI, (emlrtConstCTX)&sp);
            }
            r = _mm_loadu_pd(&T_nodes[static_cast<int32_T>(mlvl) - 1].ctr[0]);
            r1 = _mm_loadu_pd(&T_nodes[k - 1].ctr[0]);
            _mm_storeu_pd(&dv[0], _mm_sub_pd(r, r1));
            dv1[0] = muDoubleScalarAbs(dv[0]);
            dv1[1] = muDoubleScalarAbs(dv[1]);
            r = _mm_loadu_pd(&dv1[0]);
            _mm_storeu_pd(&dist[0], r);
            partialTrueCount = static_cast<int32_T>(ilvl[k - 1]);
            if ((partialTrueCount < 1) || (partialTrueCount > i1)) {
              emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, i1,
                                            &ye_emlrtBCI, (emlrtConstCTX)&sp);
            }
            d1 = 0.5 * (l + llvl[partialTrueCount - 1]);
            b_dist[0] = (muDoubleScalarRound((dist[0] - d1) / l) <= 0.0);
            b_dist[1] = (muDoubleScalarRound((dist[1] - d1) / l) <= 0.0);
            b_dist[2] =
                (muDoubleScalarRound(
                     (muDoubleScalarAbs(
                          T_nodes[static_cast<int32_T>(mlvl) - 1].ctr[2] -
                          T_nodes[k - 1].ctr[2]) -
                      d1) /
                     l) <= 0.0);
            if (coder::all(b_dist)) {
              //  T.nodes(i).nbor = [T.nodes(i).nbor j];
              //  T.nodes(j).snbor = [T.nodes(j).snbor i];
              nbox_ = nbor.size(1);
              b_loop_ub = nbor.size(1) + 1;
              r4.set_size(&rf_emlrtRTEI, &sp, 1, nbor.size(1) + 1);
              for (partialTrueCount = 0; partialTrueCount < nbox_;
                   partialTrueCount++) {
                r4[partialTrueCount] = nbor[partialTrueCount];
              }
              r4[nbor.size(1)] = nbor_indices[trueCount];
              st.site = &ld_emlrtRSI;
              partialTrueCount = 1;
              if (r4.size(1) > 1) {
                partialTrueCount = r4.size(1);
              }
              if (r4.size(1) >
                  muIntScalarMax_sint32(b_loop_ub, partialTrueCount)) {
                emlrtErrorWithMessageIdR2018a(
                    &st, &t_emlrtRTEI,
                    "Coder:toolbox:reshape_emptyReshapeLimit",
                    "Coder:toolbox:reshape_emptyReshapeLimit", 0);
              }
              nbor.set_size(&sf_emlrtRTEI, &sp, 1, b_loop_ub);
              for (partialTrueCount = 0; partialTrueCount < b_loop_ub;
                   partialTrueCount++) {
                nbor[partialTrueCount] = r4[partialTrueCount];
              }
              //  Ensure nbor is a row vector
              T_nodes[static_cast<int32_T>(mlvl) - 1].nbor.set_size(
                  &tf_emlrtRTEI, &sp, 1,
                  T_nodes[static_cast<int32_T>(mlvl) - 1].nbor.size(1));
              T_nodes[static_cast<int32_T>(mlvl) - 1].nbor.set_size(
                  &tf_emlrtRTEI, &sp,
                  T_nodes[static_cast<int32_T>(mlvl) - 1].nbor.size(0),
                  b_loop_ub);
              if ((static_cast<int32_T>(mlvl) < 1) ||
                  (static_cast<int32_T>(mlvl) > static_cast<int32_T>(nbox))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(mlvl), 1,
                                              static_cast<int32_T>(nbox),
                                              &je_emlrtBCI, (emlrtConstCTX)&sp);
              }
              for (partialTrueCount = 0; partialTrueCount < b_loop_ub;
                   partialTrueCount++) {
                T_nodes[static_cast<int32_T>(mlvl) - 1].nbor[partialTrueCount] =
                    r4[partialTrueCount];
              }
              r4.set_size(&uf_emlrtRTEI, &sp, 1, r4.size(1));
              b_loop_ub =
                  T_nodes[static_cast<int32_T>(nbor_indices[trueCount]) - 1]
                      .snbor.size(1);
              r4.set_size(&uf_emlrtRTEI, &sp, r4.size(0), b_loop_ub + 1);
              for (partialTrueCount = 0; partialTrueCount < b_loop_ub;
                   partialTrueCount++) {
                r4[partialTrueCount] = T_nodes[k - 1].snbor[partialTrueCount];
              }
              r4[b_loop_ub] = mlvl;
              st.site = &kd_emlrtRSI;
              idx = r4.size(1);
              partialTrueCount = 1;
              if (r4.size(1) > 1) {
                partialTrueCount = r4.size(1);
              }
              if (r4.size(1) > muIntScalarMax_sint32(idx, partialTrueCount)) {
                emlrtErrorWithMessageIdR2018a(
                    &st, &t_emlrtRTEI,
                    "Coder:toolbox:reshape_emptyReshapeLimit",
                    "Coder:toolbox:reshape_emptyReshapeLimit", 0);
              }
              T_nodes[k - 1].snbor.set_size(&vf_emlrtRTEI, &sp, 1,
                                            T_nodes[k - 1].snbor.size(1));
              T_nodes[k - 1].snbor.set_size(
                  &vf_emlrtRTEI, &sp, T_nodes[k - 1].snbor.size(0), r4.size(1));
              if (k > static_cast<int32_T>(nbox)) {
                emlrtDynamicBoundsCheckR2012b(k, 1, static_cast<int32_T>(nbox),
                                              &ke_emlrtBCI, (emlrtConstCTX)&sp);
              }
              for (partialTrueCount = 0; partialTrueCount < idx;
                   partialTrueCount++) {
                T_nodes[k - 1].snbor[partialTrueCount] = r4[partialTrueCount];
              }
            } else {
              //  T.nodes(i).ilist = [T.nodes(i).ilist, j];
              b_loop_ub = T_nodes[static_cast<int32_T>(mlvl) - 1].ilist.size(1);
              idx = b_loop_ub + 1;
              r4.set_size(&pf_emlrtRTEI, &sp, 1, b_loop_ub + 1);
              for (k = 0; k < b_loop_ub; k++) {
                r4[k] = T_nodes[static_cast<int32_T>(mlvl) - 1].ilist[k];
              }
              r4[b_loop_ub] = nbor_indices[trueCount];
              st.site = &jd_emlrtRSI;
              partialTrueCount = 1;
              if (r4.size(1) > 1) {
                partialTrueCount = r4.size(1);
              }
              if (r4.size(1) > muIntScalarMax_sint32(idx, partialTrueCount)) {
                emlrtErrorWithMessageIdR2018a(
                    &st, &t_emlrtRTEI,
                    "Coder:toolbox:reshape_emptyReshapeLimit",
                    "Coder:toolbox:reshape_emptyReshapeLimit", 0);
              }
              T_nodes[static_cast<int32_T>(mlvl) - 1].ilist.set_size(
                  &qf_emlrtRTEI, &sp, 1,
                  T_nodes[static_cast<int32_T>(mlvl) - 1].ilist.size(1));
              T_nodes[static_cast<int32_T>(mlvl) - 1].ilist.set_size(
                  &qf_emlrtRTEI, &sp,
                  T_nodes[static_cast<int32_T>(mlvl) - 1].ilist.size(0),
                  b_loop_ub + 1);
              if ((static_cast<int32_T>(mlvl) < 1) ||
                  (static_cast<int32_T>(mlvl) > static_cast<int32_T>(nbox))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(mlvl), 1,
                                              static_cast<int32_T>(nbox),
                                              &ie_emlrtBCI, (emlrtConstCTX)&sp);
              }
              for (k = 0; k < idx; k++) {
                T_nodes[static_cast<int32_T>(mlvl) - 1].ilist[k] = r4[k];
              }
              //  Ensure ilist is a row vector
            }
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
          }
        }
      }
      //  % % Add children of parent-neighbors if adjacent
      //  %  idx = [T.nodes(T.nodes(prnt).nbor).chld];
      //  %  c = reshape([T.nodes(idx).ctr],d,[])';
      //  %  dist = round(abs(bsxfun(@minus,T.nodes(i).ctr,c))/l);
      //  %  j = idx(max(dist,[],2) <= 1);
      //  %  if ~isempty(j)
      //  %    T.nodes(i).nbor  = [T.nodes(i).nbor j];
      //  %    for k = j
      //  %        T.nodes(k).snbor = [T.nodes(k).snbor i];
      //  %    end
      //  %  end
      //  Add children of parent-neighbors if adjacent
      if (i3 > static_cast<int32_T>(nbox)) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, static_cast<int32_T>(nbox),
                                      &id_emlrtBCI, (emlrtConstCTX)&sp);
      }
      idx_size[0] =
          (*(int32_T(*)[2])
                T_nodes[static_cast<int32_T>(
                            T_nodes[static_cast<int32_T>(mlvl) - 1].prnt) -
                        1]
                    .nbor.size())[0];
      idx_size[1] =
          (*(int32_T(*)[2])
                T_nodes[static_cast<int32_T>(
                            T_nodes[static_cast<int32_T>(mlvl) - 1].prnt) -
                        1]
                    .nbor.size())[1];
      st.site = &id_emlrtRSI;
      coder::internal::indexShapeCheck(st, T_nodes.size(0), idx_size);
      loop_ub = T_nodes[static_cast<int32_T>(
                            T_nodes[static_cast<int32_T>(mlvl) - 1].prnt) -
                        1]
                    .nbor.size(1);
      T.set_size(&wf_emlrtRTEI, &sp, loop_ub);
      for (i3 = 0; i3 < loop_ub; i3++) {
        k = static_cast<int32_T>(
            T_nodes[static_cast<int32_T>(
                        T_nodes[static_cast<int32_T>(mlvl) - 1].prnt) -
                    1]
                .nbor[i3]);
        if ((k < 1) || (k > static_cast<int32_T>(nbox))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, static_cast<int32_T>(nbox),
                                        &xe_emlrtBCI, (emlrtConstCTX)&sp);
        }
        T[i3] = T_nodes[k - 1];
      }
      r5.set_size(&xf_emlrtRTEI, &sp, loop_ub);
      for (i3 = 0; i3 < loop_ub; i3++) {
        r5[i3].ctr[0] = T[i3].ctr[0];
        r5[i3].ctr[1] = T[i3].ctr[1];
        r5[i3].ctr[2] = T[i3].ctr[2];
        nbox_ = T[i3].xi.size[1];
        r5[i3].xi.set_size(&xf_emlrtRTEI, &sp, 1, nbox_);
        for (k = 0; k < nbox_; k++) {
          r5[i3].xi[k] = T[i3].xi.data[k];
        }
        r5[i3].prnt = T[i3].prnt;
        nbox_ = T[i3].chld.size(1);
        r5[i3].chld.set_size(&xf_emlrtRTEI, &sp, 1, nbox_);
        for (k = 0; k < nbox_; k++) {
          r5[i3].chld[k] = T[i3].chld[k];
        }
        nbox_ = T[i3].nbor.size(1);
        r5[i3].nbor.set_size(&xf_emlrtRTEI, &sp, 1, nbox_);
        for (k = 0; k < nbox_; k++) {
          r5[i3].nbor[k] = T[i3].nbor[k];
        }
        nbox_ = T[i3].ilist.size(1);
        r5[i3].ilist.set_size(&xf_emlrtRTEI, &sp, 1, nbox_);
        for (k = 0; k < nbox_; k++) {
          r5[i3].ilist[k] = T[i3].ilist[k];
        }
        nbox_ = T[i3].snbor.size(1);
        r5[i3].snbor.set_size(&xf_emlrtRTEI, &sp, 1, nbox_);
        for (k = 0; k < nbox_; k++) {
          r5[i3].snbor[k] = T[i3].snbor[k];
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
        }
      }
      st.site = &id_emlrtRSI;
      coder::internal::horzcatStructList(st, r5, nbor_indices);
      if (nbor_indices.size(1) != 0) {
        //  Ensure parent_nbor_chld is a row vector
        st.site = &hd_emlrtRSI;
        idx = nbor_indices.size(1);
        partialTrueCount = 1;
        if (nbor_indices.size(1) > 1) {
          partialTrueCount = nbor_indices.size(1);
        }
        if (nbor_indices.size(1) >
            muIntScalarMax_sint32(idx, partialTrueCount)) {
          emlrtErrorWithMessageIdR2018a(
              &st, &t_emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
              "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }
        idx_size[0] = (*(int32_T(*)[2])nbor_indices.size())[0];
        idx_size[1] = (*(int32_T(*)[2])nbor_indices.size())[1];
        st.site = &gd_emlrtRSI;
        coder::internal::indexShapeCheck(st, T_nodes.size(0), idx_size);
        T.set_size(&yf_emlrtRTEI, &sp, nbor_indices.size(1));
        for (i3 = 0; i3 < idx; i3++) {
          k = static_cast<int32_T>(nbor_indices[i3]);
          if ((k < 1) || (k > static_cast<int32_T>(nbox))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, static_cast<int32_T>(nbox),
                                          &af_emlrtBCI, (emlrtConstCTX)&sp);
          }
          T[i3] = T_nodes[k - 1];
        }
        r5.set_size(&xf_emlrtRTEI, &sp, nbor_indices.size(1));
        for (i3 = 0; i3 < idx; i3++) {
          r5[i3].ctr[0] = T[i3].ctr[0];
          r5[i3].ctr[1] = T[i3].ctr[1];
          r5[i3].ctr[2] = T[i3].ctr[2];
          nbox_ = T[i3].xi.size[1];
          r5[i3].xi.set_size(&xf_emlrtRTEI, &sp, 1, nbox_);
          for (k = 0; k < nbox_; k++) {
            r5[i3].xi[k] = T[i3].xi.data[k];
          }
          r5[i3].prnt = T[i3].prnt;
          nbox_ = T[i3].chld.size(1);
          r5[i3].chld.set_size(&xf_emlrtRTEI, &sp, 1, nbox_);
          for (k = 0; k < nbox_; k++) {
            r5[i3].chld[k] = T[i3].chld[k];
          }
          nbox_ = T[i3].nbor.size(1);
          r5[i3].nbor.set_size(&xf_emlrtRTEI, &sp, 1, nbox_);
          for (k = 0; k < nbox_; k++) {
            r5[i3].nbor[k] = T[i3].nbor[k];
          }
          nbox_ = T[i3].ilist.size(1);
          r5[i3].ilist.set_size(&xf_emlrtRTEI, &sp, 1, nbox_);
          for (k = 0; k < nbox_; k++) {
            r5[i3].ilist[k] = T[i3].ilist[k];
          }
          nbox_ = T[i3].snbor.size(1);
          r5[i3].snbor.set_size(&xf_emlrtRTEI, &sp, 1, nbox_);
          for (k = 0; k < nbox_; k++) {
            r5[i3].snbor[k] = T[i3].snbor[k];
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
          }
        }
        st.site = &gd_emlrtRSI;
        coder::internal::b_horzcatStructList(st, r5, r4);
        st.site = &gd_emlrtRSI;
        idx = r4.size(1);
        b_st.site = &se_emlrtRSI;
        nbox_ = static_cast<int32_T>(static_cast<uint32_T>(r4.size(1)) / 3U);
        if (nbox_ > r4.size(1)) {
          emlrtErrorWithMessageIdR2018a(&b_st, &v_emlrtRTEI,
                                        "Coder:builtins:AssertionFailed",
                                        "Coder:builtins:AssertionFailed", 0);
        }
        partialTrueCount = 1;
        if (r4.size(1) > 1) {
          partialTrueCount = r4.size(1);
        }
        idx = muIntScalarMax_sint32(idx, partialTrueCount);
        if (idx < 3) {
          emlrtErrorWithMessageIdR2018a(
              &st, &t_emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
              "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }
        if (nbox_ > idx) {
          emlrtErrorWithMessageIdR2018a(
              &st, &t_emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
              "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }
        if (3 * nbox_ != r4.size(1)) {
          emlrtErrorWithMessageIdR2018a(
              &st, &u_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
              "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
        }
        c_dist.set_size(&ag_emlrtRTEI, &sp, nbox_, 3);
        for (i3 = 0; i3 < 3; i3++) {
          for (k = 0; k < nbox_; k++) {
            c_dist[k + c_dist.size(0) * i3] = r4[i3 + 3 * k];
          }
        }
        minval[0] = T_nodes[static_cast<int32_T>(mlvl) - 1].ctr[0];
        minval[1] = T_nodes[static_cast<int32_T>(mlvl) - 1].ctr[1];
        minval[2] = T_nodes[static_cast<int32_T>(mlvl) - 1].ctr[2];
        st.site = &fd_emlrtRSI;
        coder::bsxfun(st, minval, c_dist, r6);
        st.site = &fd_emlrtRSI;
        coder::b_abs(st, r6, c_dist);
        loop_ub = c_dist.size(0) * 3;
        c_dist.set_size(&bg_emlrtRTEI, &sp, c_dist.size(0), 3);
        idx = (loop_ub / 2) << 1;
        nbox_ = idx - 2;
        for (i3 = 0; i3 <= nbox_; i3 += 2) {
          r = _mm_loadu_pd(&c_dist[i3]);
          _mm_storeu_pd(&c_dist[i3], _mm_div_pd(r, _mm_set1_pd(l)));
        }
        for (i3 = idx; i3 < loop_ub; i3++) {
          c_dist[i3] = c_dist[i3] / l;
        }
        st.site = &fd_emlrtRSI;
        coder::b_round(st, c_dist);
        idx = c_dist.size(0) - 1;
        loop_ub = c_dist.size(0);
        r7.set_size(&cg_emlrtRTEI, &sp, c_dist.size(0));
        if (c_dist.size(0) >= 1) {
          for (b_loop_ub = 0; b_loop_ub <= idx; b_loop_ub++) {
            r7[b_loop_ub] = c_dist[b_loop_ub];
          }
          for (nbox_ = 0; nbox_ < 2; nbox_++) {
            for (b_loop_ub = 0; b_loop_ub <= idx; b_loop_ub++) {
              b_prnt = c_dist[b_loop_ub + c_dist.size(0) * (nbox_ + 1)];
              if (muDoubleScalarIsNaN(b_prnt)) {
                p = false;
              } else if (muDoubleScalarIsNaN(r7[b_loop_ub])) {
                p = true;
              } else {
                p = (r7[b_loop_ub] < b_prnt);
              }
              if (p) {
                r7[b_loop_ub] = b_prnt;
              }
            }
          }
        }
        trueCount = 0;
        for (b_loop_ub = 0; b_loop_ub <= idx; b_loop_ub++) {
          if (r7[b_loop_ub] <= 1.0) {
            trueCount++;
          }
        }
        r8.set_size(&af_emlrtRTEI, &sp, trueCount);
        partialTrueCount = 0;
        for (b_loop_ub = 0; b_loop_ub <= idx; b_loop_ub++) {
          if (r7[b_loop_ub] <= 1.0) {
            r8[partialTrueCount] = b_loop_ub;
            partialTrueCount++;
          }
        }
        nbox_ = r8.size(0);
        for (i3 = 0; i3 < nbox_; i3++) {
          if (r8[i3] > nbor_indices.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(r8[i3], 0, nbor_indices.size(1) - 1,
                                          &bf_emlrtBCI, (emlrtConstCTX)&sp);
          }
        }
        if (r8.size(0) != 0) {
          b_loop_ub = r8.size(0) + nbor.size(1);
          r4.set_size(&dg_emlrtRTEI, &sp, 1, b_loop_ub);
          idx = nbor.size(1);
          for (i3 = 0; i3 < idx; i3++) {
            r4[i3] = nbor[i3];
          }
          for (i3 = 0; i3 < nbox_; i3++) {
            r4[i3 + nbor.size(1)] = nbor_indices[r8[i3]];
          }
          st.site = &ed_emlrtRSI;
          partialTrueCount = 1;
          if (r4.size(1) > 1) {
            partialTrueCount = r4.size(1);
          }
          if (r4.size(1) > muIntScalarMax_sint32(b_loop_ub, partialTrueCount)) {
            emlrtErrorWithMessageIdR2018a(
                &st, &t_emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
                "Coder:toolbox:reshape_emptyReshapeLimit", 0);
          }
          T_nodes[static_cast<int32_T>(mlvl) - 1].nbor.set_size(
              &eg_emlrtRTEI, &sp, 1,
              T_nodes[static_cast<int32_T>(mlvl) - 1].nbor.size(1));
          T_nodes[static_cast<int32_T>(mlvl) - 1].nbor.set_size(
              &eg_emlrtRTEI, &sp,
              T_nodes[static_cast<int32_T>(mlvl) - 1].nbor.size(0), b_loop_ub);
          if ((static_cast<int32_T>(mlvl) < 1) ||
              (static_cast<int32_T>(mlvl) > static_cast<int32_T>(nbox))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(mlvl), 1,
                                          static_cast<int32_T>(nbox),
                                          &le_emlrtBCI, (emlrtConstCTX)&sp);
          }
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            T_nodes[static_cast<int32_T>(mlvl) - 1].nbor[i3] = r4[i3];
          }
          //  Ensure nbor is a row vector
          for (trueCount = 0; trueCount < nbox_; trueCount++) {
            if (trueCount + 1 > nbox_) {
              emlrtDynamicBoundsCheckR2012b(trueCount + 1, 1, nbox_,
                                            &hd_emlrtBCI, (emlrtConstCTX)&sp);
            }
            r4.set_size(&fg_emlrtRTEI, &sp, 1, r4.size(1));
            i3 = static_cast<int32_T>(nbor_indices[r8[trueCount]]);
            if ((i3 < 1) || (i3 > static_cast<int32_T>(nbox))) {
              emlrtDynamicBoundsCheckR2012b(i3, 1, static_cast<int32_T>(nbox),
                                            &df_emlrtBCI, (emlrtConstCTX)&sp);
            }
            b_loop_ub =
                T_nodes[static_cast<int32_T>(nbor_indices[r8[trueCount]]) - 1]
                    .snbor.size(1);
            r4.set_size(&fg_emlrtRTEI, &sp, r4.size(0), b_loop_ub + 1);
            for (k = 0; k < b_loop_ub; k++) {
              r4[k] = T_nodes[i3 - 1].snbor[k];
            }
            r4[b_loop_ub] = mlvl;
            st.site = &dd_emlrtRSI;
            idx = r4.size(1);
            partialTrueCount = 1;
            if (r4.size(1) > 1) {
              partialTrueCount = r4.size(1);
            }
            if (r4.size(1) > muIntScalarMax_sint32(idx, partialTrueCount)) {
              emlrtErrorWithMessageIdR2018a(
                  &st, &t_emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
            }
            T_nodes[i3 - 1].snbor.set_size(&gg_emlrtRTEI, &sp, 1,
                                           T_nodes[i3 - 1].snbor.size(1));
            T_nodes[i3 - 1].snbor.set_size(
                &gg_emlrtRTEI, &sp, T_nodes[i3 - 1].snbor.size(0), r4.size(1));
            if ((i3 < 1) || (i3 > static_cast<int32_T>(nbox))) {
              emlrtDynamicBoundsCheckR2012b(i3, 1, static_cast<int32_T>(nbox),
                                            &ne_emlrtBCI, (emlrtConstCTX)&sp);
            }
            for (k = 0; k < idx; k++) {
              T_nodes[i3 - 1].snbor[k] = r4[k];
            }
            //  Ensure snbor is a row vector
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
            }
          }
        }
        //  % Add non-adjacent parent-neighbors-children to interaction list
        //       j = idx(max(dist,[],2) > 1 & max(dist,[],2) <2.5);
        //       if ~isempty(j)
        //         T.nodes(i).ilist = [T.nodes(i).ilist j];
        //       end
        //  Add non-adjacent parent-neighbors-children to interaction list
        r9.set_size(&hg_emlrtRTEI, &sp, c_dist.size(0));
        r10.set_size(&ig_emlrtRTEI, &sp, c_dist.size(0));
        for (i3 = 0; i3 < loop_ub; i3++) {
          r9[i3] = (r7[i3] > 1.0);
          r10[i3] = (r7[i3] < 2.5);
        }
        if (r9.size(0) == r10.size(0)) {
          r11.set_size(&hg_emlrtRTEI, &sp, c_dist.size(0));
          for (i3 = 0; i3 < loop_ub; i3++) {
            r11[i3] = (r9[i3] && r10[i3]);
          }
        } else {
          st.site = &pr_emlrtRSI;
          b_and(st, r11, r9, r10);
        }
        idx = r11.size(0) - 1;
        trueCount = 0;
        for (b_loop_ub = 0; b_loop_ub <= idx; b_loop_ub++) {
          if (r11[b_loop_ub]) {
            trueCount++;
          }
        }
        r12.set_size(&af_emlrtRTEI, &sp, trueCount);
        partialTrueCount = 0;
        for (b_loop_ub = 0; b_loop_ub <= idx; b_loop_ub++) {
          if (r11[b_loop_ub]) {
            r12[partialTrueCount] = b_loop_ub;
            partialTrueCount++;
          }
        }
        nbox_ = r12.size(0);
        for (i3 = 0; i3 < nbox_; i3++) {
          if (r12[i3] > nbor_indices.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(r12[i3], 0, nbor_indices.size(1) - 1,
                                          &cf_emlrtBCI, (emlrtConstCTX)&sp);
          }
        }
        if (r12.size(0) != 0) {
          loop_ub = T_nodes[static_cast<int32_T>(mlvl) - 1].ilist.size(1);
          b_loop_ub = r12.size(0) + loop_ub;
          r4.set_size(&jg_emlrtRTEI, &sp, 1, b_loop_ub);
          for (i3 = 0; i3 < loop_ub; i3++) {
            r4[i3] = T_nodes[static_cast<int32_T>(mlvl) - 1].ilist[i3];
          }
          for (i3 = 0; i3 < nbox_; i3++) {
            r4[i3 + loop_ub] = nbor_indices[r12[i3]];
          }
          st.site = &cd_emlrtRSI;
          partialTrueCount = 1;
          if (r4.size(1) > 1) {
            partialTrueCount = r4.size(1);
          }
          if (r4.size(1) > muIntScalarMax_sint32(b_loop_ub, partialTrueCount)) {
            emlrtErrorWithMessageIdR2018a(
                &st, &t_emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
                "Coder:toolbox:reshape_emptyReshapeLimit", 0);
          }
          T_nodes[static_cast<int32_T>(mlvl) - 1].ilist.set_size(
              &kg_emlrtRTEI, &sp, 1,
              T_nodes[static_cast<int32_T>(mlvl) - 1].ilist.size(1));
          T_nodes[static_cast<int32_T>(mlvl) - 1].ilist.set_size(
              &kg_emlrtRTEI, &sp,
              T_nodes[static_cast<int32_T>(mlvl) - 1].ilist.size(0), b_loop_ub);
          if ((static_cast<int32_T>(mlvl) < 1) ||
              (static_cast<int32_T>(mlvl) > static_cast<int32_T>(nbox))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(mlvl), 1,
                                          static_cast<int32_T>(nbox),
                                          &me_emlrtBCI, (emlrtConstCTX)&sp);
          }
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            T_nodes[static_cast<int32_T>(mlvl) - 1].ilist[i3] = r4[i3];
          }
          //  Ensure ilist is a row vector
        }
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  T_nlvl = b_T_nlvl;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return T_nlvl;
}

// End of code generation (shypoct.cpp)
