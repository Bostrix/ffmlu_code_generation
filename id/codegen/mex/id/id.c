/*
 * id.c
 *
 * Code generation for function 'id'
 *
 */

/* Include files */
#include "id.h"
#include "WarningState.h"
#include "abs.h"
#include "eml_mtimes_helper.h"
#include "eml_qr.h"
#include "exp.h"
#include "eye.h"
#include "id_data.h"
#include "ind2sub.h"
#include "indexShapeCheck.h"
#include "inv.h"
#include "mldivide.h"
#include "mtimes.h"
#include "nnz.h"
#include "norm.h"
#include "power.h"
#include "qr.h"
#include "qrupdate.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "sum.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    244,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo b_emlrtRSI = {
    243,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo c_emlrtRSI = {
    239,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo d_emlrtRSI = {
    238,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo e_emlrtRSI = {
    236,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo f_emlrtRSI = {
    228,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo g_emlrtRSI = {
    222,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo h_emlrtRSI = {
    215,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo i_emlrtRSI = {
    214,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo j_emlrtRSI = {
    204,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo k_emlrtRSI = {
    200,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo l_emlrtRSI = {
    197,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo m_emlrtRSI = {
    196,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo n_emlrtRSI = {
    195,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo o_emlrtRSI = {
    194,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo p_emlrtRSI = {
    188,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo q_emlrtRSI = {
    185,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo r_emlrtRSI = {
    184,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo s_emlrtRSI = {
    182,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo t_emlrtRSI = {
    176,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo u_emlrtRSI = {
    158,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo v_emlrtRSI = {
    144,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo w_emlrtRSI = {
    139,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo x_emlrtRSI = {
    136,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo y_emlrtRSI = {
    135,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo ab_emlrtRSI = {
    130,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo bb_emlrtRSI = {
    129,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo cb_emlrtRSI = {
    128,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo db_emlrtRSI = {
    124,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo eb_emlrtRSI = {
    115,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo fb_emlrtRSI = {
    106,  /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo pc_emlrtRSI = {
    17,                                                           /* lineNo */
    "qr",                                                         /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qr.m" /* pathName */
};

static emlrtRSInfo we_emlrtRSI = {
    44,       /* lineNo */
    "mpower", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/mpower.m" /* pathName
                                                                       */
};

static emlrtRSInfo xe_emlrtRSI = {
    71,                                                           /* lineNo */
    "power",                                                      /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/power.m" /* pathName */
};

static emlrtRSInfo wf_emlrtRSI = {
    17,    /* lineNo */
    "max", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/max.m" /* pathName
                                                                     */
};

static emlrtRSInfo xf_emlrtRSI = {
    38,         /* lineNo */
    "minOrMax", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/minOrMax.m" /* pathName
                                                                            */
};

static emlrtRSInfo yf_emlrtRSI = {
    77,        /* lineNo */
    "maximum", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/minOrMax.m" /* pathName
                                                                            */
};

static emlrtRSInfo ag_emlrtRSI = {
    19,        /* lineNo */
    "ind2sub", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/ind2sub.m" /* pathName
                                                                       */
};

static emlrtRSInfo mg_emlrtRSI =
    {
        94,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/"
        "eml_mtimes_helper.m" /* pathName */
};

static emlrtRSInfo wg_emlrtRSI = {
    17,    /* lineNo */
    "min", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/min.m" /* pathName
                                                                     */
};

static emlrtRSInfo xg_emlrtRSI = {
    40,         /* lineNo */
    "minOrMax", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/minOrMax.m" /* pathName
                                                                            */
};

static emlrtRSInfo yg_emlrtRSI = {
    90,        /* lineNo */
    "minimum", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/minOrMax.m" /* pathName
                                                                            */
};

static emlrtRSInfo ah_emlrtRSI = {
    41,    /* lineNo */
    "cat", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/cat.m" /* pathName
                                                                       */
};

static emlrtRSInfo bh_emlrtRSI = {
    113,        /* lineNo */
    "cat_impl", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/cat.m" /* pathName
                                                                       */
};

static emlrtRSInfo ch_emlrtRSI = {
    53,        /* lineNo */
    "warning", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/lang/warning.m" /* pathName
                                                                      */
};

static emlrtMCInfo emlrtMCI = {
    52,   /* lineNo */
    3,    /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtMCInfo b_emlrtMCI = {
    54,   /* lineNo */
    3,    /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtMCInfo c_emlrtMCI = {
    56,   /* lineNo */
    3,    /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtRTEInfo emlrtRTEI =
    {
        134,             /* lineNo */
        27,              /* colNo */
        "unaryMinOrMax", /* fName */
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
        "unaryMinOrMax.m" /* pName */
};

static emlrtRTEInfo c_emlrtRTEI = {
    288,                   /* lineNo */
    27,                    /* colNo */
    "check_non_axis_size", /* fName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/cat.m" /* pName
                                                                       */
};

static emlrtBCInfo emlrtBCI = {
    1,    /* iFirst */
    5,    /* iLast */
    122,  /* lineNo */
    11,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    124,  /* lineNo */
    22,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    124,  /* lineNo */
    24,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    124,  /* lineNo */
    33,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    124,  /* lineNo */
    35,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    1,    /* iFirst */
    5,    /* iLast */
    124,  /* lineNo */
    37,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    124,  /* lineNo */
    5,    /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    124,  /* lineNo */
    7,    /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    1,    /* iFirst */
    5,    /* iLast */
    124,  /* lineNo */
    9,    /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo emlrtECI = {
    -1,   /* nDims */
    124,  /* lineNo */
    3,    /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    129,  /* lineNo */
    16,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    130,  /* lineNo */
    20,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    130,  /* lineNo */
    22,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    135,  /* lineNo */
    15,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    135,  /* lineNo */
    17,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo b_emlrtECI = {
    1,    /* nDims */
    135,  /* lineNo */
    13,   /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtECInfo c_emlrtECI = {
    2,    /* nDims */
    135,  /* lineNo */
    13,   /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    144,  /* lineNo */
    44,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    144,  /* lineNo */
    46,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    144,  /* lineNo */
    55,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    144,  /* lineNo */
    57,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    144,  /* lineNo */
    66,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo d_emlrtECI = {
    1,    /* nDims */
    144,  /* lineNo */
    53,   /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtECInfo e_emlrtECI = {
    2,    /* nDims */
    145,  /* lineNo */
    36,   /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    144,  /* lineNo */
    14,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    144,  /* lineNo */
    16,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo f_emlrtECI = {
    -1,   /* nDims */
    144,  /* lineNo */
    12,   /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtECInfo g_emlrtECI = {
    -1,   /* nDims */
    146,  /* lineNo */
    9,    /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtECInfo h_emlrtECI = {
    -1,   /* nDims */
    153,  /* lineNo */
    9,    /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    158,  /* lineNo */
    22,   /* colNo */
    "r2", /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    158,  /* lineNo */
    24,   /* colNo */
    "r2", /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    158,  /* lineNo */
    37,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    158,  /* lineNo */
    39,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = {
    1,    /* iFirst */
    5,    /* iLast */
    158,  /* lineNo */
    45,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    158,  /* lineNo */
    54,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = {
    1,    /* iFirst */
    5,    /* iLast */
    158,  /* lineNo */
    58,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo i_emlrtECI = {
    1,    /* nDims */
    158,  /* lineNo */
    19,   /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtBCInfo db_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    158,  /* lineNo */
    10,   /* colNo */
    "r2", /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    158,  /* lineNo */
    12,   /* colNo */
    "r2", /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo j_emlrtECI = {
    -1,   /* nDims */
    158,  /* lineNo */
    7,    /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtECInfo k_emlrtECI = {
    -1,   /* nDims */
    176,  /* lineNo */
    9,    /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtBCInfo fb_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    177,  /* lineNo */
    13,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    180,  /* lineNo */
    15,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    180,  /* lineNo */
    19,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    182,  /* lineNo */
    31,   /* colNo */
    "c2", /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    182,  /* lineNo */
    59,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    182,  /* lineNo */
    11,   /* colNo */
    "v",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    184,  /* lineNo */
    32,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    184,  /* lineNo */
    36,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = {
    1,    /* iFirst */
    5,    /* iLast */
    184,  /* lineNo */
    40,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    184,  /* lineNo */
    61,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    184,  /* lineNo */
    65,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = {
    1,    /* iFirst */
    5,    /* iLast */
    184,  /* lineNo */
    69,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo l_emlrtECI = {
    1,    /* nDims */
    184,  /* lineNo */
    30,   /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtECInfo m_emlrtECI = {
    2,    /* nDims */
    184,  /* lineNo */
    30,   /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtBCInfo rb_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    184,  /* lineNo */
    11,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    184,  /* lineNo */
    15,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = {
    1,    /* iFirst */
    5,    /* iLast */
    184,  /* lineNo */
    19,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo n_emlrtECI = {
    -1,   /* nDims */
    184,  /* lineNo */
    9,    /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtBCInfo ub_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    185,  /* lineNo */
    11,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    185,  /* lineNo */
    15,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    188,  /* lineNo */
    24,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    188,  /* lineNo */
    26,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    188,  /* lineNo */
    37,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    188,  /* lineNo */
    13,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo o_emlrtECI = {
    -1,   /* nDims */
    188,  /* lineNo */
    9,    /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtBCInfo bc_emlrtBCI = {
    1,    /* iFirst */
    5,    /* iLast */
    189,  /* lineNo */
    35,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    189,  /* lineNo */
    11,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo p_emlrtECI = {
    -1,   /* nDims */
    189,  /* lineNo */
    9,    /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtBCInfo dc_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    190,  /* lineNo */
    17,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = {
    1,    /* iFirst */
    5,    /* iLast */
    191,  /* lineNo */
    17,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    194,  /* lineNo */
    25,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo q_emlrtECI = {
    2,    /* nDims */
    194,  /* lineNo */
    14,   /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtBCInfo gc_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    195,  /* lineNo */
    47,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo r_emlrtECI = {
    -1,   /* nDims */
    195,  /* lineNo */
    9,    /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtECInfo s_emlrtECI = {
    2,    /* nDims */
    196,  /* lineNo */
    14,   /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtBCInfo hc_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    197,  /* lineNo */
    23,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    197,  /* lineNo */
    12,   /* colNo */
    "c2", /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    200,  /* lineNo */
    17,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    200,  /* lineNo */
    28,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    204,  /* lineNo */
    17,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = {
    1,    /* iFirst */
    5,    /* iLast */
    204,  /* lineNo */
    23,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    204,  /* lineNo */
    32,   /* colNo */
    "r",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    206,  /* lineNo */
    13,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo t_emlrtECI = {
    -1,   /* nDims */
    206,  /* lineNo */
    9,    /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtBCInfo pc_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    207,  /* lineNo */
    32,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = {
    1,    /* iFirst */
    5,    /* iLast */
    207,  /* lineNo */
    36,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    207,  /* lineNo */
    51,   /* colNo */
    "r",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo u_emlrtECI = {
    2,    /* nDims */
    207,  /* lineNo */
    55,   /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtECInfo v_emlrtECI = {
    1,    /* nDims */
    207,  /* lineNo */
    28,   /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtECInfo w_emlrtECI = {
    2,    /* nDims */
    207,  /* lineNo */
    28,   /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtBCInfo sc_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    207,  /* lineNo */
    13,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = {
    1,    /* iFirst */
    5,    /* iLast */
    207,  /* lineNo */
    17,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo x_emlrtECI = {
    -1,   /* nDims */
    207,  /* lineNo */
    9,    /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtBCInfo uc_emlrtBCI = {
    1,    /* iFirst */
    5,    /* iLast */
    208,  /* lineNo */
    28,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    208,  /* lineNo */
    11,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo y_emlrtECI = {
    -1,   /* nDims */
    208,  /* lineNo */
    9,    /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtECInfo ab_emlrtECI = {
    -1,   /* nDims */
    213,  /* lineNo */
    7,    /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtBCInfo wc_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    214,  /* lineNo */
    22,   /* colNo */
    "r2", /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    214,  /* lineNo */
    24,   /* colNo */
    "r2", /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    214,  /* lineNo */
    37,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    214,  /* lineNo */
    39,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = {
    1,    /* iFirst */
    5,    /* iLast */
    214,  /* lineNo */
    45,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    214,  /* lineNo */
    54,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo bb_emlrtECI = {
    1,    /* nDims */
    214,  /* lineNo */
    19,   /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtBCInfo dd_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    214,  /* lineNo */
    10,   /* colNo */
    "r2", /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    214,  /* lineNo */
    12,   /* colNo */
    "r2", /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo cb_emlrtECI = {
    -1,   /* nDims */
    214,  /* lineNo */
    7,    /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtBCInfo fd_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    219,  /* lineNo */
    26,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    219,  /* lineNo */
    28,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo db_emlrtECI = {
    1,    /* nDims */
    219,  /* lineNo */
    24,   /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtBCInfo hd_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    219,  /* lineNo */
    11,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo eb_emlrtECI = {
    -1,   /* nDims */
    219,  /* lineNo */
    7,    /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtBCInfo id_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    228,  /* lineNo */
    46,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    228,  /* lineNo */
    57,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    228,  /* lineNo */
    66,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo fb_emlrtECI = {
    2,    /* nDims */
    229,  /* lineNo */
    36,   /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtBCInfo ld_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    228,  /* lineNo */
    16,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo gb_emlrtECI = {
    -1,   /* nDims */
    228,  /* lineNo */
    12,   /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtECInfo hb_emlrtECI = {
    -1,   /* nDims */
    230,  /* lineNo */
    9,    /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtBCInfo md_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    236,  /* lineNo */
    15,   /* colNo */
    "r2", /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    236,  /* lineNo */
    17,   /* colNo */
    "r2", /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    236,  /* lineNo */
    32,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = {
    1,    /* iFirst */
    5,    /* iLast */
    236,  /* lineNo */
    38,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    236,  /* lineNo */
    47,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo ib_emlrtECI = {
    1,    /* nDims */
    236,  /* lineNo */
    12,   /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtBCInfo rd_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    238,  /* lineNo */
    15,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    238,  /* lineNo */
    26,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    239,  /* lineNo */
    31,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    239,  /* lineNo */
    48,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo jb_emlrtECI = {
    1,    /* nDims */
    239,  /* lineNo */
    27,   /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtBCInfo vd_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    239,  /* lineNo */
    11,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo kb_emlrtECI = {
    -1,   /* nDims */
    239,  /* lineNo */
    7,    /* colNo */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pName */
};

static emlrtBCInfo wd_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    240,  /* lineNo */
    15,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = {
    1,    /* iFirst */
    5,    /* iLast */
    250,  /* lineNo */
    23,   /* colNo */
    "p",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo yd_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    251,  /* lineNo */
    9,    /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo ae_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    251,  /* lineNo */
    11,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo be_emlrtBCI = {
    1,    /* iFirst */
    5,    /* iLast */
    251,  /* lineNo */
    13,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo ce_emlrtBCI = {
    1,    /* iFirst */
    5,    /* iLast */
    143,  /* lineNo */
    22,   /* colNo */
    "p",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo de_emlrtBCI = {
    1,    /* iFirst */
    5,    /* iLast */
    152,  /* lineNo */
    11,   /* colNo */
    "p",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    3 /* checkKind */
};

static emlrtBCInfo ee_emlrtBCI = {
    1,    /* iFirst */
    5,    /* iLast */
    152,  /* lineNo */
    24,   /* colNo */
    "p",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo fe_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    154,  /* lineNo */
    24,   /* colNo */
    "c2", /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo ge_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    154,  /* lineNo */
    12,   /* colNo */
    "c2", /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo he_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    158,  /* lineNo */
    63,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo ie_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    146,  /* lineNo */
    11,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo je_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    146,  /* lineNo */
    30,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo ke_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    159,  /* lineNo */
    10,   /* colNo */
    "r2", /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo le_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    147,  /* lineNo */
    24,   /* colNo */
    "r2", /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo me_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    214,  /* lineNo */
    63,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo ne_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    185,  /* lineNo */
    31,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo oe_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    215,  /* lineNo */
    10,   /* colNo */
    "r2", /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo pe_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    218,  /* lineNo */
    16,   /* colNo */
    "u",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo qe_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    219,  /* lineNo */
    63,   /* colNo */
    "u",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo re_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    189,  /* lineNo */
    26,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo se_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    230,  /* lineNo */
    11,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo te_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    236,  /* lineNo */
    56,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo ue_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    230,  /* lineNo */
    30,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo ve_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    199,  /* lineNo */
    34,   /* colNo */
    "r",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo we_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    199,  /* lineNo */
    25,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo xe_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    231,  /* lineNo */
    24,   /* colNo */
    "r2", /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo ye_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    201,  /* lineNo */
    11,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo af_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    205,  /* lineNo */
    20,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo bf_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    205,  /* lineNo */
    27,   /* colNo */
    "r",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo cf_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    205,  /* lineNo */
    11,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo df_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    206,  /* lineNo */
    31,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo ef_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    208,  /* lineNo */
    39,   /* colNo */
    "r",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo ff_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    195,  /* lineNo */
    59,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo gf_emlrtBCI = {
    -1,   /* iFirst */
    -1,   /* iLast */
    195,  /* lineNo */
    11,   /* colNo */
    "R",  /* aName */
    "id", /* fName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtRSInfo dh_emlrtRSI = {
    52,   /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo eh_emlrtRSI = {
    53,   /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo fh_emlrtRSI = {
    54,   /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo gh_emlrtRSI = {
    55,   /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo hh_emlrtRSI = {
    56,   /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

static emlrtRSInfo ih_emlrtRSI = {
    57,   /* lineNo */
    "id", /* fcnName */
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" /* pathName
                                                                      */
};

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[38]);

static void b_error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo *location);

static void binary_expand_op(real_T in1_data[], int32_T in1_size[2],
                             const real_T in2_data[], const int32_T in2_size[2],
                             int32_T in3, real_T in4, const real_T in5_data[],
                             const int32_T in5_size[2]);

static int32_T binary_expand_op_1(real_T in1_data[], int32_T in2,
                                  const real_T in3_data[],
                                  const int32_T *in3_size);

static void binary_expand_op_10(real_T in1_data[], int32_T in1_size[2],
                                const real_T in2_data[],
                                const int32_T in2_size[2]);

static void binary_expand_op_2(
    const emlrtStack *sp, const emlrtRSInfo in1, real_T in2_data[],
    const int32_T in2_size[2], real_T in3_data[], const int32_T in3_size[2],
    const real_T in4_data[], const int32_T in4_size[2], real_T in5, int32_T in6,
    const boolean_T in7_data[], const int32_T in7_size[2],
    const boolean_T in8_data[], const int32_T in8_size[2]);

static void binary_expand_op_3(real_T in1_data[], int32_T in1_size[2],
                               const real_T in2_data[],
                               const int32_T in2_size[2], real_T in3);

static void binary_expand_op_4(real_T in1_data[], int32_T *in1_size,
                               const real_T in2_data[], int32_T in3);

static void binary_expand_op_5(real_T in1_data[], int32_T in1_size[2],
                               const real_T in2_data[],
                               const int32_T in2_size[2], int32_T in3,
                               int32_T in4, int32_T in5,
                               const real_T in6_data[],
                               const int32_T in6_size[2]);

static void binary_expand_op_7(real_T in1_data[], int32_T in1_size[2],
                               const real_T in2_data[],
                               const int32_T in2_size[2], int32_T in3,
                               int32_T in4, int32_T in5, int32_T in6);

static void binary_expand_op_8(real_T in1_data[], int32_T *in1_size,
                               const real_T in2_data[], int32_T in3);

static void
binary_expand_op_9(const emlrtStack *sp, const emlrtRSInfo in1,
                   real_T in2_data[], const int32_T in2_size[2],
                   real_T in3_data[], const int32_T in3_size[2],
                   const real_T in4_data[], const int32_T in4_size[2],
                   int32_T in5, real_T in6, int32_T in7, int32_T in8,
                   const boolean_T in9_data[], const int32_T in9_size[2],
                   const boolean_T in10_data[], const int32_T in10_size[2]);

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[19]);

static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[46]);

static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[23]);

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const char_T u[24]);

static const mxArray *f_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[54]);

static void givens_id(real_T x, real_T y, real_T g[4]);

static void minus(real_T in1_data[], int32_T in1_size[2],
                  const real_T in2_data[], const int32_T in2_size[2]);

static void plus(real_T in1_data[], int32_T in1_size[2],
                 const real_T in2_data[], const int32_T in2_size[2]);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[38])
{
  static const int32_T b_iv[2] = {1, 38};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 38, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void b_error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, NULL, 2, &pArrays[0], "error",
                        true, location);
}

static void binary_expand_op(real_T in1_data[], int32_T in1_size[2],
                             const real_T in2_data[], const int32_T in2_size[2],
                             int32_T in3, real_T in4, const real_T in5_data[],
                             const int32_T in5_size[2])
{
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  if (in5_size[0] == 1) {
    loop_ub = in3;
  } else {
    loop_ub = in5_size[0];
  }
  in1_size[0] = loop_ub;
  if (in5_size[1] == 1) {
    b_loop_ub = 4 - (int32_T)in4;
  } else {
    b_loop_ub = in5_size[1];
  }
  in1_size[1] = b_loop_ub;
  stride_0_0 = (in3 != 1);
  stride_0_1 = (4 - (int32_T)in4 != 1);
  stride_1_0 = (in5_size[0] != 1);
  stride_1_1 = (in5_size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1 + in1_size[0] * i] =
          in2_data[i1 * stride_0_0 +
                   in2_size[0] * (((int32_T)in4 + aux_0_1) + 1)] +
          in5_data[i1 * stride_1_0 + in5_size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

static int32_T binary_expand_op_1(real_T in1_data[], int32_T in2,
                                  const real_T in3_data[],
                                  const int32_T *in3_size)
{
  real_T b_in1_data[4];
  int32_T i;
  int32_T in1_size;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (*in3_size == 1) {
    in1_size = in2;
  } else {
    in1_size = *in3_size;
  }
  stride_0_0 = (in2 != 1);
  stride_1_0 = (*in3_size != 1);
  for (i = 0; i < in1_size; i++) {
    b_in1_data[i] = in1_data[i * stride_0_0] - in3_data[i * stride_1_0];
  }
  if (in1_size - 1 >= 0) {
    memcpy(&in1_data[0], &b_in1_data[0], (uint32_T)in1_size * sizeof(real_T));
  }
  return in1_size;
}

static void binary_expand_op_10(real_T in1_data[], int32_T in1_size[2],
                                const real_T in2_data[],
                                const int32_T in2_size[2])
{
  real_T b_in1_data[20];
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  if (in2_size[0] == 1) {
    loop_ub = in1_size[0];
  } else {
    loop_ub = in2_size[0];
  }
  if (in2_size[1] == 1) {
    b_loop_ub = in1_size[1];
  } else {
    b_loop_ub = in2_size[1];
  }
  stride_0_0 = (in1_size[0] != 1);
  stride_0_1 = (in1_size[1] != 1);
  stride_1_0 = (in2_size[0] != 1);
  stride_1_1 = (in2_size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_in1_data[i1 + loop_ub * i] =
          in1_data[i1 * stride_0_0 + in1_size[0] * aux_0_1] +
          in2_data[i1 * stride_1_0 + in2_size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  in1_size[0] = loop_ub;
  in1_size[1] = b_loop_ub;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1 + in1_size[0] * i] = b_in1_data[i1 + loop_ub * i];
    }
  }
}

static void binary_expand_op_2(
    const emlrtStack *sp, const emlrtRSInfo in1, real_T in2_data[],
    const int32_T in2_size[2], real_T in3_data[], const int32_T in3_size[2],
    const real_T in4_data[], const int32_T in4_size[2], real_T in5, int32_T in6,
    const boolean_T in7_data[], const int32_T in7_size[2],
    const boolean_T in8_data[], const int32_T in8_size[2])
{
  emlrtStack st;
  real_T b_in4_data[4];
  real_T b_in7_data[4];
  int32_T i;
  int32_T loop_ub_tmp;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = sp;
  st.tls = sp->tls;
  loop_ub_tmp = (int32_T)in5;
  scalarLB = ((int32_T)in5 / 2) << 1;
  vectorUB = scalarLB - 2;
  for (i = 0; i <= vectorUB; i += 2) {
    __m128d r;
    __m128d r1;
    r = _mm_loadu_pd(&in4_data[i + in4_size[0] * ((int32_T)in5 - 1)]);
    r1 = _mm_loadu_pd(&in4_data[i + in4_size[0] * (in6 - 1)]);
    _mm_storeu_pd(&b_in4_data[i], _mm_sub_pd(r, r1));
  }
  for (i = scalarLB; i < loop_ub_tmp; i++) {
    b_in4_data[i] = in4_data[i + in4_size[0] * ((int32_T)in5 - 1)] -
                    in4_data[i + in4_size[0] * (in6 - 1)];
  }
  if (in8_size[1] == 1) {
    loop_ub_tmp = in7_size[1];
  } else {
    loop_ub_tmp = in8_size[1];
  }
  scalarLB = (in7_size[1] != 1);
  vectorUB = (in8_size[1] != 1);
  for (i = 0; i < loop_ub_tmp; i++) {
    b_in7_data[i] =
        (real_T)in7_data[i * scalarLB] - (real_T)in8_data[i * vectorUB];
  }
  st.site = (emlrtRSInfo *)&in1;
  qrupdate(&st, in2_data, in2_size, in3_data, in3_size, b_in4_data,
           (int32_T)in5, b_in7_data, loop_ub_tmp);
}

static void binary_expand_op_3(real_T in1_data[], int32_T in1_size[2],
                               const real_T in2_data[],
                               const int32_T in2_size[2], real_T in3)
{
  real_T b_in2_data[16];
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  if (in1_size[0] == 1) {
    loop_ub = (int32_T)in3;
  } else {
    loop_ub = in1_size[0];
  }
  if (in1_size[1] == 1) {
    b_loop_ub = 5 - (int32_T)in3;
  } else {
    b_loop_ub = in1_size[1];
  }
  stride_0_0 = ((int32_T)in3 != 1);
  stride_0_1 = (5 - (int32_T)in3 != 1);
  stride_1_0 = (in1_size[0] != 1);
  stride_1_1 = (in1_size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_in2_data[i1 + loop_ub * i] =
          in2_data[i1 * stride_0_0 + in2_size[0] * ((int32_T)in3 + aux_0_1)] -
          in1_data[i1 * stride_1_0 + in1_size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  in1_size[0] = loop_ub;
  in1_size[1] = b_loop_ub;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1 + in1_size[0] * i] = b_in2_data[i1 + loop_ub * i];
    }
  }
}

static void binary_expand_op_4(real_T in1_data[], int32_T *in1_size,
                               const real_T in2_data[], int32_T in3)
{
  real_T b_in2_data[3];
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (*in1_size == 1) {
    loop_ub = in3;
  } else {
    loop_ub = *in1_size;
  }
  stride_0_0 = (in3 != 1);
  stride_1_0 = (*in1_size != 1);
  for (i = 0; i < loop_ub; i++) {
    b_in2_data[i] = in2_data[i * stride_0_0] + in1_data[i * stride_1_0];
  }
  *in1_size = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&in1_data[0], &b_in2_data[0], (uint32_T)loop_ub * sizeof(real_T));
  }
}

static void binary_expand_op_5(real_T in1_data[], int32_T in1_size[2],
                               const real_T in2_data[],
                               const int32_T in2_size[2], int32_T in3,
                               int32_T in4, int32_T in5,
                               const real_T in6_data[],
                               const int32_T in6_size[2])
{
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  if (in6_size[0] == 1) {
    loop_ub = in3;
  } else {
    loop_ub = in6_size[0];
  }
  in1_size[0] = loop_ub;
  i = (in5 - in4) + 1;
  if (in6_size[1] == 1) {
    b_loop_ub = i;
  } else {
    b_loop_ub = in6_size[1];
  }
  in1_size[1] = b_loop_ub;
  stride_0_0 = (in3 != 1);
  stride_0_1 = (i != 1);
  stride_1_0 = (in6_size[0] != 1);
  stride_1_1 = (in6_size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1 + in1_size[0] * i] =
          in2_data[i1 * stride_0_0 + in2_size[0] * (in4 + aux_0_1)] +
          in6_data[i1 * stride_1_0 + in6_size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

static void binary_expand_op_7(real_T in1_data[], int32_T in1_size[2],
                               const real_T in2_data[],
                               const int32_T in2_size[2], int32_T in3,
                               int32_T in4, int32_T in5, int32_T in6)
{
  real_T b_in2_data[25];
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  i = in4 - in3;
  if (in1_size[0] == 1) {
    loop_ub = i;
  } else {
    loop_ub = in1_size[0];
  }
  i1 = (in6 - in5) + 1;
  if (in1_size[1] == 1) {
    b_loop_ub = i1;
  } else {
    b_loop_ub = in1_size[1];
  }
  stride_0_0 = (i != 1);
  stride_0_1 = (i1 != 1);
  stride_1_0 = (in1_size[0] != 1);
  stride_1_1 = (in1_size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_in2_data[i1 + loop_ub * i] =
          in2_data[(in3 + i1 * stride_0_0) + in2_size[0] * (in5 + aux_0_1)] -
          in1_data[i1 * stride_1_0 + in1_size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  in1_size[0] = loop_ub;
  in1_size[1] = b_loop_ub;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1 + in1_size[0] * i] = b_in2_data[i1 + loop_ub * i];
    }
  }
}

static void binary_expand_op_8(real_T in1_data[], int32_T *in1_size,
                               const real_T in2_data[], int32_T in3)
{
  real_T b_in2_data[3];
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (*in1_size == 1) {
    loop_ub = in3;
  } else {
    loop_ub = *in1_size;
  }
  stride_0_0 = (in3 != 1);
  stride_1_0 = (*in1_size != 1);
  for (i = 0; i < loop_ub; i++) {
    b_in2_data[i] = in2_data[i * stride_0_0] - in1_data[i * stride_1_0];
  }
  *in1_size = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&in1_data[0], &b_in2_data[0], (uint32_T)loop_ub * sizeof(real_T));
  }
}

static void
binary_expand_op_9(const emlrtStack *sp, const emlrtRSInfo in1,
                   real_T in2_data[], const int32_T in2_size[2],
                   real_T in3_data[], const int32_T in3_size[2],
                   const real_T in4_data[], const int32_T in4_size[2],
                   int32_T in5, real_T in6, int32_T in7, int32_T in8,
                   const boolean_T in9_data[], const int32_T in9_size[2],
                   const boolean_T in10_data[], const int32_T in10_size[2])
{
  emlrtStack st;
  real_T b_in4_data[4];
  real_T b_in9_data[4];
  int32_T b_loop_ub;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  if (in7 == 1) {
    loop_ub = in5;
  } else {
    loop_ub = in7;
  }
  stride_0_0 = (in5 != 1);
  stride_1_0 = (in7 != 1);
  for (i = 0; i < loop_ub; i++) {
    b_in4_data[i] =
        in4_data[i * stride_0_0 + in4_size[0] * ((int32_T)in6 - 1)] -
        in4_data[i * stride_1_0 + in4_size[0] * (in8 - 1)];
  }
  if (in10_size[1] == 1) {
    b_loop_ub = in9_size[1];
  } else {
    b_loop_ub = in10_size[1];
  }
  stride_0_0 = (in9_size[1] != 1);
  stride_1_0 = (in10_size[1] != 1);
  for (i = 0; i < b_loop_ub; i++) {
    b_in9_data[i] =
        (real_T)in9_data[i * stride_0_0] - (real_T)in10_data[i * stride_1_0];
  }
  st.site = (emlrtRSInfo *)&in1;
  qrupdate(&st, in2_data, in2_size, in3_data, in3_size, b_in4_data, loop_ub,
           b_in9_data, b_loop_ub);
}

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[19])
{
  static const int32_T b_iv[2] = {1, 19};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 19, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[46])
{
  static const int32_T b_iv[2] = {1, 46};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 46, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[23])
{
  static const int32_T b_iv[2] = {1, 23};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 23, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const char_T u[24])
{
  static const int32_T b_iv[2] = {1, 24};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 24, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *f_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[54])
{
  static const int32_T b_iv[2] = {1, 54};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 54, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void givens_id(real_T x, real_T y, real_T g[4])
{
  real_T absx_tmp;
  real_T scale;
  real_T t;
  /* GIVENS Givens rotation matrix. */
  /*    G = GIVENS(x,y) returns the complex Givens rotation matrix */
  /*  */
  /*        | c       s |                  | x |     | r | */
  /*    G = |           |   such that  G * |   |  =  |   | */
  /*        |-conj(s) c |                  | y |     | 0 | */
  /*  */
  /*    where c is real, s is complex, and c^2 + |s|^2 = 1.  */
  /*    Copyright 1986-2002 The MathWorks, Inc.  */
  absx_tmp = muDoubleScalarAbs(x);
  if (absx_tmp == 0.0) {
    t = 0.0;
    scale = 1.0;
  } else {
    real_T absxk;
    real_T nrm;
    scale = 3.3121686421112381E-170;
    if (absx_tmp > 3.3121686421112381E-170) {
      nrm = 1.0;
      scale = absx_tmp;
    } else {
      t = absx_tmp / 3.3121686421112381E-170;
      nrm = t * t;
    }
    absxk = muDoubleScalarAbs(y);
    if (absxk > scale) {
      t = scale / absxk;
      nrm = nrm * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      nrm += t * t;
    }
    nrm = scale * muDoubleScalarSqrt(nrm);
    t = absx_tmp / nrm;
    scale = x / absx_tmp * (y / nrm);
  }
  g[0] = t;
  g[2] = scale;
  g[1] = -scale;
  g[3] = t;
}

static void minus(real_T in1_data[], int32_T in1_size[2],
                  const real_T in2_data[], const int32_T in2_size[2])
{
  real_T b_in1_data[5];
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  if (in2_size[1] == 1) {
    loop_ub = in1_size[1];
  } else {
    loop_ub = in2_size[1];
  }
  stride_0_1 = (in1_size[1] != 1);
  stride_1_1 = (in2_size[1] != 1);
  for (i = 0; i < loop_ub; i++) {
    b_in1_data[i] = in1_data[i * stride_0_1] - in2_data[i * stride_1_1];
  }
  in1_size[0] = 1;
  in1_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&in1_data[0], &b_in1_data[0], (uint32_T)loop_ub * sizeof(real_T));
  }
}

static void plus(real_T in1_data[], int32_T in1_size[2],
                 const real_T in2_data[], const int32_T in2_size[2])
{
  real_T b_in1_data[5];
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  if (in2_size[1] == 1) {
    loop_ub = in1_size[1];
  } else {
    loop_ub = in2_size[1];
  }
  stride_0_1 = (in1_size[1] != 1);
  stride_1_1 = (in2_size[1] != 1);
  for (i = 0; i < loop_ub; i++) {
    b_in1_data[i] = in1_data[i * stride_0_1] + in2_data[i * stride_1_1];
  }
  in1_size[0] = 1;
  in1_size[1] = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&in1_data[0], &b_in1_data[0], (uint32_T)loop_ub * sizeof(real_T));
  }
}

void id(const emlrtStack *sp, const real_T A[8510], real_T rank_or_tol,
        real_T Tmax, real_T rrqr_iter, real_T sk_data[], int32_T sk_size[2],
        real_T rd_data[], int32_T rd_size[2], real_T T_data[],
        int32_T T_size[2], real_T *niter)
{
  static const char_T cv5[54] = {
      'M', 'a', 'x', 'i', 'm', 'u', 'm', ' ', 'n', 'u', 'm', 'b', 'e', 'r',
      ' ', 'o', 'f', ' ', 'R', 'R', 'Q', 'R', ' ', 'i', 't', 'e', 'r', 'a',
      't', 'i', 'o', 'n', 's', ' ', 'm', 'u', 's', 't', ' ', 'b', 'e', ' ',
      'n', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e', '.'};
  static const char_T cv3[46] = {
      'I', 'n', 't', 'e', 'r', 'p', 'o', 'l', 'a', 't', 'i', 'o',
      'n', ' ', 'm', 'a', 't', 'r', 'i', 'x', ' ', 'e', 'n', 't',
      'r', 'y', ' ', 'b', 'o', 'u', 'n', 'd', ' ', 'm', 'u', 's',
      't', ' ', 'b', 'e', ' ', '>', '=', ' ', '1', '.'};
  static const char_T cv1[38] = {
      'R', 'a', 'n', 'k', ' ', 'o', 'r', ' ', 't', 'o', 'l', 'e', 'r',
      'a', 'n', 'c', 'e', ' ', 'm', 'u', 's', 't', ' ', 'b', 'e', ' ',
      'n', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e', '.'};
  static const char_T b_cv[24] = {'F', 'L', 'A', 'M', ':', 'i', 'd', ':',
                                  'i', 'n', 'v', 'a', 'l', 'i', 'd', 'R',
                                  'a', 'n', 'k', 'O', 'r', 'T', 'o', 'l'};
  static const char_T cv4[23] = {'F', 'L', 'A', 'M', ':', 'i', 'd', ':',
                                 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'R',
                                 'R', 'Q', 'R', 'I', 't', 'e', 'r'};
  static const char_T cv2[19] = {'F', 'L', 'A', 'M', ':', 'i', 'd',
                                 ':', 'i', 'n', 'v', 'a', 'l', 'i',
                                 'd', 'T', 'm', 'a', 'x'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  creal_T dc;
  real_T a__1[8510];
  real_T Q[25];
  real_T R[25];
  real_T R_data[25];
  real_T b_R[25];
  real_T b_R_data[25];
  real_T tmp_data[20];
  real_T varargin_1_data[20];
  real_T b_tmp_data[16];
  real_T h_tmp_data[15];
  real_T varargin_2_data[12];
  real_T f_tmp_data[10];
  real_T c2_data[5];
  real_T v_data[5];
  real_T g_R_data[4];
  real_T r2_data[4];
  real_T r_data[4];
  real_T u_data[4];
  real_T e_R_data[3];
  real_T b_k;
  real_T kmax;
  real_T tol;
  real_T *x;
  int32_T p[5];
  int32_T R_size[2];
  int32_T b_R_size[2];
  int32_T b_tmp_size[2];
  int32_T c2_size[2];
  int32_T c_R_size[2];
  int32_T c_k[2];
  int32_T c_tmp_size[2];
  int32_T d_R_size[2];
  int32_T d_tmp_size[2];
  int32_T e_R_size[2];
  int32_T f_R_size[2];
  int32_T g_R_size[2];
  int32_T h_R_size[2];
  int32_T tmp_size[2];
  int32_T varargin_2_size[2];
  int32_T y_size[2];
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T d_loop_ub;
  int32_T e_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int32_T k;
  int32_T k_idx_1_tmp;
  int32_T k_tmp;
  int32_T loop_ub;
  int32_T u_size;
  boolean_T y[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  /*  ID  Interpolative decomposition. */
  /*  */
  /*     [SK,RD,T] = ID(A,KMAX) produces a structure-preserving approximation of
   * A */
  /*     of rank K = MIN(KMAX,RANK(A)) via the skeleton and redundant indices SK
   * and */
  /*     RD, respectively, and an interpolation matrix T such that */
  /*     A(:,RD) = A(:,SK)*T + E, where LENGTH(SK) = K and NORM(E) is of order
   */
  /*     S(KMAX+1) for S = SVD(A). */
  /*  */
  /*     [SK,RD,T] = ID(A,TOL) produces a rank-adaptive approximation such that
   */
  /*     A(:,RD) = A(:,SK)*T + E, where NORM(E) is of order TOL*NORM(A). */
  /*  */
  /*     [SK,RD,T] = ID(A,RANK_OR_TOL) sets KMAX = RANK_OR_TOL if RANK_OR_TOL >=
   * 1 */
  /*     and TOL = RANK_OR_TOL if RANK_OR_TOL < 1. More generally, both criteria
   * can */
  /*     be specified simultaneously by letting RANK_OR_TOL = KMAX + TOL, with
   * the */
  /*     approximation terminating as soon as either is reached. */
  /*  */
  /*     [SK,RD,T] = ID(A,RANK_OR_TOL,TMAX) iteratively refines the
   * approximation */
  /*     using rank-revealing QR column swaps until 1 <= MAX(ABS(T(:))) <= TMAX.
   */
  /*     Ignored if TMAX = INF (default: TMAX = 2). Refinement can improve
   * numerical */
  /*     stability and reduce the output rank. */
  /*  */
  /*     [SK,RD,T] = ID(A,RANK_OR_TOL,TMAX,RRQR_ITER) performs at most RRQR_ITER
   */
  /*     refinement iterations (default: RRQR_ITER = INF). */
  /*  */
  /*     [SK,RD,T,NITER] = ID(A,RANK_OR_TOL,...) also returns the number NITER
   * of */
  /*     refinement iterations performed. */
  /*  */
  /*     [SK,RD,T,...] = ID(A,RANK_OR_TOL,TMAX,RRQR_ITER,FIXED) forces the
   * indices */
  /*     in FIXED to be included in SK (default: FIXED = []). An ID is computed
   * on */
  /*     the residual free columns then reconstituted along with the fixed ones.
   * The */
  /*     parameters TMAX and RRQR_ITER apply only to this residual ID. If */
  /*     KMAX = FLOOR(RANK_OR_TOL) > 0 and LENGTH(FIXED) >= KMAX, then SK =
   * FIXED. */
  /*  */
  /*     References: */
  /*  */
  /*       H. Cheng, Z. Gimbutas, P.G. Martinsson, V. Rokhlin. On the
   * compression of */
  /*         low rank matrices. SIAM J. Sci. Comput. 26 (4): 1389-1404, 2005. */
  /*  */
  /*       M. Gu, S.C. Eisenstat. Efficient algorithms for computing a strong
   * rank- */
  /*         revealing QR factorization. SIAM J. Sci. Comput. 17 (4): 848-869,
   * 1996. */
  /*  */
  /*     See also QR. */
  /*  set default parameters */
  /*  check inputs */
  if (!(rank_or_tol >= 0.0)) {
    st.site = &dh_emlrtRSI;
    b_st.site = &eh_emlrtRSI;
    b_error(&st, emlrt_marshallOut(&st, b_cv), b_emlrt_marshallOut(&b_st, cv1),
            &emlrtMCI);
  }
  if (!(Tmax >= 1.0)) {
    st.site = &fh_emlrtRSI;
    b_st.site = &gh_emlrtRSI;
    b_error(&st, c_emlrt_marshallOut(&st, cv2), d_emlrt_marshallOut(&b_st, cv3),
            &b_emlrtMCI);
  }
  if (!(rrqr_iter >= 0.0)) {
    st.site = &hh_emlrtRSI;
    b_st.site = &ih_emlrtRSI;
    b_error(&st, e_emlrt_marshallOut(&st, cv4), f_emlrt_marshallOut(&b_st, cv5),
            &c_emlrtMCI);
  }
  /*  initialize */
  *niter = 0.0;
  /*  return if matrix is empty */
  /*  unpack approximation parameters */
  /*  relative tolerance */
  kmax = muDoubleScalarFloor(rank_or_tol);
  /*  maximum rank */
  if ((kmax == 0.0) || (kmax > 5.0)) {
    kmax = 5.0;
  }
  /*  special rank cases */
  /*  preprocess fixed columns */
  /*  reduce row size if too rectangular */
  /*  if m > 8*n, [~,A] = qr(A,0); end */
  /*  reduce row size if too rectangular */
  st.site = &fb_emlrtRSI;
  qr(&st, A, a__1, R);
  /*  Compute the QR decomposition */
  /*  Update A with the upper left n x n part of R */
  /*  compute ID */
  st.site = &eb_emlrtRSI;
  c_st.site = &pc_emlrtRSI;
  eml_qr(&c_st, R, Q, b_R, p);
  /*  maximum column norm */
  tol = muDoubleScalarMax(0.0, muDoubleScalarAbs(b_R[0])) *
        muDoubleScalarRem(rank_or_tol, 1.0);
  /*  absolute tolerance */
  /*  ... instead of a matrix */
  for (k = 0; k < 5; k++) {
    y[k] = (muDoubleScalarAbs(b_R[k + 5 * k]) > tol);
  }
  b_k = intnnz(y);
  /*  rank by precision */
  if (b_k < 1.0) {
    loop_ub = 0;
  } else {
    if (b_k > 5.0) {
      emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, 5, &emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    loop_ub = (int32_T)b_k;
  }
  R_size[0] = loop_ub;
  R_size[1] = 5;
  for (i = 0; i < 5; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      R_data[i1 + loop_ub * i] = b_R[i1 + 5 * i];
    }
  }
  b_k = muDoubleScalarMin(b_k, kmax);
  /*  truncate rank by input */
  if (b_k < 1.0) {
    b_loop_ub = 0;
    c_loop_ub = 0;
    d_loop_ub = 0;
  } else {
    if (loop_ub < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, 0, &b_emlrtBCI, (emlrtConstCTX)sp);
    }
    b_loop_ub = (int32_T)b_k;
    if (b_loop_ub > loop_ub) {
      emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, loop_ub, &c_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    c_loop_ub = (int32_T)b_k;
    if (loop_ub < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, 0, &d_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((int32_T)b_k > loop_ub) {
      emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, loop_ub, &e_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    d_loop_ub = (int32_T)b_k;
  }
  if (b_k + 1.0 > 5.0) {
    i = 0;
    i1 = 0;
  } else {
    if (((int32_T)(b_k + 1.0) < 1) || ((int32_T)(b_k + 1.0) > 5)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(b_k + 1.0), 1, 5, &f_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = (int32_T)(b_k + 1.0) - 1;
    i1 = 5;
  }
  if (b_k < 1.0) {
    e_loop_ub = 0;
  } else {
    if (loop_ub < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, 0, &g_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((int32_T)b_k > loop_ub) {
      emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, loop_ub, &h_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    e_loop_ub = (int32_T)b_k;
  }
  if (b_k + 1.0 > 5.0) {
    i2 = 0;
    i3 = 0;
  } else {
    if (((int32_T)(b_k + 1.0) < 1) || ((int32_T)(b_k + 1.0) > 5)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(b_k + 1.0), 1, 5, &i_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i2 = (int32_T)(b_k + 1.0) - 1;
    i3 = 5;
  }
  b_R_size[0] = b_loop_ub;
  b_R_size[1] = c_loop_ub;
  for (i4 = 0; i4 < c_loop_ub; i4++) {
    for (k_idx_1_tmp = 0; k_idx_1_tmp < b_loop_ub; k_idx_1_tmp++) {
      Q[k_idx_1_tmp + b_loop_ub * i4] = b_R[k_idx_1_tmp + 5 * i4];
    }
  }
  c_R_size[0] = d_loop_ub;
  b_loop_ub = i1 - i;
  c_R_size[1] = b_loop_ub;
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    for (i4 = 0; i4 < d_loop_ub; i4++) {
      b_R_data[i4 + d_loop_ub * i1] = b_R[i4 + 5 * (i + i1)];
    }
  }
  st.site = &db_emlrtRSI;
  mldivide(&st, Q, b_R_size, b_R_data, c_R_size, R, y_size);
  c_k[0] = e_loop_ub;
  k_tmp = i3 - i2;
  c_k[1] = k_tmp;
  emlrtSubAssignSizeCheckR2012b(&c_k[0], 2, &y_size[0], 2, &emlrtECI,
                                (emlrtCTX)sp);
  for (i = 0; i < k_tmp; i++) {
    for (i1 = 0; i1 < e_loop_ub; i1++) {
      R_data[i1 + loop_ub * (i2 + i)] = R[i1 + e_loop_ub * i];
    }
  }
  /*  store T */
  /*  RRQR refinement */
  if ((!muDoubleScalarIsInf(Tmax)) && (rrqr_iter > 0.0) && (b_k > 0.0) &&
      (b_k < 5.0)) {
    real_T c_R_data[16];
    real_T f2;
    int32_T conv;
    int32_T loop_ub_tmp;
    int32_T r2_size;
    boolean_T exitg1;
    st.site = &cb_emlrtRSI;
    c_st.site = &we_emlrtRSI;
    d_st.site = &xe_emlrtRSI;
    f2 = Tmax * Tmax;
    /*  convergence criterion */
    b_loop_ub = (int32_T)b_k;
    if (b_loop_ub + 1 > loop_ub) {
      i = 0;
      i1 = 0;
    } else {
      if (b_loop_ub + 1 > loop_ub) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_k + 1, 1, loop_ub, &j_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i = b_loop_ub;
      i1 = loop_ub;
    }
    c_loop_ub = i1 - i;
    d_R_size[0] = c_loop_ub;
    d_R_size[1] = 5 - b_loop_ub;
    loop_ub_tmp = -b_loop_ub;
    for (i1 = 0; i1 <= loop_ub_tmp + 4; i1++) {
      for (i2 = 0; i2 < c_loop_ub; i2++) {
        tmp_data[i2 + c_loop_ub * i1] =
            R_data[(i + i2) + loop_ub * (b_loop_ub + i1)];
      }
    }
    st.site = &bb_emlrtRSI;
    power(tmp_data, d_R_size, R, y_size);
    st.site = &bb_emlrtRSI;
    sum(&st, R, y_size, u_data, b_R_size);
    c2_size[0] = 1;
    c_loop_ub = b_R_size[1];
    c2_size[1] = b_R_size[1];
    if (c_loop_ub - 1 >= 0) {
      memcpy(&c2_data[0], &u_data[0], (uint32_T)c_loop_ub * sizeof(real_T));
    }
    /*  column norms of residual part */
    if (loop_ub < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, 0, &k_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (b_loop_ub > loop_ub) {
      emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, loop_ub, &l_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    e_R_size[0] = b_loop_ub;
    e_R_size[1] = b_loop_ub;
    for (i = 0; i < b_loop_ub; i++) {
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        c_R_data[i1 + b_loop_ub * i] = R_data[i1 + loop_ub * i];
      }
    }
    st.site = &ab_emlrtRSI;
    inv(&st, c_R_data, e_R_size, b_tmp_data, d_R_size);
    st.site = &ab_emlrtRSI;
    power(b_tmp_data, d_R_size, R, y_size);
    st.site = &ab_emlrtRSI;
    r2_size = b_sum(R, y_size, r2_data);
    /*  inverse row norms of main part */
    conv = 0;
    /*  converged? */
    /*  one-loop variant of Gu-Eisenstat -- allows early rank reduction */
    exitg1 = false;
    while ((!exitg1) && (*niter < rrqr_iter)) {
      __m128d r;
      __m128d r1;
      real_T R_tmp_tmp;
      int32_T b_loop_ub_tmp;
      int32_T idx;
      int32_T scalarLB;
      int32_T vectorUB;
      boolean_T exitg2;
      if (b_k < 1.0) {
        loop_ub = 0;
      } else {
        if (R_size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, R_size[0], &m_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if ((int32_T)b_k > R_size[0]) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0], &n_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        loop_ub = (int32_T)b_k;
      }
      tmp_size[0] = loop_ub;
      loop_ub_tmp = 5 - (int32_T)b_k;
      tmp_size[1] = 5 - (int32_T)b_k;
      b_loop_ub_tmp = -(int32_T)b_k;
      for (i = 0; i <= b_loop_ub_tmp + 4; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          tmp_data[i1 + loop_ub * i] =
              R_data[i1 + R_size[0] * ((int32_T)b_k + i)];
        }
      }
      st.site = &y_emlrtRSI;
      power(tmp_data, tmp_size, R, y_size);
      e_loop_ub = y_size[0];
      tmp_size[0] = y_size[0];
      k_tmp = y_size[1];
      tmp_size[1] = y_size[1];
      k = y_size[0] * y_size[1];
      if (k - 1 >= 0) {
        memcpy(&tmp_data[0], &R[0], (uint32_T)k * sizeof(real_T));
      }
      y_size[0] = r2_size;
      loop_ub = c2_size[1];
      y_size[1] = c2_size[1];
      for (i = 0; i < loop_ub; i++) {
        scalarLB = (r2_size / 2) << 1;
        vectorUB = scalarLB - 2;
        for (i1 = 0; i1 <= vectorUB; i1 += 2) {
          r = _mm_loadu_pd(&r2_data[i1]);
          _mm_storeu_pd(&R[i1 + r2_size * i],
                        _mm_mul_pd(r, _mm_set1_pd(c2_data[i])));
        }
        for (i1 = scalarLB; i1 < r2_size; i1++) {
          R[i1 + r2_size * i] = r2_data[i1] * c2_data[i];
        }
      }
      if ((e_loop_ub != r2_size) && ((e_loop_ub != 1) && (r2_size != 1))) {
        emlrtDimSizeImpxCheckR2021b(e_loop_ub, r2_size, &b_emlrtECI,
                                    (emlrtConstCTX)sp);
      }
      if ((k_tmp != c2_size[1]) && ((k_tmp != 1) && (c2_size[1] != 1))) {
        emlrtDimSizeImpxCheckR2021b(k_tmp, c2_size[1], &c_emlrtECI,
                                    (emlrtConstCTX)sp);
      }
      if ((tmp_size[0] == r2_size) && (tmp_size[1] == c2_size[1])) {
        scalarLB = (k / 2) << 1;
        vectorUB = scalarLB - 2;
        for (i = 0; i <= vectorUB; i += 2) {
          r = _mm_loadu_pd(&tmp_data[i]);
          r1 = _mm_loadu_pd(&R[i]);
          _mm_storeu_pd(&tmp_data[i], _mm_add_pd(r, r1));
        }
        for (i = scalarLB; i < k; i++) {
          tmp_data[i] += R[i];
        }
      } else {
        binary_expand_op_10(tmp_data, tmp_size, R, y_size);
      }
      st.site = &x_emlrtRSI;
      c_st.site = &x_emlrtRSI;
      e_loop_ub = b_abs(tmp_data, tmp_size[0] * tmp_size[1], varargin_1_data);
      c_st.site = &wf_emlrtRSI;
      d_st.site = &xf_emlrtRSI;
      e_st.site = &yf_emlrtRSI;
      if (e_loop_ub < 1) {
        emlrtErrorWithMessageIdR2018a(
            &e_st, &emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
            "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }
      if (e_loop_ub <= 2) {
        if (e_loop_ub == 1) {
          kmax = varargin_1_data[0];
          idx = 1;
        } else if ((varargin_1_data[0] < varargin_1_data[1]) ||
                   (muDoubleScalarIsNaN(varargin_1_data[0]) &&
                    (!muDoubleScalarIsNaN(varargin_1_data[1])))) {
          kmax = varargin_1_data[1];
          idx = 2;
        } else {
          kmax = varargin_1_data[0];
          idx = 1;
        }
      } else {
        if (!muDoubleScalarIsNaN(varargin_1_data[0])) {
          idx = 1;
        } else {
          idx = 0;
          k = 2;
          exitg2 = false;
          while ((!exitg2) && (k <= e_loop_ub)) {
            if (!muDoubleScalarIsNaN(varargin_1_data[k - 1])) {
              idx = k;
              exitg2 = true;
            } else {
              k++;
            }
          }
        }
        if (idx == 0) {
          kmax = varargin_1_data[0];
          idx = 1;
        } else {
          kmax = varargin_1_data[idx - 1];
          i = idx + 1;
          for (k = i; k <= e_loop_ub; k++) {
            R_tmp_tmp = varargin_1_data[k - 1];
            if (kmax < R_tmp_tmp) {
              kmax = R_tmp_tmp;
              idx = k;
            }
          }
        }
      }
      if (kmax <= f2) {
        conv = 1;
        exitg1 = true;
      } else {
        real_T f_R_data[10];
        real_T d_R_data[9];
        real_T d_k[2];
        int32_T b_R_tmp_tmp;
        int32_T c_R_tmp_tmp;
        boolean_T c_tmp_data[4];
        boolean_T d_tmp_data[4];
        /*  converged */
        (*niter)++;
        st.site = &w_emlrtRSI;
        d_k[0] = b_k;
        d_k[1] = 5.0 - b_k;
        c_st.site = &ag_emlrtRSI;
        k_tmp = ind2sub(&c_st, d_k, idx, &k);
        /*  need to swap i-th and (k+j)-th columns */
        /*  swap i-th and k-th columns */
        if (k_tmp < (int32_T)b_k) {
          real_T e_tmp_data[8];
          if (((int32_T)b_k < 1) || ((int32_T)b_k > 5)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, 5, &ce_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if ((k_tmp < 1) || (k_tmp > 5)) {
            emlrtDynamicBoundsCheckR2012b(k_tmp, 1, 5, &ce_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          e_loop_ub = p[k_tmp - 1];
          p[k_tmp - 1] = p[(int32_T)b_k - 1];
          p[(int32_T)b_k - 1] = e_loop_ub;
          if (b_k < 1.0) {
            loop_ub = 0;
            b_loop_ub = 0;
            c_loop_ub = 0;
            i = 0;
          } else {
            if (R_size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, R_size[0], &o_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            if ((int32_T)b_k > R_size[0]) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                            &p_emlrtBCI, (emlrtConstCTX)sp);
            }
            loop_ub = (int32_T)b_k;
            b_loop_ub = (int32_T)b_k;
            if (R_size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, R_size[0], &q_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            if ((int32_T)b_k > R_size[0]) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                            &r_emlrtBCI, (emlrtConstCTX)sp);
            }
            c_loop_ub = (int32_T)b_k;
            if ((int32_T)b_k > R_size[0]) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                            &s_emlrtBCI, (emlrtConstCTX)sp);
            }
            i = (int32_T)b_k;
          }
          d_loop_ub = (int32_T)b_k;
          if ((c_loop_ub != i) && ((c_loop_ub != 1) && (i != 1))) {
            emlrtDimSizeImpxCheckR2021b(c_loop_ub, i, &d_emlrtECI,
                                        (emlrtConstCTX)sp);
          }
          b_tmp_size[0] = 1;
          b_tmp_size[1] = (int32_T)b_k;
          for (i1 = 0; i1 < d_loop_ub; i1++) {
            c_tmp_data[i1] = (i1 + 1 == k_tmp);
          }
          c_tmp_size[0] = 1;
          c_tmp_size[1] = (int32_T)(b_k - 1.0) + 1;
          e_loop_ub = (int32_T)(b_k - 1.0);
          for (i1 = 0; i1 <= e_loop_ub; i1++) {
            d_tmp_data[i1] = ((real_T)i1 + 1.0 == b_k);
          }
          if (((int32_T)b_k != (int32_T)(b_k - 1.0) + 1) &&
              (((int32_T)b_k != 1) && ((int32_T)(b_k - 1.0) + 1 != 1))) {
            emlrtDimSizeImpxCheckR2021b((int32_T)b_k, (int32_T)(b_k - 1.0) + 1,
                                        &e_emlrtECI, (emlrtConstCTX)sp);
          }
          st.site = &v_emlrtRSI;
          eye(&st, b_k, c_R_data, e_R_size);
          d_R_size[0] = loop_ub;
          d_R_size[1] = b_loop_ub;
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            for (i2 = 0; i2 < loop_ub; i2++) {
              b_tmp_data[i2 + loop_ub * i1] = R_data[i2 + R_size[0] * i1];
            }
          }
          if ((c_loop_ub == i) && ((int32_T)b_k == (int32_T)(b_k - 1.0) + 1)) {
            scalarLB = (c_loop_ub / 2) << 1;
            vectorUB = scalarLB - 2;
            for (i = 0; i <= vectorUB; i += 2) {
              r = _mm_loadu_pd(&R_data[i + R_size[0] * ((int32_T)b_k - 1)]);
              r1 = _mm_loadu_pd(&R_data[i + R_size[0] * (k_tmp - 1)]);
              _mm_storeu_pd(&g_R_data[i], _mm_sub_pd(r, r1));
            }
            for (i = scalarLB; i < c_loop_ub; i++) {
              g_R_data[i] = R_data[i + R_size[0] * ((int32_T)b_k - 1)] -
                            R_data[i + R_size[0] * (k_tmp - 1)];
            }
            for (i = 0; i < d_loop_ub; i++) {
              r_data[i] = c_tmp_data[i] - d_tmp_data[i];
            }
            st.site = &v_emlrtRSI;
            qrupdate(&st, c_R_data, e_R_size, b_tmp_data, d_R_size, g_R_data,
                     c_loop_ub, r_data, (int32_T)b_k);
          } else {
            st.site = &v_emlrtRSI;
            binary_expand_op_9(&st, v_emlrtRSI, c_R_data, e_R_size, b_tmp_data,
                               d_R_size, R_data, R_size, c_loop_ub, b_k, i,
                               k_tmp, c_tmp_data, b_tmp_size, d_tmp_data,
                               c_tmp_size);
          }
          if (R_size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, R_size[0], &t_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                          &u_emlrtBCI, (emlrtConstCTX)sp);
          }
          c_k[0] = (int32_T)b_k;
          c_k[1] = (int32_T)b_k;
          emlrtSubAssignSizeCheckR2012b(&c_k[0], 2, &d_R_size[0], 2,
                                        &f_emlrtECI, (emlrtCTX)sp);
          for (i = 0; i < d_loop_ub; i++) {
            for (i1 = 0; i1 < d_loop_ub; i1++) {
              R_data[i1 + R_size[0] * i] = b_tmp_data[i1 + (int32_T)b_k * i];
            }
          }
          if (k_tmp > R_size[0]) {
            emlrtDynamicBoundsCheckR2012b(k_tmp, 1, R_size[0], &ie_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (((int8_T)(int32_T)b_k < 1) ||
              ((int8_T)(int32_T)b_k > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int8_T)(int32_T)b_k, 1, R_size[0],
                                          &ie_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                          &je_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (k_tmp > R_size[0]) {
            emlrtDynamicBoundsCheckR2012b(k_tmp, 1, R_size[0], &je_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          for (i = 0; i <= b_loop_ub_tmp + 4; i++) {
            e_loop_ub = R_size[0] * ((int32_T)b_k + i);
            e_tmp_data[2 * i] = R_data[((int32_T)b_k + e_loop_ub) - 1];
            e_tmp_data[2 * i + 1] = R_data[(k_tmp + e_loop_ub) - 1];
          }
          c_k[0] = 2;
          c_k[1] = 5 - (int32_T)b_k;
          b_R_size[0] = 2;
          b_R_size[1] = 5 - (int32_T)b_k;
          emlrtSubAssignSizeCheckR2012b(&c_k[0], 2, &b_R_size[0], 2,
                                        &g_emlrtECI, (emlrtCTX)sp);
          for (i = 0; i < loop_ub_tmp; i++) {
            e_loop_ub = R_size[0] * ((int32_T)b_k + i);
            R_data[(k_tmp + e_loop_ub) - 1] = e_tmp_data[2 * i];
            R_data[(int8_T)((int8_T)(int32_T)b_k - 1) + e_loop_ub] =
                e_tmp_data[2 * i + 1];
          }
          if (((int32_T)b_k < 1) || ((int32_T)b_k > r2_size)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, r2_size,
                                          &le_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (k_tmp > r2_size) {
            emlrtDynamicBoundsCheckR2012b(k_tmp, 1, r2_size, &le_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          d_k[1] = r2_data[k_tmp - 1];
          r2_data[k_tmp - 1] = r2_data[(int32_T)b_k - 1];
          r2_data[(int32_T)b_k - 1] = d_k[1];
        }
        /*  swap (k+1)-th and (k+j)-th columns */
        if (k > 1) {
          int8_T b_iv[2];
          if (((int32_T)(b_k + 1.0) < 1) || ((int32_T)(b_k + 1.0) > 5)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(b_k + 1.0), 1, 5,
                                          &de_emlrtBCI, (emlrtConstCTX)sp);
          }
          d_k[0] = (int32_T)(b_k + 1.0);
          i = (int32_T)(b_k + (real_T)k);
          if ((i < 1) || (i > 5)) {
            emlrtDynamicBoundsCheckR2012b(i, 1, 5, &de_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          d_k[1] = i;
          i1 = (int8_T)((uint32_T)b_k + (uint32_T)k);
          if ((i1 < 1) || (i1 > 5)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, 5, &ee_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          b_iv[0] = (int8_T)i1;
          if (((int8_T)((int32_T)b_k + 1) < 1) ||
              ((int8_T)((int32_T)b_k + 1) > 5)) {
            emlrtDynamicBoundsCheckR2012b((int8_T)((int32_T)b_k + 1), 1, 5,
                                          &ee_emlrtBCI, (emlrtConstCTX)sp);
          }
          b_iv[1] = (int8_T)((int32_T)b_k + 1);
          c_k[1] = p[(int8_T)((int32_T)b_k + 1) - 1];
          p[(int32_T)(b_k + 1.0) - 1] = p[i1 - 1];
          p[i - 1] = c_k[1];
          e_loop_ub = R_size[0];
          b_R_size[0] = R_size[0];
          b_R_size[1] = 2;
          c_k[0] = R_size[0];
          c_k[1] = 2;
          emlrtSubAssignSizeCheckR2012b(&b_R_size[0], 2, &c_k[0], 2,
                                        &h_emlrtECI, (emlrtCTX)sp);
          k_tmp = R_size[0];
          for (i = 0; i < 2; i++) {
            for (i1 = 0; i1 < e_loop_ub; i1++) {
              f_R_data[i1 + k_tmp * i] = R_data[i1 + R_size[0] * (b_iv[i] - 1)];
            }
          }
          for (i = 0; i < 2; i++) {
            for (i1 = 0; i1 < e_loop_ub; i1++) {
              R_data[i1 + R_size[0] * ((int32_T)d_k[i] - 1)] =
                  f_R_data[i1 + k_tmp * i];
            }
          }
          if (k > c2_size[1]) {
            emlrtDynamicBoundsCheckR2012b(k, 1, c2_size[1], &fe_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (k > c2_size[1]) {
            emlrtDynamicBoundsCheckR2012b(k, 1, c2_size[1], &ge_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          d_k[1] = c2_data[0];
          c2_data[0] = c2_data[k - 1];
          c2_data[k - 1] = d_k[1];
        }
        /*  downdate inverse row norms */
        if (b_k - 1.0 < 1.0) {
          loop_ub = 0;
        } else {
          if (r2_size < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, r2_size, &v_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (((int32_T)b_k - 1 < 1) || ((int32_T)b_k - 1 > r2_size)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k - 1, 1, r2_size,
                                          &w_emlrtBCI, (emlrtConstCTX)sp);
          }
          loop_ub = (int32_T)b_k - 1;
        }
        c_k[0] = 1;
        c_k[1] = loop_ub;
        st.site = &u_emlrtRSI;
        indexShapeCheck(&st, r2_size, c_k);
        if (b_k - 1.0 < 1.0) {
          b_loop_ub = 0;
          c_loop_ub = 0;
          d_loop_ub = 0;
        } else {
          if (R_size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, R_size[0], &x_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (((int32_T)b_k - 1 < 1) || ((int32_T)b_k - 1 > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k - 1, 1, R_size[0],
                                          &y_emlrtBCI, (emlrtConstCTX)sp);
          }
          b_loop_ub = (int32_T)b_k - 1;
          if (((int32_T)b_k - 1 < 1) || ((int32_T)b_k - 1 > 5)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k - 1, 1, 5, &ab_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          c_loop_ub = (int32_T)b_k - 1;
          if (((int32_T)b_k - 1 < 1) || ((int32_T)b_k - 1 > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k - 1, 1, R_size[0],
                                          &bb_emlrtBCI, (emlrtConstCTX)sp);
          }
          d_loop_ub = (int32_T)b_k - 1;
        }
        if (((int32_T)b_k < 1) || ((int32_T)b_k > 5)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, 5, &cb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        f_R_size[0] = b_loop_ub;
        f_R_size[1] = c_loop_ub;
        for (i = 0; i < c_loop_ub; i++) {
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            d_R_data[i1 + b_loop_ub * i] = R_data[i1 + R_size[0] * i];
          }
        }
        for (i = 0; i < d_loop_ub; i++) {
          e_R_data[i] = R_data[i + R_size[0] * ((int32_T)b_k - 1)];
        }
        st.site = &u_emlrtRSI;
        k = b_mldivide(&st, d_R_data, f_R_size, e_R_data, d_loop_ub, v_data);
        b_loop_ub = R_size[0];
        if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                        &he_emlrtBCI, (emlrtConstCTX)sp);
        }
        b_R_tmp_tmp = R_size[0] * ((int32_T)b_k - 1);
        c_R_tmp_tmp = (int32_T)b_k + b_R_tmp_tmp;
        kmax = R_data[c_R_tmp_tmp - 1];
        scalarLB = (k / 2) << 1;
        vectorUB = scalarLB - 2;
        for (i = 0; i <= vectorUB; i += 2) {
          r = _mm_loadu_pd(&v_data[i]);
          _mm_storeu_pd(&e_R_data[i], _mm_div_pd(r, _mm_set1_pd(kmax)));
        }
        for (i = scalarLB; i < k; i++) {
          e_R_data[i] = v_data[i] / kmax;
        }
        st.site = &u_emlrtRSI;
        e_loop_ub = b_abs(e_R_data, k, varargin_1_data);
        st.site = &u_emlrtRSI;
        k_tmp = b_power(varargin_1_data, e_loop_ub, e_R_data);
        if ((loop_ub != k_tmp) && ((loop_ub != 1) && (k_tmp != 1))) {
          emlrtDimSizeImpxCheckR2021b(loop_ub, k_tmp, &i_emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        if (b_k - 1.0 < 1.0) {
          c_loop_ub = 0;
        } else {
          if (r2_size < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, r2_size, &db_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (((int32_T)b_k - 1 < 1) || ((int32_T)b_k - 1 > r2_size)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k - 1, 1, r2_size,
                                          &eb_emlrtBCI, (emlrtConstCTX)sp);
          }
          c_loop_ub = (int32_T)b_k - 1;
        }
        if (loop_ub == k_tmp) {
          k_tmp = loop_ub;
          scalarLB = (loop_ub / 2) << 1;
          vectorUB = scalarLB - 2;
          for (i = 0; i <= vectorUB; i += 2) {
            r = _mm_loadu_pd(&r2_data[0]);
            r1 = _mm_loadu_pd(&e_R_data[0]);
            _mm_storeu_pd(&e_R_data[0], _mm_sub_pd(r, r1));
          }
          for (i = scalarLB; i < loop_ub; i++) {
            e_R_data[i] = r2_data[i] - e_R_data[i];
          }
        } else {
          binary_expand_op_8(e_R_data, &k_tmp, r2_data, loop_ub);
        }
        if (c_loop_ub != k_tmp) {
          emlrtSubAssignSizeCheck1dR2017a(c_loop_ub, k_tmp, &j_emlrtECI,
                                          (emlrtConstCTX)sp);
        }
        if (c_loop_ub - 1 >= 0) {
          memcpy(&r2_data[0], &e_R_data[0],
                 (uint32_T)c_loop_ub * sizeof(real_T));
        }
        if (((int32_T)b_k < 1) || ((int32_T)b_k > r2_size)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, r2_size, &ke_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        r2_data[(int32_T)b_k - 1] = 0.0;
        /*  The following updates the R = [R11 R12; 0 R22] in two steps,
         * recalling */
        /*  that R12 actually stores T = R11\R12. */
        /*  */
        /*    - First do a "half-update" of T and an otherwise full update of R,
         */
        /*      i.e., overwrite R11 and R22 with R11_new and R22_new,
         * respectively, */
        /*      and T with R11\R12_new. */
        /*  */
        /*    - Then do a rank-one update of T to obtain R11_new\R12_new. */
        /*  */
        /*  Note that the k-th and (k+1)-th columns are stored in swapped order
         */
        /*  during the first step below. */
        /*  half-update T and full-update R */
        if (R_size[0] == (int32_T)b_k) {
          /*  no trailing R22 -- typical for fixed-precision case */
          u_size = R_size[0];
          for (i = 0; i < b_loop_ub; i++) {
            u_data[i] = R_data[i + R_size[0] * (int32_T)b_k];
          }
          /*  for rank-one update of T */
          st.site = &t_emlrtRSI;
          e_R_size[0] = R_size[0];
          loop_ub = (int32_T)b_k;
          e_R_size[1] = (int32_T)b_k;
          for (i = 0; i < loop_ub; i++) {
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              c_R_data[i1 + e_R_size[0] * i] = R_data[i1 + R_size[0] * i];
            }
          }
          for (i = 0; i < b_loop_ub; i++) {
            r_data[i] = R_data[i + R_size[0] * (int32_T)b_k];
          }
          c_st.site = &ng_emlrtRSI;
          dynamic_size_checks(&c_st, e_R_size, R_size[0], (int32_T)b_k,
                              R_size[0]);
          c_st.site = &mg_emlrtRSI;
          k = mtimes(c_R_data, e_R_size, r_data, R_size[0], v_data);
          emlrtSubAssignSizeCheckR2012b(&R_size[0], 1, &k, 1, &k_emlrtECI,
                                        (emlrtCTX)sp);
          for (i = 0; i < b_loop_ub; i++) {
            R_data[i + R_size[0] * (int32_T)b_k] = v_data[i];
          }
          if (b_k - 1.0 < 1.0) {
            loop_ub = 0;
          } else {
            if (((int32_T)b_k - 1 < 1) || ((int32_T)b_k - 1 > R_size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k - 1, 1, R_size[0],
                                            &fb_emlrtBCI, (emlrtConstCTX)sp);
            }
            loop_ub = (int32_T)b_k - 1;
          }
          if (loop_ub - 1 >= 0) {
            memset(&R_data[b_R_tmp_tmp], 0,
                   (uint32_T)((loop_ub + b_R_tmp_tmp) - b_R_tmp_tmp) *
                       sizeof(real_T));
          }
          R_data[c_R_tmp_tmp - 1] = 1.0;
        } else {
          real_T s_data[5];
          /*  zero out R22(2:end,:) by Householder transformation */
          if ((int32_T)b_k + 1 > R_size[0]) {
            i = 0;
            i1 = 0;
          } else {
            if (((int32_T)b_k + 1 < 1) || ((int32_T)b_k + 1 > R_size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k + 1, 1, R_size[0],
                                            &gb_emlrtBCI, (emlrtConstCTX)sp);
            }
            i = (int32_T)b_k;
            if (R_size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(R_size[0], 1, R_size[0],
                                            &hb_emlrtBCI, (emlrtConstCTX)sp);
            }
            i1 = R_size[0];
          }
          loop_ub = i1 - i;
          for (i1 = 0; i1 < loop_ub; i1++) {
            v_data[i1] = R_data[(i + i1) + R_size[0] * (int32_T)b_k];
          }
          /*  v(1) = v(1) + sqrt(c2(1))*exp(1i*arg(R(k+1,k+1))); */
          if (loop_ub < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, loop_ub, &kb_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (c2_size[1] < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, c2_size[1], &ib_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (((int32_T)(b_k + 1.0) < 1) ||
              ((int32_T)(b_k + 1.0) > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(b_k + 1.0), 1, R_size[0],
                                          &jb_emlrtBCI, (emlrtConstCTX)sp);
          }
          st.site = &s_emlrtRSI;
          if (c2_data[0] < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &st, &o_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
          }
          b_loop_ub = (int32_T)b_k;
          i1 = R_size[0] * (int32_T)b_k;
          i2 = (int32_T)b_k + i1;
          R_tmp_tmp = muDoubleScalarAtan2(0.0, R_data[i2]);
          dc.re = R_tmp_tmp * 0.0;
          dc.im = R_tmp_tmp;
          b_exp(&dc);
          v_data[0] = R_data[i + i1] + muDoubleScalarSqrt(c2_data[0]) * dc.re;
          R_tmp_tmp = c_norm(v_data, loop_ub);
          idx = (loop_ub / 2) << 1;
          vectorUB = idx - 2;
          for (i = 0; i <= vectorUB; i += 2) {
            r = _mm_loadu_pd(&v_data[i]);
            _mm_storeu_pd(&v_data[i], _mm_div_pd(r, _mm_set1_pd(R_tmp_tmp)));
          }
          for (i = idx; i < loop_ub; i++) {
            v_data[i] /= R_tmp_tmp;
          }
          if ((int32_T)b_k + 1 > R_size[0]) {
            i = 0;
            i3 = 0;
          } else {
            if (((int32_T)b_k + 1 < 1) || ((int32_T)b_k + 1 > R_size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k + 1, 1, R_size[0],
                                            &lb_emlrtBCI, (emlrtConstCTX)sp);
            }
            i = (int32_T)b_k;
            if (R_size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(R_size[0], 1, R_size[0],
                                            &mb_emlrtBCI, (emlrtConstCTX)sp);
            }
            i3 = R_size[0];
          }
          if (b_k + 2.0 > 5.0) {
            i4 = -1;
            k_idx_1_tmp = -1;
          } else {
            if (((int32_T)b_k + 2 < 1) || ((int32_T)b_k + 2 > 5)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k + 2, 1, 5,
                                            &nb_emlrtBCI, (emlrtConstCTX)sp);
            }
            i4 = (int32_T)b_k;
            k_idx_1_tmp = 4;
          }
          if ((int32_T)b_k + 1 > R_size[0]) {
            i5 = 0;
            u_size = 0;
          } else {
            if (((int32_T)b_k + 1 < 1) || ((int32_T)b_k + 1 > R_size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k + 1, 1, R_size[0],
                                            &ob_emlrtBCI, (emlrtConstCTX)sp);
            }
            i5 = (int32_T)b_k;
            if (R_size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(R_size[0], 1, R_size[0],
                                            &pb_emlrtBCI, (emlrtConstCTX)sp);
            }
            u_size = R_size[0];
          }
          if (b_k + 2.0 > 5.0) {
            k = 0;
            i6 = 0;
          } else {
            if (((int32_T)b_k + 2 < 1) || ((int32_T)b_k + 2 > 5)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k + 2, 1, 5,
                                            &qb_emlrtBCI, (emlrtConstCTX)sp);
            }
            k = (int32_T)b_k + 1;
            i6 = 5;
          }
          st.site = &r_emlrtRSI;
          c_loop_ub = u_size - i5;
          y_size[0] = c_loop_ub;
          d_loop_ub = i6 - k;
          y_size[1] = d_loop_ub;
          for (u_size = 0; u_size < d_loop_ub; u_size++) {
            for (i6 = 0; i6 < c_loop_ub; i6++) {
              R[i6 + c_loop_ub * u_size] =
                  R_data[(i5 + i6) + R_size[0] * (k + u_size)];
            }
          }
          c_st.site = &ng_emlrtRSI;
          b_dynamic_size_checks(&c_st, loop_ub, y_size, loop_ub, c_loop_ub);
          c_st.site = &mg_emlrtRSI;
          b_mtimes(v_data, loop_ub, R, y_size, s_data, c_R_size);
          y_size[0] = loop_ub;
          c_loop_ub = c_R_size[1];
          y_size[1] = c_R_size[1];
          for (i5 = 0; i5 < c_loop_ub; i5++) {
            vectorUB = idx - 2;
            for (u_size = 0; u_size <= vectorUB; u_size += 2) {
              r = _mm_loadu_pd(&v_data[u_size]);
              _mm_storeu_pd(&R[u_size + loop_ub * i5],
                            _mm_mul_pd(_mm_mul_pd(_mm_set1_pd(2.0), r),
                                       _mm_set1_pd(s_data[i5])));
            }
            for (u_size = idx; u_size < loop_ub; u_size++) {
              R[u_size + loop_ub * i5] = 2.0 * v_data[u_size] * s_data[i5];
            }
          }
          c_loop_ub = i3 - i;
          if ((c_loop_ub != loop_ub) && ((c_loop_ub != 1) && (loop_ub != 1))) {
            emlrtDimSizeImpxCheckR2021b(c_loop_ub, loop_ub, &l_emlrtECI,
                                        (emlrtConstCTX)sp);
          }
          d_loop_ub = k_idx_1_tmp - i4;
          if ((d_loop_ub != c_R_size[1]) &&
              ((d_loop_ub != 1) && (c_R_size[1] != 1))) {
            emlrtDimSizeImpxCheckR2021b(d_loop_ub, c_R_size[1], &m_emlrtECI,
                                        (emlrtConstCTX)sp);
          }
          if ((int32_T)b_k + 1 > R_size[0]) {
            i5 = 0;
            u_size = 0;
          } else {
            if (((int32_T)b_k + 1 < 1) || ((int32_T)b_k + 1 > R_size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k + 1, 1, R_size[0],
                                            &rb_emlrtBCI, (emlrtConstCTX)sp);
            }
            i5 = (int32_T)b_k;
            if (R_size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(R_size[0], 1, R_size[0],
                                            &sb_emlrtBCI, (emlrtConstCTX)sp);
            }
            u_size = R_size[0];
          }
          if (b_k + 2.0 > 5.0) {
            k = 0;
            i6 = 0;
          } else {
            if (((int32_T)b_k + 2 < 1) || ((int32_T)b_k + 2 > 5)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k + 2, 1, 5,
                                            &tb_emlrtBCI, (emlrtConstCTX)sp);
            }
            k = (int32_T)b_k + 1;
            i6 = 5;
          }
          if ((c_loop_ub == loop_ub) && (d_loop_ub == c_R_size[1])) {
            y_size[0] = c_loop_ub;
            y_size[1] = d_loop_ub;
            for (i3 = 0; i3 < d_loop_ub; i3++) {
              scalarLB = (c_loop_ub / 2) << 1;
              vectorUB = scalarLB - 2;
              for (k_idx_1_tmp = 0; k_idx_1_tmp <= vectorUB; k_idx_1_tmp += 2) {
                r = _mm_loadu_pd(
                    &R_data[(i + k_idx_1_tmp) + R_size[0] * ((i4 + i3) + 1)]);
                e_loop_ub = k_idx_1_tmp + c_loop_ub * i3;
                r1 = _mm_loadu_pd(&R[e_loop_ub]);
                _mm_storeu_pd(&R[e_loop_ub], _mm_sub_pd(r, r1));
              }
              for (k_idx_1_tmp = scalarLB; k_idx_1_tmp < c_loop_ub;
                   k_idx_1_tmp++) {
                k_tmp = k_idx_1_tmp + c_loop_ub * i3;
                R[k_tmp] =
                    R_data[(i + k_idx_1_tmp) + R_size[0] * ((i4 + i3) + 1)] -
                    R[k_tmp];
              }
            }
          } else {
            binary_expand_op_7(R, y_size, R_data, R_size, i, i3, i4 + 1,
                               k_idx_1_tmp);
          }
          k_tmp = u_size - i5;
          c_k[0] = k_tmp;
          e_loop_ub = i6 - k;
          c_k[1] = e_loop_ub;
          emlrtSubAssignSizeCheckR2012b(&c_k[0], 2, &y_size[0], 2, &n_emlrtECI,
                                        (emlrtCTX)sp);
          for (i = 0; i < e_loop_ub; i++) {
            for (i3 = 0; i3 < k_tmp; i3++) {
              R_data[(i5 + i3) + R_size[0] * (k + i)] = R[i3 + k_tmp * i];
            }
          }
          if ((int32_T)b_k + 2 > R_size[0]) {
            i = 0;
            i3 = 0;
          } else {
            if (((int32_T)b_k + 2 < 1) || ((int32_T)b_k + 2 > R_size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k + 2, 1, R_size[0],
                                            &ub_emlrtBCI, (emlrtConstCTX)sp);
            }
            i = (int32_T)b_k + 1;
            if (R_size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(R_size[0], 1, R_size[0],
                                            &vb_emlrtBCI, (emlrtConstCTX)sp);
            }
            i3 = R_size[0];
          }
          loop_ub = i3 - i;
          if (loop_ub - 1 >= 0) {
            memset(&R_data[i + i1], 0,
                   (uint32_T)((((loop_ub + i) + i1) - i) - i1) *
                       sizeof(real_T));
          }
          if (((int32_T)b_k + 1 < 1) || ((int32_T)b_k + 1 > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k + 1, 1, R_size[0],
                                          &ne_emlrtBCI, (emlrtConstCTX)sp);
          }
          R_data[i2] = c2_data[0];
          if (((int32_T)b_k + 1 < 1) || ((int32_T)b_k + 1 > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k + 1, 1, R_size[0],
                                          &ne_emlrtBCI, (emlrtConstCTX)sp);
          }
          st.site = &q_emlrtRSI;
          x = &R_data[i2];
          if (*x < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &st, &o_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
          }
          *x = muDoubleScalarSqrt(*x);
          /*  restore certain entries of T to "R space" */
          if (R_size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, R_size[0], &wb_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                          &xb_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                          &yb_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                          &ac_emlrtBCI, (emlrtConstCTX)sp);
          }
          st.site = &p_emlrtRSI;
          e_R_size[0] = (int32_T)b_k;
          e_R_size[1] = (int32_T)b_k;
          for (i = 0; i < b_loop_ub; i++) {
            for (i3 = 0; i3 < b_loop_ub; i3++) {
              c_R_data[i3 + (int32_T)b_k * i] = R_data[i3 + R_size[0] * i];
            }
            r_data[i] = R_data[i + i1];
          }
          c_st.site = &ng_emlrtRSI;
          dynamic_size_checks(&c_st, e_R_size, (int32_T)b_k, (int32_T)b_k,
                              (int32_T)b_k);
          c_st.site = &mg_emlrtRSI;
          k = mtimes(c_R_data, e_R_size, r_data, (int32_T)b_k, v_data);
          emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &k, 1, &o_emlrtECI,
                                        (emlrtCTX)sp);
          for (i = 0; i < b_loop_ub; i++) {
            R_data[i + i1] = v_data[i];
          }
          if (b_k + 2.0 > 5.0) {
            i = 0;
            i3 = 0;
            i4 = 0;
            k_idx_1_tmp = 0;
          } else {
            if (((int32_T)b_k + 2 < 1) || ((int32_T)b_k + 2 > 5)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k + 2, 1, 5,
                                            &bc_emlrtBCI, (emlrtConstCTX)sp);
            }
            i = (int32_T)b_k + 1;
            i3 = 5;
            i4 = (int32_T)b_k + 1;
            k_idx_1_tmp = 5;
          }
          if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                          &cc_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                          &re_emlrtBCI, (emlrtConstCTX)sp);
          }
          kmax = R_data[c_R_tmp_tmp - 1];
          c_R_size[0] = 1;
          loop_ub = i3 - i;
          c_R_size[1] = loop_ub;
          for (i3 = 0; i3 < loop_ub; i3++) {
            s_data[i3] =
                kmax * R_data[((int32_T)b_k + R_size[0] * (i + i3)) - 1];
          }
          c_k[0] = 1;
          k_tmp = k_idx_1_tmp - i4;
          c_k[1] = k_tmp;
          emlrtSubAssignSizeCheckR2012b(&c_k[0], 2, &c_R_size[0], 2,
                                        &p_emlrtECI, (emlrtCTX)sp);
          for (i = 0; i < k_tmp; i++) {
            R_data[((int32_T)b_k + R_size[0] * (i4 + i)) - 1] = s_data[i];
          }
          if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                          &dc_emlrtBCI, (emlrtConstCTX)sp);
          }
          for (i = 0; i < b_loop_ub; i++) {
            r_data[i] = R_data[i + b_R_tmp_tmp];
          }
          if (b_k + 2.0 > 5.0) {
            i = 0;
            i3 = 0;
          } else {
            if (((int32_T)b_k + 2 < 1) || ((int32_T)b_k + 2 > 5)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k + 2, 1, 5,
                                            &ec_emlrtBCI, (emlrtConstCTX)sp);
            }
            i = (int32_T)b_k + 1;
            i3 = 5;
          }
          c_R_size[0] = 1;
          loop_ub = i3 - i;
          c_R_size[1] = loop_ub;
          for (i3 = 0; i3 < loop_ub; i3++) {
            s_data[i3] = R_data[((int32_T)b_k + R_size[0] * (i + i3)) - 1];
          }
          /*  zero out R21 after swap by Givens rotation and update column norms
           */
          if (((int32_T)b_k + 1 < 1) || ((int32_T)b_k + 1 > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k + 1, 1, R_size[0],
                                          &fc_emlrtBCI, (emlrtConstCTX)sp);
          }
          g_R_size[0] = 1;
          g_R_size[1] = 5 - (int32_T)b_k;
          for (i = 0; i <= b_loop_ub_tmp + 4; i++) {
            g_R_data[i] = R_data[(int32_T)b_k + R_size[0] * ((int32_T)b_k + i)];
          }
          st.site = &o_emlrtRSI;
          c_abs(g_R_data, g_R_size, u_data, b_R_size);
          st.site = &o_emlrtRSI;
          c_power(u_data, b_R_size, g_R_data, g_R_size);
          if ((c2_size[1] != g_R_size[1]) &&
              ((c2_size[1] != 1) && (g_R_size[1] != 1))) {
            emlrtDimSizeImpxCheckR2021b(c2_size[1], g_R_size[1], &q_emlrtECI,
                                        (emlrtConstCTX)sp);
          }
          if (c2_size[1] == g_R_size[1]) {
            c_loop_ub = c2_size[1] - 1;
            c2_size[0] = 1;
            scalarLB = (c2_size[1] / 2) << 1;
            vectorUB = scalarLB - 2;
            for (i = 0; i <= vectorUB; i += 2) {
              r = _mm_loadu_pd(&c2_data[i]);
              r1 = _mm_loadu_pd(&g_R_data[i]);
              _mm_storeu_pd(&c2_data[i], _mm_sub_pd(r, r1));
            }
            for (i = scalarLB; i <= c_loop_ub; i++) {
              c2_data[i] -= g_R_data[i];
            }
          } else {
            minus(c2_data, c2_size, g_R_data, g_R_size);
          }
          if (((int32_T)(b_k + 1.0) < 1) ||
              ((int32_T)(b_k + 1.0) > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(b_k + 1.0), 1, R_size[0],
                                          &gf_emlrtBCI, (emlrtConstCTX)sp);
          }
          st.site = &n_emlrtRSI;
          if (((int32_T)(b_k + 1.0) < 1) ||
              ((int32_T)(b_k + 1.0) > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(b_k + 1.0), 1, R_size[0],
                                          &gc_emlrtBCI, &st);
          }
          if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                          &ff_emlrtBCI, &st);
          }
          if (((int32_T)(b_k + 1.0) < 1) ||
              ((int32_T)(b_k + 1.0) > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(b_k + 1.0), 1, R_size[0],
                                          &ff_emlrtBCI, &st);
          }
          h_R_size[0] = 2;
          k = 6 - (int32_T)b_k;
          h_R_size[1] = 6 - (int32_T)b_k;
          for (i = 0; i <= b_loop_ub_tmp + 5; i++) {
            e_loop_ub = R_size[0] * (((int32_T)b_k + i) - 1);
            f_R_data[2 * i] = R_data[((int32_T)b_k + e_loop_ub) - 1];
            f_R_data[2 * i + 1] =
                R_data[((int32_T)(b_k + 1.0) + e_loop_ub) - 1];
          }
          givens_id(R_data[i2 - 1], R_data[i2], u_data);
          c_st.site = &mg_emlrtRSI;
          c_mtimes(u_data, f_R_data, h_R_size, f_tmp_data, b_R_size);
          c_k[0] = 2;
          c_k[1] = 6 - (int32_T)b_k;
          emlrtSubAssignSizeCheckR2012b(&c_k[0], 2, &b_R_size[0], 2,
                                        &r_emlrtECI, (emlrtCTX)sp);
          for (i = 0; i < k; i++) {
            e_loop_ub = R_size[0] * (((int32_T)b_k + i) - 1);
            R_data[((int32_T)b_k + e_loop_ub) - 1] = f_tmp_data[2 * i];
            R_data[((int32_T)(b_k + 1.0) + e_loop_ub) - 1] =
                f_tmp_data[2 * i + 1];
          }
          g_R_size[0] = 1;
          g_R_size[1] = 5 - (int32_T)b_k;
          for (i = 0; i <= b_loop_ub_tmp + 4; i++) {
            g_R_data[i] = R_data[(int32_T)b_k + R_size[0] * ((int32_T)b_k + i)];
          }
          st.site = &m_emlrtRSI;
          c_abs(g_R_data, g_R_size, u_data, b_R_size);
          st.site = &m_emlrtRSI;
          c_power(u_data, b_R_size, g_R_data, g_R_size);
          if ((c2_size[1] != g_R_size[1]) &&
              ((c2_size[1] != 1) && (g_R_size[1] != 1))) {
            emlrtDimSizeImpxCheckR2021b(c2_size[1], g_R_size[1], &s_emlrtECI,
                                        (emlrtConstCTX)sp);
          }
          if (c2_size[1] == g_R_size[1]) {
            c_loop_ub = c2_size[1] - 1;
            c2_size[0] = 1;
            scalarLB = (c2_size[1] / 2) << 1;
            vectorUB = scalarLB - 2;
            for (i = 0; i <= vectorUB; i += 2) {
              r = _mm_loadu_pd(&c2_data[i]);
              r1 = _mm_loadu_pd(&g_R_data[i]);
              _mm_storeu_pd(&c2_data[i], _mm_add_pd(r, r1));
            }
            for (i = scalarLB; i <= c_loop_ub; i++) {
              c2_data[i] += g_R_data[i];
            }
          } else {
            plus(c2_data, c2_size, g_R_data, g_R_size);
          }
          if (c2_size[1] < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, c2_size[1], &ic_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          st.site = &l_emlrtRSI;
          if (((int32_T)(b_k + 1.0) < 1) ||
              ((int32_T)(b_k + 1.0) > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(b_k + 1.0), 1, R_size[0],
                                          &hc_emlrtBCI, &st);
          }
          kmax = muDoubleScalarAbs(R_data[c_R_tmp_tmp]);
          c_st.site = &we_emlrtRSI;
          d_st.site = &xe_emlrtRSI;
          c2_data[0] = kmax * kmax;
          kmax = R_data[c_R_tmp_tmp - 1];
          if ((int32_T)b_k < 1) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, (int32_T)b_k,
                                          &ve_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                          &we_emlrtBCI, (emlrtConstCTX)sp);
          }
          R_tmp_tmp = r_data[(int32_T)b_k - 1];
          R_data[c_R_tmp_tmp - 1] = R_tmp_tmp;
          if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                          &jc_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                          &kc_emlrtBCI, (emlrtConstCTX)sp);
          }
          e_R_size[0] = (int32_T)b_k;
          e_R_size[1] = (int32_T)b_k;
          for (i = 0; i < b_loop_ub; i++) {
            for (i2 = 0; i2 < b_loop_ub; i2++) {
              c_R_data[i2 + (int32_T)b_k * i] = R_data[i2 + R_size[0] * i];
            }
            g_R_data[i] = R_data[i + i1];
          }
          st.site = &k_emlrtRSI;
          u_size = b_mldivide(&st, c_R_data, e_R_size, g_R_data, (int32_T)b_k,
                              u_data);
          /*  for rank-one update of T */
          if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                          &ye_emlrtBCI, (emlrtConstCTX)sp);
          }
          R_data[c_R_tmp_tmp - 1] = kmax;
          /*  half-update T */
          if (b_k - 1.0 < 1.0) {
            b_loop_ub = 0;
            c_loop_ub = 0;
            d_loop_ub = 0;
          } else {
            if (((int32_T)b_k - 1 < 1) || ((int32_T)b_k - 1 > R_size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k - 1, 1, R_size[0],
                                            &lc_emlrtBCI, (emlrtConstCTX)sp);
            }
            b_loop_ub = (int32_T)b_k - 1;
            if (((int32_T)b_k - 1 < 1) || ((int32_T)b_k - 1 > 5)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k - 1, 1, 5,
                                            &mc_emlrtBCI, (emlrtConstCTX)sp);
            }
            c_loop_ub = (int32_T)b_k - 1;
            if (((int32_T)b_k - 1 < 1) || ((int32_T)b_k - 1 > (int32_T)b_k)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k - 1, 1, (int32_T)b_k,
                                            &nc_emlrtBCI, (emlrtConstCTX)sp);
            }
            d_loop_ub = (int32_T)b_k - 1;
          }
          c_k[0] = 1;
          c_k[1] = d_loop_ub;
          st.site = &j_emlrtRSI;
          indexShapeCheck(&st, (int32_T)b_k, c_k);
          f_R_size[0] = b_loop_ub;
          f_R_size[1] = c_loop_ub;
          for (i = 0; i < c_loop_ub; i++) {
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              d_R_data[i1 + b_loop_ub * i] = R_data[i1 + R_size[0] * i];
            }
          }
          if (d_loop_ub - 1 >= 0) {
            memcpy(&e_R_data[0], &r_data[0],
                   (uint32_T)d_loop_ub * sizeof(real_T));
          }
          st.site = &j_emlrtRSI;
          k = b_mldivide(&st, d_R_data, f_R_size, e_R_data, d_loop_ub, v_data);
          if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                          &af_emlrtBCI, (emlrtConstCTX)sp);
          }
          if ((int32_T)b_k < 1) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, (int32_T)b_k,
                                          &bf_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                          &cf_emlrtBCI, (emlrtConstCTX)sp);
          }
          R_data[c_R_tmp_tmp - 1] /= R_tmp_tmp;
          if (b_k - 1.0 < 1.0) {
            b_loop_ub = 0;
          } else {
            if (((int32_T)b_k - 1 < 1) || ((int32_T)b_k - 1 > R_size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k - 1, 1, R_size[0],
                                            &oc_emlrtBCI, (emlrtConstCTX)sp);
            }
            b_loop_ub = (int32_T)b_k - 1;
          }
          if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                          &df_emlrtBCI, (emlrtConstCTX)sp);
          }
          kmax = 1.0 - R_data[c_R_tmp_tmp - 1];
          idx = (k / 2) << 1;
          e_loop_ub = idx - 2;
          for (i = 0; i <= e_loop_ub; i += 2) {
            r = _mm_loadu_pd(&v_data[i]);
            _mm_storeu_pd(&e_R_data[i], _mm_mul_pd(r, _mm_set1_pd(kmax)));
          }
          for (i = idx; i < k; i++) {
            e_R_data[i] = v_data[i] * kmax;
          }
          emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &k, 1, &t_emlrtECI,
                                        (emlrtCTX)sp);
          for (i = 0; i < b_loop_ub; i++) {
            R_data[i + b_R_tmp_tmp] = e_R_data[i];
          }
          if (b_k - 1.0 < 1.0) {
            b_loop_ub = 0;
          } else {
            if (((int32_T)b_k - 1 < 1) || ((int32_T)b_k - 1 > R_size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k - 1, 1, R_size[0],
                                            &pc_emlrtBCI, (emlrtConstCTX)sp);
            }
            b_loop_ub = (int32_T)b_k - 1;
          }
          if (b_k + 2.0 > 5.0) {
            i = -1;
            i1 = -1;
            i2 = -1;
            i3 = -1;
          } else {
            if (((int32_T)b_k + 2 < 1) || ((int32_T)b_k + 2 > 5)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k + 2, 1, 5,
                                            &qc_emlrtBCI, (emlrtConstCTX)sp);
            }
            i = (int32_T)b_k;
            i1 = 4;
            i2 = (int32_T)b_k;
            i3 = 4;
          }
          i4 = i3 - i2;
          if ((loop_ub != i4) && ((loop_ub != 1) && (i4 != 1))) {
            emlrtDimSizeImpxCheckR2021b(loop_ub, i4, &u_emlrtECI,
                                        (emlrtConstCTX)sp);
          }
          if ((int32_T)b_k < 1) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, (int32_T)b_k,
                                          &rc_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (loop_ub == i4) {
            for (i3 = 0; i3 <= e_loop_ub; i3 += 2) {
              r = _mm_loadu_pd(&v_data[i3]);
              _mm_storeu_pd(&v_data[i3], _mm_div_pd(r, _mm_set1_pd(R_tmp_tmp)));
            }
            for (i3 = idx; i3 < k; i3++) {
              v_data[i3] /= R_tmp_tmp;
            }
            y_size[0] = k;
            y_size[1] = loop_ub;
            for (i3 = 0; i3 < loop_ub; i3++) {
              s_data[i3] -=
                  R_data[((int32_T)b_k + R_size[0] * ((i2 + i3) + 1)) - 1];
              scalarLB = (k / 2) << 1;
              vectorUB = scalarLB - 2;
              for (i4 = 0; i4 <= vectorUB; i4 += 2) {
                r = _mm_loadu_pd(&v_data[i4]);
                _mm_storeu_pd(&R[i4 + k * i3],
                              _mm_mul_pd(r, _mm_set1_pd(s_data[i3])));
              }
              for (i4 = scalarLB; i4 < k; i4++) {
                R[i4 + k * i3] = v_data[i4] * s_data[i3];
              }
            }
          } else {
            binary_expand_op_6(R, y_size, v_data, &k, r_data, b_k, s_data,
                               c_R_size, R_data, R_size, i2 + 1, i3);
          }
          if ((b_loop_ub != y_size[0]) &&
              ((b_loop_ub != 1) && (y_size[0] != 1))) {
            emlrtDimSizeImpxCheckR2021b(b_loop_ub, y_size[0], &v_emlrtECI,
                                        (emlrtConstCTX)sp);
          }
          loop_ub = i1 - i;
          if ((loop_ub != y_size[1]) && ((loop_ub != 1) && (y_size[1] != 1))) {
            emlrtDimSizeImpxCheckR2021b(loop_ub, y_size[1], &w_emlrtECI,
                                        (emlrtConstCTX)sp);
          }
          if (b_k - 1.0 < 1.0) {
            c_loop_ub = 0;
          } else {
            if (((int32_T)b_k - 1 < 1) || ((int32_T)b_k - 1 > R_size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k - 1, 1, R_size[0],
                                            &sc_emlrtBCI, (emlrtConstCTX)sp);
            }
            c_loop_ub = (int32_T)b_k - 1;
          }
          if (b_k + 2.0 > 5.0) {
            i2 = 0;
            i3 = 0;
          } else {
            if (((int32_T)b_k + 2 < 1) || ((int32_T)b_k + 2 > 5)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k + 2, 1, 5,
                                            &tc_emlrtBCI, (emlrtConstCTX)sp);
            }
            i2 = (int32_T)b_k + 1;
            i3 = 5;
          }
          if ((b_loop_ub == y_size[0]) && (loop_ub == y_size[1])) {
            d_tmp_size[0] = b_loop_ub;
            d_tmp_size[1] = loop_ub;
            for (i1 = 0; i1 < loop_ub; i1++) {
              scalarLB = (b_loop_ub / 2) << 1;
              vectorUB = scalarLB - 2;
              for (i4 = 0; i4 <= vectorUB; i4 += 2) {
                r = _mm_loadu_pd(&R_data[i4 + R_size[0] * ((i + i1) + 1)]);
                r1 = _mm_loadu_pd(&R[i4 + y_size[0] * i1]);
                _mm_storeu_pd(&h_tmp_data[i4 + b_loop_ub * i1],
                              _mm_add_pd(r, r1));
              }
              for (i4 = scalarLB; i4 < b_loop_ub; i4++) {
                h_tmp_data[i4 + b_loop_ub * i1] =
                    R_data[i4 + R_size[0] * ((i + i1) + 1)] +
                    R[i4 + y_size[0] * i1];
              }
            }
          } else {
            binary_expand_op_5(h_tmp_data, d_tmp_size, R_data, R_size,
                               b_loop_ub, i + 1, i1, R, y_size);
          }
          c_k[0] = c_loop_ub;
          k_tmp = i3 - i2;
          c_k[1] = k_tmp;
          emlrtSubAssignSizeCheckR2012b(&c_k[0], 2, &d_tmp_size[0], 2,
                                        &x_emlrtECI, (emlrtCTX)sp);
          for (i = 0; i < k_tmp; i++) {
            for (i1 = 0; i1 < c_loop_ub; i1++) {
              R_data[i1 + R_size[0] * (i2 + i)] =
                  h_tmp_data[i1 + c_loop_ub * i];
            }
          }
          if (b_k + 2.0 > 5.0) {
            i = 0;
            i1 = 0;
            i2 = 0;
            i3 = 0;
          } else {
            if (((int32_T)b_k + 2 < 1) || ((int32_T)b_k + 2 > 5)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k + 2, 1, 5,
                                            &uc_emlrtBCI, (emlrtConstCTX)sp);
            }
            i = (int32_T)b_k + 1;
            i1 = 5;
            i2 = (int32_T)b_k + 1;
            i3 = 5;
          }
          if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                          &vc_emlrtBCI, (emlrtConstCTX)sp);
          }
          if ((int32_T)b_k < 1) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, (int32_T)b_k,
                                          &ef_emlrtBCI, (emlrtConstCTX)sp);
          }
          c_R_size[0] = 1;
          loop_ub = i1 - i;
          c_R_size[1] = loop_ub;
          for (i1 = 0; i1 < loop_ub; i1++) {
            s_data[i1] =
                R_data[((int32_T)b_k + R_size[0] * (i + i1)) - 1] / R_tmp_tmp;
          }
          c_k[0] = 1;
          k_tmp = i3 - i2;
          c_k[1] = k_tmp;
          emlrtSubAssignSizeCheckR2012b(&c_k[0], 2, &c_R_size[0], 2,
                                        &y_emlrtECI, (emlrtCTX)sp);
          for (i = 0; i < k_tmp; i++) {
            R_data[((int32_T)b_k + R_size[0] * (i2 + i)) - 1] = s_data[i];
          }
        }
        /*  swap k-th and (k+1)-th columns; update inverse row norms */
        k_idx_1_tmp = (int32_T)(b_k - 1.0);
        e_loop_ub = p[(int32_T)(b_k - 1.0)];
        p[(int32_T)(b_k - 1.0)] = p[(int32_T)((b_k + 1.0) - 1.0)];
        p[(int32_T)((b_k + 1.0) - 1.0)] = e_loop_ub;
        e_loop_ub = R_size[0];
        b_R_size[0] = R_size[0];
        b_R_size[1] = 2;
        c_k[0] = R_size[0];
        c_k[1] = 2;
        emlrtSubAssignSizeCheckR2012b(&b_R_size[0], 2, &c_k[0], 2, &ab_emlrtECI,
                                      (emlrtCTX)sp);
        c_k[0] = (int32_T)((b_k + 1.0) - 1.0);
        c_k[1] = (int32_T)(b_k - 1.0);
        b_R_size[0] = (int32_T)(b_k - 1.0);
        b_R_size[1] = (int32_T)((b_k + 1.0) - 1.0);
        k_tmp = R_size[0];
        for (i = 0; i < 2; i++) {
          for (i1 = 0; i1 < e_loop_ub; i1++) {
            f_R_data[i1 + k_tmp * i] = R_data[i1 + R_size[0] * c_k[i]];
          }
        }
        for (i = 0; i < 2; i++) {
          for (i1 = 0; i1 < e_loop_ub; i1++) {
            R_data[i1 + R_size[0] * b_R_size[i]] = f_R_data[i1 + k_tmp * i];
          }
        }
        if (b_k - 1.0 < 1.0) {
          loop_ub = 0;
        } else {
          if (r2_size < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, r2_size, &wc_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (((int32_T)b_k - 1 < 1) || ((int32_T)b_k - 1 > r2_size)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k - 1, 1, r2_size,
                                          &xc_emlrtBCI, (emlrtConstCTX)sp);
          }
          loop_ub = (int32_T)b_k - 1;
        }
        c_k[0] = 1;
        c_k[1] = loop_ub;
        st.site = &i_emlrtRSI;
        indexShapeCheck(&st, r2_size, c_k);
        if (b_k - 1.0 < 1.0) {
          b_loop_ub = 0;
          c_loop_ub = 0;
          d_loop_ub = 0;
        } else {
          if (R_size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, R_size[0], &yc_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (((int32_T)b_k - 1 < 1) || ((int32_T)b_k - 1 > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k - 1, 1, R_size[0],
                                          &ad_emlrtBCI, (emlrtConstCTX)sp);
          }
          b_loop_ub = (int32_T)b_k - 1;
          if (((int32_T)b_k - 1 < 1) || ((int32_T)b_k - 1 > 5)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k - 1, 1, 5, &bd_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          c_loop_ub = (int32_T)b_k - 1;
          if (((int32_T)b_k - 1 < 1) || ((int32_T)b_k - 1 > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k - 1, 1, R_size[0],
                                          &cd_emlrtBCI, (emlrtConstCTX)sp);
          }
          d_loop_ub = (int32_T)b_k - 1;
        }
        f_R_size[0] = b_loop_ub;
        f_R_size[1] = c_loop_ub;
        for (i = 0; i < c_loop_ub; i++) {
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            d_R_data[i1 + b_loop_ub * i] = R_data[i1 + R_size[0] * i];
          }
        }
        for (i = 0; i < d_loop_ub; i++) {
          e_R_data[i] = R_data[i + b_R_tmp_tmp];
        }
        st.site = &i_emlrtRSI;
        k = b_mldivide(&st, d_R_data, f_R_size, e_R_data, d_loop_ub, v_data);
        if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                        &me_emlrtBCI, (emlrtConstCTX)sp);
        }
        kmax = R_data[c_R_tmp_tmp - 1];
        scalarLB = (k / 2) << 1;
        vectorUB = scalarLB - 2;
        for (i = 0; i <= vectorUB; i += 2) {
          r = _mm_loadu_pd(&v_data[i]);
          _mm_storeu_pd(&e_R_data[i], _mm_div_pd(r, _mm_set1_pd(kmax)));
        }
        for (i = scalarLB; i < k; i++) {
          e_R_data[i] = v_data[i] / kmax;
        }
        st.site = &i_emlrtRSI;
        e_loop_ub = b_abs(e_R_data, k, varargin_1_data);
        st.site = &i_emlrtRSI;
        k_tmp = b_power(varargin_1_data, e_loop_ub, e_R_data);
        if ((loop_ub != k_tmp) && ((loop_ub != 1) && (k_tmp != 1))) {
          emlrtDimSizeImpxCheckR2021b(loop_ub, k_tmp, &bb_emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        if (b_k - 1.0 < 1.0) {
          b_loop_ub = 0;
        } else {
          if (r2_size < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, r2_size, &dd_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (((int32_T)b_k - 1 < 1) || ((int32_T)b_k - 1 > r2_size)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k - 1, 1, r2_size,
                                          &ed_emlrtBCI, (emlrtConstCTX)sp);
          }
          b_loop_ub = (int32_T)b_k - 1;
        }
        if (loop_ub == k_tmp) {
          k_tmp = loop_ub;
          scalarLB = (loop_ub / 2) << 1;
          vectorUB = scalarLB - 2;
          for (i = 0; i <= vectorUB; i += 2) {
            r = _mm_loadu_pd(&r2_data[0]);
            r1 = _mm_loadu_pd(&e_R_data[0]);
            _mm_storeu_pd(&e_R_data[0], _mm_add_pd(r, r1));
          }
          for (i = scalarLB; i < loop_ub; i++) {
            e_R_data[i] += r2_data[i];
          }
        } else {
          binary_expand_op_4(e_R_data, &k_tmp, r2_data, loop_ub);
        }
        if (b_loop_ub != k_tmp) {
          emlrtSubAssignSizeCheck1dR2017a(b_loop_ub, k_tmp, &cb_emlrtECI,
                                          (emlrtConstCTX)sp);
        }
        if (b_loop_ub - 1 >= 0) {
          memcpy(&r2_data[0], &e_R_data[0],
                 (uint32_T)b_loop_ub * sizeof(real_T));
        }
        st.site = &h_emlrtRSI;
        loop_ub = (int32_T)b_k;
        kmax = muDoubleScalarAbs(kmax);
        c_st.site = &we_emlrtRSI;
        d_st.site = &xe_emlrtRSI;
        if (((int32_T)b_k < 1) || ((int32_T)b_k > r2_size)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, r2_size, &oe_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        r2_data[(int32_T)b_k - 1] = 1.0 / (kmax * kmax);
        /*  finish update of T by Sherman-Morrison */
        if (((int32_T)b_k < 1) || ((int32_T)b_k > u_size)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, u_size, &pe_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        u_data[(int32_T)b_k - 1]--;
        if (R_size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, R_size[0], &fd_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                        &gd_emlrtBCI, (emlrtConstCTX)sp);
        }
        if (((int32_T)b_k < 1) || ((int32_T)b_k > u_size)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, u_size, &qe_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        R_tmp_tmp = u_data[(int32_T)b_k - 1] + 1.0;
        d_R_size[0] = u_size;
        d_R_size[1] = 5 - (int32_T)b_k;
        for (i = 0; i <= b_loop_ub_tmp + 4; i++) {
          scalarLB = (u_size / 2) << 1;
          vectorUB = scalarLB - 2;
          for (i1 = 0; i1 <= vectorUB; i1 += 2) {
            r = _mm_loadu_pd(&u_data[i1]);
            _mm_storeu_pd(
                &b_tmp_data[i1 + u_size * i],
                _mm_div_pd(
                    _mm_add_pd(
                        _mm_set1_pd(0.0),
                        _mm_mul_pd(r,
                                   _mm_set1_pd(
                                       R_data[((int32_T)b_k +
                                               R_size[0] * ((int32_T)b_k + i)) -
                                              1]))),
                    _mm_set1_pd(R_tmp_tmp)));
          }
          for (i1 = scalarLB; i1 < u_size; i1++) {
            b_tmp_data[i1 + u_size * i] =
                u_data[i1] *
                R_data[((int32_T)b_k + R_size[0] * ((int32_T)b_k + i)) - 1] /
                R_tmp_tmp;
          }
        }
        if (((int32_T)b_k != u_size) &&
            (((int32_T)b_k != 1) && (u_size != 1))) {
          emlrtDimSizeImpxCheckR2021b((int32_T)b_k, u_size, &db_emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                        &hd_emlrtBCI, (emlrtConstCTX)sp);
        }
        if ((int32_T)b_k == u_size) {
          d_R_size[0] = (int32_T)b_k;
          d_R_size[1] = 5 - (int32_T)b_k;
          for (i = 0; i <= b_loop_ub_tmp + 4; i++) {
            scalarLB = ((int32_T)b_k / 2) << 1;
            vectorUB = scalarLB - 2;
            for (i1 = 0; i1 <= vectorUB; i1 += 2) {
              r = _mm_loadu_pd(&R_data[i1 + R_size[0] * ((int32_T)b_k + i)]);
              i2 = i1 + (int32_T)b_k * i;
              r1 = _mm_loadu_pd(&b_tmp_data[i2]);
              _mm_storeu_pd(&b_tmp_data[i2], _mm_sub_pd(r, r1));
            }
            for (i1 = scalarLB; i1 < loop_ub; i1++) {
              e_loop_ub = i1 + (int32_T)b_k * i;
              b_tmp_data[e_loop_ub] =
                  R_data[i1 + R_size[0] * ((int32_T)b_k + i)] -
                  b_tmp_data[e_loop_ub];
            }
          }
        } else {
          binary_expand_op_3(b_tmp_data, d_R_size, R_data, R_size, b_k);
        }
        c_k[0] = (int32_T)b_k;
        e_loop_ub = (int32_T)(5.0 - ((b_k + 1.0) - 1.0));
        c_k[1] = (int32_T)(5.0 - ((b_k + 1.0) - 1.0));
        emlrtSubAssignSizeCheckR2012b(&c_k[0], 2, &d_R_size[0], 2, &eb_emlrtECI,
                                      (emlrtCTX)sp);
        for (i = 0; i < e_loop_ub; i++) {
          for (i1 = 0; i1 < loop_ub; i1++) {
            R_data[i1 + R_size[0] * ((int32_T)b_k + i)] =
                b_tmp_data[i1 + (int32_T)b_k * i];
          }
        }
        /*  check if tolerance can be met by reducing rank */
        k_tmp = r2_size;
        if (r2_size - 1 >= 0) {
          memcpy(&r_data[0], &r2_data[0], (uint32_T)r2_size * sizeof(real_T));
        }
        st.site = &g_emlrtRSI;
        b_sqrt(&st, r_data, &k_tmp);
        scalarLB = (k_tmp / 2) << 1;
        vectorUB = scalarLB - 2;
        for (i = 0; i <= vectorUB; i += 2) {
          r = _mm_loadu_pd(&r_data[i]);
          _mm_storeu_pd(&r_data[i], _mm_div_pd(_mm_set1_pd(1.0), r));
        }
        for (i = scalarLB; i < k_tmp; i++) {
          r_data[i] = 1.0 / r_data[i];
        }
        st.site = &g_emlrtRSI;
        c_st.site = &wg_emlrtRSI;
        d_st.site = &xg_emlrtRSI;
        e_st.site = &yg_emlrtRSI;
        if (k_tmp < 1) {
          emlrtErrorWithMessageIdR2018a(
              &e_st, &emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
              "Coder:toolbox:eml_min_or_max_varDimZero", 0);
        }
        if (k_tmp <= 2) {
          if (k_tmp == 1) {
            kmax = r_data[0];
            idx = 1;
          } else if ((r_data[0] > r_data[1]) ||
                     (muDoubleScalarIsNaN(r_data[0]) &&
                      (!muDoubleScalarIsNaN(r_data[1])))) {
            kmax = r_data[1];
            idx = 2;
          } else {
            kmax = r_data[0];
            idx = 1;
          }
        } else {
          if (!muDoubleScalarIsNaN(r_data[0])) {
            idx = 1;
          } else {
            idx = 0;
            k = 2;
            exitg2 = false;
            while ((!exitg2) && (k <= k_tmp)) {
              if (!muDoubleScalarIsNaN(r_data[k - 1])) {
                idx = k;
                exitg2 = true;
              } else {
                k++;
              }
            }
          }
          if (idx == 0) {
            kmax = r_data[0];
            idx = 1;
          } else {
            kmax = r_data[idx - 1];
            i = idx + 1;
            for (k = i; k <= k_tmp; k++) {
              R_tmp_tmp = r_data[k - 1];
              if (kmax > R_tmp_tmp) {
                kmax = R_tmp_tmp;
                idx = k;
              }
            }
          }
        }
        if (!(kmax > tol)) {
          int8_T input_sizes_idx_1;
          int8_T sizes_idx_1;
          boolean_T empty_non_axis_sizes;
          /*  no -- loop again */
          /*  can drop i-th column from skeletons; first swap with k-th column
           */
          if (idx < (int32_T)b_k) {
            real_T g_tmp_data[6];
            e_loop_ub = p[idx - 1];
            p[idx - 1] = p[(int32_T)b_k - 1];
            p[(int32_T)b_k - 1] = e_loop_ub;
            if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                            &id_emlrtBCI, (emlrtConstCTX)sp);
            }
            if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                            &jd_emlrtBCI, (emlrtConstCTX)sp);
            }
            if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                            &kd_emlrtBCI, (emlrtConstCTX)sp);
            }
            b_tmp_size[0] = 1;
            b_tmp_size[1] = (int32_T)b_k;
            for (i = 0; i < loop_ub; i++) {
              c_tmp_data[i] = (i + 1 == idx);
            }
            c_tmp_size[0] = 1;
            c_tmp_size[1] = (int32_T)(b_k - 1.0) + 1;
            for (i = 0; i <= k_idx_1_tmp; i++) {
              d_tmp_data[i] = ((real_T)i + 1.0 == b_k);
            }
            if (((int32_T)b_k != (int32_T)(b_k - 1.0) + 1) &&
                (((int32_T)b_k != 1) && ((int32_T)(b_k - 1.0) + 1 != 1))) {
              emlrtDimSizeImpxCheckR2021b((int32_T)b_k,
                                          (int32_T)(b_k - 1.0) + 1,
                                          &fb_emlrtECI, (emlrtConstCTX)sp);
            }
            st.site = &f_emlrtRSI;
            eye(&st, b_k, c_R_data, e_R_size);
            d_R_size[0] = (int32_T)b_k;
            d_R_size[1] = (int32_T)b_k;
            for (i = 0; i < loop_ub; i++) {
              for (i1 = 0; i1 < loop_ub; i1++) {
                b_tmp_data[i1 + (int32_T)b_k * i] = R_data[i1 + R_size[0] * i];
              }
            }
            if ((int32_T)b_k == (int32_T)(b_k - 1.0) + 1) {
              scalarLB = ((int32_T)b_k / 2) << 1;
              vectorUB = scalarLB - 2;
              for (i = 0; i <= vectorUB; i += 2) {
                r = _mm_loadu_pd(&R_data[i + R_size[0] * ((int32_T)b_k - 1)]);
                r1 = _mm_loadu_pd(&R_data[i + R_size[0] * (idx - 1)]);
                _mm_storeu_pd(&g_R_data[i], _mm_sub_pd(r, r1));
              }
              for (i = scalarLB; i < loop_ub; i++) {
                g_R_data[i] = R_data[i + R_size[0] * ((int32_T)b_k - 1)] -
                              R_data[i + R_size[0] * (idx - 1)];
              }
              for (i = 0; i < loop_ub; i++) {
                r_data[i] = c_tmp_data[i] - d_tmp_data[i];
              }
              st.site = &f_emlrtRSI;
              qrupdate(&st, c_R_data, e_R_size, b_tmp_data, d_R_size, g_R_data,
                       (int32_T)b_k, r_data, (int32_T)b_k);
            } else {
              st.site = &f_emlrtRSI;
              binary_expand_op_2(&st, f_emlrtRSI, c_R_data, e_R_size,
                                 b_tmp_data, d_R_size, R_data, R_size, b_k, idx,
                                 c_tmp_data, b_tmp_size, d_tmp_data,
                                 c_tmp_size);
            }
            if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                            &ld_emlrtBCI, (emlrtConstCTX)sp);
            }
            c_k[0] = (int32_T)b_k;
            c_k[1] = (int32_T)b_k;
            emlrtSubAssignSizeCheckR2012b(&c_k[0], 2, &d_R_size[0], 2,
                                          &gb_emlrtECI, (emlrtCTX)sp);
            for (i = 0; i < loop_ub; i++) {
              for (i1 = 0; i1 < loop_ub; i1++) {
                R_data[i1 + R_size[0] * i] = b_tmp_data[i1 + (int32_T)b_k * i];
              }
            }
            if (idx > R_size[0]) {
              emlrtDynamicBoundsCheckR2012b(idx, 1, R_size[0], &se_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            if (((int8_T)b_k < 1) || ((int8_T)b_k > R_size[0])) {
              emlrtDynamicBoundsCheckR2012b((int8_T)b_k, 1, R_size[0],
                                            &se_emlrtBCI, (emlrtConstCTX)sp);
            }
            if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                            &ue_emlrtBCI, (emlrtConstCTX)sp);
            }
            if (idx > R_size[0]) {
              emlrtDynamicBoundsCheckR2012b(idx, 1, R_size[0], &ue_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            for (i = 0; i <= b_loop_ub_tmp + 4; i++) {
              e_loop_ub = R_size[0] * ((int32_T)b_k + i);
              g_tmp_data[2 * i] = R_data[((int32_T)b_k + e_loop_ub) - 1];
              g_tmp_data[2 * i + 1] = R_data[(idx + e_loop_ub) - 1];
            }
            c_k[0] = 2;
            c_k[1] = 5 - (int32_T)b_k;
            b_R_size[0] = 2;
            b_R_size[1] = 5 - (int32_T)b_k;
            emlrtSubAssignSizeCheckR2012b(&c_k[0], 2, &b_R_size[0], 2,
                                          &hb_emlrtECI, (emlrtCTX)sp);
            for (i = 0; i < loop_ub_tmp; i++) {
              e_loop_ub = R_size[0] * ((int32_T)b_k + i);
              R_data[(int8_T)(idx - 1) + e_loop_ub] = g_tmp_data[2 * i];
              R_data[(int8_T)((int8_T)b_k - 1) + e_loop_ub] =
                  g_tmp_data[2 * i + 1];
            }
            if (((int32_T)b_k < 1) || ((int32_T)b_k > r2_size)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, r2_size,
                                            &xe_emlrtBCI, (emlrtConstCTX)sp);
            }
            if (idx > r2_size) {
              emlrtDynamicBoundsCheckR2012b(idx, 1, r2_size, &xe_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            d_k[1] = r2_data[idx - 1];
            r2_data[idx - 1] = r2_data[(int32_T)b_k - 1];
            r2_data[(int32_T)b_k - 1] = d_k[1];
          }
          /*  decrease rank from k to k-1 */
          c2_size[0] = 1;
          loop_ub_tmp = 6 - (int32_T)b_k;
          c2_size[1] = 6 - (int32_T)b_k;
          if (loop_ub_tmp - 1 >= 0) {
            memset(&c2_data[0], 0, (uint32_T)loop_ub_tmp * sizeof(real_T));
          }
          /*  no R22 block */
          if (b_k - 1.0 < 1.0) {
            loop_ub = 0;
          } else {
            if (r2_size < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, r2_size, &md_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            if (((int32_T)b_k - 1 < 1) || ((int32_T)b_k - 1 > r2_size)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k - 1, 1, r2_size,
                                            &nd_emlrtBCI, (emlrtConstCTX)sp);
            }
            loop_ub = (int32_T)b_k - 1;
          }
          c_k[0] = 1;
          c_k[1] = loop_ub;
          st.site = &e_emlrtRSI;
          indexShapeCheck(&st, r2_size, c_k);
          if (b_k - 1.0 < 1.0) {
            b_loop_ub = 0;
            c_loop_ub = 0;
            d_loop_ub = 0;
          } else {
            if (((int32_T)b_k - 1 < 1) || ((int32_T)b_k - 1 > R_size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k - 1, 1, R_size[0],
                                            &od_emlrtBCI, (emlrtConstCTX)sp);
            }
            b_loop_ub = (int32_T)b_k - 1;
            if (((int32_T)b_k - 1 < 1) || ((int32_T)b_k - 1 > 5)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k - 1, 1, 5,
                                            &pd_emlrtBCI, (emlrtConstCTX)sp);
            }
            c_loop_ub = (int32_T)b_k - 1;
            if (((int32_T)b_k - 1 < 1) || ((int32_T)b_k - 1 > R_size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k - 1, 1, R_size[0],
                                            &qd_emlrtBCI, (emlrtConstCTX)sp);
            }
            d_loop_ub = (int32_T)b_k - 1;
          }
          f_R_size[0] = b_loop_ub;
          f_R_size[1] = c_loop_ub;
          for (i = 0; i < c_loop_ub; i++) {
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              d_R_data[i1 + b_loop_ub * i] = R_data[i1 + R_size[0] * i];
            }
          }
          for (i = 0; i < d_loop_ub; i++) {
            e_R_data[i] = R_data[i + b_R_tmp_tmp];
          }
          st.site = &e_emlrtRSI;
          k = b_mldivide(&st, d_R_data, f_R_size, e_R_data, d_loop_ub, v_data);
          if (((int32_T)b_k < 1) || ((int32_T)b_k > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                          &te_emlrtBCI, (emlrtConstCTX)sp);
          }
          kmax = R_data[c_R_tmp_tmp - 1];
          scalarLB = (k / 2) << 1;
          vectorUB = scalarLB - 2;
          for (i = 0; i <= vectorUB; i += 2) {
            r = _mm_loadu_pd(&v_data[i]);
            _mm_storeu_pd(&e_R_data[i], _mm_div_pd(r, _mm_set1_pd(kmax)));
          }
          for (i = scalarLB; i < k; i++) {
            e_R_data[i] = v_data[i] / kmax;
          }
          st.site = &e_emlrtRSI;
          e_loop_ub = b_abs(e_R_data, k, varargin_1_data);
          st.site = &e_emlrtRSI;
          k_tmp = b_power(varargin_1_data, e_loop_ub, e_R_data);
          if ((loop_ub != k_tmp) && ((loop_ub != 1) && (k_tmp != 1))) {
            emlrtDimSizeImpxCheckR2021b(loop_ub, k_tmp, &ib_emlrtECI,
                                        (emlrtConstCTX)sp);
          }
          if (loop_ub == k_tmp) {
            scalarLB = (loop_ub / 2) << 1;
            vectorUB = scalarLB - 2;
            for (i = 0; i <= vectorUB; i += 2) {
              r = _mm_loadu_pd(&r2_data[0]);
              r1 = _mm_loadu_pd(&e_R_data[0]);
              _mm_storeu_pd(&r2_data[0], _mm_sub_pd(r, r1));
            }
            for (i = scalarLB; i < loop_ub; i++) {
              r2_data[i] -= e_R_data[i];
            }
            r2_size = loop_ub;
          } else {
            r2_size = binary_expand_op_1(r2_data, loop_ub, e_R_data, &k_tmp);
          }
          b_k--;
          if (b_k < 1.0) {
            loop_ub = 0;
            b_loop_ub = 0;
            c_loop_ub = 0;
          } else {
            if ((int32_T)b_k > R_size[0]) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                            &rd_emlrtBCI, (emlrtConstCTX)sp);
            }
            loop_ub = k_idx_1_tmp;
            b_loop_ub = (int32_T)b_k;
            if ((int32_T)b_k > R_size[0]) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                            &sd_emlrtBCI, (emlrtConstCTX)sp);
            }
            c_loop_ub = k_idx_1_tmp;
          }
          f_R_size[0] = loop_ub;
          f_R_size[1] = b_loop_ub;
          for (i = 0; i < b_loop_ub; i++) {
            for (i1 = 0; i1 < loop_ub; i1++) {
              d_R_data[i1 + loop_ub * i] = R_data[i1 + R_size[0] * i];
            }
          }
          for (i = 0; i < c_loop_ub; i++) {
            e_R_data[i] = R_data[i + R_size[0] * k_idx_1_tmp];
          }
          st.site = &d_emlrtRSI;
          k_tmp =
              b_mldivide(&st, d_R_data, f_R_size, e_R_data, c_loop_ub, r_data);
          if (b_k < 1.0) {
            loop_ub = 0;
          } else {
            if ((int32_T)b_k > R_size[0]) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                            &td_emlrtBCI, (emlrtConstCTX)sp);
            }
            loop_ub = k_idx_1_tmp;
          }
          if (((int32_T)(b_k + 1.0) < 1) ||
              ((int32_T)(b_k + 1.0) > R_size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(b_k + 1.0), 1, R_size[0],
                                          &ud_emlrtBCI, (emlrtConstCTX)sp);
          }
          y_size[0] = k_tmp;
          loop_ub_tmp = 4 - (int32_T)b_k;
          y_size[1] = 4 - (int32_T)b_k;
          for (i = 0; i < loop_ub_tmp; i++) {
            scalarLB = (k_tmp / 2) << 1;
            vectorUB = scalarLB - 2;
            for (i1 = 0; i1 <= vectorUB; i1 += 2) {
              r = _mm_loadu_pd(&r_data[i1]);
              _mm_storeu_pd(
                  &R[i1 + k_tmp * i],
                  _mm_mul_pd(
                      r, _mm_set1_pd(
                             R_data[k_idx_1_tmp +
                                    R_size[0] * (((int32_T)b_k + i) + 1)])));
            }
            for (i1 = scalarLB; i1 < k_tmp; i1++) {
              R[i1 + k_tmp * i] =
                  r_data[i1] *
                  R_data[k_idx_1_tmp + R_size[0] * (((int32_T)b_k + i) + 1)];
            }
          }
          if ((loop_ub != k_tmp) && ((loop_ub != 1) && (k_tmp != 1))) {
            emlrtDimSizeImpxCheckR2021b(loop_ub, k_tmp, &jb_emlrtECI,
                                        (emlrtConstCTX)sp);
          }
          if (b_k < 1.0) {
            b_loop_ub = 0;
          } else {
            if ((int32_T)b_k > R_size[0]) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                            &vd_emlrtBCI, (emlrtConstCTX)sp);
            }
            b_loop_ub = k_idx_1_tmp;
          }
          st.site = &c_emlrtRSI;
          if (loop_ub == k_tmp) {
            varargin_2_size[0] = loop_ub;
            varargin_2_size[1] = 4 - (int32_T)b_k;
            for (i = 0; i < loop_ub_tmp; i++) {
              scalarLB = (loop_ub / 2) << 1;
              vectorUB = scalarLB - 2;
              for (i1 = 0; i1 <= vectorUB; i1 += 2) {
                r = _mm_loadu_pd(&R_data[R_size[0] * (((int32_T)b_k + i) + 1)]);
                r1 = _mm_loadu_pd(&R[k_tmp * i]);
                _mm_storeu_pd(&varargin_2_data[loop_ub * i], _mm_add_pd(r, r1));
              }
              for (i1 = scalarLB; i1 < loop_ub; i1++) {
                varargin_2_data[i1 + loop_ub * i] =
                    R_data[i1 + R_size[0] * (((int32_T)b_k + i) + 1)] +
                    R[i1 + k_tmp * i];
              }
            }
          } else {
            binary_expand_op(varargin_2_data, varargin_2_size, R_data, R_size,
                             loop_ub, b_k, R, y_size);
          }
          c_st.site = &ah_emlrtRSI;
          if (k_tmp != 0) {
            e_loop_ub = k_tmp;
          } else if ((varargin_2_size[0] != 0) && (varargin_2_size[1] != 0)) {
            e_loop_ub = varargin_2_size[0];
          } else {
            e_loop_ub = 0;
            if (varargin_2_size[0] > 0) {
              e_loop_ub = varargin_2_size[0];
            }
          }
          d_st.site = &bh_emlrtRSI;
          if ((k_tmp != e_loop_ub) && (k_tmp != 0)) {
            emlrtErrorWithMessageIdR2018a(
                &d_st, &c_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
                "MATLAB:catenate:matrixDimensionMismatch", 0);
          }
          if ((varargin_2_size[0] != e_loop_ub) &&
              ((varargin_2_size[0] != 0) && (varargin_2_size[1] != 0))) {
            emlrtErrorWithMessageIdR2018a(
                &d_st, &c_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
                "MATLAB:catenate:matrixDimensionMismatch", 0);
          }
          empty_non_axis_sizes = (e_loop_ub == 0);
          if (empty_non_axis_sizes || (k_tmp != 0)) {
            input_sizes_idx_1 = 1;
          } else {
            input_sizes_idx_1 = 0;
          }
          if (empty_non_axis_sizes ||
              ((varargin_2_size[0] != 0) && (varargin_2_size[1] != 0))) {
            sizes_idx_1 = (int8_T)varargin_2_size[1];
          } else {
            sizes_idx_1 = 0;
          }
          d_tmp_size[0] = e_loop_ub;
          d_tmp_size[1] = input_sizes_idx_1 + sizes_idx_1;
          loop_ub = input_sizes_idx_1;
          if ((loop_ub - 1 >= 0) && (e_loop_ub - 1 >= 0)) {
            memcpy(&h_tmp_data[0], &r_data[0],
                   (uint32_T)e_loop_ub * sizeof(real_T));
          }
          loop_ub = sizes_idx_1;
          for (i = 0; i < loop_ub; i++) {
            for (i1 = 0; i1 < e_loop_ub; i1++) {
              h_tmp_data[i1 + e_loop_ub * (i + input_sizes_idx_1)] =
                  varargin_2_data[i1 + e_loop_ub * i];
            }
          }
          c_k[0] = b_loop_ub;
          k_tmp = 5 - (int32_T)b_k;
          c_k[1] = 5 - (int32_T)b_k;
          emlrtSubAssignSizeCheckR2012b(&c_k[0], 2, &d_tmp_size[0], 2,
                                        &kb_emlrtECI, (emlrtCTX)sp);
          for (i = 0; i < k_tmp; i++) {
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              R_data[i1 + R_size[0] * ((int32_T)b_k + i)] =
                  h_tmp_data[i1 + b_loop_ub * i];
            }
          }
          if (b_k < 1.0) {
            k_idx_1_tmp = 0;
          } else if ((int32_T)b_k > R_size[0]) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0],
                                          &wd_emlrtBCI, (emlrtConstCTX)sp);
          }
          for (i = 0; i < 5; i++) {
            for (i1 = 0; i1 < k_idx_1_tmp; i1++) {
              R_data[i1 + k_idx_1_tmp * i] = R_data[i1 + R_size[0] * i];
            }
          }
          R_size[0] = k_idx_1_tmp;
          R_size[1] = 5;
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
    }
    st.site = &b_emlrtRSI;
    if (conv == 0) {
      /*  not converged */
      st.site = &emlrtRSI;
      c_st.site = &ch_emlrtRSI;
      WarningState_callWarning(&c_st);
    }
  }
  /*  set ID outputs */
  if (b_k < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)b_k;
  }
  sk_size[0] = 1;
  sk_size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    sk_data[i] = p[i];
  }
  if (b_k + 1.0 > 5.0) {
    i = 0;
    i1 = 0;
  } else {
    if (((int32_T)(b_k + 1.0) < 1) || ((int32_T)(b_k + 1.0) > 5)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(b_k + 1.0), 1, 5, &xd_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = (int32_T)(b_k + 1.0) - 1;
    i1 = 5;
  }
  rd_size[0] = 1;
  loop_ub = i1 - i;
  rd_size[1] = loop_ub;
  for (i1 = 0; i1 < loop_ub; i1++) {
    rd_data[i1] = p[i + i1];
  }
  if (b_k < 1.0) {
    loop_ub = 0;
  } else {
    if (R_size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, R_size[0], &yd_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if ((int32_T)b_k > R_size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)b_k, 1, R_size[0], &ae_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    loop_ub = (int32_T)b_k;
  }
  if (b_k + 1.0 > 5.0) {
    i = 0;
    i1 = 0;
  } else {
    if (((int32_T)(b_k + 1.0) < 1) || ((int32_T)(b_k + 1.0) > 5)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(b_k + 1.0), 1, 5, &be_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = (int32_T)(b_k + 1.0) - 1;
    i1 = 5;
  }
  T_size[0] = loop_ub;
  b_loop_ub = i1 - i;
  T_size[1] = b_loop_ub;
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    for (i2 = 0; i2 < loop_ub; i2++) {
      T_data[i2 + loop_ub * i1] = R_data[i2 + R_size[0] * (i + i1)];
    }
  }
  /*  postprocess for fixed columns */
}

/* End of code generation (id.c) */
