//
// id.cpp
//
// Code generation for function 'id'
//

// Include files
#include "id.h"
#include "abs.h"
#include "any1.h"
#include "diag.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "eml_qr.h"
#include "exp.h"
#include "eye.h"
#include "ind2sub.h"
#include "indexShapeCheck.h"
#include "inv.h"
#include "mldivide.h"
#include "mtimes.h"
#include "norm.h"
#include "qr.h"
#include "qrupdate.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "srskelf_asym_new_data.h"
#include "srskelf_asym_new_mexutil.h"
#include "sum.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo xj_emlrtRSI{ 243,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo yj_emlrtRSI{ 239,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo ak_emlrtRSI{ 238,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo bk_emlrtRSI{ 236,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo ck_emlrtRSI{ 228,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo dk_emlrtRSI{ 222,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo ek_emlrtRSI{ 215,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo fk_emlrtRSI{ 214,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo gk_emlrtRSI{ 204,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo hk_emlrtRSI{ 200,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo ik_emlrtRSI{ 197,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo jk_emlrtRSI{ 196,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo kk_emlrtRSI{ 195,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo lk_emlrtRSI{ 194,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo mk_emlrtRSI{ 188,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo nk_emlrtRSI{ 185,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo ok_emlrtRSI{ 184,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo pk_emlrtRSI{ 182,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo qk_emlrtRSI{ 176,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo rk_emlrtRSI{ 158,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo sk_emlrtRSI{ 144,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo tk_emlrtRSI{ 139,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo uk_emlrtRSI{ 136,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo vk_emlrtRSI{ 135,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo wk_emlrtRSI{ 130,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo xk_emlrtRSI{ 129,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo yk_emlrtRSI{ 128,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo al_emlrtRSI{ 124,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo bl_emlrtRSI{ 121,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo cl_emlrtRSI{ 119,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo dl_emlrtRSI{ 115,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo el_emlrtRSI{ 106,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo am_emlrtRSI{ 17,    // lineNo
  "qr",                                // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/qr.m"// pathName
};

static emlrtRSInfo cp_emlrtRSI{ 17,    // lineNo
  "max",                               // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/max.m"// pathName
};

static emlrtRSInfo dp_emlrtRSI{ 38,    // lineNo
  "minOrMax",                          // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/minOrMax.m"// pathName
};

static emlrtRSInfo ep_emlrtRSI{ 77,    // lineNo
  "maximum",                           // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/minOrMax.m"// pathName
};

static emlrtRSInfo fp_emlrtRSI{ 173,   // lineNo
  "unaryMinOrMax",                     // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"// pathName
};

static emlrtRSInfo gp_emlrtRSI{ 73,    // lineNo
  "vectorMinOrMaxInPlace",             // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/vectorMinOrMaxInPlace.m"// pathName
};

static emlrtRSInfo hp_emlrtRSI{ 65,    // lineNo
  "vectorMinOrMaxInPlace",             // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/vectorMinOrMaxInPlace.m"// pathName
};

static emlrtRSInfo ip_emlrtRSI{ 114,   // lineNo
  "findFirst",                         // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/vectorMinOrMaxInPlace.m"// pathName
};

static emlrtRSInfo jp_emlrtRSI{ 131,   // lineNo
  "minOrMaxRealVectorKernel",          // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/vectorMinOrMaxInPlace.m"// pathName
};

static emlrtRSInfo kp_emlrtRSI{ 19,    // lineNo
  "ind2sub",                           // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/ind2sub.m"// pathName
};

static emlrtRSInfo dq_emlrtRSI{ 17,    // lineNo
  "min",                               // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/min.m"// pathName
};

static emlrtRSInfo eq_emlrtRSI{ 40,    // lineNo
  "minOrMax",                          // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/minOrMax.m"// pathName
};

static emlrtRSInfo fq_emlrtRSI{ 90,    // lineNo
  "minimum",                           // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/minOrMax.m"// pathName
};

static emlrtMCInfo h_emlrtMCI{ 52,     // lineNo
  3,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo ob_emlrtRTEI{ 134, // lineNo
  27,                                  // colNo
  "unaryMinOrMax",                     // fName
  "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"// pName
};

static emlrtBCInfo fg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  107,                                 // lineNo
  11,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  107,                                 // lineNo
  13,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  116,                                 // lineNo
  25,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ig_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  122,                                 // lineNo
  9,                                   // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  122,                                 // lineNo
  11,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  124,                                 // lineNo
  22,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo lg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  124,                                 // lineNo
  24,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  124,                                 // lineNo
  26,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ng_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  124,                                 // lineNo
  28,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo og_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  124,                                 // lineNo
  35,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  124,                                 // lineNo
  37,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  124,                                 // lineNo
  41,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo rg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  124,                                 // lineNo
  5,                                   // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo sg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  124,                                 // lineNo
  7,                                   // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  124,                                 // lineNo
  9,                                   // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ug_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  124,                                 // lineNo
  13,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo bc_emlrtECI{ -1,    // nDims
  124,                                 // lineNo
  3,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo vg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  129,                                 // lineNo
  16,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  129,                                 // lineNo
  20,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  129,                                 // lineNo
  24,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo yg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  129,                                 // lineNo
  28,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ah_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  130,                                 // lineNo
  20,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  130,                                 // lineNo
  22,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ch_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  130,                                 // lineNo
  24,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo dh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  130,                                 // lineNo
  26,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo eh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  135,                                 // lineNo
  15,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  135,                                 // lineNo
  17,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  135,                                 // lineNo
  19,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  135,                                 // lineNo
  23,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo cc_emlrtECI{ 1,     // nDims
  135,                                 // lineNo
  13,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtECInfo dc_emlrtECI{ 2,     // nDims
  135,                                 // lineNo
  13,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo ih_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  144,                                 // lineNo
  44,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  144,                                 // lineNo
  46,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  144,                                 // lineNo
  48,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo lh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  144,                                 // lineNo
  50,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  144,                                 // lineNo
  55,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo nh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  144,                                 // lineNo
  57,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo oh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  144,                                 // lineNo
  59,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ph_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  144,                                 // lineNo
  64,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  144,                                 // lineNo
  66,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo rh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  144,                                 // lineNo
  68,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo ec_emlrtECI{ 1,     // nDims
  144,                                 // lineNo
  53,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtECInfo fc_emlrtECI{ 2,     // nDims
  145,                                 // lineNo
  36,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo sh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  144,                                 // lineNo
  14,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo th_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  144,                                 // lineNo
  16,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo uh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  144,                                 // lineNo
  18,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  144,                                 // lineNo
  20,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo gc_emlrtECI{ -1,    // nDims
  144,                                 // lineNo
  12,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo wh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  146,                                 // lineNo
  36,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  146,                                 // lineNo
  40,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo hc_emlrtECI{ -1,    // nDims
  146,                                 // lineNo
  9,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtECInfo ic_emlrtECI{ -1,    // nDims
  153,                                 // lineNo
  9,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo yh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  158,                                 // lineNo
  22,                                  // colNo
  "r2",                                // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ai_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  158,                                 // lineNo
  24,                                  // colNo
  "r2",                                // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bi_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  158,                                 // lineNo
  37,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ci_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  158,                                 // lineNo
  39,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo di_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  158,                                 // lineNo
  43,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ei_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  158,                                 // lineNo
  45,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fi_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  158,                                 // lineNo
  52,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gi_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  158,                                 // lineNo
  54,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hi_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  158,                                 // lineNo
  58,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo jc_emlrtECI{ 1,     // nDims
  158,                                 // lineNo
  19,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo ii_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  158,                                 // lineNo
  10,                                  // colNo
  "r2",                                // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ji_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  158,                                 // lineNo
  12,                                  // colNo
  "r2",                                // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo kc_emlrtECI{ -1,    // nDims
  158,                                 // lineNo
  7,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo ki_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  175,                                 // lineNo
  17,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo li_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  176,                                 // lineNo
  24,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mi_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  176,                                 // lineNo
  26,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ni_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  176,                                 // lineNo
  13,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo lc_emlrtECI{ -1,    // nDims
  176,                                 // lineNo
  9,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo oi_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  177,                                 // lineNo
  13,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pi_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  180,                                 // lineNo
  15,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qi_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  180,                                 // lineNo
  19,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ri_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  180,                                 // lineNo
  23,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo si_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  182,                                 // lineNo
  31,                                  // colNo
  "c2",                                // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ti_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  182,                                 // lineNo
  59,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ui_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  182,                                 // lineNo
  64,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vi_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  182,                                 // lineNo
  11,                                  // colNo
  "v",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wi_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  184,                                 // lineNo
  32,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xi_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  184,                                 // lineNo
  36,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo yi_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  184,                                 // lineNo
  40,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo aj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  184,                                 // lineNo
  44,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  184,                                 // lineNo
  61,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo cj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  184,                                 // lineNo
  65,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo dj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  184,                                 // lineNo
  69,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ej_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  184,                                 // lineNo
  73,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo mc_emlrtECI{ 1,     // nDims
  184,                                 // lineNo
  30,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtECInfo nc_emlrtECI{ 2,     // nDims
  184,                                 // lineNo
  30,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo fj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  184,                                 // lineNo
  11,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  184,                                 // lineNo
  15,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  184,                                 // lineNo
  19,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ij_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  184,                                 // lineNo
  23,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo oc_emlrtECI{ -1,    // nDims
  184,                                 // lineNo
  9,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo jj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  185,                                 // lineNo
  11,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  185,                                 // lineNo
  15,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo lj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  185,                                 // lineNo
  19,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  185,                                 // lineNo
  50,                                  // colNo
  "c2",                                // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo nj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  188,                                 // lineNo
  24,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo oj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  188,                                 // lineNo
  26,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  188,                                 // lineNo
  28,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  188,                                 // lineNo
  30,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo rj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  188,                                 // lineNo
  35,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo sj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  188,                                 // lineNo
  37,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  188,                                 // lineNo
  39,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo uj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  188,                                 // lineNo
  11,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  188,                                 // lineNo
  13,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  188,                                 // lineNo
  15,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo pc_emlrtECI{ -1,    // nDims
  188,                                 // lineNo
  9,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo xj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  189,                                 // lineNo
  35,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo yj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  189,                                 // lineNo
  39,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ak_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  189,                                 // lineNo
  11,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo qc_emlrtECI{ -1,    // nDims
  189,                                 // lineNo
  9,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo bk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  190,                                 // lineNo
  15,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ck_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  190,                                 // lineNo
  17,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo dk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  190,                                 // lineNo
  19,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ek_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  191,                                 // lineNo
  17,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  191,                                 // lineNo
  21,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  194,                                 // lineNo
  25,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  194,                                 // lineNo
  33,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo rc_emlrtECI{ 2,     // nDims
  194,                                 // lineNo
  14,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo ik_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  195,                                 // lineNo
  40,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  195,                                 // lineNo
  47,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  195,                                 // lineNo
  51,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo lk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  195,                                 // lineNo
  65,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  195,                                 // lineNo
  67,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo sc_emlrtECI{ -1,    // nDims
  195,                                 // lineNo
  9,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo nk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  196,                                 // lineNo
  33,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo tc_emlrtECI{ 2,     // nDims
  196,                                 // lineNo
  14,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo ok_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  197,                                 // lineNo
  23,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  197,                                 // lineNo
  27,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  197,                                 // lineNo
  12,                                  // colNo
  "c2",                                // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo rk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  200,                                 // lineNo
  15,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo sk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  200,                                 // lineNo
  17,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  200,                                 // lineNo
  19,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo uk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  200,                                 // lineNo
  21,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  200,                                 // lineNo
  26,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  200,                                 // lineNo
  28,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  200,                                 // lineNo
  30,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo yk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  204,                                 // lineNo
  15,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo al_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  204,                                 // lineNo
  17,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  204,                                 // lineNo
  21,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo cl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  204,                                 // lineNo
  23,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo dl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  204,                                 // lineNo
  32,                                  // colNo
  "r",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo el_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  206,                                 // lineNo
  11,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  206,                                 // lineNo
  13,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  206,                                 // lineNo
  17,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo uc_emlrtECI{ -1,    // nDims
  206,                                 // lineNo
  9,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo hl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  207,                                 // lineNo
  30,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo il_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  207,                                 // lineNo
  32,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  207,                                 // lineNo
  36,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  207,                                 // lineNo
  40,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ll_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  207,                                 // lineNo
  51,                                  // colNo
  "r",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ml_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  207,                                 // lineNo
  61,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo vc_emlrtECI{ 2,     // nDims
  207,                                 // lineNo
  55,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtECInfo wc_emlrtECI{ 1,     // nDims
  207,                                 // lineNo
  28,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtECInfo xc_emlrtECI{ 2,     // nDims
  207,                                 // lineNo
  28,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo nl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  207,                                 // lineNo
  11,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ol_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  207,                                 // lineNo
  13,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  207,                                 // lineNo
  17,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ql_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  207,                                 // lineNo
  21,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo yc_emlrtECI{ -1,    // nDims
  207,                                 // lineNo
  9,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo rl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  208,                                 // lineNo
  28,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo sl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  208,                                 // lineNo
  32,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  208,                                 // lineNo
  11,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo ad_emlrtECI{ -1,    // nDims
  208,                                 // lineNo
  9,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtECInfo bd_emlrtECI{ -1,    // nDims
  213,                                 // lineNo
  7,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo ul_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  214,                                 // lineNo
  22,                                  // colNo
  "r2",                                // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  214,                                 // lineNo
  24,                                  // colNo
  "r2",                                // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  214,                                 // lineNo
  37,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  214,                                 // lineNo
  39,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo yl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  214,                                 // lineNo
  43,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo am_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  214,                                 // lineNo
  45,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  214,                                 // lineNo
  52,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo cm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  214,                                 // lineNo
  54,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo cd_emlrtECI{ 1,     // nDims
  214,                                 // lineNo
  19,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo dm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  214,                                 // lineNo
  10,                                  // colNo
  "r2",                                // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo em_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  214,                                 // lineNo
  12,                                  // colNo
  "r2",                                // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo dd_emlrtECI{ -1,    // nDims
  214,                                 // lineNo
  7,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo fm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  215,                                 // lineNo
  25,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  219,                                 // lineNo
  26,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  219,                                 // lineNo
  28,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo im_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  219,                                 // lineNo
  30,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  219,                                 // lineNo
  34,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo ed_emlrtECI{ 1,     // nDims
  219,                                 // lineNo
  24,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtECInfo fd_emlrtECI{ 2,     // nDims
  219,                                 // lineNo
  24,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo km_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  219,                                 // lineNo
  9,                                   // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo lm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  219,                                 // lineNo
  11,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  219,                                 // lineNo
  13,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo nm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  219,                                 // lineNo
  17,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo gd_emlrtECI{ -1,    // nDims
  219,                                 // lineNo
  7,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo om_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  228,                                 // lineNo
  44,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  228,                                 // lineNo
  46,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  228,                                 // lineNo
  48,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo rm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  228,                                 // lineNo
  50,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo sm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  228,                                 // lineNo
  55,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  228,                                 // lineNo
  57,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo um_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  228,                                 // lineNo
  59,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  228,                                 // lineNo
  64,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  228,                                 // lineNo
  66,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  228,                                 // lineNo
  68,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo hd_emlrtECI{ 2,     // nDims
  229,                                 // lineNo
  36,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo ym_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  228,                                 // lineNo
  14,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo an_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  228,                                 // lineNo
  16,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  228,                                 // lineNo
  18,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo cn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  228,                                 // lineNo
  20,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo id_emlrtECI{ -1,    // nDims
  228,                                 // lineNo
  12,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo dn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  230,                                 // lineNo
  36,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo en_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  230,                                 // lineNo
  40,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo jd_emlrtECI{ -1,    // nDims
  230,                                 // lineNo
  9,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo fn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  236,                                 // lineNo
  15,                                  // colNo
  "r2",                                // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  236,                                 // lineNo
  17,                                  // colNo
  "r2",                                // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  236,                                 // lineNo
  30,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo in_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  236,                                 // lineNo
  32,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  236,                                 // lineNo
  36,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  236,                                 // lineNo
  38,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ln_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  236,                                 // lineNo
  45,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  236,                                 // lineNo
  47,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo nn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  236,                                 // lineNo
  51,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo kd_emlrtECI{ 1,     // nDims
  236,                                 // lineNo
  12,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo on_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  238,                                 // lineNo
  13,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  238,                                 // lineNo
  15,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  238,                                 // lineNo
  17,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo rn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  238,                                 // lineNo
  19,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo sn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  238,                                 // lineNo
  24,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  238,                                 // lineNo
  26,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo un_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  238,                                 // lineNo
  28,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  239,                                 // lineNo
  29,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  239,                                 // lineNo
  31,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  239,                                 // lineNo
  33,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo yn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  239,                                 // lineNo
  37,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ao_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  239,                                 // lineNo
  48,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo ld_emlrtECI{ 1,     // nDims
  239,                                 // lineNo
  27,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtECInfo md_emlrtECI{ 2,     // nDims
  239,                                 // lineNo
  27,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo bo_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  239,                                 // lineNo
  9,                                   // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo co_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  239,                                 // lineNo
  11,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo do_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  239,                                 // lineNo
  17,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtECInfo nd_emlrtECI{ -1,    // nDims
  239,                                 // lineNo
  7,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtBCInfo eo_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  240,                                 // lineNo
  13,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fo_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  240,                                 // lineNo
  15,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo go_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  250,                                 // lineNo
  10,                                  // colNo
  "p",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ho_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  250,                                 // lineNo
  12,                                  // colNo
  "p",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo io_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  250,                                 // lineNo
  23,                                  // colNo
  "p",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jo_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  250,                                 // lineNo
  27,                                  // colNo
  "p",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ko_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  251,                                 // lineNo
  9,                                   // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo lo_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  251,                                 // lineNo
  11,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mo_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  251,                                 // lineNo
  13,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo no_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  251,                                 // lineNo
  17,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo hc_emlrtDCI{ 235,   // lineNo
  20,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  4                                    // checkKind
};

static emlrtBCInfo oo_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  143,                                 // lineNo
  22,                                  // colNo
  "p",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo po_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  143,                                 // lineNo
  11,                                  // colNo
  "p",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qo_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  154,                                 // lineNo
  24,                                  // colNo
  "c2",                                // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ro_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  158,                                 // lineNo
  63,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo so_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  158,                                 // lineNo
  65,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo to_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  154,                                 // lineNo
  12,                                  // colNo
  "c2",                                // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo uo_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  159,                                 // lineNo
  10,                                  // colNo
  "r2",                                // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vo_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  146,                                 // lineNo
  11,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wo_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  146,                                 // lineNo
  30,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xo_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  147,                                 // lineNo
  24,                                  // colNo
  "r2",                                // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo yo_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  177,                                 // lineNo
  29,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ap_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  212,                                 // lineNo
  22,                                  // colNo
  "p",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  213,                                 // lineNo
  11,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo cp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  214,                                 // lineNo
  63,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo dp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  214,                                 // lineNo
  65,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ep_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  185,                                 // lineNo
  31,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  185,                                 // lineNo
  35,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  215,                                 // lineNo
  10,                                  // colNo
  "r2",                                // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  218,                                 // lineNo
  16,                                  // colNo
  "u",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ip_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  189,                                 // lineNo
  26,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  189,                                 // lineNo
  28,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  219,                                 // lineNo
  63,                                  // colNo
  "u",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo lp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  227,                                 // lineNo
  22,                                  // colNo
  "p",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  227,                                 // lineNo
  11,                                  // colNo
  "p",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo np_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  236,                                 // lineNo
  56,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo op_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  236,                                 // lineNo
  58,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  230,                                 // lineNo
  11,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  230,                                 // lineNo
  30,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo rp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  199,                                 // lineNo
  19,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo sp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  199,                                 // lineNo
  34,                                  // colNo
  "r",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  199,                                 // lineNo
  25,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo up_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  199,                                 // lineNo
  27,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  231,                                 // lineNo
  24,                                  // colNo
  "r2",                                // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  201,                                 // lineNo
  11,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  201,                                 // lineNo
  13,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo yp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  205,                                 // lineNo
  20,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo aq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  205,                                 // lineNo
  22,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  205,                                 // lineNo
  27,                                  // colNo
  "r",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo cq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  205,                                 // lineNo
  11,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo dq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  205,                                 // lineNo
  13,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo eq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  206,                                 // lineNo
  31,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  206,                                 // lineNo
  33,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  208,                                 // lineNo
  39,                                  // colNo
  "r",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  195,                                 // lineNo
  59,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo iq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  195,                                 // lineNo
  11,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  153,                                 // lineNo
  28,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  153,                                 // lineNo
  13,                                  // colNo
  "R",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo lq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  152,                                 // lineNo
  9,                                   // colNo
  "p",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  152,                                 // lineNo
  24,                                  // colNo
  "p",                                 // aName
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m",// pName
  0                                    // checkKind
};

static emlrtRTEInfo ek_emlrtRTEI{ 107, // lineNo
  5,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo fk_emlrtRTEI{ 118, // lineNo
  25,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo gk_emlrtRTEI{ 121, // lineNo
  11,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo hk_emlrtRTEI{ 122, // lineNo
  3,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo ik_emlrtRTEI{ 124, // lineNo
  20,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo jk_emlrtRTEI{ 124, // lineNo
  31,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo kk_emlrtRTEI{ 130, // lineNo
  18,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo lk_emlrtRTEI{ 71,  // lineNo
  5,                                   // colNo
  "power",                             // fName
  "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/power.m"// pName
};

static emlrtRTEInfo nk_emlrtRTEI{ 135, // lineNo
  7,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo ok_emlrtRTEI{ 145, // lineNo
  37,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo pk_emlrtRTEI{ 145, // lineNo
  48,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo qk_emlrtRTEI{ 144, // lineNo
  12,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo rk_emlrtRTEI{ 144, // lineNo
  53,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo sk_emlrtRTEI{ 145, // lineNo
  36,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo tk_emlrtRTEI{ 146, // lineNo
  28,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo uk_emlrtRTEI{ 153, // lineNo
  9,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo vk_emlrtRTEI{ 158, // lineNo
  35,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo wk_emlrtRTEI{ 158, // lineNo
  50,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo xk_emlrtRTEI{ 158, // lineNo
  31,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo yk_emlrtRTEI{ 158, // lineNo
  19,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo al_emlrtRTEI{ 180, // lineNo
  9,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo bl_emlrtRTEI{ 184, // lineNo
  59,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo cl_emlrtRTEI{ 184, // lineNo
  51,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo dl_emlrtRTEI{ 184, // lineNo
  30,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo el_emlrtRTEI{ 188, // lineNo
  22,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo fl_emlrtRTEI{ 188, // lineNo
  33,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo gl_emlrtRTEI{ 189, // lineNo
  24,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo hl_emlrtRTEI{ 190, // lineNo
  9,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo il_emlrtRTEI{ 191, // lineNo
  9,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo jl_emlrtRTEI{ 194, // lineNo
  23,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo kl_emlrtRTEI{ 194, // lineNo
  19,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo ll_emlrtRTEI{ 194, // lineNo
  9,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo ml_emlrtRTEI{ 195, // lineNo
  57,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo nl_emlrtRTEI{ 196, // lineNo
  23,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo ol_emlrtRTEI{ 196, // lineNo
  19,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo pl_emlrtRTEI{ 196, // lineNo
  9,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo ql_emlrtRTEI{ 200, // lineNo
  13,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo rl_emlrtRTEI{ 200, // lineNo
  24,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo sl_emlrtRTEI{ 204, // lineNo
  13,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo tl_emlrtRTEI{ 204, // lineNo
  28,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo ul_emlrtRTEI{ 206, // lineNo
  22,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo wl_emlrtRTEI{ 207, // lineNo
  28,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo xl_emlrtRTEI{ 208, // lineNo
  24,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo yl_emlrtRTEI{ 175, // lineNo
  9,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo am_emlrtRTEI{ 176, // lineNo
  20,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo bm_emlrtRTEI{ 176, // lineNo
  29,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo cm_emlrtRTEI{ 213, // lineNo
  22,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo dm_emlrtRTEI{ 214, // lineNo
  35,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo em_emlrtRTEI{ 214, // lineNo
  50,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo fm_emlrtRTEI{ 214, // lineNo
  31,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo gm_emlrtRTEI{ 214, // lineNo
  19,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo hm_emlrtRTEI{ 219, // lineNo
  41,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo im_emlrtRTEI{ 219, // lineNo
  24,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo jm_emlrtRTEI{ 222, // lineNo
  22,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo km_emlrtRTEI{ 229, // lineNo
  37,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo lm_emlrtRTEI{ 229, // lineNo
  48,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo mm_emlrtRTEI{ 228, // lineNo
  12,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo nm_emlrtRTEI{ 228, // lineNo
  53,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo om_emlrtRTEI{ 229, // lineNo
  36,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo pm_emlrtRTEI{ 230, // lineNo
  28,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo qm_emlrtRTEI{ 235, // lineNo
  7,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo rm_emlrtRTEI{ 236, // lineNo
  28,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo sm_emlrtRTEI{ 236, // lineNo
  43,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo tm_emlrtRTEI{ 236, // lineNo
  24,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo um_emlrtRTEI{ 236, // lineNo
  7,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo vm_emlrtRTEI{ 238, // lineNo
  11,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo wm_emlrtRTEI{ 238, // lineNo
  22,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo xm_emlrtRTEI{ 239, // lineNo
  27,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo ym_emlrtRTEI{ 239, // lineNo
  24,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo an_emlrtRTEI{ 240, // lineNo
  7,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo bn_emlrtRTEI{ 250, // lineNo
  3,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo cn_emlrtRTEI{ 250, // lineNo
  16,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo dn_emlrtRTEI{ 251, // lineNo
  3,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo en_emlrtRTEI{ 65,  // lineNo
  5,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo fn_emlrtRTEI{ 65,  // lineNo
  14,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo gn_emlrtRTEI{ 66,  // lineNo
  5,                                   // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo ip_emlrtRTEI{ 236, // lineNo
  12,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRTEInfo kp_emlrtRTEI{ 194, // lineNo
  14,                                  // colNo
  "id",                                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pName
};

static emlrtRSInfo er_emlrtRSI{ 53,    // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo lr_emlrtRSI{ 52,    // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo tr_emlrtRSI{ 207,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo ur_emlrtRSI{ 219,   // lineNo
  "id",                                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/id.m"// pathName
};

static emlrtRSInfo vr_emlrtRSI{ 88,    // lineNo
  "eml_mtimes_helper",                 // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"// pathName
};

// Function Declarations
static void binary_expand_op_10(const emlrtStack &sp, coder::array<real_T, 2U>
  &in1, const coder::array<real_T, 2U> &in2, int32_T in3, int32_T in4, int32_T
  in5, const coder::array<real_T, 2U> &in6);
static void binary_expand_op_11(const emlrtStack &sp, coder::array<real_T, 1U>
  &in1, int32_T in2, const coder::array<real_T, 1U> &in3);
static void binary_expand_op_12(const emlrtStack &sp, const emlrtRSInfo in1,
  coder::array<real_T, 2U> &in2, coder::array<real_T, 2U> &in3, const coder::
  array<real_T, 2U> &in4, real_T in5, int32_T in6, const coder::array<boolean_T,
  2U> &in7, const coder::array<boolean_T, 2U> &in8);
static void binary_expand_op_13(const emlrtStack &sp, coder::array<real_T, 2U>
  &in1, const coder::array<real_T, 2U> &in2, real_T in3, int32_T in4, int32_T
  in5);
static void binary_expand_op_14(const emlrtStack &sp, coder::array<real_T, 1U>
  &in1, const coder::array<real_T, 1U> &in2, int32_T in3);
static void binary_expand_op_17(const emlrtStack &sp, coder::array<real_T, 2U>
  &in1, const coder::array<real_T, 2U> &in2, int32_T in3, int32_T in4, int32_T
  in5, int32_T in6);
static void binary_expand_op_18(const emlrtStack &sp, coder::array<real_T, 1U>
  &in1, const coder::array<real_T, 1U> &in2, int32_T in3);
static void binary_expand_op_19(const emlrtStack &sp, const emlrtRSInfo in1,
  coder::array<real_T, 2U> &in2, coder::array<real_T, 2U> &in3, const coder::
  array<real_T, 2U> &in4, int32_T in5, real_T in6, int32_T in7, int32_T in8,
  const coder::array<boolean_T, 2U> &in9, const coder::array<boolean_T, 2U>
  &in10);
static void binary_expand_op_20(const emlrtStack &sp, coder::array<real_T, 2U>
  &in1, const coder::array<real_T, 2U> &in2, const coder::array<real_T, 2U> &in3);
static void givens_id(real_T x, real_T y, real_T g[4]);
static void minus(const emlrtStack &sp, coder::array<real_T, 2U> &in1, const
                  coder::array<real_T, 2U> &in2);
static const mxArray *o_emlrt_marshallOut(const emlrtStack &sp, const char_T u
  [24]);

// Function Definitions
static void binary_expand_op_10(const emlrtStack &sp, coder::array<real_T, 2U>
  &in1, const coder::array<real_T, 2U> &in2, int32_T in3, int32_T in4, int32_T
  in5, const coder::array<real_T, 2U> &in6)
{
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  if (in6.size(0) == 1) {
    loop_ub = in3;
  } else {
    loop_ub = in6.size(0);
  }

  in1.set_size(&xm_emlrtRTEI, &sp, loop_ub, in1.size(1));
  i = in5 - in4;
  if (in6.size(1) == 1) {
    b_loop_ub = i;
  } else {
    b_loop_ub = in6.size(1);
  }

  in1.set_size(&xm_emlrtRTEI, &sp, in1.size(0), b_loop_ub);
  stride_0_0 = (in3 != 1);
  stride_0_1 = (i != 1);
  stride_1_0 = (in6.size(0) != 1);
  stride_1_1 = (in6.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] = in2[i1 * stride_0_0 + in2.size(0) * (in4 +
        aux_0_1)] + in6[i1 * stride_1_0 + in6.size(0) * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

static void binary_expand_op_11(const emlrtStack &sp, coder::array<real_T, 1U>
  &in1, int32_T in2, const coder::array<real_T, 1U> &in3)
{
  coder::array<real_T, 1U> b_in1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in3.size(0) == 1) {
    loop_ub = in2;
  } else {
    loop_ub = in3.size(0);
  }

  b_in1.set_size(&ip_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2 != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in1[i] = in1[i * stride_0_0] - in3[i * stride_1_0];
  }

  in1.set_size(&ip_emlrtRTEI, &sp, loop_ub);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op_12(const emlrtStack &sp, const emlrtRSInfo in1,
  coder::array<real_T, 2U> &in2, coder::array<real_T, 2U> &in3, const coder::
  array<real_T, 2U> &in4, real_T in5, int32_T in6, const coder::array<boolean_T,
  2U> &in7, const coder::array<boolean_T, 2U> &in8)
{
  coder::array<real_T, 1U> b_in4;
  coder::array<real_T, 1U> b_in7;
  emlrtStack st;
  int32_T loop_ub_tmp;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  loop_ub_tmp = static_cast<int32_T>(in5);
  b_in4.set_size(&nm_emlrtRTEI, &sp, loop_ub_tmp);
  scalarLB = (static_cast<int32_T>(in5) / 2) << 1;
  vectorUB = scalarLB - 2;
  for (int32_T i{0}; i <= vectorUB; i += 2) {
    __m128d r;
    __m128d r1;
    r = _mm_loadu_pd(&in4[i + in4.size(0) * (static_cast<int32_T>(in5) - 1)]);
    r1 = _mm_loadu_pd(&in4[i + in4.size(0) * (in6 - 1)]);
    _mm_storeu_pd(&b_in4[i], _mm_sub_pd(r, r1));
  }

  for (int32_T i{scalarLB}; i < loop_ub_tmp; i++) {
    b_in4[i] = in4[i + in4.size(0) * (static_cast<int32_T>(in5) - 1)] - in4[i +
      in4.size(0) * (in6 - 1)];
  }

  if (in8.size(1) == 1) {
    loop_ub_tmp = in7.size(1);
  } else {
    loop_ub_tmp = in8.size(1);
  }

  b_in7.set_size(&om_emlrtRTEI, &sp, loop_ub_tmp);
  scalarLB = (in7.size(1) != 1);
  vectorUB = (in8.size(1) != 1);
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    b_in7[i] = static_cast<real_T>(in7[i * scalarLB]) - static_cast<real_T>
      (in8[i * vectorUB]);
  }

  st.site = const_cast<emlrtRSInfo *>(&in1);
  coder::qrupdate(st, in2, in3, b_in4, b_in7);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op_13(const emlrtStack &sp, coder::array<real_T, 2U>
  &in1, const coder::array<real_T, 2U> &in2, real_T in3, int32_T in4, int32_T
  in5)
{
  coder::array<real_T, 2U> b_in2;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in1.size(0) == 1) {
    loop_ub = static_cast<int32_T>(in3);
  } else {
    loop_ub = in1.size(0);
  }

  i = in5 - in4;
  if (in1.size(1) == 1) {
    b_loop_ub = i;
  } else {
    b_loop_ub = in1.size(1);
  }

  b_in2.set_size(&im_emlrtRTEI, &sp, loop_ub, b_loop_ub);
  stride_0_0 = (static_cast<int32_T>(in3) != 1);
  stride_0_1 = (i != 1);
  stride_1_0 = (in1.size(0) != 1);
  stride_1_1 = (in1.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      b_in2[i1 + b_in2.size(0) * i] = in2[i1 * stride_0_0 + in2.size(0) * (in4 +
        aux_0_1)] - in1[i1 * stride_1_0 + in1.size(0) * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  in1.set_size(&im_emlrtRTEI, &sp, loop_ub, b_loop_ub);
  for (i = 0; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] = b_in2[i1 + b_in2.size(0) * i];
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op_14(const emlrtStack &sp, coder::array<real_T, 1U>
  &in1, const coder::array<real_T, 1U> &in2, int32_T in3)
{
  coder::array<real_T, 1U> b_in2;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in1.size(0) == 1) {
    loop_ub = in3;
  } else {
    loop_ub = in1.size(0);
  }

  b_in2.set_size(&gm_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in3 != 1);
  stride_1_0 = (in1.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in2[i] = in2[i * stride_0_0] + in1[i * stride_1_0];
  }

  in1.set_size(&gm_emlrtRTEI, &sp, loop_ub);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = b_in2[i];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op_17(const emlrtStack &sp, coder::array<real_T, 2U>
  &in1, const coder::array<real_T, 2U> &in2, int32_T in3, int32_T in4, int32_T
  in5, int32_T in6)
{
  coder::array<real_T, 2U> b_in2;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  i = in4 - in3;
  if (in1.size(0) == 1) {
    loop_ub = i;
  } else {
    loop_ub = in1.size(0);
  }

  i1 = in6 - in5;
  if (in1.size(1) == 1) {
    b_loop_ub = i1;
  } else {
    b_loop_ub = in1.size(1);
  }

  b_in2.set_size(&dl_emlrtRTEI, &sp, loop_ub, b_loop_ub);
  stride_0_0 = (i != 1);
  stride_0_1 = (i1 != 1);
  stride_1_0 = (in1.size(0) != 1);
  stride_1_1 = (in1.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_in2[i1 + b_in2.size(0) * i] = in2[(in3 + i1 * stride_0_0) + in2.size(0) *
        (in5 + aux_0_1)] - in1[i1 * stride_1_0 + in1.size(0) * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  in1.set_size(&dl_emlrtRTEI, &sp, loop_ub, b_loop_ub);
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] = b_in2[i1 + b_in2.size(0) * i];
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op_18(const emlrtStack &sp, coder::array<real_T, 1U>
  &in1, const coder::array<real_T, 1U> &in2, int32_T in3)
{
  coder::array<real_T, 1U> b_in2;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in1.size(0) == 1) {
    loop_ub = in3;
  } else {
    loop_ub = in1.size(0);
  }

  b_in2.set_size(&yk_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in3 != 1);
  stride_1_0 = (in1.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in2[i] = in2[i * stride_0_0] - in1[i * stride_1_0];
  }

  in1.set_size(&yk_emlrtRTEI, &sp, loop_ub);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = b_in2[i];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op_19(const emlrtStack &sp, const emlrtRSInfo in1,
  coder::array<real_T, 2U> &in2, coder::array<real_T, 2U> &in3, const coder::
  array<real_T, 2U> &in4, int32_T in5, real_T in6, int32_T in7, int32_T in8,
  const coder::array<boolean_T, 2U> &in9, const coder::array<boolean_T, 2U>
  &in10)
{
  coder::array<real_T, 1U> b_in4;
  coder::array<real_T, 1U> b_in9;
  emlrtStack st;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in7 == 1) {
    loop_ub = in5;
  } else {
    loop_ub = in7;
  }

  b_in4.set_size(&rk_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in5 != 1);
  stride_1_0 = (in7 != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in4[i] = in4[i * stride_0_0 + in4.size(0) * (static_cast<int32_T>(in6) - 1)]
      - in4[i * stride_1_0 + in4.size(0) * (in8 - 1)];
  }

  if (in10.size(1) == 1) {
    loop_ub = in9.size(1);
  } else {
    loop_ub = in10.size(1);
  }

  b_in9.set_size(&sk_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in9.size(1) != 1);
  stride_1_0 = (in10.size(1) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in9[i] = static_cast<real_T>(in9[i * stride_0_0]) - static_cast<real_T>
      (in10[i * stride_1_0]);
  }

  st.site = const_cast<emlrtRSInfo *>(&in1);
  coder::qrupdate(st, in2, in3, b_in4, b_in9);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op_20(const emlrtStack &sp, coder::array<real_T, 2U>
  &in1, const coder::array<real_T, 2U> &in2, const coder::array<real_T, 2U> &in3)
{
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }

  in1.set_size(&nk_emlrtRTEI, &sp, loop_ub, in1.size(1));
  if (in3.size(1) == 1) {
    b_loop_ub = in2.size(1);
  } else {
    b_loop_ub = in3.size(1);
  }

  in1.set_size(&nk_emlrtRTEI, &sp, in1.size(0), b_loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_0_1 = (in2.size(1) != 1);
  stride_1_0 = (in3.size(0) != 1);
  stride_1_1 = (in3.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] = in2[i1 * stride_0_0 + in2.size(0) * aux_0_1] +
        in3[i1 * stride_1_0 + in3.size(0) * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

static void givens_id(real_T x, real_T y, real_T g[4])
{
  real_T absx_tmp;
  real_T scale;
  real_T t;

  // GIVENS Givens rotation matrix.
  //    G = GIVENS(x,y) returns the complex Givens rotation matrix
  //
  //        | c       s |                  | x |     | r |
  //    G = |           |   such that  G * |   |  =  |   |
  //        |-conj(s) c |                  | y |     | 0 |
  //
  //    where c is real, s is complex, and c^2 + |s|^2 = 1.
  //    Copyright 1986-2002 The MathWorks, Inc.
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

static void minus(const emlrtStack &sp, coder::array<real_T, 2U> &in1, const
                  coder::array<real_T, 2U> &in2)
{
  coder::array<real_T, 2U> b_in1;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in2.size(1) == 1) {
    loop_ub = in1.size(1);
  } else {
    loop_ub = in2.size(1);
  }

  b_in1.set_size(&kp_emlrtRTEI, &sp, 1, loop_ub);
  stride_0_1 = (in1.size(1) != 1);
  stride_1_1 = (in2.size(1) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in1[i] = in1[i * stride_0_1] - in2[i * stride_1_1];
  }

  in1.set_size(&kp_emlrtRTEI, &sp, 1, loop_ub);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static const mxArray *o_emlrt_marshallOut(const emlrtStack &sp, const char_T u
  [24])
{
  static const int32_T iv[2]{ 1, 24 };

  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 24, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

void id(const emlrtStack &sp, coder::array<real_T, 2U> &A, real_T rank_or_tol,
        coder::array<real_T, 2U> &sk, coder::array<real_T, 2U> &rd, coder::array<
        real_T, 2U> &T)
{
  static const char_T b_cv1[38]{ 'R', 'a', 'n', 'k', ' ', 'o', 'r', ' ', 't',
    'o', 'l', 'e', 'r', 'a', 'n', 'c', 'e', ' ', 'm', 'u', 's', 't', ' ', 'b',
    'e', ' ', 'n', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e', '.' };

  static const char_T b_cv[24]{ 'F', 'L', 'A', 'M', ':', 'i', 'd', ':', 'i', 'n',
    'v', 'a', 'l', 'i', 'd', 'R', 'a', 'n', 'k', 'O', 'r', 'T', 'o', 'l' };

  coder::array<real_T, 2U> R;
  coder::array<real_T, 2U> a__1;
  coder::array<real_T, 2U> b_s;
  coder::array<real_T, 2U> c2;
  coder::array<real_T, 2U> c_R;
  coder::array<real_T, 2U> f_R;
  coder::array<real_T, 2U> g_R;
  coder::array<real_T, 2U> h_R;
  coder::array<real_T, 2U> r1;
  coder::array<real_T, 2U> r6;
  coder::array<real_T, 2U> r7;
  coder::array<real_T, 2U> tmp;
  coder::array<real_T, 2U> varargin_2;
  coder::array<real_T, 2U> y;
  coder::array<real_T, 1U> b_r;
  coder::array<real_T, 1U> b_tmp;
  coder::array<real_T, 1U> d_R;
  coder::array<real_T, 1U> diagR;
  coder::array<real_T, 1U> r;
  coder::array<real_T, 1U> r2;
  coder::array<real_T, 1U> u;
  coder::array<int32_T, 2U> p;
  coder::array<boolean_T, 2U> r4;
  coder::array<boolean_T, 2U> r5;
  coder::array<boolean_T, 1U> s;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  creal_T dc;
  int32_T c_k[2];
  int32_T e_R[2];
  int32_T b_loop_ub;
  int32_T n_tmp;
  int32_T varargout_4;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &sp;
  b_st.tls = sp.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);

  //  ID  Interpolative decomposition.
  //
  //     [SK,RD,T] = ID(A,KMAX) produces a structure-preserving approximation of A
  //     of rank K = MIN(KMAX,RANK(A)) via the skeleton and redundant indices SK and
  //     RD, respectively, and an interpolation matrix T such that
  //     A(:,RD) = A(:,SK)*T + E, where LENGTH(SK) = K and NORM(E) is of order
  //     S(KMAX+1) for S = SVD(A).
  //
  //     [SK,RD,T] = ID(A,TOL) produces a rank-adaptive approximation such that
  //     A(:,RD) = A(:,SK)*T + E, where NORM(E) is of order TOL*NORM(A).
  //
  //     [SK,RD,T] = ID(A,RANK_OR_TOL) sets KMAX = RANK_OR_TOL if RANK_OR_TOL >= 1
  //     and TOL = RANK_OR_TOL if RANK_OR_TOL < 1. More generally, both criteria can
  //     be specified simultaneously by letting RANK_OR_TOL = KMAX + TOL, with the
  //     approximation terminating as soon as either is reached.
  //
  //     [SK,RD,T] = ID(A,RANK_OR_TOL,TMAX) iteratively refines the approximation
  //     using rank-revealing QR column swaps until 1 <= MAX(ABS(T(:))) <= TMAX.
  //     Ignored if TMAX = INF (default: TMAX = 2). Refinement can improve numerical
  //     stability and reduce the output rank.
  //
  //     [SK,RD,T] = ID(A,RANK_OR_TOL,TMAX,RRQR_ITER) performs at most RRQR_ITER
  //     refinement iterations (default: RRQR_ITER = INF).
  //
  //     [SK,RD,T,NITER] = ID(A,RANK_OR_TOL,...) also returns the number NITER of
  //     refinement iterations performed.
  //
  //     [SK,RD,T,...] = ID(A,RANK_OR_TOL,TMAX,RRQR_ITER,FIXED) forces the indices
  //     in FIXED to be included in SK (default: FIXED = []). An ID is computed on
  //     the residual free columns then reconstituted along with the fixed ones. The
  //     parameters TMAX and RRQR_ITER apply only to this residual ID. If
  //     KMAX = FLOOR(RANK_OR_TOL) > 0 and LENGTH(FIXED) >= KMAX, then SK = FIXED.
  //
  //     References:
  //
  //       H. Cheng, Z. Gimbutas, P.G. Martinsson, V. Rokhlin. On the compression of
  //         low rank matrices. SIAM J. Sci. Comput. 26 (4): 1389-1404, 2005.
  //
  //       M. Gu, S.C. Eisenstat. Efficient algorithms for computing a strong rank-
  //         revealing QR factorization. SIAM J. Sci. Comput. 17 (4): 848-869, 1996.
  //
  //     See also QR.
  //  set default parameters
  //  check inputs
  if (!(rank_or_tol >= 0.0)) {
    st.site = &lr_emlrtRSI;
    b_st.site = &er_emlrtRSI;
    b_error(st, o_emlrt_marshallOut(st, b_cv), c_emlrt_marshallOut(b_st, b_cv1),
            h_emlrtMCI);
  }

  //  initialize
  n_tmp = A.size(1);

  //  return if matrix is empty
  if ((A.size(0) == 0) || (A.size(1) == 0)) {
    sk.set_size(&en_emlrtRTEI, &sp, 0, 0);
    if (A.size(1) < 1) {
      rd.set_size(&fn_emlrtRTEI, &sp, 1, 0);
    } else {
      int32_T loop_ub;
      rd.set_size(&fn_emlrtRTEI, &sp, 1, A.size(1));
      loop_ub = A.size(1) - 1;
      for (int32_T i{0}; i <= loop_ub; i++) {
        rd[i] = static_cast<real_T>(i) + 1.0;
      }
    }

    T.set_size(&gn_emlrtRTEI, &sp, 0, A.size(1));
  } else {
    real_T b_k;
    real_T kmax;
    real_T tol;
    int32_T c_loop_ub;
    int32_T d_loop_ub;
    int32_T i;
    int32_T i1;
    int32_T i2;
    int32_T i3;
    int32_T i4;
    int32_T k;
    int32_T last;
    int32_T loop_ub;
    int32_T varargout_3;
    boolean_T b_R[2];

    //  unpack approximation parameters
    //  relative tolerance
    kmax = muDoubleScalarFloor(rank_or_tol);

    //  maximum rank
    if ((kmax == 0.0) || (kmax > A.size(1))) {
      kmax = A.size(1);
    }

    //  special rank cases
    //  preprocess fixed columns
    //  reduce row size if too rectangular
    //  if m > 8*n, [~,A] = qr(A,0); end
    //  Reduce row size if too rectangular
    if (A.size(0) > 8.0 * static_cast<real_T>(A.size(1))) {
      st.site = &el_emlrtRSI;
      coder::qr(st, A, a__1, R);

      //  Compute the QR decomposition
      if (R.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, R.size(0), &fg_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      if (A.size(1) > R.size(0)) {
        emlrtDynamicBoundsCheckR2012b(A.size(1), 1, R.size(0), &gg_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      loop_ub = R.size(1);
      A.set_size(&ek_emlrtRTEI, &sp, n_tmp, R.size(1));
      for (i = 0; i < loop_ub; i++) {
        for (i1 = 0; i1 < n_tmp; i1++) {
          A[i1 + A.size(0) * i] = R[i1 + R.size(0) * i];
        }
      }

      //  Update A with the first n rows of R
    } else {
      //  Ensure A remains in its original state if no reduction is needed
    }

    //  compute ID
    st.site = &dl_emlrtRSI;
    c_st.site = &am_emlrtRSI;
    coder::eml_qr(c_st, A, a__1, R, p);
    i = R.size(0) * R.size(1);
    if (i < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i, &hg_emlrtBCI, (emlrtConstCTX)&sp);
    }

    //  maximum column norm
    tol = muDoubleScalarMax(0.0, muDoubleScalarAbs(R[0])) * muDoubleScalarRem
      (rank_or_tol, 1.0);

    //  absolute tolerance
    b_R[0] = (R.size(0) == 1);
    b_R[1] = (R.size(1) == 1);
    if (coder::any(b_R)) {
      diagR.set_size(&fk_emlrtRTEI, &sp, 1);
      diagR[0] = R[0];

      //  in case R is a vector ...
    } else {
      st.site = &cl_emlrtRSI;
      coder::diag(st, R, diagR);

      //  ... instead of a matrix
    }

    st.site = &bl_emlrtRSI;
    coder::b_abs(st, diagR, r);
    loop_ub = r.size(0);
    s.set_size(&gk_emlrtRTEI, &sp, r.size(0));
    for (i = 0; i < loop_ub; i++) {
      s[i] = (r[i] > tol);
    }

    last = 0;
    for (k = 0; k < loop_ub; k++) {
      if (s[k]) {
        last++;
      }
    }

    //  rank by precision
    if (last < 1) {
      loop_ub = 0;
    } else {
      if (R.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, R.size(0), &ig_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      if (last > R.size(0)) {
        emlrtDynamicBoundsCheckR2012b(last, 1, R.size(0), &jg_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      loop_ub = last;
    }

    b_loop_ub = R.size(1);
    c_R.set_size(&hk_emlrtRTEI, &sp, loop_ub, R.size(1));
    for (i = 0; i < b_loop_ub; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        c_R[i1 + c_R.size(0) * i] = R[i1 + R.size(0) * i];
      }
    }

    b_k = muDoubleScalarMin(static_cast<real_T>(last), kmax);

    //  truncate rank by input
    if (b_k < 1.0) {
      c_loop_ub = 0;
      last = 0;
      d_loop_ub = 0;
    } else {
      if (loop_ub < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, 0, &kg_emlrtBCI, (emlrtConstCTX)&sp);
      }

      c_loop_ub = static_cast<int32_T>(b_k);
      if (c_loop_ub > loop_ub) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1, loop_ub,
          &lg_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (R.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, R.size(1), &mg_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      if (c_loop_ub > R.size(1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1, R.size(1),
          &ng_emlrtBCI, (emlrtConstCTX)&sp);
      }

      last = c_loop_ub;
      if (c_loop_ub > loop_ub) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1, loop_ub,
          &og_emlrtBCI, (emlrtConstCTX)&sp);
      }

      d_loop_ub = static_cast<int32_T>(b_k);
    }

    if (b_k + 1.0 > R.size(1)) {
      i = 0;
      i1 = 0;
    } else {
      if ((static_cast<int32_T>(b_k + 1.0) < 1) || (static_cast<int32_T>(b_k +
            1.0) > R.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k + 1.0), 1, R.size
          (1), &pg_emlrtBCI, (emlrtConstCTX)&sp);
      }

      i = static_cast<int32_T>(b_k + 1.0) - 1;
      if (R.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(R.size(1), 1, R.size(1), &qg_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      i1 = R.size(1);
    }

    if (b_k < 1.0) {
      loop_ub = 0;
    } else {
      if (loop_ub < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, 0, &rg_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (static_cast<int32_T>(b_k) > loop_ub) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1, loop_ub,
          &sg_emlrtBCI, (emlrtConstCTX)&sp);
      }

      loop_ub = static_cast<int32_T>(b_k);
    }

    if (b_k + 1.0 > R.size(1)) {
      i2 = 0;
      i3 = 0;
    } else {
      if ((static_cast<int32_T>(b_k + 1.0) < 1) || (static_cast<int32_T>(b_k +
            1.0) > R.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k + 1.0), 1, R.size
          (1), &tg_emlrtBCI, (emlrtConstCTX)&sp);
      }

      i2 = static_cast<int32_T>(b_k + 1.0) - 1;
      if (R.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(R.size(1), 1, R.size(1), &ug_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      i3 = R.size(1);
    }

    a__1.set_size(&ik_emlrtRTEI, &sp, c_loop_ub, last);
    for (i4 = 0; i4 < last; i4++) {
      for (varargout_3 = 0; varargout_3 < c_loop_ub; varargout_3++) {
        a__1[varargout_3 + a__1.size(0) * i4] = R[varargout_3 + R.size(0) * i4];
      }
    }

    last = i1 - i;
    for (i1 = 0; i1 < last; i1++) {
      for (i4 = 0; i4 < d_loop_ub; i4++) {
        R[i4 + d_loop_ub * i1] = R[i4 + R.size(0) * (i + i1)];
      }
    }

    R.set_size(&jk_emlrtRTEI, &sp, d_loop_ub, last);
    st.site = &al_emlrtRSI;
    coder::mldivide(st, a__1, R, r1);
    c_k[0] = loop_ub;
    d_loop_ub = i3 - i2;
    c_k[1] = d_loop_ub;
    emlrtSubAssignSizeCheckR2012b(&c_k[0], 2, r1.size(), 2, &bc_emlrtECI,
      (emlrtCTX)&sp);
    for (i = 0; i < d_loop_ub; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        c_R[i1 + c_R.size(0) * (i2 + i)] = r1[i1 + loop_ub * i];
      }
    }

    //  store T
    //  RRQR refinement
    if ((b_k > 0.0) && (static_cast<int32_T>(b_k) < n_tmp)) {
      st.site = &yk_emlrtRSI;
      c_st.site = &oe_emlrtRSI;
      d_st.site = &pe_emlrtRSI;

      //  convergence criterion
      loop_ub = static_cast<int32_T>(b_k);
      if (loop_ub + 1 > c_R.size(0)) {
        i = 0;
        i1 = 0;
      } else {
        if ((loop_ub + 1 < 1.0) || (loop_ub + 1 > c_R.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) + 1, 1,
            c_R.size(0), &vg_emlrtBCI, (emlrtConstCTX)&sp);
        }

        i = loop_ub;
        if (c_R.size(0) < 1) {
          emlrtDynamicBoundsCheckR2012b(c_R.size(0), 1, c_R.size(0),
            &wg_emlrtBCI, (emlrtConstCTX)&sp);
        }

        i1 = c_R.size(0);
      }

      if (loop_ub + 1 > c_R.size(1)) {
        i2 = 0;
        i3 = 0;
      } else {
        if ((static_cast<int32_T>(b_k) + 1 < 1.0) || (loop_ub + 1 > b_loop_ub))
        {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) + 1, 1,
            b_loop_ub, &xg_emlrtBCI, (emlrtConstCTX)&sp);
        }

        i2 = loop_ub;
        if (b_loop_ub < 1) {
          emlrtDynamicBoundsCheckR2012b(b_loop_ub, 1, b_loop_ub, &yg_emlrtBCI,
            (emlrtConstCTX)&sp);
        }

        i3 = b_loop_ub;
      }

      st.site = &xk_emlrtRSI;
      c_st.site = &pe_emlrtRSI;
      c_loop_ub = i1 - i;
      last = i3 - i2;
      r1.set_size(&qc_emlrtRTEI, &sp, c_loop_ub, last);
      for (i1 = 0; i1 < last; i1++) {
        for (i3 = 0; i3 < c_loop_ub; i3++) {
          kmax = c_R[(i + i3) + c_R.size(0) * (i2 + i1)];
          r1[i3 + r1.size(0) * i1] = muDoubleScalarPower(kmax, 2.0);
        }
      }

      st.site = &xk_emlrtRSI;
      coder::b_sum(st, r1, c2);

      //  column norms of residual part
      if (c_R.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &ah_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      if (loop_ub > c_R.size(0)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1, c_R.size(0),
          &bh_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (b_loop_ub < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, b_loop_ub, &ch_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      if (loop_ub > b_loop_ub) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1, b_loop_ub,
          &dh_emlrtBCI, (emlrtConstCTX)&sp);
      }

      st.site = &wk_emlrtRSI;
      R.set_size(&kk_emlrtRTEI, &st, loop_ub, loop_ub);
      for (i = 0; i < loop_ub; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          R[i1 + R.size(0) * i] = c_R[i1 + c_R.size(0) * i];
        }
      }

      c_st.site = &wk_emlrtRSI;
      coder::inv(c_st, R, a__1);
      c_st.site = &pe_emlrtRSI;
      r1.set_size(&qc_emlrtRTEI, &sp, a__1.size(0), a__1.size(1));
      loop_ub = a__1.size(0) * a__1.size(1);
      for (i = 0; i < loop_ub; i++) {
        kmax = a__1[i];
        r1[i] = muDoubleScalarPower(kmax, 2.0);
      }

      st.site = &wk_emlrtRSI;
      coder::sum(st, r1, r2);

      //  inverse row norms of main part
      //  converged?
      //  one-loop variant of Gu-Eisenstat -- allows early rank reduction
      int32_T exitg1;
      do {
        __m128d b_r2;
        __m128d r3;
        real_T R_tmp;
        int32_T idx;
        boolean_T exitg2;
        exitg1 = 0;
        if (b_k < 1.0) {
          loop_ub = 0;
        } else {
          if (c_R.size(0) < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &eh_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          if (static_cast<int32_T>(b_k) > c_R.size(0)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1, c_R.size
              (0), &fh_emlrtBCI, (emlrtConstCTX)&sp);
          }

          loop_ub = static_cast<int32_T>(b_k);
        }

        if (static_cast<int32_T>(b_k) + 1 > c_R.size(1)) {
          i = 0;
          i1 = 0;
        } else {
          if ((static_cast<int32_T>(b_k) + 1 < 1) || (static_cast<int32_T>(b_k)
               + 1 > c_R.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) + 1, 1,
              c_R.size(1), &gh_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i = static_cast<int32_T>(b_k);
          if (c_R.size(1) < 1) {
            emlrtDynamicBoundsCheckR2012b(c_R.size(1), 1, c_R.size(1),
              &hh_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = c_R.size(1);
        }

        st.site = &vk_emlrtRSI;
        c_st.site = &pe_emlrtRSI;
        b_loop_ub = i1 - i;
        a__1.set_size(&lk_emlrtRTEI, &c_st, loop_ub, b_loop_ub);
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          for (i2 = 0; i2 < loop_ub; i2++) {
            kmax = c_R[i2 + c_R.size(0) * (i + i1)];
            a__1[i2 + a__1.size(0) * i1] = muDoubleScalarPower(kmax, 2.0);
          }
        }

        loop_ub = r2.size(0);
        c_loop_ub = c2.size(1);
        R.set_size(&mk_emlrtRTEI, &sp, r2.size(0), c2.size(1));
        for (i = 0; i < c_loop_ub; i++) {
          d_loop_ub = (r2.size(0) / 2) << 1;
          k = d_loop_ub - 2;
          for (i1 = 0; i1 <= k; i1 += 2) {
            b_r2 = _mm_loadu_pd(&r2[i1]);
            _mm_storeu_pd(&R[i1 + R.size(0) * i], _mm_mul_pd(b_r2, _mm_set1_pd
              (c2[i])));
          }

          for (i1 = d_loop_ub; i1 < loop_ub; i1++) {
            R[i1 + R.size(0) * i] = r2[i1] * c2[i];
          }
        }

        if ((a__1.size(0) != R.size(0)) && ((a__1.size(0) != 1) && (R.size(0) !=
              1))) {
          emlrtDimSizeImpxCheckR2021b(a__1.size(0), R.size(0), &cc_emlrtECI,
            (emlrtConstCTX)&sp);
        }

        if ((b_loop_ub != R.size(1)) && ((b_loop_ub != 1) && (R.size(1) != 1)))
        {
          emlrtDimSizeImpxCheckR2021b(b_loop_ub, R.size(1), &dc_emlrtECI,
            (emlrtConstCTX)&sp);
        }

        if ((a__1.size(0) == R.size(0)) && (a__1.size(1) == R.size(1))) {
          tmp.set_size(&nk_emlrtRTEI, &sp, a__1.size(0), b_loop_ub);
          loop_ub = a__1.size(0) * a__1.size(1);
          d_loop_ub = (loop_ub / 2) << 1;
          k = d_loop_ub - 2;
          for (i = 0; i <= k; i += 2) {
            b_r2 = _mm_loadu_pd(&a__1[i]);
            r3 = _mm_loadu_pd(&R[i]);
            _mm_storeu_pd(&tmp[i], _mm_add_pd(b_r2, r3));
          }

          for (i = d_loop_ub; i < loop_ub; i++) {
            tmp[i] = a__1[i] + R[i];
          }
        } else {
          st.site = &vk_emlrtRSI;
          binary_expand_op_20(st, tmp, a__1, R);
        }

        st.site = &uk_emlrtRSI;
        last = tmp.size(0) * tmp.size(1);
        b_tmp = tmp.reshape(last);
        c_st.site = &uk_emlrtRSI;
        coder::b_abs(c_st, b_tmp, diagR);
        c_st.site = &cp_emlrtRSI;
        d_st.site = &dp_emlrtRSI;
        e_st.site = &ep_emlrtRSI;
        if (diagR.size(0) < 1) {
          emlrtErrorWithMessageIdR2018a(&e_st, &ob_emlrtRTEI,
            "Coder:toolbox:eml_min_or_max_varDimZero",
            "Coder:toolbox:eml_min_or_max_varDimZero", 0);
        }

        f_st.site = &fp_emlrtRSI;
        last = diagR.size(0);
        if (diagR.size(0) <= 2) {
          if (diagR.size(0) == 1) {
            kmax = diagR[0];
            idx = 1;
          } else if ((diagR[0] < diagR[1]) || (muDoubleScalarIsNaN(diagR[0]) &&
                      (!muDoubleScalarIsNaN(diagR[1])))) {
            kmax = diagR[1];
            idx = 2;
          } else {
            kmax = diagR[0];
            idx = 1;
          }
        } else {
          g_st.site = &hp_emlrtRSI;
          if (!muDoubleScalarIsNaN(diagR[0])) {
            idx = 1;
          } else {
            idx = 0;
            h_st.site = &ip_emlrtRSI;
            if (diagR.size(0) > 2147483646) {
              i_st.site = &ge_emlrtRSI;
              coder::check_forloop_overflow_error(i_st);
            }

            k = 2;
            exitg2 = false;
            while ((!exitg2) && (k <= last)) {
              if (!muDoubleScalarIsNaN(diagR[k - 1])) {
                idx = k;
                exitg2 = true;
              } else {
                k++;
              }
            }
          }

          if (idx == 0) {
            kmax = diagR[0];
            idx = 1;
          } else {
            g_st.site = &gp_emlrtRSI;
            kmax = diagR[idx - 1];
            d_loop_ub = idx + 1;
            h_st.site = &jp_emlrtRSI;
            if ((idx + 1 <= diagR.size(0)) && (diagR.size(0) > 2147483646)) {
              i_st.site = &ge_emlrtRSI;
              coder::check_forloop_overflow_error(i_st);
            }

            for (k = d_loop_ub; k <= last; k++) {
              R_tmp = diagR[k - 1];
              if (kmax < R_tmp) {
                kmax = R_tmp;
                idx = k;
              }
            }
          }
        }

        if (kmax <= 4.0) {
          exitg1 = 1;
        } else {
          real_T d_k[2];
          int32_T sizes[2];
          boolean_T empty_non_axis_sizes;

          //  converged
          st.site = &tk_emlrtRSI;
          d_k[0] = b_k;
          d_k[1] = static_cast<real_T>(n_tmp) - b_k;
          c_st.site = &kp_emlrtRSI;
          varargout_3 = coder::internal::ind2sub(c_st, d_k, static_cast<real_T>
            (idx), varargout_4);

          //  need to swap i-th and (k+j)-th columns
          //  swap i-th and k-th columns
          if (varargout_3 < static_cast<int32_T>(b_k)) {
            empty_non_axis_sizes = ((static_cast<int32_T>(b_k) < 1) || (
              static_cast<int32_T>(b_k) > p.size(1)));
            if (empty_non_axis_sizes) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1, p.size
                (1), &oo_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((varargout_3 < 1) || (varargout_3 > p.size(1))) {
              emlrtDynamicBoundsCheckR2012b(varargout_3, 1, p.size(1),
                &oo_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if (varargout_3 > p.size(1)) {
              emlrtDynamicBoundsCheckR2012b(varargout_3, 1, p.size(1),
                &po_emlrtBCI, (emlrtConstCTX)&sp);
            }

            last = p[varargout_3 - 1];
            p[varargout_3 - 1] = p[static_cast<int32_T>(b_k) - 1];
            p[static_cast<int32_T>(b_k) - 1] = last;
            if (b_k < 1.0) {
              loop_ub = 0;
              b_loop_ub = 0;
              c_loop_ub = 0;
              i = 0;
            } else {
              if (c_R.size(0) < 1) {
                emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &ih_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              if (static_cast<int32_T>(b_k) > c_R.size(0)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                  c_R.size(0), &jh_emlrtBCI, (emlrtConstCTX)&sp);
              }

              loop_ub = static_cast<int32_T>(b_k);
              if (c_R.size(1) < 1) {
                emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(1), &kh_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              if (static_cast<int32_T>(b_k) > c_R.size(1)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                  c_R.size(1), &lh_emlrtBCI, (emlrtConstCTX)&sp);
              }

              b_loop_ub = static_cast<int32_T>(b_k);
              if (c_R.size(0) < 1) {
                emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &mh_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              if (static_cast<int32_T>(b_k) > c_R.size(0)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                  c_R.size(0), &nh_emlrtBCI, (emlrtConstCTX)&sp);
              }

              c_loop_ub = static_cast<int32_T>(b_k);
              if (c_R.size(0) < 1) {
                emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &ph_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              if (static_cast<int32_T>(b_k) > c_R.size(0)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                  c_R.size(0), &qh_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i = static_cast<int32_T>(b_k);
            }

            last = static_cast<int32_T>(b_k);
            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(1), &oh_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if (varargout_3 > c_R.size(1)) {
              emlrtDynamicBoundsCheckR2012b(varargout_3, 1, c_R.size(1),
                &rh_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((c_loop_ub != i) && ((c_loop_ub != 1) && (i != 1))) {
              emlrtDimSizeImpxCheckR2021b(c_loop_ub, i, &ec_emlrtECI,
                (emlrtConstCTX)&sp);
            }

            r4.set_size(&ok_emlrtRTEI, &sp, 1, static_cast<int32_T>(b_k));
            for (i1 = 0; i1 < last; i1++) {
              r4[i1] = (i1 + 1 == varargout_3);
            }

            r5.set_size(&pk_emlrtRTEI, &sp, 1, static_cast<int32_T>(b_k - 1.0) +
                        1);
            d_loop_ub = static_cast<int32_T>(b_k - 1.0);
            for (i1 = 0; i1 <= d_loop_ub; i1++) {
              r5[i1] = (static_cast<real_T>(i1) + 1.0 == b_k);
            }

            if ((static_cast<int32_T>(b_k) != static_cast<int32_T>(b_k - 1.0) +
                 1) && ((static_cast<int32_T>(b_k) != 1) && (static_cast<int32_T>
                  (b_k - 1.0) + 1 != 1))) {
              emlrtDimSizeImpxCheckR2021b(static_cast<int32_T>(b_k),
                static_cast<int32_T>(b_k - 1.0) + 1, &fc_emlrtECI,
                (emlrtConstCTX)&sp);
            }

            st.site = &sk_emlrtRSI;
            coder::eye(st, b_k, a__1);
            r1.set_size(&qk_emlrtRTEI, &sp, loop_ub, b_loop_ub);
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              for (i2 = 0; i2 < loop_ub; i2++) {
                r1[i2 + r1.size(0) * i1] = c_R[i2 + c_R.size(0) * i1];
              }
            }

            if ((c_loop_ub == i) && (r4.size(1) == r5.size(1))) {
              d_R.set_size(&rk_emlrtRTEI, &sp, c_loop_ub);
              d_loop_ub = (c_loop_ub / 2) << 1;
              k = d_loop_ub - 2;
              for (i = 0; i <= k; i += 2) {
                b_r2 = _mm_loadu_pd(&c_R[i + c_R.size(0) * (static_cast<int32_T>
                  (b_k) - 1)]);
                r3 = _mm_loadu_pd(&c_R[i + c_R.size(0) * (varargout_3 - 1)]);
                _mm_storeu_pd(&d_R[i], _mm_sub_pd(b_r2, r3));
              }

              for (i = d_loop_ub; i < c_loop_ub; i++) {
                d_R[i] = c_R[i + c_R.size(0) * (static_cast<int32_T>(b_k) - 1)]
                  - c_R[i + c_R.size(0) * (varargout_3 - 1)];
              }

              r.set_size(&sk_emlrtRTEI, &sp, static_cast<int32_T>(b_k));
              for (i = 0; i < last; i++) {
                r[i] = static_cast<real_T>(r4[i]) - static_cast<real_T>(r5[i]);
              }

              st.site = &sk_emlrtRSI;
              coder::qrupdate(st, a__1, r1, d_R, r);
            } else {
              st.site = &sk_emlrtRSI;
              binary_expand_op_19(st, sk_emlrtRSI, a__1, r1, c_R, c_loop_ub, b_k,
                                  i, varargout_3, r4, r5);
            }

            if (c_R.size(0) < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &sh_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(0), &th_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if (c_R.size(1) < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(1), &uh_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(1), &vh_emlrtBCI, (emlrtConstCTX)&sp);
            }

            c_k[0] = static_cast<int32_T>(b_k);
            c_k[1] = static_cast<int32_T>(b_k);
            emlrtSubAssignSizeCheckR2012b(&c_k[0], 2, r1.size(), 2, &gc_emlrtECI,
              (emlrtCTX)&sp);
            for (i = 0; i < last; i++) {
              for (i1 = 0; i1 < last; i1++) {
                c_R[i1 + c_R.size(0) * i] = r1[i1 + static_cast<int32_T>(b_k) *
                  i];
              }
            }

            if (static_cast<int32_T>(b_k) + 1 > c_R.size(1)) {
              i = 0;
              i1 = 0;
              i2 = 0;
              i3 = 0;
            } else {
              empty_non_axis_sizes = ((static_cast<int32_T>(b_k) + 1 < 1) || (
                static_cast<int32_T>(b_k) + 1 > c_R.size(1)));
              if (empty_non_axis_sizes) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) + 1, 1,
                  c_R.size(1), &wh_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i = static_cast<int32_T>(b_k);
              empty_non_axis_sizes = (c_R.size(1) < 1);
              if (empty_non_axis_sizes) {
                emlrtDynamicBoundsCheckR2012b(c_R.size(1), 1, c_R.size(1),
                  &xh_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i1 = c_R.size(1);
              i2 = static_cast<int32_T>(b_k);
              i3 = c_R.size(1);
            }

            if (varargout_3 > c_R.size(0)) {
              emlrtDynamicBoundsCheckR2012b(varargout_3, 1, c_R.size(0),
                &vo_emlrtBCI, (emlrtConstCTX)&sp);
            }

            empty_non_axis_sizes = ((static_cast<int32_T>(b_k) < 1) || (
              static_cast<int32_T>(b_k) > c_R.size(0)));
            if (empty_non_axis_sizes) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(0), &vo_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if (varargout_3 > c_R.size(0)) {
              emlrtDynamicBoundsCheckR2012b(varargout_3, 1, c_R.size(0),
                &wo_emlrtBCI, (emlrtConstCTX)&sp);
            }

            loop_ub = i1 - i;
            r6.set_size(&tk_emlrtRTEI, &sp, 2, loop_ub);
            for (i1 = 0; i1 < loop_ub; i1++) {
              i4 = i + i1;
              r6[2 * i1] = c_R[(static_cast<int32_T>(b_k) + c_R.size(0) * i4) -
                1];
              r6[2 * i1 + 1] = c_R[(varargout_3 + c_R.size(0) * i4) - 1];
            }

            c_k[0] = 2;
            d_loop_ub = i3 - i2;
            c_k[1] = d_loop_ub;
            e_R[0] = 2;
            e_R[1] = loop_ub;
            emlrtSubAssignSizeCheckR2012b(&c_k[0], 2, &e_R[0], 2, &hc_emlrtECI,
              (emlrtCTX)&sp);
            for (i = 0; i < d_loop_ub; i++) {
              last = i2 + i;
              c_R[(varargout_3 + c_R.size(0) * last) - 1] = r6[2 * i];
              c_R[(static_cast<int32_T>(b_k) + c_R.size(0) * last) - 1] = r6[2 *
                i + 1];
            }

            empty_non_axis_sizes = ((static_cast<int32_T>(b_k) < 1) || (
              static_cast<int32_T>(b_k) > r2.size(0)));
            if (empty_non_axis_sizes) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                r2.size(0), &xo_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if (varargout_3 > r2.size(0)) {
              emlrtDynamicBoundsCheckR2012b(varargout_3, 1, r2.size(0),
                &xo_emlrtBCI, (emlrtConstCTX)&sp);
            }

            d_k[1] = r2[varargout_3 - 1];
            r2[varargout_3 - 1] = r2[static_cast<int32_T>(b_k) - 1];
            r2[static_cast<int32_T>(b_k) - 1] = d_k[1];
          }

          //  swap (k+1)-th and (k+j)-th columns
          if (varargout_4 > 1) {
            uint32_T uv[2];
            d_k[0] = b_k + 1.0;
            d_k[1] = b_k + static_cast<real_T>(varargout_4);
            uv[0] = static_cast<uint32_T>(b_k) + static_cast<uint32_T>
              (varargout_4);
            uv[1] = static_cast<uint32_T>(static_cast<int32_T>(b_k) + 1);
            if ((static_cast<int32_T>(uv[0]) < 1) || (static_cast<int32_T>(uv[0])
                 > p.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(uv[0]), 1,
                p.size(1), &mq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) + 1 < 1) || (static_cast<int32_T>(b_k)
                 + 1 > p.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) + 1, 1,
                p.size(1), &mq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            c_k[1] = p[static_cast<int32_T>(b_k)];
            if ((static_cast<int32_T>(b_k + 1.0) < 1) || (static_cast<int32_T>
                 (b_k + 1.0) > p.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k + 1.0), 1,
                p.size(1), &lq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            p[static_cast<int32_T>(b_k + 1.0) - 1] = p[static_cast<int32_T>(uv[0])
              - 1];
            if ((static_cast<int32_T>(d_k[1]) < 1) || (static_cast<int32_T>(d_k
                  [1]) > p.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d_k[1]), 1,
                p.size(1), &lq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            p[static_cast<int32_T>(d_k[1]) - 1] = c_k[1];
            if ((static_cast<int32_T>(b_k + 1.0) < 1) || (static_cast<int32_T>
                 (b_k + 1.0) > c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k + 1.0), 1,
                c_R.size(1), &kq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(d_k[1]) < 1) || (static_cast<int32_T>(d_k
                  [1]) > c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d_k[1]), 1,
                c_R.size(1), &kq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(uv[0]) < 1) || (static_cast<int32_T>(uv[0])
                 > c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(uv[0]), 1,
                c_R.size(1), &jq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) + 1 < 1) || (static_cast<int32_T>(b_k)
                 + 1 > c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) + 1, 1,
                c_R.size(1), &jq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            d_loop_ub = c_R.size(0);
            c_k[0] = c_R.size(0);
            c_k[1] = 2;
            e_R[0] = c_R.size(0);
            e_R[1] = 2;
            emlrtSubAssignSizeCheckR2012b(&c_k[0], 2, &e_R[0], 2, &ic_emlrtECI,
              (emlrtCTX)&sp);
            f_R.set_size(&uk_emlrtRTEI, &sp, c_R.size(0), 2);
            for (i = 0; i < 2; i++) {
              for (i1 = 0; i1 < d_loop_ub; i1++) {
                f_R[i1 + f_R.size(0) * i] = c_R[i1 + c_R.size(0) * (static_cast<
                  int32_T>(uv[i]) - 1)];
              }
            }

            for (i = 0; i < 2; i++) {
              for (i1 = 0; i1 < d_loop_ub; i1++) {
                c_R[i1 + c_R.size(0) * (static_cast<int32_T>(d_k[i]) - 1)] =
                  f_R[i1 + f_R.size(0) * i];
              }
            }

            if (varargout_4 > c2.size(1)) {
              emlrtDynamicBoundsCheckR2012b(varargout_4, 1, c2.size(1),
                &qo_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if (c2.size(1) < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, c2.size(1), &qo_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            if (varargout_4 > c2.size(1)) {
              emlrtDynamicBoundsCheckR2012b(varargout_4, 1, c2.size(1),
                &to_emlrtBCI, (emlrtConstCTX)&sp);
            }

            d_k[1] = c2[0];
            c2[0] = c2[varargout_4 - 1];
            c2[varargout_4 - 1] = d_k[1];
          }

          //  downdate inverse row norms
          if (b_k - 1.0 < 1.0) {
            loop_ub = 0;
          } else {
            if (r2.size(0) < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, r2.size(0), &yh_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) - 1 < 1) || (static_cast<int32_T>(b_k)
                 - 1 > r2.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) - 1, 1,
                r2.size(0), &ai_emlrtBCI, (emlrtConstCTX)&sp);
            }

            loop_ub = static_cast<int32_T>(b_k) - 1;
          }

          c_k[0] = 1;
          c_k[1] = loop_ub;
          st.site = &rk_emlrtRSI;
          coder::internal::indexShapeCheck(st, r2.size(0), c_k);
          if (b_k - 1.0 < 1.0) {
            b_loop_ub = 0;
            c_loop_ub = 0;
            last = 0;
          } else {
            if (c_R.size(0) < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &bi_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) - 1 < 1) || (static_cast<int32_T>(b_k)
                 - 1 > c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) - 1, 1,
                c_R.size(0), &ci_emlrtBCI, (emlrtConstCTX)&sp);
            }

            b_loop_ub = static_cast<int32_T>(b_k) - 1;
            if (c_R.size(1) < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(1), &di_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) - 1 < 1) || (static_cast<int32_T>(b_k)
                 - 1 > c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) - 1, 1,
                c_R.size(1), &ei_emlrtBCI, (emlrtConstCTX)&sp);
            }

            c_loop_ub = static_cast<int32_T>(b_k) - 1;
            if (c_R.size(0) < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &fi_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) - 1 < 1) || (static_cast<int32_T>(b_k)
                 - 1 > c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) - 1, 1,
                c_R.size(0), &gi_emlrtBCI, (emlrtConstCTX)&sp);
            }

            last = static_cast<int32_T>(b_k) - 1;
          }

          st.site = &rk_emlrtRSI;
          empty_non_axis_sizes = ((static_cast<int32_T>(b_k) < 1) || (
            static_cast<int32_T>(b_k) > c_R.size(1)));
          if (empty_non_axis_sizes) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1, c_R.size
              (1), &hi_emlrtBCI, &st);
          }

          R.set_size(&vk_emlrtRTEI, &st, b_loop_ub, c_loop_ub);
          for (i = 0; i < c_loop_ub; i++) {
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              R[i1 + R.size(0) * i] = c_R[i1 + c_R.size(0) * i];
            }
          }

          d_R.set_size(&wk_emlrtRTEI, &st, last);
          for (i = 0; i < last; i++) {
            d_R[i] = c_R[i + c_R.size(0) * (static_cast<int32_T>(b_k) - 1)];
          }

          c_st.site = &rk_emlrtRSI;
          coder::mldivide(c_st, R, d_R, r);
          b_loop_ub = c_R.size(0);
          empty_non_axis_sizes = ((static_cast<int32_T>(b_k) < 1) || (
            static_cast<int32_T>(b_k) > c_R.size(0)));
          if (empty_non_axis_sizes) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1, c_R.size
              (0), &ro_emlrtBCI, &st);
          }

          if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
               c_R.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1, c_R.size
              (1), &so_emlrtBCI, &st);
          }

          kmax = c_R[(static_cast<int32_T>(b_k) + c_R.size(0) *
                      (static_cast<int32_T>(b_k) - 1)) - 1];
          c_loop_ub = r.size(0);
          d_loop_ub = (r.size(0) / 2) << 1;
          k = d_loop_ub - 2;
          for (i = 0; i <= k; i += 2) {
            b_r2 = _mm_loadu_pd(&r[i]);
            _mm_storeu_pd(&r[i], _mm_div_pd(b_r2, _mm_set1_pd(kmax)));
          }

          for (i = d_loop_ub; i < c_loop_ub; i++) {
            r[i] = r[i] / kmax;
          }

          c_st.site = &rk_emlrtRSI;
          coder::b_abs(c_st, r, diagR);
          c_st.site = &pe_emlrtRSI;
          c_loop_ub = diagR.size(0);
          r.set_size(&xk_emlrtRTEI, &c_st, diagR.size(0));
          for (i = 0; i < c_loop_ub; i++) {
            kmax = diagR[i];
            r[i] = muDoubleScalarPower(kmax, 2.0);
          }

          if ((loop_ub != diagR.size(0)) && ((loop_ub != 1) && (diagR.size(0) !=
                1))) {
            emlrtDimSizeImpxCheckR2021b(loop_ub, diagR.size(0), &jc_emlrtECI,
              (emlrtConstCTX)&sp);
          }

          if (b_k - 1.0 < 1.0) {
            c_loop_ub = 0;
          } else {
            if (r2.size(0) < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, r2.size(0), &ii_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) - 1 < 1) || (static_cast<int32_T>(b_k)
                 - 1 > r2.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) - 1, 1,
                r2.size(0), &ji_emlrtBCI, (emlrtConstCTX)&sp);
            }

            c_loop_ub = static_cast<int32_T>(b_k) - 1;
          }

          if (loop_ub == r.size(0)) {
            r.set_size(&yk_emlrtRTEI, &sp, loop_ub);
            d_loop_ub = (loop_ub / 2) << 1;
            k = d_loop_ub - 2;
            for (i = 0; i <= k; i += 2) {
              b_r2 = _mm_loadu_pd(&r2[i]);
              r3 = _mm_loadu_pd(&r[i]);
              _mm_storeu_pd(&r[i], _mm_sub_pd(b_r2, r3));
            }

            for (i = d_loop_ub; i < loop_ub; i++) {
              r[i] = r2[i] - r[i];
            }
          } else {
            st.site = &rk_emlrtRSI;
            binary_expand_op_18(st, r, r2, loop_ub);
          }

          if (c_loop_ub != r.size(0)) {
            emlrtSubAssignSizeCheck1dR2017a(c_loop_ub, r.size(0), &kc_emlrtECI,
              (emlrtConstCTX)&sp);
          }

          for (i = 0; i < c_loop_ub; i++) {
            r2[i] = r[i];
          }

          if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
               r2.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1, r2.size
              (0), &uo_emlrtBCI, (emlrtConstCTX)&sp);
          }

          r2[static_cast<int32_T>(b_k) - 1] = 0.0;

          //  The following updates the R = [R11 R12; 0 R22] in two steps, recalling
          //  that R12 actually stores T = R11\R12.
          //
          //    - First do a "half-update" of T and an otherwise full update of R,
          //      i.e., overwrite R11 and R22 with R11_new and R22_new, respectively,
          //      and T with R11\R12_new.
          //
          //    - Then do a rank-one update of T to obtain R11_new\R12_new.
          //
          //  Note that the k-th and (k+1)-th columns are stored in swapped order
          //  during the first step below.
          //  half-update T and full-update R
          if (c_R.size(0) == static_cast<int32_T>(b_k)) {
            //  no trailing R22 -- typical for fixed-precision case
            empty_non_axis_sizes = ((static_cast<int32_T>(b_k) + 1 < 1) || (
              static_cast<int32_T>(b_k) + 1 > c_R.size(1)));
            if (empty_non_axis_sizes) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) + 1, 1,
                c_R.size(1), &ki_emlrtBCI, (emlrtConstCTX)&sp);
            }

            u.set_size(&yl_emlrtRTEI, &sp, c_R.size(0));
            for (i = 0; i < b_loop_ub; i++) {
              u[i] = c_R[i + c_R.size(0) * static_cast<int32_T>(b_k)];
            }

            //  for rank-one update of T
            if (c_R.size(1) < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(1), &li_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            loop_ub = static_cast<int32_T>(b_k);
            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(1), &mi_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k + 1.0) < 1) || (static_cast<int32_T>
                 (b_k + 1.0) > c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k + 1.0), 1,
                c_R.size(1), &ni_emlrtBCI, (emlrtConstCTX)&sp);
            }

            st.site = &qk_emlrtRSI;
            a__1.set_size(&am_emlrtRTEI, &st, c_R.size(0), static_cast<int32_T>
                          (b_k));
            for (i = 0; i < loop_ub; i++) {
              for (i1 = 0; i1 < b_loop_ub; i1++) {
                a__1[i1 + a__1.size(0) * i] = c_R[i1 + c_R.size(0) * i];
              }
            }

            diagR.set_size(&bm_emlrtRTEI, &st, c_R.size(0));
            for (i = 0; i < b_loop_ub; i++) {
              diagR[i] = c_R[i + c_R.size(0) * static_cast<int32_T>(b_k)];
            }

            c_st.site = &nj_emlrtRSI;
            coder::dynamic_size_checks(c_st, a__1, diagR, static_cast<int32_T>
              (b_k), c_R.size(0));
            c_st.site = &wp_emlrtRSI;
            coder::internal::blas::mtimes(c_st, a__1, diagR, r);
            emlrtSubAssignSizeCheckR2012b(c_R.size(), 1, r.size(), 1,
              &lc_emlrtECI, (emlrtCTX)&sp);
            for (i = 0; i < b_loop_ub; i++) {
              c_R[i + c_R.size(0) * static_cast<int32_T>(b_k)] = r[i];
            }

            if (b_k - 1.0 < 1.0) {
              loop_ub = 0;
            } else {
              if ((static_cast<int32_T>(b_k) - 1 < 1) || (static_cast<int32_T>
                   (b_k) - 1 > c_R.size(0))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) - 1, 1,
                  c_R.size(0), &oi_emlrtBCI, (emlrtConstCTX)&sp);
              }

              loop_ub = static_cast<int32_T>(b_k) - 1;
            }

            for (i = 0; i < loop_ub; i++) {
              c_R[i + c_R.size(0) * (static_cast<int32_T>(b_k) - 1)] = 0.0;
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(1), &yo_emlrtBCI, (emlrtConstCTX)&sp);
            }

            c_R[(static_cast<int32_T>(b_k) + c_R.size(0) * (static_cast<int32_T>
                  (b_k) - 1)) - 1] = 1.0;
          } else {
            real_T *x;

            //  zero out R22(2:end,:) by Householder transformation
            if (static_cast<int32_T>(b_k) + 1 > c_R.size(0)) {
              i = 0;
              i1 = 0;
            } else {
              if ((static_cast<int32_T>(b_k) + 1 < 1) || (static_cast<int32_T>
                   (b_k) + 1 > c_R.size(0))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) + 1, 1,
                  c_R.size(0), &pi_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i = static_cast<int32_T>(b_k);
              if (c_R.size(0) < 1) {
                emlrtDynamicBoundsCheckR2012b(c_R.size(0), 1, c_R.size(0),
                  &qi_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i1 = c_R.size(0);
            }

            if ((static_cast<int32_T>(b_k) + 1 < 1) || (static_cast<int32_T>(b_k)
                 + 1 > c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) + 1, 1,
                c_R.size(1), &ri_emlrtBCI, (emlrtConstCTX)&sp);
            }

            loop_ub = i1 - i;
            diagR.set_size(&al_emlrtRTEI, &sp, loop_ub);
            for (i1 = 0; i1 < loop_ub; i1++) {
              diagR[i1] = c_R[(i + i1) + c_R.size(0) * static_cast<int32_T>(b_k)];
            }

            //  v(1) = v(1) + sqrt(c2(1))*exp(1i*arg(R(k+1,k+1)));
            if (loop_ub < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, loop_ub, &vi_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            if (c2.size(1) < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, c2.size(1), &si_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k + 1.0) < 1) || (static_cast<int32_T>
                 (b_k + 1.0) > c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k + 1.0), 1,
                c_R.size(0), &ti_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k + 1.0) < 1) || (static_cast<int32_T>
                 (b_k + 1.0) > c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k + 1.0), 1,
                c_R.size(1), &ui_emlrtBCI, (emlrtConstCTX)&sp);
            }

            R_tmp = c2[0];
            st.site = &pk_emlrtRSI;
            if (R_tmp < 0.0) {
              emlrtErrorWithMessageIdR2018a(&st, &ec_emlrtRTEI,
                "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
            }

            R_tmp = muDoubleScalarSqrt(R_tmp);
            b_loop_ub = static_cast<int32_T>(b_k);
            kmax = muDoubleScalarAtan2(0.0, c_R[static_cast<int32_T>(b_k) +
              c_R.size(0) * static_cast<int32_T>(b_k)]);
            dc.re = kmax * 0.0;
            dc.im = kmax;
            coder::b_exp(dc);
            diagR[0] = c_R[i + c_R.size(0) * static_cast<int32_T>(b_k)] + R_tmp *
              dc.re;
            R_tmp = coder::b_norm(diagR);
            d_loop_ub = (diagR.size(0) / 2) << 1;
            k = d_loop_ub - 2;
            for (i = 0; i <= k; i += 2) {
              b_r2 = _mm_loadu_pd(&diagR[i]);
              _mm_storeu_pd(&diagR[i], _mm_div_pd(b_r2, _mm_set1_pd(R_tmp)));
            }

            for (i = d_loop_ub; i < loop_ub; i++) {
              diagR[i] = diagR[i] / R_tmp;
            }

            if (static_cast<int32_T>(b_k) + 1 > c_R.size(0)) {
              i = 0;
              i1 = 0;
            } else {
              if ((static_cast<int32_T>(b_k) + 1 < 1) || (static_cast<int32_T>
                   (b_k) + 1 > c_R.size(0))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) + 1, 1,
                  c_R.size(0), &wi_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i = static_cast<int32_T>(b_k);
              if (c_R.size(0) < 1) {
                emlrtDynamicBoundsCheckR2012b(c_R.size(0), 1, c_R.size(0),
                  &xi_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i1 = c_R.size(0);
            }

            if (static_cast<uint32_T>(b_k) + 2U > static_cast<uint32_T>(c_R.size
                 (1))) {
              i2 = 0;
              i3 = 0;
            } else {
              if ((static_cast<int32_T>(static_cast<uint32_T>(b_k) + 2U) < 1) ||
                  (static_cast<int32_T>(static_cast<uint32_T>(b_k) + 2U) >
                   c_R.size(1))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                  (static_cast<uint32_T>(b_k) + 2U), 1, c_R.size(1),
                  &yi_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i2 = static_cast<int32_T>(static_cast<uint32_T>(b_k)) + 1;
              if (c_R.size(1) < 1) {
                emlrtDynamicBoundsCheckR2012b(c_R.size(1), 1, c_R.size(1),
                  &aj_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i3 = c_R.size(1);
            }

            if (static_cast<int32_T>(b_k) + 1 > c_R.size(0)) {
              i4 = 0;
              varargout_3 = 0;
            } else {
              if ((static_cast<int32_T>(b_k) + 1 < 1) || (static_cast<int32_T>
                   (b_k) + 1 > c_R.size(0))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) + 1, 1,
                  c_R.size(0), &bj_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i4 = static_cast<int32_T>(b_k);
              if (c_R.size(0) < 1) {
                emlrtDynamicBoundsCheckR2012b(c_R.size(0), 1, c_R.size(0),
                  &cj_emlrtBCI, (emlrtConstCTX)&sp);
              }

              varargout_3 = c_R.size(0);
            }

            if (static_cast<uint32_T>(b_k) + 2U > static_cast<uint32_T>(c_R.size
                 (1))) {
              idx = 0;
              last = 0;
            } else {
              if ((static_cast<int32_T>(static_cast<uint32_T>(b_k) + 2U) < 1) ||
                  (static_cast<int32_T>(static_cast<uint32_T>(b_k) + 2U) >
                   c_R.size(1))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                  (static_cast<uint32_T>(b_k) + 2U), 1, c_R.size(1),
                  &dj_emlrtBCI, (emlrtConstCTX)&sp);
              }

              idx = static_cast<int32_T>(static_cast<uint32_T>(b_k)) + 1;
              if (c_R.size(1) < 1) {
                emlrtDynamicBoundsCheckR2012b(c_R.size(1), 1, c_R.size(1),
                  &ej_emlrtBCI, (emlrtConstCTX)&sp);
              }

              last = c_R.size(1);
            }

            st.site = &ok_emlrtRSI;
            loop_ub = varargout_3 - i4;
            c_loop_ub = last - idx;
            a__1.set_size(&bl_emlrtRTEI, &st, loop_ub, c_loop_ub);
            for (varargout_3 = 0; varargout_3 < c_loop_ub; varargout_3++) {
              for (last = 0; last < loop_ub; last++) {
                a__1[last + a__1.size(0) * varargout_3] = c_R[(i4 + last) +
                  c_R.size(0) * (idx + varargout_3)];
              }
            }

            c_st.site = &nj_emlrtRSI;
            coder::dynamic_size_checks(c_st, diagR, a__1, diagR.size(0), loop_ub);
            c_st.site = &wp_emlrtRSI;
            coder::internal::blas::mtimes(c_st, diagR, a__1, y);
            loop_ub = diagR.size(0);
            c_loop_ub = y.size(1);
            r1.set_size(&cl_emlrtRTEI, &sp, diagR.size(0), y.size(1));
            for (i4 = 0; i4 < c_loop_ub; i4++) {
              d_loop_ub = (diagR.size(0) / 2) << 1;
              k = d_loop_ub - 2;
              for (varargout_3 = 0; varargout_3 <= k; varargout_3 += 2) {
                b_r2 = _mm_loadu_pd(&diagR[varargout_3]);
                _mm_storeu_pd(&r1[varargout_3 + r1.size(0) * i4], _mm_mul_pd
                              (_mm_mul_pd(_mm_set1_pd(2.0), b_r2), _mm_set1_pd
                               (y[i4])));
              }

              for (varargout_3 = d_loop_ub; varargout_3 < loop_ub; varargout_3++)
              {
                r1[varargout_3 + r1.size(0) * i4] = 2.0 * diagR[varargout_3] *
                  y[i4];
              }
            }

            loop_ub = i1 - i;
            if ((loop_ub != r1.size(0)) && ((loop_ub != 1) && (r1.size(0) != 1)))
            {
              emlrtDimSizeImpxCheckR2021b(loop_ub, r1.size(0), &mc_emlrtECI,
                (emlrtConstCTX)&sp);
            }

            c_loop_ub = i3 - i2;
            if ((c_loop_ub != r1.size(1)) && ((c_loop_ub != 1) && (r1.size(1) !=
                  1))) {
              emlrtDimSizeImpxCheckR2021b(c_loop_ub, r1.size(1), &nc_emlrtECI,
                (emlrtConstCTX)&sp);
            }

            if (static_cast<int32_T>(b_k) + 1 > c_R.size(0)) {
              i4 = 0;
              varargout_3 = 0;
            } else {
              if ((static_cast<int32_T>(b_k) + 1 < 1) || (static_cast<int32_T>
                   (b_k) + 1 > c_R.size(0))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) + 1, 1,
                  c_R.size(0), &fj_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i4 = static_cast<int32_T>(b_k);
              if (c_R.size(0) < 1) {
                emlrtDynamicBoundsCheckR2012b(c_R.size(0), 1, c_R.size(0),
                  &gj_emlrtBCI, (emlrtConstCTX)&sp);
              }

              varargout_3 = c_R.size(0);
            }

            if (static_cast<uint32_T>(b_k) + 2U > static_cast<uint32_T>(c_R.size
                 (1))) {
              idx = 0;
              last = 0;
            } else {
              if ((static_cast<int32_T>(static_cast<uint32_T>(b_k) + 2U) < 1) ||
                  (static_cast<int32_T>(static_cast<uint32_T>(b_k) + 2U) >
                   c_R.size(1))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                  (static_cast<uint32_T>(b_k) + 2U), 1, c_R.size(1),
                  &hj_emlrtBCI, (emlrtConstCTX)&sp);
              }

              idx = static_cast<int32_T>(static_cast<uint32_T>(b_k)) + 1;
              if (c_R.size(1) < 1) {
                emlrtDynamicBoundsCheckR2012b(c_R.size(1), 1, c_R.size(1),
                  &ij_emlrtBCI, (emlrtConstCTX)&sp);
              }

              last = c_R.size(1);
            }

            if ((loop_ub == r1.size(0)) && (c_loop_ub == r1.size(1))) {
              r1.set_size(&dl_emlrtRTEI, &sp, loop_ub, c_loop_ub);
              for (i1 = 0; i1 < c_loop_ub; i1++) {
                d_loop_ub = (loop_ub / 2) << 1;
                k = d_loop_ub - 2;
                for (i3 = 0; i3 <= k; i3 += 2) {
                  b_r2 = _mm_loadu_pd(&c_R[(i + i3) + c_R.size(0) * (i2 + i1)]);
                  r3 = _mm_loadu_pd(&r1[i3 + r1.size(0) * i1]);
                  _mm_storeu_pd(&r1[i3 + r1.size(0) * i1], _mm_sub_pd(b_r2, r3));
                }

                for (i3 = d_loop_ub; i3 < loop_ub; i3++) {
                  r1[i3 + r1.size(0) * i1] = c_R[(i + i3) + c_R.size(0) * (i2 +
                    i1)] - r1[i3 + r1.size(0) * i1];
                }
              }
            } else {
              st.site = &ok_emlrtRSI;
              binary_expand_op_17(st, r1, c_R, i, i1, i2, i3);
            }

            d_loop_ub = varargout_3 - i4;
            c_k[0] = d_loop_ub;
            last -= idx;
            c_k[1] = last;
            emlrtSubAssignSizeCheckR2012b(&c_k[0], 2, r1.size(), 2, &oc_emlrtECI,
              (emlrtCTX)&sp);
            for (i = 0; i < last; i++) {
              for (i1 = 0; i1 < d_loop_ub; i1++) {
                c_R[(i4 + i1) + c_R.size(0) * (idx + i)] = r1[i1 + d_loop_ub * i];
              }
            }

            if (static_cast<uint32_T>(b_k) + 2U > static_cast<uint32_T>(c_R.size
                 (0))) {
              i = 0;
              i1 = 0;
            } else {
              if ((static_cast<int32_T>(static_cast<uint32_T>(b_k) + 2U) < 1) ||
                  (static_cast<int32_T>(static_cast<uint32_T>(b_k) + 2U) >
                   c_R.size(0))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                  (static_cast<uint32_T>(b_k) + 2U), 1, c_R.size(0),
                  &jj_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i = static_cast<int32_T>(static_cast<uint32_T>(b_k)) + 1;
              if (c_R.size(0) < 1) {
                emlrtDynamicBoundsCheckR2012b(c_R.size(0), 1, c_R.size(0),
                  &kj_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i1 = c_R.size(0);
            }

            if ((static_cast<int32_T>(b_k) + 1 < 1) || (static_cast<int32_T>(b_k)
                 + 1 > c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) + 1, 1,
                c_R.size(1), &lj_emlrtBCI, (emlrtConstCTX)&sp);
            }

            loop_ub = i1 - i;
            for (i1 = 0; i1 < loop_ub; i1++) {
              c_R[(i + i1) + c_R.size(0) * static_cast<int32_T>(b_k)] = 0.0;
            }

            if (c2.size(1) < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, c2.size(1), &mj_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) + 1 < 1) || (static_cast<int32_T>(b_k)
                 + 1 > c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) + 1, 1,
                c_R.size(0), &ep_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) + 1 < 1) || (static_cast<int32_T>(b_k)
                 + 1 > c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) + 1, 1,
                c_R.size(1), &fp_emlrtBCI, (emlrtConstCTX)&sp);
            }

            c_R[static_cast<int32_T>(b_k) + c_R.size(0) * static_cast<int32_T>
              (b_k)] = c2[0];
            if ((static_cast<int32_T>(b_k) + 1 < 1) || (static_cast<int32_T>(b_k)
                 + 1 > c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) + 1, 1,
                c_R.size(0), &ep_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) + 1 < 1) || (static_cast<int32_T>(b_k)
                 + 1 > c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) + 1, 1,
                c_R.size(1), &fp_emlrtBCI, (emlrtConstCTX)&sp);
            }

            st.site = &nk_emlrtRSI;
            x = &c_R[static_cast<int32_T>(b_k) + c_R.size(0) *
              static_cast<int32_T>(b_k)];
            if (*x < 0.0) {
              emlrtErrorWithMessageIdR2018a(&st, &ec_emlrtRTEI,
                "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
            }

            *x = muDoubleScalarSqrt(*x);

            //  restore certain entries of T to "R space"
            if (c_R.size(0) < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &nj_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(0), &oj_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if (c_R.size(1) < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(1), &pj_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(1), &qj_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if (c_R.size(0) < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &rj_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(0), &sj_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if (c_R.size(0) < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &uj_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(0), &vj_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k + 1.0) < 1) || (static_cast<int32_T>
                 (b_k + 1.0) > c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k + 1.0), 1,
                c_R.size(1), &wj_emlrtBCI, (emlrtConstCTX)&sp);
            }

            st.site = &mk_emlrtRSI;
            a__1.set_size(&el_emlrtRTEI, &st, static_cast<int32_T>(b_k),
                          static_cast<int32_T>(b_k));
            for (i = 0; i < b_loop_ub; i++) {
              for (i1 = 0; i1 < b_loop_ub; i1++) {
                a__1[i1 + a__1.size(0) * i] = c_R[i1 + c_R.size(0) * i];
              }
            }

            empty_non_axis_sizes = ((static_cast<int32_T>(b_k) + 1 < 1) || (
              static_cast<int32_T>(b_k) + 1 > c_R.size(1)));
            if (empty_non_axis_sizes) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) + 1, 1,
                c_R.size(1), &tj_emlrtBCI, &st);
            }

            diagR.set_size(&fl_emlrtRTEI, &st, static_cast<int32_T>(b_k));
            for (i = 0; i < b_loop_ub; i++) {
              diagR[i] = c_R[i + c_R.size(0) * static_cast<int32_T>(b_k)];
            }

            c_st.site = &nj_emlrtRSI;
            coder::dynamic_size_checks(c_st, a__1, diagR, static_cast<int32_T>
              (b_k), static_cast<int32_T>(b_k));
            c_st.site = &wp_emlrtRSI;
            coder::internal::blas::mtimes(c_st, a__1, diagR, r);
            emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, r.size(), 1,
              &pc_emlrtECI, (emlrtCTX)&sp);
            for (i = 0; i < b_loop_ub; i++) {
              c_R[i + c_R.size(0) * static_cast<int32_T>(b_k)] = r[i];
            }

            if (static_cast<uint32_T>(b_k) + 2U > static_cast<uint32_T>(c_R.size
                 (1))) {
              i = 0;
              i1 = 0;
              i2 = 0;
              i3 = 0;
            } else {
              empty_non_axis_sizes = ((static_cast<int32_T>(static_cast<uint32_T>
                (b_k) + 2U) < 1) || (static_cast<int32_T>(static_cast<uint32_T>
                (b_k) + 2U) > c_R.size(1)));
              if (empty_non_axis_sizes) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                  (static_cast<uint32_T>(b_k) + 2U), 1, c_R.size(1),
                  &xj_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i = static_cast<int32_T>(static_cast<uint32_T>(b_k)) + 1;
              empty_non_axis_sizes = (c_R.size(1) < 1);
              if (empty_non_axis_sizes) {
                emlrtDynamicBoundsCheckR2012b(c_R.size(1), 1, c_R.size(1),
                  &yj_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i1 = c_R.size(1);
              i2 = static_cast<int32_T>(static_cast<uint32_T>(b_k)) + 1;
              i3 = c_R.size(1);
            }

            empty_non_axis_sizes = ((static_cast<int32_T>(b_k) < 1) || (
              static_cast<int32_T>(b_k) > c_R.size(0)));
            if (empty_non_axis_sizes) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(0), &ak_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(0), &ip_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(1), &jp_emlrtBCI, (emlrtConstCTX)&sp);
            }

            kmax = c_R[(static_cast<int32_T>(b_k) + c_R.size(0) *
                        (static_cast<int32_T>(b_k) - 1)) - 1];
            loop_ub = i1 - i;
            y.set_size(&gl_emlrtRTEI, &sp, 1, loop_ub);
            for (i1 = 0; i1 < loop_ub; i1++) {
              y[i1] = kmax * c_R[(static_cast<int32_T>(b_k) + c_R.size(0) * (i +
                i1)) - 1];
            }

            c_k[0] = 1;
            d_loop_ub = i3 - i2;
            c_k[1] = d_loop_ub;
            emlrtSubAssignSizeCheckR2012b(&c_k[0], 2, y.size(), 2, &qc_emlrtECI,
              (emlrtCTX)&sp);
            for (i = 0; i < d_loop_ub; i++) {
              c_R[(static_cast<int32_T>(b_k) + c_R.size(0) * (i2 + i)) - 1] =
                y[i];
            }

            if (c_R.size(0) < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &bk_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(0), &ck_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(1), &dk_emlrtBCI, (emlrtConstCTX)&sp);
            }

            b_r.set_size(&hl_emlrtRTEI, &sp, static_cast<int32_T>(b_k));
            for (i = 0; i < b_loop_ub; i++) {
              b_r[i] = c_R[i + c_R.size(0) * (static_cast<int32_T>(b_k) - 1)];
            }

            if (static_cast<uint32_T>(b_k) + 2U > static_cast<uint32_T>(c_R.size
                 (1))) {
              i = 0;
              i1 = 0;
            } else {
              if ((static_cast<int32_T>(static_cast<uint32_T>(b_k) + 2U) < 1) ||
                  (static_cast<int32_T>(static_cast<uint32_T>(b_k) + 2U) >
                   c_R.size(1))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                  (static_cast<uint32_T>(b_k) + 2U), 1, c_R.size(1),
                  &ek_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i = static_cast<int32_T>(static_cast<uint32_T>(b_k)) + 1;
              if (c_R.size(1) < 1) {
                emlrtDynamicBoundsCheckR2012b(c_R.size(1), 1, c_R.size(1),
                  &fk_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i1 = c_R.size(1);
            }

            loop_ub = i1 - i;
            b_s.set_size(&il_emlrtRTEI, &sp, 1, loop_ub);
            for (i1 = 0; i1 < loop_ub; i1++) {
              b_s[i1] = c_R[(static_cast<int32_T>(b_k) + c_R.size(0) * (i + i1))
                - 1];
            }

            //  zero out R21 after swap by Givens rotation and update column norms
            if (static_cast<int32_T>(b_k) + 1 > c_R.size(1)) {
              i = 0;
              i1 = 0;
            } else {
              i = static_cast<int32_T>(b_k);
              if (c_R.size(1) < 1) {
                emlrtDynamicBoundsCheckR2012b(c_R.size(1), 1, c_R.size(1),
                  &hk_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i1 = c_R.size(1);
            }

            st.site = &lk_emlrtRSI;
            empty_non_axis_sizes = ((static_cast<int32_T>(b_k) + 1 < 1) || (
              static_cast<int32_T>(b_k) + 1 > c_R.size(0)));
            if (empty_non_axis_sizes) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) + 1, 1,
                c_R.size(0), &gk_emlrtBCI, &st);
            }

            c_loop_ub = i1 - i;
            g_R.set_size(&jl_emlrtRTEI, &st, 1, c_loop_ub);
            for (i1 = 0; i1 < c_loop_ub; i1++) {
              g_R[i1] = c_R[static_cast<int32_T>(b_k) + c_R.size(0) * (i + i1)];
            }

            c_st.site = &lk_emlrtRSI;
            coder::d_abs(c_st, g_R, y);
            c_st.site = &pe_emlrtRSI;
            y.set_size(&kl_emlrtRTEI, &c_st, 1, y.size(1));
            c_loop_ub = y.size(1) - 1;
            for (i = 0; i <= c_loop_ub; i++) {
              kmax = y[i];
              y[i] = muDoubleScalarPower(kmax, 2.0);
            }

            if ((c2.size(1) != y.size(1)) && ((c2.size(1) != 1) && (y.size(1) !=
                  1))) {
              emlrtDimSizeImpxCheckR2021b(c2.size(1), y.size(1), &rc_emlrtECI,
                (emlrtConstCTX)&sp);
            }

            if (c2.size(1) == y.size(1)) {
              c_loop_ub = c2.size(1) - 1;
              c2.set_size(&ll_emlrtRTEI, &sp, 1, c2.size(1));
              d_loop_ub = (c2.size(1) / 2) << 1;
              k = d_loop_ub - 2;
              for (i = 0; i <= k; i += 2) {
                b_r2 = _mm_loadu_pd(&c2[i]);
                r3 = _mm_loadu_pd(&y[i]);
                _mm_storeu_pd(&c2[i], _mm_sub_pd(b_r2, r3));
              }

              for (i = d_loop_ub; i <= c_loop_ub; i++) {
                c2[i] = c2[i] - y[i];
              }
            } else {
              st.site = &lk_emlrtRSI;
              minus(st, c2, y);
            }

            if (static_cast<int32_T>(b_k) > c_R.size(1)) {
              i = 0;
              i1 = 0;
              i2 = 0;
              i3 = 0;
            } else {
              empty_non_axis_sizes = ((static_cast<int32_T>(b_k) < 1) || (
                static_cast<int32_T>(b_k) > c_R.size(1)));
              if (empty_non_axis_sizes) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                  c_R.size(1), &lk_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i = static_cast<int32_T>(b_k) - 1;
              empty_non_axis_sizes = (c_R.size(1) < 1);
              if (empty_non_axis_sizes) {
                emlrtDynamicBoundsCheckR2012b(c_R.size(1), 1, c_R.size(1),
                  &mk_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i1 = c_R.size(1);
              i2 = static_cast<int32_T>(b_k) - 1;
              i3 = c_R.size(1);
            }

            if ((static_cast<int32_T>(b_k + 1.0) < 1) || (static_cast<int32_T>
                 (b_k + 1.0) > c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k + 1.0), 1,
                c_R.size(0), &iq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            st.site = &kk_emlrtRSI;
            if ((static_cast<int32_T>(b_k + 1.0) < 1) || (static_cast<int32_T>
                 (b_k + 1.0) > c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k + 1.0), 1,
                c_R.size(1), &ik_emlrtBCI, &st);
            }

            if ((static_cast<int32_T>(b_k + 1.0) < 1) || (static_cast<int32_T>
                 (b_k + 1.0) > c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k + 1.0), 1,
                c_R.size(0), &jk_emlrtBCI, &st);
            }

            if ((static_cast<int32_T>(b_k + 1.0) < 1) || (static_cast<int32_T>
                 (b_k + 1.0) > c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k + 1.0), 1,
                c_R.size(1), &kk_emlrtBCI, &st);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(0), &hq_emlrtBCI, &st);
            }

            if ((static_cast<int32_T>(b_k + 1.0) < 1) || (static_cast<int32_T>
                 (b_k + 1.0) > c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k + 1.0), 1,
                c_R.size(0), &hq_emlrtBCI, &st);
            }

            c_loop_ub = i1 - i;
            h_R.set_size(&ml_emlrtRTEI, &st, 2, c_loop_ub);
            for (i1 = 0; i1 < c_loop_ub; i1++) {
              last = i + i1;
              h_R[2 * i1] = c_R[(static_cast<int32_T>(b_k) + c_R.size(0) * last)
                - 1];
              h_R[2 * i1 + 1] = c_R[(static_cast<int32_T>(b_k + 1.0) + c_R.size
                (0) * last) - 1];
            }

            real_T dv[4];
            givens_id(c_R[(static_cast<int32_T>(b_k) + c_R.size(0) *
                           static_cast<int32_T>(b_k)) - 1], c_R
                      [static_cast<int32_T>(b_k) + c_R.size(0) *
                      static_cast<int32_T>(b_k)], dv);
            c_st.site = &wp_emlrtRSI;
            coder::internal::blas::mtimes(c_st, dv, h_R, r6);
            c_k[0] = 2;
            d_loop_ub = i3 - i2;
            c_k[1] = d_loop_ub;
            emlrtSubAssignSizeCheckR2012b(&c_k[0], 2, r6.size(), 2, &sc_emlrtECI,
              (emlrtCTX)&sp);
            for (i = 0; i < d_loop_ub; i++) {
              last = i2 + i;
              c_R[(static_cast<int32_T>(b_k) + c_R.size(0) * last) - 1] = r6[2 *
                i];
              c_R[(static_cast<int32_T>(b_k + 1.0) + c_R.size(0) * last) - 1] =
                r6[2 * i + 1];
            }

            if (static_cast<int32_T>(b_k) + 1 > c_R.size(1)) {
              i = 0;
              i1 = 0;
            } else {
              i = static_cast<int32_T>(b_k);
              if (c_R.size(1) < 1) {
                emlrtDynamicBoundsCheckR2012b(c_R.size(1), 1, c_R.size(1),
                  &nk_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i1 = c_R.size(1);
            }

            st.site = &jk_emlrtRSI;
            c_loop_ub = i1 - i;
            g_R.set_size(&nl_emlrtRTEI, &st, 1, c_loop_ub);
            for (i1 = 0; i1 < c_loop_ub; i1++) {
              g_R[i1] = c_R[static_cast<int32_T>(b_k) + c_R.size(0) * (i + i1)];
            }

            c_st.site = &jk_emlrtRSI;
            coder::d_abs(c_st, g_R, y);
            c_st.site = &pe_emlrtRSI;
            y.set_size(&ol_emlrtRTEI, &c_st, 1, y.size(1));
            c_loop_ub = y.size(1) - 1;
            for (i = 0; i <= c_loop_ub; i++) {
              kmax = y[i];
              y[i] = muDoubleScalarPower(kmax, 2.0);
            }

            if ((c2.size(1) != y.size(1)) && ((c2.size(1) != 1) && (y.size(1) !=
                  1))) {
              emlrtDimSizeImpxCheckR2021b(c2.size(1), y.size(1), &tc_emlrtECI,
                (emlrtConstCTX)&sp);
            }

            if (c2.size(1) == y.size(1)) {
              c_loop_ub = c2.size(1) - 1;
              c2.set_size(&pl_emlrtRTEI, &sp, 1, c2.size(1));
              d_loop_ub = (c2.size(1) / 2) << 1;
              k = d_loop_ub - 2;
              for (i = 0; i <= k; i += 2) {
                b_r2 = _mm_loadu_pd(&c2[i]);
                r3 = _mm_loadu_pd(&y[i]);
                _mm_storeu_pd(&c2[i], _mm_add_pd(b_r2, r3));
              }

              for (i = d_loop_ub; i <= c_loop_ub; i++) {
                c2[i] = c2[i] + y[i];
              }
            } else {
              st.site = &jk_emlrtRSI;
              b_plus(st, c2, y);
            }

            if (c2.size(1) < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, c2.size(1), &qk_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            st.site = &ik_emlrtRSI;
            if ((static_cast<int32_T>(b_k + 1.0) < 1) || (static_cast<int32_T>
                 (b_k + 1.0) > c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k + 1.0), 1,
                c_R.size(0), &ok_emlrtBCI, &st);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(1), &pk_emlrtBCI, &st);
            }

            kmax = muDoubleScalarAbs(c_R[static_cast<int32_T>(b_k) + c_R.size(0)
              * (static_cast<int32_T>(b_k) - 1)]);
            c_st.site = &oe_emlrtRSI;
            d_st.site = &pe_emlrtRSI;
            c2[0] = kmax * kmax;
            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(1), &rp_emlrtBCI, (emlrtConstCTX)&sp);
            }

            kmax = c_R[(static_cast<int32_T>(b_k) + c_R.size(0) *
                        (static_cast<int32_T>(b_k) - 1)) - 1];
            if (static_cast<int32_T>(b_k) < 1) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                static_cast<int32_T>(b_k), &sp_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(0), &tp_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(1), &up_emlrtBCI, (emlrtConstCTX)&sp);
            }

            R_tmp = b_r[static_cast<int32_T>(b_k) - 1];
            c_R[(static_cast<int32_T>(b_k) + c_R.size(0) * (static_cast<int32_T>
                  (b_k) - 1)) - 1] = R_tmp;
            if (c_R.size(0) < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &rk_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(0), &sk_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if (c_R.size(1) < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(1), &tk_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(1), &uk_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if (c_R.size(0) < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &vk_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(0), &wk_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) + 1 < 1) || (static_cast<int32_T>(b_k)
                 + 1 > c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) + 1, 1,
                c_R.size(1), &xk_emlrtBCI, (emlrtConstCTX)&sp);
            }

            R.set_size(&ql_emlrtRTEI, &sp, static_cast<int32_T>(b_k),
                       static_cast<int32_T>(b_k));
            for (i = 0; i < b_loop_ub; i++) {
              for (i1 = 0; i1 < b_loop_ub; i1++) {
                R[i1 + R.size(0) * i] = c_R[i1 + c_R.size(0) * i];
              }
            }

            d_R.set_size(&rl_emlrtRTEI, &sp, static_cast<int32_T>(b_k));
            for (i = 0; i < b_loop_ub; i++) {
              d_R[i] = c_R[i + c_R.size(0) * static_cast<int32_T>(b_k)];
            }

            st.site = &hk_emlrtRSI;
            coder::mldivide(st, R, d_R, u);

            //  for rank-one update of T
            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(0), &wp_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(1), &xp_emlrtBCI, (emlrtConstCTX)&sp);
            }

            c_R[(static_cast<int32_T>(b_k) + c_R.size(0) * (static_cast<int32_T>
                  (b_k) - 1)) - 1] = kmax;

            //  half-update T
            if (b_k - 1.0 < 1.0) {
              b_loop_ub = 0;
              c_loop_ub = 0;
              last = 0;
            } else {
              if (c_R.size(0) < 1) {
                emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &yk_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              if ((static_cast<int32_T>(b_k) - 1 < 1) || (static_cast<int32_T>
                   (b_k) - 1 > c_R.size(0))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) - 1, 1,
                  c_R.size(0), &al_emlrtBCI, (emlrtConstCTX)&sp);
              }

              b_loop_ub = static_cast<int32_T>(b_k) - 1;
              if (c_R.size(1) < 1) {
                emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(1), &bl_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              if ((static_cast<int32_T>(b_k) - 1 < 1) || (static_cast<int32_T>
                   (b_k) - 1 > c_R.size(1))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) - 1, 1,
                  c_R.size(1), &cl_emlrtBCI, (emlrtConstCTX)&sp);
              }

              c_loop_ub = static_cast<int32_T>(b_k) - 1;
              if ((static_cast<int32_T>(b_k) - 1 < 1) || (static_cast<int32_T>
                   (b_k) - 1 > static_cast<int32_T>(b_k))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) - 1, 1,
                  static_cast<int32_T>(b_k), &dl_emlrtBCI, (emlrtConstCTX)&sp);
              }

              last = static_cast<int32_T>(b_k) - 1;
            }

            c_k[0] = 1;
            c_k[1] = last;
            st.site = &gk_emlrtRSI;
            coder::internal::indexShapeCheck(st, b_r.size(0), c_k);
            R.set_size(&sl_emlrtRTEI, &sp, b_loop_ub, c_loop_ub);
            for (i = 0; i < c_loop_ub; i++) {
              for (i1 = 0; i1 < b_loop_ub; i1++) {
                R[i1 + R.size(0) * i] = c_R[i1 + c_R.size(0) * i];
              }
            }

            d_R.set_size(&tl_emlrtRTEI, &sp, last);
            for (i = 0; i < last; i++) {
              d_R[i] = b_r[i];
            }

            st.site = &gk_emlrtRSI;
            coder::mldivide(st, R, d_R, diagR);
            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(0), &yp_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(1), &aq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if (static_cast<int32_T>(b_k) < 1) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                static_cast<int32_T>(b_k), &bq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(0), &cq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(1), &dq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            c_R[(static_cast<int32_T>(b_k) + c_R.size(0) * (static_cast<int32_T>
                  (b_k) - 1)) - 1] = c_R[(static_cast<int32_T>(b_k) + c_R.size(0)
              * (static_cast<int32_T>(b_k) - 1)) - 1] / R_tmp;
            if (b_k - 1.0 < 1.0) {
              b_loop_ub = 0;
            } else {
              if (c_R.size(0) < 1) {
                emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &el_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              if ((static_cast<int32_T>(b_k) - 1 < 1) || (static_cast<int32_T>
                   (b_k) - 1 > c_R.size(0))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) - 1, 1,
                  c_R.size(0), &fl_emlrtBCI, (emlrtConstCTX)&sp);
              }

              b_loop_ub = static_cast<int32_T>(b_k) - 1;
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(1), &gl_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(0), &eq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(1), &fq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            kmax = 1.0 - c_R[(static_cast<int32_T>(b_k) + c_R.size(0) * (
              static_cast<int32_T>(b_k) - 1)) - 1];
            c_loop_ub = diagR.size(0);
            r.set_size(&ul_emlrtRTEI, &sp, diagR.size(0));
            last = (diagR.size(0) / 2) << 1;
            d_loop_ub = last - 2;
            for (i = 0; i <= d_loop_ub; i += 2) {
              b_r2 = _mm_loadu_pd(&diagR[i]);
              _mm_storeu_pd(&r[i], _mm_mul_pd(b_r2, _mm_set1_pd(kmax)));
            }

            for (i = last; i < c_loop_ub; i++) {
              r[i] = diagR[i] * kmax;
            }

            emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, r.size(), 1,
              &uc_emlrtECI, (emlrtCTX)&sp);
            for (i = 0; i < b_loop_ub; i++) {
              c_R[i + c_R.size(0) * (static_cast<int32_T>(b_k) - 1)] = r[i];
            }

            if (b_k - 1.0 < 1.0) {
              b_loop_ub = 0;
            } else {
              if (c_R.size(0) < 1) {
                emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &hl_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              if ((static_cast<int32_T>(b_k) - 1 < 1) || (static_cast<int32_T>
                   (b_k) - 1 > c_R.size(0))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) - 1, 1,
                  c_R.size(0), &il_emlrtBCI, (emlrtConstCTX)&sp);
              }

              b_loop_ub = static_cast<int32_T>(b_k) - 1;
            }

            if (static_cast<uint32_T>(b_k) + 2U > static_cast<uint32_T>(c_R.size
                 (1))) {
              i = 0;
              i1 = 0;
              i2 = 0;
              i3 = 0;
            } else {
              empty_non_axis_sizes = ((static_cast<int32_T>(static_cast<uint32_T>
                (b_k) + 2U) < 1) || (static_cast<int32_T>(static_cast<uint32_T>
                (b_k) + 2U) > c_R.size(1)));
              if (empty_non_axis_sizes) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                  (static_cast<uint32_T>(b_k) + 2U), 1, c_R.size(1),
                  &jl_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i = static_cast<int32_T>(static_cast<uint32_T>(b_k)) + 1;
              empty_non_axis_sizes = (c_R.size(1) < 1);
              if (empty_non_axis_sizes) {
                emlrtDynamicBoundsCheckR2012b(c_R.size(1), 1, c_R.size(1),
                  &kl_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i1 = c_R.size(1);
              i2 = static_cast<int32_T>(static_cast<uint32_T>(b_k)) + 1;
              i3 = c_R.size(1);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(0), &ml_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i4 = i3 - i2;
            if ((loop_ub != i4) && ((loop_ub != 1) && (i4 != 1))) {
              emlrtDimSizeImpxCheckR2021b(loop_ub, i4, &vc_emlrtECI,
                (emlrtConstCTX)&sp);
            }

            if (static_cast<int32_T>(b_k) < 1) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                static_cast<int32_T>(b_k), &ll_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if (b_s.size(1) == i4) {
              for (i3 = 0; i3 <= d_loop_ub; i3 += 2) {
                b_r2 = _mm_loadu_pd(&diagR[i3]);
                _mm_storeu_pd(&diagR[i3], _mm_div_pd(b_r2, _mm_set1_pd(R_tmp)));
              }

              for (i3 = last; i3 < c_loop_ub; i3++) {
                diagR[i3] = diagR[i3] / R_tmp;
              }

              b_s.set_size(&vl_emlrtRTEI, &sp, 1, b_s.size(1));
              for (i3 = 0; i3 < loop_ub; i3++) {
                b_s[i3] = b_s[i3] - c_R[(static_cast<int32_T>(b_k) + c_R.size(0)
                  * (i2 + i3)) - 1];
              }

              c_loop_ub = diagR.size(0);
              a__1.set_size(&mk_emlrtRTEI, &sp, diagR.size(0), loop_ub);
              for (i2 = 0; i2 < loop_ub; i2++) {
                d_loop_ub = (diagR.size(0) / 2) << 1;
                k = d_loop_ub - 2;
                for (i3 = 0; i3 <= k; i3 += 2) {
                  b_r2 = _mm_loadu_pd(&diagR[i3]);
                  _mm_storeu_pd(&a__1[i3 + a__1.size(0) * i2], _mm_mul_pd(b_r2,
                    _mm_set1_pd(b_s[i2])));
                }

                for (i3 = d_loop_ub; i3 < c_loop_ub; i3++) {
                  a__1[i3 + a__1.size(0) * i2] = diagR[i3] * b_s[i2];
                }
              }
            } else {
              st.site = &vr_emlrtRSI;
              binary_expand_op_16(st, a__1, diagR, b_r, b_k, b_s, c_R, i2, i3);
            }

            if ((b_loop_ub != a__1.size(0)) && ((b_loop_ub != 1) && (a__1.size(0)
                  != 1))) {
              emlrtDimSizeImpxCheckR2021b(b_loop_ub, a__1.size(0), &wc_emlrtECI,
                (emlrtConstCTX)&sp);
            }

            loop_ub = i1 - i;
            if ((loop_ub != a__1.size(1)) && ((loop_ub != 1) && (a__1.size(1) !=
                  1))) {
              emlrtDimSizeImpxCheckR2021b(loop_ub, a__1.size(1), &xc_emlrtECI,
                (emlrtConstCTX)&sp);
            }

            if (b_k - 1.0 < 1.0) {
              c_loop_ub = 0;
            } else {
              if (c_R.size(0) < 1) {
                emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &nl_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              if ((static_cast<int32_T>(b_k) - 1 < 1) || (static_cast<int32_T>
                   (b_k) - 1 > c_R.size(0))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) - 1, 1,
                  c_R.size(0), &ol_emlrtBCI, (emlrtConstCTX)&sp);
              }

              c_loop_ub = static_cast<int32_T>(b_k) - 1;
            }

            if (static_cast<uint32_T>(b_k) + 2U > static_cast<uint32_T>(c_R.size
                 (1))) {
              i2 = 0;
              i3 = 0;
            } else {
              if ((static_cast<int32_T>(static_cast<uint32_T>(b_k) + 2U) < 1) ||
                  (static_cast<int32_T>(static_cast<uint32_T>(b_k) + 2U) >
                   c_R.size(1))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                  (static_cast<uint32_T>(b_k) + 2U), 1, c_R.size(1),
                  &pl_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i2 = static_cast<int32_T>(static_cast<uint32_T>(b_k)) + 1;
              if (c_R.size(1) < 1) {
                emlrtDynamicBoundsCheckR2012b(c_R.size(1), 1, c_R.size(1),
                  &ql_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i3 = c_R.size(1);
            }

            if ((b_loop_ub == a__1.size(0)) && (loop_ub == a__1.size(1))) {
              r7.set_size(&wl_emlrtRTEI, &sp, b_loop_ub, loop_ub);
              for (i1 = 0; i1 < loop_ub; i1++) {
                d_loop_ub = (b_loop_ub / 2) << 1;
                k = d_loop_ub - 2;
                for (i4 = 0; i4 <= k; i4 += 2) {
                  b_r2 = _mm_loadu_pd(&c_R[i4 + c_R.size(0) * (i + i1)]);
                  r3 = _mm_loadu_pd(&a__1[i4 + a__1.size(0) * i1]);
                  _mm_storeu_pd(&r7[i4 + r7.size(0) * i1], _mm_add_pd(b_r2, r3));
                }

                for (i4 = d_loop_ub; i4 < b_loop_ub; i4++) {
                  r7[i4 + r7.size(0) * i1] = c_R[i4 + c_R.size(0) * (i + i1)] +
                    a__1[i4 + a__1.size(0) * i1];
                }
              }
            } else {
              st.site = &tr_emlrtRSI;
              binary_expand_op_10(st, r7, c_R, b_loop_ub, i, i1, a__1);
            }

            c_k[0] = c_loop_ub;
            d_loop_ub = i3 - i2;
            c_k[1] = d_loop_ub;
            emlrtSubAssignSizeCheckR2012b(&c_k[0], 2, r7.size(), 2, &yc_emlrtECI,
              (emlrtCTX)&sp);
            for (i = 0; i < d_loop_ub; i++) {
              for (i1 = 0; i1 < c_loop_ub; i1++) {
                c_R[i1 + c_R.size(0) * (i2 + i)] = r7[i1 + c_loop_ub * i];
              }
            }

            if (static_cast<uint32_T>(b_k) + 2U > static_cast<uint32_T>(c_R.size
                 (1))) {
              i = 0;
              i1 = 0;
              i2 = 0;
              i3 = 0;
            } else {
              empty_non_axis_sizes = ((static_cast<int32_T>(static_cast<uint32_T>
                (b_k) + 2U) < 1) || (static_cast<int32_T>(static_cast<uint32_T>
                (b_k) + 2U) > c_R.size(1)));
              if (empty_non_axis_sizes) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                  (static_cast<uint32_T>(b_k) + 2U), 1, c_R.size(1),
                  &rl_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i = static_cast<int32_T>(static_cast<uint32_T>(b_k)) + 1;
              empty_non_axis_sizes = (c_R.size(1) < 1);
              if (empty_non_axis_sizes) {
                emlrtDynamicBoundsCheckR2012b(c_R.size(1), 1, c_R.size(1),
                  &sl_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i1 = c_R.size(1);
              i2 = static_cast<int32_T>(static_cast<uint32_T>(b_k)) + 1;
              i3 = c_R.size(1);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(0), &tl_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 b_r.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                b_r.size(0), &gq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            loop_ub = i1 - i;
            y.set_size(&xl_emlrtRTEI, &sp, 1, loop_ub);
            for (i1 = 0; i1 < loop_ub; i1++) {
              y[i1] = c_R[(static_cast<int32_T>(b_k) + c_R.size(0) * (i + i1)) -
                1] / b_r[static_cast<int32_T>(b_k) - 1];
            }

            c_k[0] = 1;
            d_loop_ub = i3 - i2;
            c_k[1] = d_loop_ub;
            emlrtSubAssignSizeCheckR2012b(&c_k[0], 2, y.size(), 2, &ad_emlrtECI,
              (emlrtCTX)&sp);
            for (i = 0; i < d_loop_ub; i++) {
              c_R[(static_cast<int32_T>(b_k) + c_R.size(0) * (i2 + i)) - 1] =
                y[i];
            }
          }

          //  swap k-th and (k+1)-th columns; update inverse row norms
          empty_non_axis_sizes = ((static_cast<int32_T>(b_k + 1.0) < 1) || (
            static_cast<int32_T>(b_k + 1.0) > p.size(1)));
          if (empty_non_axis_sizes) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k + 1.0), 1,
              p.size(1), &ap_emlrtBCI, (emlrtConstCTX)&sp);
          }

          empty_non_axis_sizes = ((static_cast<int32_T>(b_k) < 1) || (
            static_cast<int32_T>(b_k) > p.size(1)));
          if (empty_non_axis_sizes) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1, p.size(1),
              &ap_emlrtBCI, (emlrtConstCTX)&sp);
          }

          last = p[static_cast<int32_T>(b_k) - 1];
          p[static_cast<int32_T>(b_k) - 1] = p[static_cast<int32_T>(b_k + 1.0) -
            1];
          p[static_cast<int32_T>(b_k + 1.0) - 1] = last;
          empty_non_axis_sizes = ((static_cast<int32_T>(b_k) < 1) || (
            static_cast<int32_T>(b_k) > c_R.size(1)));
          if (empty_non_axis_sizes) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1, c_R.size
              (1), &bp_emlrtBCI, (emlrtConstCTX)&sp);
          }

          sizes[0] = static_cast<int32_T>(b_k) - 1;
          empty_non_axis_sizes = ((static_cast<int32_T>(b_k + 1.0) < 1) || (
            static_cast<int32_T>(b_k + 1.0) > c_R.size(1)));
          if (empty_non_axis_sizes) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k + 1.0), 1,
              c_R.size(1), &bp_emlrtBCI, (emlrtConstCTX)&sp);
          }

          sizes[1] = static_cast<int32_T>(b_k + 1.0) - 1;
          c_k[0] = static_cast<int32_T>(b_k + 1.0) - 1;
          c_k[1] = static_cast<int32_T>(b_k) - 1;
          loop_ub = c_R.size(0);
          f_R.set_size(&cm_emlrtRTEI, &sp, c_R.size(0), 2);
          for (i = 0; i < 2; i++) {
            for (i1 = 0; i1 < loop_ub; i1++) {
              f_R[i1 + f_R.size(0) * i] = c_R[i1 + c_R.size(0) * c_k[i]];
            }
          }

          c_k[0] = c_R.size(0);
          c_k[1] = 2;
          e_R[0] = c_R.size(0);
          e_R[1] = 2;
          emlrtSubAssignSizeCheckR2012b(&c_k[0], 2, &e_R[0], 2, &bd_emlrtECI,
            (emlrtCTX)&sp);
          for (i = 0; i < 2; i++) {
            for (i1 = 0; i1 < loop_ub; i1++) {
              c_R[i1 + c_R.size(0) * sizes[i]] = f_R[i1 + f_R.size(0) * i];
            }
          }

          if (b_k - 1.0 < 1.0) {
            loop_ub = 0;
          } else {
            if (r2.size(0) < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, r2.size(0), &ul_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) - 1 < 1) || (static_cast<int32_T>(b_k)
                 - 1 > r2.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) - 1, 1,
                r2.size(0), &vl_emlrtBCI, (emlrtConstCTX)&sp);
            }

            loop_ub = static_cast<int32_T>(b_k) - 1;
          }

          c_k[0] = 1;
          c_k[1] = loop_ub;
          st.site = &fk_emlrtRSI;
          coder::internal::indexShapeCheck(st, r2.size(0), c_k);
          if (b_k - 1.0 < 1.0) {
            b_loop_ub = 0;
            c_loop_ub = 0;
            last = 0;
          } else {
            if (c_R.size(0) < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &wl_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) - 1 < 1) || (static_cast<int32_T>(b_k)
                 - 1 > c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) - 1, 1,
                c_R.size(0), &xl_emlrtBCI, (emlrtConstCTX)&sp);
            }

            b_loop_ub = static_cast<int32_T>(b_k) - 1;
            if (c_R.size(1) < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(1), &yl_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) - 1 < 1) || (static_cast<int32_T>(b_k)
                 - 1 > c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) - 1, 1,
                c_R.size(1), &am_emlrtBCI, (emlrtConstCTX)&sp);
            }

            c_loop_ub = static_cast<int32_T>(b_k) - 1;
            if (c_R.size(0) < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &bm_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) - 1 < 1) || (static_cast<int32_T>(b_k)
                 - 1 > c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) - 1, 1,
                c_R.size(0), &cm_emlrtBCI, (emlrtConstCTX)&sp);
            }

            last = static_cast<int32_T>(b_k) - 1;
          }

          st.site = &fk_emlrtRSI;
          R.set_size(&dm_emlrtRTEI, &st, b_loop_ub, c_loop_ub);
          for (i = 0; i < c_loop_ub; i++) {
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              R[i1 + R.size(0) * i] = c_R[i1 + c_R.size(0) * i];
            }
          }

          d_R.set_size(&em_emlrtRTEI, &st, last);
          for (i = 0; i < last; i++) {
            d_R[i] = c_R[i + c_R.size(0) * (static_cast<int32_T>(b_k) - 1)];
          }

          c_st.site = &fk_emlrtRSI;
          coder::mldivide(c_st, R, d_R, r);
          empty_non_axis_sizes = ((static_cast<int32_T>(b_k) < 1) || (
            static_cast<int32_T>(b_k) > c_R.size(0)));
          if (empty_non_axis_sizes) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1, c_R.size
              (0), &cp_emlrtBCI, &st);
          }

          if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
               c_R.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1, c_R.size
              (1), &dp_emlrtBCI, &st);
          }

          R_tmp = c_R[(static_cast<int32_T>(b_k) + c_R.size(0) *
                       (static_cast<int32_T>(b_k) - 1)) - 1];
          b_loop_ub = r.size(0);
          d_loop_ub = (r.size(0) / 2) << 1;
          k = d_loop_ub - 2;
          for (i = 0; i <= k; i += 2) {
            b_r2 = _mm_loadu_pd(&r[i]);
            _mm_storeu_pd(&r[i], _mm_div_pd(b_r2, _mm_set1_pd(R_tmp)));
          }

          for (i = d_loop_ub; i < b_loop_ub; i++) {
            r[i] = r[i] / R_tmp;
          }

          c_st.site = &fk_emlrtRSI;
          coder::b_abs(c_st, r, diagR);
          c_st.site = &pe_emlrtRSI;
          b_loop_ub = diagR.size(0);
          r.set_size(&fm_emlrtRTEI, &c_st, diagR.size(0));
          for (i = 0; i < b_loop_ub; i++) {
            kmax = diagR[i];
            r[i] = muDoubleScalarPower(kmax, 2.0);
          }

          if ((loop_ub != diagR.size(0)) && ((loop_ub != 1) && (diagR.size(0) !=
                1))) {
            emlrtDimSizeImpxCheckR2021b(loop_ub, diagR.size(0), &cd_emlrtECI,
              (emlrtConstCTX)&sp);
          }

          if (b_k - 1.0 < 1.0) {
            b_loop_ub = 0;
          } else {
            if (r2.size(0) < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, r2.size(0), &dm_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(b_k) - 1 < 1) || (static_cast<int32_T>(b_k)
                 - 1 > r2.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) - 1, 1,
                r2.size(0), &em_emlrtBCI, (emlrtConstCTX)&sp);
            }

            b_loop_ub = static_cast<int32_T>(b_k) - 1;
          }

          if (loop_ub == r.size(0)) {
            r.set_size(&gm_emlrtRTEI, &sp, loop_ub);
            d_loop_ub = (loop_ub / 2) << 1;
            k = d_loop_ub - 2;
            for (i = 0; i <= k; i += 2) {
              b_r2 = _mm_loadu_pd(&r2[i]);
              r3 = _mm_loadu_pd(&r[i]);
              _mm_storeu_pd(&r[i], _mm_add_pd(b_r2, r3));
            }

            for (i = d_loop_ub; i < loop_ub; i++) {
              r[i] = r2[i] + r[i];
            }
          } else {
            st.site = &fk_emlrtRSI;
            binary_expand_op_14(st, r, r2, loop_ub);
          }

          if (b_loop_ub != r.size(0)) {
            emlrtSubAssignSizeCheck1dR2017a(b_loop_ub, r.size(0), &dd_emlrtECI,
              (emlrtConstCTX)&sp);
          }

          for (i = 0; i < b_loop_ub; i++) {
            r2[i] = r[i];
          }

          st.site = &ek_emlrtRSI;
          loop_ub = static_cast<int32_T>(b_k);
          if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
               c_R.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1, c_R.size
              (1), &fm_emlrtBCI, &st);
          }

          kmax = muDoubleScalarAbs(R_tmp);
          c_st.site = &oe_emlrtRSI;
          d_st.site = &pe_emlrtRSI;
          if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
               r2.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1, r2.size
              (0), &gp_emlrtBCI, (emlrtConstCTX)&sp);
          }

          r2[static_cast<int32_T>(b_k) - 1] = 1.0 / (kmax * kmax);

          //  finish update of T by Sherman-Morrison
          if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
               u.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1, u.size(0),
              &hp_emlrtBCI, (emlrtConstCTX)&sp);
          }

          u[static_cast<int32_T>(b_k) - 1] = u[static_cast<int32_T>(b_k) - 1] -
            1.0;
          if (c_R.size(0) < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &gm_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
               c_R.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1, c_R.size
              (0), &hm_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if (static_cast<int32_T>(b_k) + 1 > c_R.size(1)) {
            i = 0;
            i1 = 0;
            i2 = 0;
            i3 = 0;
          } else {
            empty_non_axis_sizes = ((static_cast<int32_T>(b_k) + 1 < 1) || (
              static_cast<int32_T>(b_k) + 1 > c_R.size(1)));
            if (empty_non_axis_sizes) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) + 1, 1,
                c_R.size(1), &im_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i = static_cast<int32_T>(b_k);
            empty_non_axis_sizes = (c_R.size(1) < 1);
            if (empty_non_axis_sizes) {
              emlrtDynamicBoundsCheckR2012b(c_R.size(1), 1, c_R.size(1),
                &jm_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i1 = c_R.size(1);
            i2 = static_cast<int32_T>(b_k);
            i3 = c_R.size(1);
          }

          b_loop_ub = u.size(0);
          if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
               u.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1, u.size(0),
              &kp_emlrtBCI, (emlrtConstCTX)&sp);
          }

          R_tmp = u[static_cast<int32_T>(b_k) - 1] + 1.0;
          c_loop_ub = i3 - i2;
          tmp.set_size(&hm_emlrtRTEI, &sp, u.size(0), c_loop_ub);
          for (i3 = 0; i3 < c_loop_ub; i3++) {
            d_loop_ub = (u.size(0) / 2) << 1;
            k = d_loop_ub - 2;
            for (i4 = 0; i4 <= k; i4 += 2) {
              b_r2 = _mm_loadu_pd(&u[i4]);
              _mm_storeu_pd(&tmp[i4 + tmp.size(0) * i3], _mm_div_pd(_mm_add_pd
                (_mm_set1_pd(0.0), _mm_mul_pd(b_r2, _mm_set1_pd(c_R[(
                static_cast<int32_T>(b_k) + c_R.size(0) * (i2 + i3)) - 1]))),
                _mm_set1_pd(R_tmp)));
            }

            for (i4 = d_loop_ub; i4 < b_loop_ub; i4++) {
              tmp[i4 + tmp.size(0) * i3] = u[i4] * c_R[(static_cast<int32_T>(b_k)
                + c_R.size(0) * (i2 + i3)) - 1] / R_tmp;
            }
          }

          if ((static_cast<int32_T>(b_k) != tmp.size(0)) &&
              ((static_cast<int32_T>(b_k) != 1) && (tmp.size(0) != 1))) {
            emlrtDimSizeImpxCheckR2021b(static_cast<int32_T>(b_k), tmp.size(0),
              &ed_emlrtECI, (emlrtConstCTX)&sp);
          }

          b_loop_ub = i1 - i;
          if ((b_loop_ub != tmp.size(1)) && ((b_loop_ub != 1) && (tmp.size(1) !=
                1))) {
            emlrtDimSizeImpxCheckR2021b(b_loop_ub, tmp.size(1), &fd_emlrtECI,
              (emlrtConstCTX)&sp);
          }

          if (c_R.size(0) < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &km_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
               c_R.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1, c_R.size
              (0), &lm_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if (static_cast<int32_T>(b_k) + 1 > c_R.size(1)) {
            i2 = 0;
            i3 = 0;
          } else {
            if ((static_cast<int32_T>(b_k) + 1 < 1) || (static_cast<int32_T>(b_k)
                 + 1 > c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) + 1, 1,
                c_R.size(1), &mm_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = static_cast<int32_T>(b_k);
            if (c_R.size(1) < 1) {
              emlrtDynamicBoundsCheckR2012b(c_R.size(1), 1, c_R.size(1),
                &nm_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i3 = c_R.size(1);
          }

          if ((static_cast<int32_T>(b_k) == tmp.size(0)) && (b_loop_ub ==
               tmp.size(1))) {
            tmp.set_size(&im_emlrtRTEI, &sp, static_cast<int32_T>(b_k),
                         b_loop_ub);
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              d_loop_ub = (static_cast<int32_T>(b_k) / 2) << 1;
              k = d_loop_ub - 2;
              for (i4 = 0; i4 <= k; i4 += 2) {
                b_r2 = _mm_loadu_pd(&c_R[i4 + c_R.size(0) * (i + i1)]);
                r3 = _mm_loadu_pd(&tmp[i4 + tmp.size(0) * i1]);
                _mm_storeu_pd(&tmp[i4 + tmp.size(0) * i1], _mm_sub_pd(b_r2, r3));
              }

              for (i4 = d_loop_ub; i4 < loop_ub; i4++) {
                tmp[i4 + tmp.size(0) * i1] = c_R[i4 + c_R.size(0) * (i + i1)] -
                  tmp[i4 + tmp.size(0) * i1];
              }
            }
          } else {
            st.site = &ur_emlrtRSI;
            binary_expand_op_13(st, tmp, c_R, b_k, i, i1);
          }

          c_k[0] = static_cast<int32_T>(b_k);
          d_loop_ub = i3 - i2;
          c_k[1] = d_loop_ub;
          emlrtSubAssignSizeCheckR2012b(&c_k[0], 2, tmp.size(), 2, &gd_emlrtECI,
            (emlrtCTX)&sp);
          for (i = 0; i < d_loop_ub; i++) {
            for (i1 = 0; i1 < loop_ub; i1++) {
              c_R[i1 + c_R.size(0) * (i2 + i)] = tmp[i1 + static_cast<int32_T>
                (b_k) * i];
            }
          }

          //  check if tolerance can be met by reducing rank
          b_loop_ub = r2.size(0);
          diagR.set_size(&jm_emlrtRTEI, &sp, r2.size(0));
          for (i = 0; i < b_loop_ub; i++) {
            diagR[i] = r2[i];
          }

          st.site = &dk_emlrtRSI;
          coder::b_sqrt(st, diagR);
          b_loop_ub = diagR.size(0);
          d_loop_ub = (diagR.size(0) / 2) << 1;
          k = d_loop_ub - 2;
          for (i = 0; i <= k; i += 2) {
            b_r2 = _mm_loadu_pd(&diagR[i]);
            _mm_storeu_pd(&diagR[i], _mm_div_pd(_mm_set1_pd(1.0), b_r2));
          }

          for (i = d_loop_ub; i < b_loop_ub; i++) {
            diagR[i] = 1.0 / diagR[i];
          }

          st.site = &dk_emlrtRSI;
          c_st.site = &dq_emlrtRSI;
          d_st.site = &eq_emlrtRSI;
          e_st.site = &fq_emlrtRSI;
          if (diagR.size(0) < 1) {
            emlrtErrorWithMessageIdR2018a(&e_st, &ob_emlrtRTEI,
              "Coder:toolbox:eml_min_or_max_varDimZero",
              "Coder:toolbox:eml_min_or_max_varDimZero", 0);
          }

          f_st.site = &fp_emlrtRSI;
          last = diagR.size(0);
          if (diagR.size(0) <= 2) {
            if (diagR.size(0) == 1) {
              kmax = diagR[0];
              idx = 1;
            } else if ((diagR[0] > diagR[1]) || (muDoubleScalarIsNaN(diagR[0]) &&
                        (!muDoubleScalarIsNaN(diagR[1])))) {
              kmax = diagR[1];
              idx = 2;
            } else {
              kmax = diagR[0];
              idx = 1;
            }
          } else {
            g_st.site = &hp_emlrtRSI;
            if (!muDoubleScalarIsNaN(diagR[0])) {
              idx = 1;
            } else {
              idx = 0;
              h_st.site = &ip_emlrtRSI;
              if (diagR.size(0) > 2147483646) {
                i_st.site = &ge_emlrtRSI;
                coder::check_forloop_overflow_error(i_st);
              }

              k = 2;
              exitg2 = false;
              while ((!exitg2) && (k <= last)) {
                if (!muDoubleScalarIsNaN(diagR[k - 1])) {
                  idx = k;
                  exitg2 = true;
                } else {
                  k++;
                }
              }
            }

            if (idx == 0) {
              kmax = diagR[0];
              idx = 1;
            } else {
              g_st.site = &gp_emlrtRSI;
              kmax = diagR[idx - 1];
              d_loop_ub = idx + 1;
              h_st.site = &jp_emlrtRSI;
              if ((idx + 1 <= diagR.size(0)) && (diagR.size(0) > 2147483646)) {
                i_st.site = &ge_emlrtRSI;
                coder::check_forloop_overflow_error(i_st);
              }

              for (k = d_loop_ub; k <= last; k++) {
                R_tmp = diagR[k - 1];
                if (kmax > R_tmp) {
                  kmax = R_tmp;
                  idx = k;
                }
              }
            }
          }

          if (!(kmax > tol)) {
            int8_T input_sizes_idx_1;

            //  no -- loop again
            //  can drop i-th column from skeletons; first swap with k-th column
            if (idx < static_cast<int32_T>(b_k)) {
              if ((idx < 1) || (idx > p.size(1))) {
                emlrtDynamicBoundsCheckR2012b(idx, 1, p.size(1), &lp_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              if (idx > p.size(1)) {
                emlrtDynamicBoundsCheckR2012b(idx, 1, p.size(1), &mp_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              last = p[idx - 1];
              p[idx - 1] = p[static_cast<int32_T>(b_k) - 1];
              p[static_cast<int32_T>(b_k) - 1] = last;
              if (c_R.size(0) < 1) {
                emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &om_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                   c_R.size(0))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                  c_R.size(0), &pm_emlrtBCI, (emlrtConstCTX)&sp);
              }

              if (c_R.size(1) < 1) {
                emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(1), &qm_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                   c_R.size(1))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                  c_R.size(1), &rm_emlrtBCI, (emlrtConstCTX)&sp);
              }

              if (c_R.size(0) < 1) {
                emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &sm_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                   c_R.size(0))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                  c_R.size(0), &tm_emlrtBCI, (emlrtConstCTX)&sp);
              }

              if (c_R.size(0) < 1) {
                emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &vm_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                   c_R.size(0))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                  c_R.size(0), &wm_emlrtBCI, (emlrtConstCTX)&sp);
              }

              if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                   c_R.size(1))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                  c_R.size(1), &um_emlrtBCI, (emlrtConstCTX)&sp);
              }

              if (idx > c_R.size(1)) {
                emlrtDynamicBoundsCheckR2012b(idx, 1, c_R.size(1), &xm_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              r4.set_size(&km_emlrtRTEI, &sp, 1, static_cast<int32_T>(b_k));
              for (i = 0; i < loop_ub; i++) {
                r4[i] = (i + 1 == idx);
              }

              r5.set_size(&lm_emlrtRTEI, &sp, 1, static_cast<int32_T>(b_k - 1.0)
                          + 1);
              b_loop_ub = static_cast<int32_T>(b_k - 1.0);
              for (i = 0; i <= b_loop_ub; i++) {
                r5[i] = (static_cast<real_T>(i) + 1.0 == b_k);
              }

              if ((static_cast<int32_T>(b_k) != static_cast<int32_T>(b_k - 1.0)
                   + 1) && ((static_cast<int32_T>(b_k) != 1) &&
                            (static_cast<int32_T>(b_k - 1.0) + 1 != 1))) {
                emlrtDimSizeImpxCheckR2021b(static_cast<int32_T>(b_k),
                  static_cast<int32_T>(b_k - 1.0) + 1, &hd_emlrtECI,
                  (emlrtConstCTX)&sp);
              }

              st.site = &ck_emlrtRSI;
              coder::eye(st, b_k, a__1);
              r1.set_size(&mm_emlrtRTEI, &sp, static_cast<int32_T>(b_k),
                          static_cast<int32_T>(b_k));
              for (i = 0; i < loop_ub; i++) {
                for (i1 = 0; i1 < loop_ub; i1++) {
                  r1[i1 + r1.size(0) * i] = c_R[i1 + c_R.size(0) * i];
                }
              }

              if (r4.size(1) == r5.size(1)) {
                d_R.set_size(&nm_emlrtRTEI, &sp, static_cast<int32_T>(b_k));
                d_loop_ub = (static_cast<int32_T>(b_k) / 2) << 1;
                k = d_loop_ub - 2;
                for (i = 0; i <= k; i += 2) {
                  b_r2 = _mm_loadu_pd(&c_R[i + c_R.size(0) *
                                      (static_cast<int32_T>(b_k) - 1)]);
                  r3 = _mm_loadu_pd(&c_R[i + c_R.size(0) * (idx - 1)]);
                  _mm_storeu_pd(&d_R[i], _mm_sub_pd(b_r2, r3));
                }

                for (i = d_loop_ub; i < loop_ub; i++) {
                  d_R[i] = c_R[i + c_R.size(0) * (static_cast<int32_T>(b_k) - 1)]
                    - c_R[i + c_R.size(0) * (idx - 1)];
                }

                r.set_size(&om_emlrtRTEI, &sp, static_cast<int32_T>(b_k));
                for (i = 0; i < loop_ub; i++) {
                  r[i] = static_cast<real_T>(r4[i]) - static_cast<real_T>(r5[i]);
                }

                st.site = &ck_emlrtRSI;
                coder::qrupdate(st, a__1, r1, d_R, r);
              } else {
                st.site = &ck_emlrtRSI;
                binary_expand_op_12(st, ck_emlrtRSI, a__1, r1, c_R, b_k, idx, r4,
                                    r5);
              }

              if (c_R.size(0) < 1) {
                emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &ym_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                   c_R.size(0))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                  c_R.size(0), &an_emlrtBCI, (emlrtConstCTX)&sp);
              }

              if (c_R.size(1) < 1) {
                emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(1), &bn_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                   c_R.size(1))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                  c_R.size(1), &cn_emlrtBCI, (emlrtConstCTX)&sp);
              }

              c_k[0] = static_cast<int32_T>(b_k);
              c_k[1] = static_cast<int32_T>(b_k);
              emlrtSubAssignSizeCheckR2012b(&c_k[0], 2, r1.size(), 2,
                &id_emlrtECI, (emlrtCTX)&sp);
              for (i = 0; i < loop_ub; i++) {
                for (i1 = 0; i1 < loop_ub; i1++) {
                  c_R[i1 + c_R.size(0) * i] = r1[i1 + static_cast<int32_T>(b_k) *
                    i];
                }
              }

              if (static_cast<int32_T>(b_k) + 1 > c_R.size(1)) {
                i = 0;
                i1 = 0;
                i2 = 0;
                i3 = 0;
              } else {
                empty_non_axis_sizes = ((static_cast<int32_T>(b_k) + 1 < 1) || (
                  static_cast<int32_T>(b_k) + 1 > c_R.size(1)));
                if (empty_non_axis_sizes) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) + 1, 1,
                    c_R.size(1), &dn_emlrtBCI, (emlrtConstCTX)&sp);
                }

                i = static_cast<int32_T>(b_k);
                empty_non_axis_sizes = (c_R.size(1) < 1);
                if (empty_non_axis_sizes) {
                  emlrtDynamicBoundsCheckR2012b(c_R.size(1), 1, c_R.size(1),
                    &en_emlrtBCI, (emlrtConstCTX)&sp);
                }

                i1 = c_R.size(1);
                i2 = static_cast<int32_T>(b_k);
                i3 = c_R.size(1);
              }

              if (idx > c_R.size(0)) {
                emlrtDynamicBoundsCheckR2012b(idx, 1, c_R.size(0), &pp_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              empty_non_axis_sizes = ((static_cast<int32_T>(b_k) < 1) || (
                static_cast<int32_T>(b_k) > c_R.size(0)));
              if (empty_non_axis_sizes) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                  c_R.size(0), &pp_emlrtBCI, (emlrtConstCTX)&sp);
              }

              if (idx > c_R.size(0)) {
                emlrtDynamicBoundsCheckR2012b(idx, 1, c_R.size(0), &qp_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              loop_ub = i1 - i;
              r6.set_size(&pm_emlrtRTEI, &sp, 2, loop_ub);
              for (i1 = 0; i1 < loop_ub; i1++) {
                i4 = i + i1;
                r6[2 * i1] = c_R[(static_cast<int32_T>(b_k) + c_R.size(0) * i4)
                  - 1];
                r6[2 * i1 + 1] = c_R[(idx + c_R.size(0) * i4) - 1];
              }

              c_k[0] = 2;
              d_loop_ub = i3 - i2;
              c_k[1] = d_loop_ub;
              e_R[0] = 2;
              e_R[1] = loop_ub;
              emlrtSubAssignSizeCheckR2012b(&c_k[0], 2, &e_R[0], 2, &jd_emlrtECI,
                (emlrtCTX)&sp);
              for (i = 0; i < d_loop_ub; i++) {
                last = i2 + i;
                c_R[(idx + c_R.size(0) * last) - 1] = r6[2 * i];
                c_R[(static_cast<int32_T>(b_k) + c_R.size(0) * last) - 1] = r6[2
                  * i + 1];
              }

              empty_non_axis_sizes = ((static_cast<int32_T>(b_k) < 1) || (
                static_cast<int32_T>(b_k) > r2.size(0)));
              if (empty_non_axis_sizes) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                  r2.size(0), &vp_emlrtBCI, (emlrtConstCTX)&sp);
              }

              if (idx > r2.size(0)) {
                emlrtDynamicBoundsCheckR2012b(idx, 1, r2.size(0), &vp_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              d_k[1] = r2[idx - 1];
              r2[idx - 1] = r2[static_cast<int32_T>(b_k) - 1];
              r2[static_cast<int32_T>(b_k) - 1] = d_k[1];
            }

            //  decrease rank from k to k-1
            loop_ub = (n_tmp - static_cast<int32_T>(b_k)) + 1;
            if (loop_ub < 0) {
              emlrtNonNegativeCheckR2012b(static_cast<real_T>(loop_ub),
                &hc_emlrtDCI, (emlrtConstCTX)&sp);
            }

            c2.set_size(&qm_emlrtRTEI, &sp, 1, loop_ub);
            for (i = 0; i < loop_ub; i++) {
              c2[i] = 0.0;
            }

            //  no R22 block
            if (b_k - 1.0 < 1.0) {
              loop_ub = 0;
            } else {
              if (r2.size(0) < 1) {
                emlrtDynamicBoundsCheckR2012b(1, 1, r2.size(0), &fn_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              if ((static_cast<int32_T>(b_k) - 1 < 1) || (static_cast<int32_T>
                   (b_k) - 1 > r2.size(0))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) - 1, 1,
                  r2.size(0), &gn_emlrtBCI, (emlrtConstCTX)&sp);
              }

              loop_ub = static_cast<int32_T>(b_k) - 1;
            }

            c_k[0] = 1;
            c_k[1] = loop_ub;
            st.site = &bk_emlrtRSI;
            coder::internal::indexShapeCheck(st, r2.size(0), c_k);
            if (b_k - 1.0 < 1.0) {
              b_loop_ub = 0;
              c_loop_ub = 0;
              last = 0;
            } else {
              if (c_R.size(0) < 1) {
                emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &hn_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              if ((static_cast<int32_T>(b_k) - 1 < 1) || (static_cast<int32_T>
                   (b_k) - 1 > c_R.size(0))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) - 1, 1,
                  c_R.size(0), &in_emlrtBCI, (emlrtConstCTX)&sp);
              }

              b_loop_ub = static_cast<int32_T>(b_k) - 1;
              if (c_R.size(1) < 1) {
                emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(1), &jn_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              if ((static_cast<int32_T>(b_k) - 1 < 1) || (static_cast<int32_T>
                   (b_k) - 1 > c_R.size(1))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) - 1, 1,
                  c_R.size(1), &kn_emlrtBCI, (emlrtConstCTX)&sp);
              }

              c_loop_ub = static_cast<int32_T>(b_k) - 1;
              if (c_R.size(0) < 1) {
                emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &ln_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              if ((static_cast<int32_T>(b_k) - 1 < 1) || (static_cast<int32_T>
                   (b_k) - 1 > c_R.size(0))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) - 1, 1,
                  c_R.size(0), &mn_emlrtBCI, (emlrtConstCTX)&sp);
              }

              last = static_cast<int32_T>(b_k) - 1;
            }

            st.site = &bk_emlrtRSI;
            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(1), &nn_emlrtBCI, &st);
            }

            R.set_size(&rm_emlrtRTEI, &st, b_loop_ub, c_loop_ub);
            for (i = 0; i < c_loop_ub; i++) {
              for (i1 = 0; i1 < b_loop_ub; i1++) {
                R[i1 + R.size(0) * i] = c_R[i1 + c_R.size(0) * i];
              }
            }

            d_R.set_size(&sm_emlrtRTEI, &st, last);
            for (i = 0; i < last; i++) {
              d_R[i] = c_R[i + c_R.size(0) * (static_cast<int32_T>(b_k) - 1)];
            }

            c_st.site = &bk_emlrtRSI;
            coder::mldivide(c_st, R, d_R, r);
            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(0), &np_emlrtBCI, &st);
            }

            if ((static_cast<int32_T>(b_k) < 1) || (static_cast<int32_T>(b_k) >
                 c_R.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                c_R.size(1), &op_emlrtBCI, &st);
            }

            kmax = c_R[(static_cast<int32_T>(b_k) + c_R.size(0) *
                        (static_cast<int32_T>(b_k) - 1)) - 1];
            b_loop_ub = r.size(0);
            d_loop_ub = (r.size(0) / 2) << 1;
            k = d_loop_ub - 2;
            for (i = 0; i <= k; i += 2) {
              b_r2 = _mm_loadu_pd(&r[i]);
              _mm_storeu_pd(&r[i], _mm_div_pd(b_r2, _mm_set1_pd(kmax)));
            }

            for (i = d_loop_ub; i < b_loop_ub; i++) {
              r[i] = r[i] / kmax;
            }

            c_st.site = &bk_emlrtRSI;
            coder::b_abs(c_st, r, diagR);
            c_st.site = &pe_emlrtRSI;
            b_loop_ub = diagR.size(0);
            r.set_size(&tm_emlrtRTEI, &c_st, diagR.size(0));
            for (i = 0; i < b_loop_ub; i++) {
              kmax = diagR[i];
              r[i] = muDoubleScalarPower(kmax, 2.0);
            }

            if ((loop_ub != diagR.size(0)) && ((loop_ub != 1) && (diagR.size(0)
                  != 1))) {
              emlrtDimSizeImpxCheckR2021b(loop_ub, diagR.size(0), &kd_emlrtECI,
                (emlrtConstCTX)&sp);
            }

            if (loop_ub == r.size(0)) {
              d_loop_ub = (loop_ub / 2) << 1;
              k = d_loop_ub - 2;
              for (i = 0; i <= k; i += 2) {
                b_r2 = _mm_loadu_pd(&r2[i]);
                r3 = _mm_loadu_pd(&r[i]);
                _mm_storeu_pd(&r2[i], _mm_sub_pd(b_r2, r3));
              }

              for (i = d_loop_ub; i < loop_ub; i++) {
                r2[i] = r2[i] - r[i];
              }

              r2.set_size(&um_emlrtRTEI, &sp, loop_ub);
            } else {
              st.site = &bk_emlrtRSI;
              binary_expand_op_11(st, r2, loop_ub, r);
            }

            b_k--;
            if (b_k < 1.0) {
              loop_ub = 0;
              b_loop_ub = 0;
              c_loop_ub = 0;
            } else {
              if (c_R.size(0) < 1) {
                emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &on_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              if (static_cast<int32_T>(b_k) > c_R.size(0)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                  c_R.size(0), &pn_emlrtBCI, (emlrtConstCTX)&sp);
              }

              loop_ub = static_cast<int32_T>(b_k);
              if (c_R.size(1) < 1) {
                emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(1), &qn_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              if (static_cast<int32_T>(b_k) > c_R.size(1)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                  c_R.size(1), &rn_emlrtBCI, (emlrtConstCTX)&sp);
              }

              b_loop_ub = static_cast<int32_T>(b_k);
              if (c_R.size(0) < 1) {
                emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &sn_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              if (static_cast<int32_T>(b_k) > c_R.size(0)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                  c_R.size(0), &tn_emlrtBCI, (emlrtConstCTX)&sp);
              }

              c_loop_ub = static_cast<int32_T>(b_k);
            }

            empty_non_axis_sizes = ((static_cast<int32_T>(b_k) + 1 < 1) || (
              static_cast<int32_T>(b_k) + 1 > c_R.size(1)));
            if (empty_non_axis_sizes) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) + 1, 1,
                c_R.size(1), &un_emlrtBCI, (emlrtConstCTX)&sp);
            }

            R.set_size(&vm_emlrtRTEI, &sp, loop_ub, b_loop_ub);
            for (i = 0; i < b_loop_ub; i++) {
              for (i1 = 0; i1 < loop_ub; i1++) {
                R[i1 + R.size(0) * i] = c_R[i1 + c_R.size(0) * i];
              }
            }

            d_R.set_size(&wm_emlrtRTEI, &sp, c_loop_ub);
            for (i = 0; i < c_loop_ub; i++) {
              d_R[i] = c_R[i + c_R.size(0) * static_cast<int32_T>(b_k)];
            }

            st.site = &ak_emlrtRSI;
            coder::mldivide(st, R, d_R, b_r);
            if (b_k < 1.0) {
              loop_ub = 0;
            } else {
              if (c_R.size(0) < 1) {
                emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &vn_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              if (static_cast<int32_T>(b_k) > c_R.size(0)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                  c_R.size(0), &wn_emlrtBCI, (emlrtConstCTX)&sp);
              }

              loop_ub = static_cast<int32_T>(b_k);
            }

            if (static_cast<int32_T>(b_k) + 2 > c_R.size(1)) {
              i = 0;
              i1 = 0;
              i2 = 0;
              i3 = 0;
            } else {
              empty_non_axis_sizes = ((static_cast<int32_T>(b_k) + 2 < 1) || (
                static_cast<int32_T>(b_k) + 2 > c_R.size(1)));
              if (empty_non_axis_sizes) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k) + 2, 1,
                  c_R.size(1), &xn_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i = static_cast<int32_T>(b_k) + 1;
              empty_non_axis_sizes = (c_R.size(1) < 1);
              if (empty_non_axis_sizes) {
                emlrtDynamicBoundsCheckR2012b(c_R.size(1), 1, c_R.size(1),
                  &yn_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i1 = c_R.size(1);
              i2 = static_cast<int32_T>(b_k) + 1;
              i3 = c_R.size(1);
            }

            if ((static_cast<int32_T>(b_k + 1.0) < 1) || (static_cast<int32_T>
                 (b_k + 1.0) > c_R.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k + 1.0), 1,
                c_R.size(0), &ao_emlrtBCI, (emlrtConstCTX)&sp);
            }

            b_loop_ub = b_r.size(0);
            c_loop_ub = i3 - i2;
            a__1.set_size(&mk_emlrtRTEI, &sp, b_r.size(0), c_loop_ub);
            for (i3 = 0; i3 < c_loop_ub; i3++) {
              d_loop_ub = (b_r.size(0) / 2) << 1;
              k = d_loop_ub - 2;
              for (i4 = 0; i4 <= k; i4 += 2) {
                b_r2 = _mm_loadu_pd(&b_r[i4]);
                _mm_storeu_pd(&a__1[i4 + a__1.size(0) * i3], _mm_mul_pd(b_r2,
                  _mm_set1_pd(c_R[static_cast<int32_T>(b_k) + c_R.size(0) * (i2
                  + i3)])));
              }

              for (i4 = d_loop_ub; i4 < b_loop_ub; i4++) {
                a__1[i4 + a__1.size(0) * i3] = b_r[i4] * c_R[static_cast<int32_T>
                  (b_k) + c_R.size(0) * (i2 + i3)];
              }
            }

            if ((loop_ub != a__1.size(0)) && ((loop_ub != 1) && (a__1.size(0) !=
                  1))) {
              emlrtDimSizeImpxCheckR2021b(loop_ub, a__1.size(0), &ld_emlrtECI,
                (emlrtConstCTX)&sp);
            }

            b_loop_ub = i1 - i;
            if ((b_loop_ub != a__1.size(1)) && ((b_loop_ub != 1) && (a__1.size(1)
                  != 1))) {
              emlrtDimSizeImpxCheckR2021b(b_loop_ub, a__1.size(1), &md_emlrtECI,
                (emlrtConstCTX)&sp);
            }

            if (b_k < 1.0) {
              c_loop_ub = 0;
            } else {
              if (c_R.size(0) < 1) {
                emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &bo_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              if (static_cast<int32_T>(b_k) > c_R.size(0)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                  c_R.size(0), &co_emlrtBCI, (emlrtConstCTX)&sp);
              }

              c_loop_ub = static_cast<int32_T>(b_k);
            }

            if (static_cast<int32_T>(b_k) + 1 > c_R.size(1)) {
              i2 = 0;
              i3 = 0;
            } else {
              i2 = static_cast<int32_T>(b_k);
              if (c_R.size(1) < 1) {
                emlrtDynamicBoundsCheckR2012b(c_R.size(1), 1, c_R.size(1),
                  &do_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i3 = c_R.size(1);
            }

            st.site = &yj_emlrtRSI;
            if ((loop_ub == a__1.size(0)) && (b_loop_ub == a__1.size(1))) {
              varargin_2.set_size(&xm_emlrtRTEI, &st, loop_ub, b_loop_ub);
              for (i1 = 0; i1 < b_loop_ub; i1++) {
                d_loop_ub = (loop_ub / 2) << 1;
                k = d_loop_ub - 2;
                for (i4 = 0; i4 <= k; i4 += 2) {
                  b_r2 = _mm_loadu_pd(&c_R[i4 + c_R.size(0) * (i + i1)]);
                  r3 = _mm_loadu_pd(&a__1[i4 + a__1.size(0) * i1]);
                  _mm_storeu_pd(&varargin_2[i4 + varargin_2.size(0) * i1],
                                _mm_add_pd(b_r2, r3));
                }

                for (i4 = d_loop_ub; i4 < loop_ub; i4++) {
                  varargin_2[i4 + varargin_2.size(0) * i1] = c_R[i4 + c_R.size(0)
                    * (i + i1)] + a__1[i4 + a__1.size(0) * i1];
                }
              }
            } else {
              c_st.site = &yj_emlrtRSI;
              binary_expand_op_10(c_st, varargin_2, c_R, loop_ub, i, i1, a__1);
            }

            c_st.site = &nh_emlrtRSI;
            if (b_r.size(0) != 0) {
              last = b_r.size(0);
            } else if ((varargin_2.size(0) != 0) && (varargin_2.size(1) != 0)) {
              last = varargin_2.size(0);
            } else {
              last = 0;
              if (varargin_2.size(0) > 0) {
                last = varargin_2.size(0);
              }
            }

            d_st.site = &oh_emlrtRSI;
            if ((b_r.size(0) != last) && (b_r.size(0) != 0)) {
              emlrtErrorWithMessageIdR2018a(&d_st, &m_emlrtRTEI,
                "MATLAB:catenate:matrixDimensionMismatch",
                "MATLAB:catenate:matrixDimensionMismatch", 0);
            }

            if ((varargin_2.size(0) != last) && ((varargin_2.size(0) != 0) &&
                 (varargin_2.size(1) != 0))) {
              emlrtErrorWithMessageIdR2018a(&d_st, &m_emlrtRTEI,
                "MATLAB:catenate:matrixDimensionMismatch",
                "MATLAB:catenate:matrixDimensionMismatch", 0);
            }

            empty_non_axis_sizes = (last == 0);
            if (empty_non_axis_sizes || (b_r.size(0) != 0)) {
              input_sizes_idx_1 = 1;
            } else {
              input_sizes_idx_1 = 0;
            }

            if (empty_non_axis_sizes || ((varargin_2.size(0) != 0) &&
                 (varargin_2.size(1) != 0))) {
              sizes[1] = varargin_2.size(1);
            } else {
              sizes[1] = 0;
            }

            r7.set_size(&ym_emlrtRTEI, &c_st, last, input_sizes_idx_1 + sizes[1]);
            loop_ub = input_sizes_idx_1;
            for (i = 0; i < loop_ub; i++) {
              for (i1 = 0; i1 < last; i1++) {
                r7[i1] = b_r[i1];
              }
            }

            loop_ub = sizes[1];
            for (i = 0; i < loop_ub; i++) {
              for (i1 = 0; i1 < last; i1++) {
                r7[i1 + r7.size(0) * (i + input_sizes_idx_1)] = varargin_2[i1 +
                  last * i];
              }
            }

            c_k[0] = c_loop_ub;
            d_loop_ub = i3 - i2;
            c_k[1] = d_loop_ub;
            emlrtSubAssignSizeCheckR2012b(&c_k[0], 2, r7.size(), 2, &nd_emlrtECI,
              (emlrtCTX)&sp);
            for (i = 0; i < d_loop_ub; i++) {
              for (i1 = 0; i1 < c_loop_ub; i1++) {
                c_R[i1 + c_R.size(0) * (i2 + i)] = r7[i1 + c_loop_ub * i];
              }
            }

            if (b_k < 1.0) {
              loop_ub = 0;
            } else {
              if (c_R.size(0) < 1) {
                emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &eo_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              if (static_cast<int32_T>(b_k) > c_R.size(0)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1,
                  c_R.size(0), &fo_emlrtBCI, (emlrtConstCTX)&sp);
              }

              loop_ub = static_cast<int32_T>(b_k);
            }

            last = c_R.size(1);
            for (i = 0; i < last; i++) {
              for (i1 = 0; i1 < loop_ub; i1++) {
                c_R[i1 + loop_ub * i] = c_R[i1 + c_R.size(0) * i];
              }
            }

            c_R.set_size(&an_emlrtRTEI, &sp, loop_ub, c_R.size(1));
          }

          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
          }
        }
      } while (exitg1 == 0);

      st.site = &xj_emlrtRSI;
    }

    //  set ID outputs
    if (b_k < 1.0) {
      loop_ub = 0;
    } else {
      if (p.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, p.size(1), &go_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      loop_ub = static_cast<int32_T>(b_k);
      if (loop_ub > p.size(1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1, p.size(1),
          &ho_emlrtBCI, (emlrtConstCTX)&sp);
      }
    }

    sk.set_size(&bn_emlrtRTEI, &sp, 1, loop_ub);
    for (i = 0; i < loop_ub; i++) {
      sk[sk.size(0) * i] = p[i];
    }

    if (b_k + 1.0 > p.size(1)) {
      i = 0;
      i1 = 0;
    } else {
      if ((static_cast<int32_T>(b_k + 1.0) < 1) || (static_cast<int32_T>(b_k +
            1.0) > p.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k + 1.0), 1, p.size
          (1), &io_emlrtBCI, (emlrtConstCTX)&sp);
      }

      i = static_cast<int32_T>(b_k + 1.0) - 1;
      if (p.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(p.size(1), 1, p.size(1), &jo_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      i1 = p.size(1);
    }

    loop_ub = i1 - i;
    rd.set_size(&cn_emlrtRTEI, &sp, 1, loop_ub);
    for (i1 = 0; i1 < loop_ub; i1++) {
      rd[i1] = p[i + i1];
    }

    if (b_k < 1.0) {
      loop_ub = 0;
    } else {
      if (c_R.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, c_R.size(0), &ko_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      if (static_cast<int32_T>(b_k) > c_R.size(0)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k), 1, c_R.size(0),
          &lo_emlrtBCI, (emlrtConstCTX)&sp);
      }

      loop_ub = static_cast<int32_T>(b_k);
    }

    if (b_k + 1.0 > c_R.size(1)) {
      i = 0;
      i1 = 0;
    } else {
      if ((static_cast<int32_T>(b_k + 1.0) < 1) || (static_cast<int32_T>(b_k +
            1.0) > c_R.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_k + 1.0), 1,
          c_R.size(1), &mo_emlrtBCI, (emlrtConstCTX)&sp);
      }

      i = static_cast<int32_T>(b_k + 1.0) - 1;
      if (c_R.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(c_R.size(1), 1, c_R.size(1), &no_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      i1 = c_R.size(1);
    }

    b_loop_ub = i1 - i;
    T.set_size(&dn_emlrtRTEI, &sp, loop_ub, b_loop_ub);
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      for (i2 = 0; i2 < loop_ub; i2++) {
        T[i2 + T.size(0) * i1] = c_R[i2 + c_R.size(0) * (i + i1)];
      }
    }

    //  postprocess for fixed columns
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (id.cpp)
