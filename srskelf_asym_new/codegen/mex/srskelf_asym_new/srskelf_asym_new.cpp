//
// srskelf_asym_new.cpp
//
// Code generation for function 'srskelf_asym_new'
//

// Include files
#include "srskelf_asym_new.h"
#include "Afun_lap_te.h"
#include "abs.h"
#include "anonymous_function.h"
#include "assertCompatibleDims.h"
#include "bsxfun.h"
#include "chol.h"
#include "div.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "error.h"
#include "find.h"
#include "flip.h"
#include "horzcatStructList.h"
#include "id.h"
#include "indexShapeCheck.h"
#include "lap_neumann_kernel.h"
#include "lu.h"
#include "mldivide.h"
#include "mrdivide_helper.h"
#include "mtimes.h"
#include "pxyfun_lap_neumann.h"
#include "randn.h"
#include "ref.h"
#include "repmat.h"
#include "rng.h"
#include "rt_nonfinite.h"
#include "shypoct.h"
#include "sort.h"
#include "sparse.h"
#include "spget_quadcorr.h"
#include "sqrt.h"
#include "srskelf_asym_new_data.h"
#include "srskelf_asym_new_mexutil.h"
#include "srskelf_asym_new_types.h"
#include "srskelf_asym_new_types1.h"
#include "srskelf_asym_new_types11.h"
#include "srskelf_asym_new_types2.h"
#include "strcmp.h"
#include "sum.h"
#include "tic.h"
#include "toc.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "emlrt.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstdio>
#include <emmintrin.h>

// Variable Definitions
static emlrtRTEInfo emlrtRTEI{ 55,     // lineNo
  5,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo b_emlrtRTEI{ 56,   // lineNo
  5,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo c_emlrtRTEI{ 59,   // lineNo
  5,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo d_emlrtRTEI{ 60,   // lineNo
  5,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo e_emlrtRTEI{ 326,  // lineNo
  7,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo f_emlrtRTEI{ 334,  // lineNo
  5,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRSInfo emlrtRSI{ 66,       // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo b_emlrtRSI{ 2,      // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo c_emlrtRSI{ 26,     // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo d_emlrtRSI{ 30,     // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo e_emlrtRSI{ 39,     // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo f_emlrtRSI{ 46,     // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo g_emlrtRSI{ 51,     // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo h_emlrtRSI{ 52,     // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo i_emlrtRSI{ 54,     // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo j_emlrtRSI{ 55,     // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo k_emlrtRSI{ 56,     // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo l_emlrtRSI{ 59,     // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo m_emlrtRSI{ 60,     // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo n_emlrtRSI{ 80,     // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo o_emlrtRSI{ 89,     // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo p_emlrtRSI{ 93,     // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo q_emlrtRSI{ 118,    // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo r_emlrtRSI{ 124,    // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo s_emlrtRSI{ 129,    // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo t_emlrtRSI{ 130,    // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo u_emlrtRSI{ 131,    // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo v_emlrtRSI{ 136,    // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo w_emlrtRSI{ 140,    // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo x_emlrtRSI{ 144,    // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo y_emlrtRSI{ 157,    // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo ab_emlrtRSI{ 159,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo bb_emlrtRSI{ 160,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo cb_emlrtRSI{ 166,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo db_emlrtRSI{ 171,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo eb_emlrtRSI{ 175,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo fb_emlrtRSI{ 176,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo gb_emlrtRSI{ 177,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo hb_emlrtRSI{ 180,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo ib_emlrtRSI{ 181,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo jb_emlrtRSI{ 182,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo kb_emlrtRSI{ 185,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo lb_emlrtRSI{ 187,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo mb_emlrtRSI{ 191,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo nb_emlrtRSI{ 201,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo ob_emlrtRSI{ 202,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo pb_emlrtRSI{ 204,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo qb_emlrtRSI{ 205,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo rb_emlrtRSI{ 209,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo sb_emlrtRSI{ 210,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo tb_emlrtRSI{ 211,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo ub_emlrtRSI{ 212,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo vb_emlrtRSI{ 213,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo wb_emlrtRSI{ 224,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo xb_emlrtRSI{ 226,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo yb_emlrtRSI{ 228,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo ac_emlrtRSI{ 230,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo bc_emlrtRSI{ 232,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo cc_emlrtRSI{ 234,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo dc_emlrtRSI{ 235,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo ec_emlrtRSI{ 236,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo fc_emlrtRSI{ 237,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo gc_emlrtRSI{ 238,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo hc_emlrtRSI{ 249,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo ic_emlrtRSI{ 323,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo jc_emlrtRSI{ 327,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo kc_emlrtRSI{ 326,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo lc_emlrtRSI{ 332,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo mc_emlrtRSI{ 333,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo nc_emlrtRSI{ 334,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo oc_emlrtRSI{ 335,   // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo pc_emlrtRSI{ 7,     // lineNo
  "ref/ref",                           // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/ref.m"// pathName
};

static emlrtRSInfo qe_emlrtRSI{ 63,    // lineNo
  "function_handle/parenReference",    // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/function_handle.m"// pathName
};

static emlrtRSInfo hf_emlrtRSI{ 35,    // lineNo
  "fprintf",                           // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/iofun/fprintf.m"// pathName
};

static emlrtRSInfo wf_emlrtRSI{ 42,    // lineNo
  "sort",                              // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/sort.m"// pathName
};

static emlrtRSInfo yg_emlrtRSI{ 44,    // lineNo
  "@(x,slf,nbr,proxy,l,ctr)pxyfun_lap_neumann(x,slf,nbr,proxy,l,ctr,opts.area)",// fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo ah_emlrtRSI{ 13,    // lineNo
  "pxyfun_lap_neumann",                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pathName
};

static emlrtRSInfo bh_emlrtRSI{ 15,    // lineNo
  "pxyfun_lap_neumann",                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pathName
};

static emlrtRSInfo ch_emlrtRSI{ 16,    // lineNo
  "pxyfun_lap_neumann",                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pathName
};

static emlrtRSInfo dh_emlrtRSI{ 17,    // lineNo
  "pxyfun_lap_neumann",                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pathName
};

static emlrtRSInfo eh_emlrtRSI{ 18,    // lineNo
  "pxyfun_lap_neumann",                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pathName
};

static emlrtRSInfo fh_emlrtRSI{ 19,    // lineNo
  "pxyfun_lap_neumann",                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pathName
};

static emlrtRSInfo gh_emlrtRSI{ 20,    // lineNo
  "pxyfun_lap_neumann",                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pathName
};

static emlrtRSInfo hh_emlrtRSI{ 21,    // lineNo
  "pxyfun_lap_neumann",                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pathName
};

static emlrtRSInfo ih_emlrtRSI{ 23,    // lineNo
  "pxyfun_lap_neumann",                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pathName
};

static emlrtRSInfo jh_emlrtRSI{ 27,    // lineNo
  "pxyfun_lap_neumann",                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pathName
};

static emlrtRSInfo kh_emlrtRSI{ 28,    // lineNo
  "pxyfun_lap_neumann",                // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pathName
};

static emlrtRSInfo qh_emlrtRSI{ 37,    // lineNo
  "@(i,j)Afun_lap_te(i,j,x,opts.nu,opts.area,opts.P,opts.qcorr,opts.contrast,opts.wuse)",// fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo rh_emlrtRSI{ 9,     // lineNo
  "Afun_lap_te",                       // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pathName
};

static emlrtRSInfo sh_emlrtRSI{ 10,    // lineNo
  "Afun_lap_te",                       // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pathName
};

static emlrtRSInfo th_emlrtRSI{ 11,    // lineNo
  "Afun_lap_te",                       // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pathName
};

static emlrtRSInfo uh_emlrtRSI{ 12,    // lineNo
  "Afun_lap_te",                       // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pathName
};

static emlrtRSInfo vh_emlrtRSI{ 13,    // lineNo
  "Afun_lap_te",                       // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pathName
};

static emlrtRSInfo wh_emlrtRSI{ 14,    // lineNo
  "Afun_lap_te",                       // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pathName
};

static emlrtRSInfo xh_emlrtRSI{ 15,    // lineNo
  "Afun_lap_te",                       // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pathName
};

static emlrtRSInfo yh_emlrtRSI{ 18,    // lineNo
  "Afun_lap_te",                       // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pathName
};

static emlrtRSInfo ai_emlrtRSI{ 19,    // lineNo
  "Afun_lap_te",                       // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pathName
};

static emlrtRSInfo bi_emlrtRSI{ 43,    // lineNo
  "ndgrid",                            // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/ndgrid.m"// pathName
};

static emlrtRSInfo ci_emlrtRSI{ 59,    // lineNo
  "looper",                            // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/ndgrid.m"// pathName
};

static emlrtRSInfo di_emlrtRSI{ 63,    // lineNo
  "looper",                            // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/ndgrid.m"// pathName
};

static emlrtRSInfo ji_emlrtRSI{ 11,    // lineNo
  "spget_quadcorr",                    // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/spget_quadcorr.m"// pathName
};

static emlrtRSInfo ki_emlrtRSI{ 14,    // lineNo
  "spget_quadcorr",                    // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/spget_quadcorr.m"// pathName
};

static emlrtRSInfo li_emlrtRSI{ 16,    // lineNo
  "spget_quadcorr",                    // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/spget_quadcorr.m"// pathName
};

static emlrtRSInfo mi_emlrtRSI{ 37,    // lineNo
  "sort",                              // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/sort.m"// pathName
};

static emlrtRSInfo cj_emlrtRSI{ 31,    // lineNo
  "find",                              // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m"// pathName
};

static emlrtRSInfo mj_emlrtRSI{ 16,    // lineNo
  "Afun_lap_te",                       // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pathName
};

static emlrtRSInfo oj_emlrtRSI{ 371,   // lineNo
  "srskelf_asym_new/spget",            // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo pj_emlrtRSI{ 372,   // lineNo
  "srskelf_asym_new/spget",            // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo qj_emlrtRSI{ 406,   // lineNo
  "srskelf_asym_new/spget",            // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo rj_emlrtRSI{ 407,   // lineNo
  "srskelf_asym_new/spget",            // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo sj_emlrtRSI{ 429,   // lineNo
  "srskelf_asym_new/spget",            // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo tj_emlrtRSI{ 431,   // lineNo
  "srskelf_asym_new/spget",            // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo uj_emlrtRSI{ 445,   // lineNo
  "srskelf_asym_new/spget/get_update_list",// fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo gq_emlrtRSI{ 384,   // lineNo
  "srskelf_asym_new/spget",            // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo hq_emlrtRSI{ 399,   // lineNo
  "srskelf_asym_new/spget",            // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo iq_emlrtRSI{ 401,   // lineNo
  "srskelf_asym_new/spget",            // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo jq_emlrtRSI{ 12,    // lineNo
  "chol",                              // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/chol.m"// pathName
};

static emlrtRSInfo pq_emlrtRSI{ 20,    // lineNo
  "mrdivide_helper",                   // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/mrdivide_helper.m"// pathName
};

static emlrtMCInfo emlrtMCI{ 27,       // lineNo
  5,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtMCInfo b_emlrtMCI{ 30,     // lineNo
  3,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo g_emlrtRTEI{ 64,   // lineNo
  15,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtBCInfo emlrtBCI{ -1,       // iFirst
  -1,                                  // iLast
  66,                                  // lineNo
  21,                                  // colNo
  "t.lvp",                             // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo b_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  66,                                  // lineNo
  34,                                  // colNo
  "t.lvp",                             // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtRTEInfo h_emlrtRTEI{ 66,   // lineNo
  15,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo i_emlrtRTEI{ 92,   // lineNo
  13,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtBCInfo c_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  98,                                  // lineNo
  32,                                  // colNo
  "t.lvp",                             // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtRTEInfo j_emlrtRTEI{ 98,   // lineNo
  13,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtDCInfo emlrtDCI{ 100,      // lineNo
  34,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo d_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  100,                                 // lineNo
  34,                                  // colNo
  "t.nodes",                           // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo b_emlrtDCI{ 101,    // lineNo
  31,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo e_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  101,                                 // lineNo
  31,                                  // colNo
  "t.nodes",                           // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo c_emlrtDCI{ 102,    // lineNo
  57,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo f_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  102,                                 // lineNo
  57,                                  // colNo
  "t.nodes",                           // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo d_emlrtDCI{ 102,    // lineNo
  49,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo g_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  102,                                 // lineNo
  49,                                  // colNo
  "t.nodes",                           // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo e_emlrtDCI{ 105,    // lineNo
  53,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo h_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  105,                                 // lineNo
  53,                                  // colNo
  "t.nodes",                           // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo f_emlrtDCI{ 108,    // lineNo
  30,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo i_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  108,                                 // lineNo
  30,                                  // colNo
  "t.nodes",                           // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo g_emlrtDCI{ 109,    // lineNo
  31,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo j_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  109,                                 // lineNo
  31,                                  // colNo
  "t.nodes",                           // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo h_emlrtDCI{ 110,    // lineNo
  31,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo k_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  110,                                 // lineNo
  31,                                  // colNo
  "t.nodes",                           // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo l_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  110,                                 // lineNo
  39,                                  // colNo
  "t.nodes(i).chld",                   // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo i_emlrtDCI{ 111,    // lineNo
  30,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo m_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  111,                                 // lineNo
  30,                                  // colNo
  "t.nodes",                           // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo j_emlrtDCI{ 105,    // lineNo
  35,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo n_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  105,                                 // lineNo
  35,                                  // colNo
  "t.nodes",                           // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo o_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  105,                                 // lineNo
  19,                                  // colNo
  "xi_combined",                       // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo p_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  105,                                 // lineNo
  21,                                  // colNo
  "xi_combined",                       // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtECInfo emlrtECI{ -1,       // nDims
  105,                                 // lineNo
  7,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtBCInfo q_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  112,                                 // lineNo
  23,                                  // colNo
  "xi_combined",                       // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo r_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  112,                                 // lineNo
  36,                                  // colNo
  "xi_combined",                       // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtECInfo b_emlrtECI{ -1,     // nDims
  112,                                 // lineNo
  11,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo k_emlrtRTEI{ 134,  // lineNo
  13,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtDCInfo k_emlrtDCI{ 135,    // lineNo
  21,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo s_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  135,                                 // lineNo
  21,                                  // colNo
  "t.nodes",                           // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo l_emlrtDCI{ 136,    // lineNo
  30,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo t_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  136,                                 // lineNo
  30,                                  // colNo
  "t.nodes",                           // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo m_emlrtDCI{ 159,    // lineNo
  32,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo u_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  159,                                 // lineNo
  32,                                  // colNo
  "t.nodes",                           // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo n_emlrtDCI{ 166,    // lineNo
  56,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo v_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  166,                                 // lineNo
  56,                                  // colNo
  "t.nodes",                           // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtECInfo c_emlrtECI{ 1,      // nDims
  185,                                 // lineNo
  14,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtECInfo d_emlrtECI{ 2,      // nDims
  185,                                 // lineNo
  14,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtECInfo e_emlrtECI{ 1,      // nDims
  187,                                 // lineNo
  15,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtECInfo f_emlrtECI{ 2,      // nDims
  187,                                 // lineNo
  15,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtECInfo g_emlrtECI{ 1,      // nDims
  201,                                 // lineNo
  12,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtECInfo h_emlrtECI{ 2,      // nDims
  201,                                 // lineNo
  12,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtECInfo i_emlrtECI{ 1,      // nDims
  202,                                 // lineNo
  12,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtECInfo j_emlrtECI{ 2,      // nDims
  202,                                 // lineNo
  12,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtECInfo k_emlrtECI{ 1,      // nDims
  205,                                 // lineNo
  14,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtECInfo l_emlrtECI{ 2,      // nDims
  205,                                 // lineNo
  14,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtECInfo m_emlrtECI{ 1,      // nDims
  209,                                 // lineNo
  18,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtECInfo n_emlrtECI{ 2,      // nDims
  209,                                 // lineNo
  18,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtECInfo o_emlrtECI{ -1,     // nDims
  209,                                 // lineNo
  7,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtECInfo p_emlrtECI{ 1,      // nDims
  210,                                 // lineNo
  17,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtECInfo q_emlrtECI{ 2,      // nDims
  210,                                 // lineNo
  17,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtECInfo r_emlrtECI{ -1,     // nDims
  210,                                 // lineNo
  7,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtECInfo s_emlrtECI{ 1,      // nDims
  211,                                 // lineNo
  18,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtECInfo t_emlrtECI{ 2,      // nDims
  211,                                 // lineNo
  18,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtECInfo u_emlrtECI{ -1,     // nDims
  211,                                 // lineNo
  7,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtECInfo v_emlrtECI{ 1,      // nDims
  213,                                 // lineNo
  20,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtECInfo w_emlrtECI{ 2,      // nDims
  213,                                 // lineNo
  20,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtECInfo x_emlrtECI{ -1,     // nDims
  213,                                 // lineNo
  9,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtBCInfo w_emlrtBCI{ 1,      // iFirst
  0,                                   // iLast
  249,                                 // lineNo
  27,                                  // colNo
  "F.factors(n).sk",                   // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo x_emlrtBCI{ 1,      // iFirst
  0,                                   // iLast
  257,                                 // lineNo
  27,                                  // colNo
  "F.factors(n).rd",                   // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo y_emlrtBCI{ 1,      // iFirst
  0,                                   // iLast
  263,                                 // lineNo
  28,                                  // colNo
  "F.factors(n).nbr",                  // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtECInfo y_emlrtECI{ -1,     // nDims
  263,                                 // lineNo
  11,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtBCInfo ab_emlrtBCI{ 1,     // iFirst
  0,                                   // iLast
  269,                                 // lineNo
  26,                                  // colNo
  "F.factors(n).T",                    // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtECInfo ab_emlrtECI{ -1,    // nDims
  269,                                 // lineNo
  11,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtBCInfo bb_emlrtBCI{ 1,     // iFirst
  0,                                   // iLast
  275,                                 // lineNo
  26,                                  // colNo
  "F.factors(n).E",                    // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtECInfo bb_emlrtECI{ -1,    // nDims
  275,                                 // lineNo
  11,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtBCInfo cb_emlrtBCI{ 1,     // iFirst
  0,                                   // iLast
  281,                                 // lineNo
  26,                                  // colNo
  "F.factors(n).F",                    // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtECInfo cb_emlrtECI{ -1,    // nDims
  281,                                 // lineNo
  11,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtBCInfo db_emlrtBCI{ 1,     // iFirst
  0,                                   // iLast
  287,                                 // lineNo
  26,                                  // colNo
  "F.factors(n).L",                    // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtECInfo db_emlrtECI{ -1,    // nDims
  287,                                 // lineNo
  11,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtBCInfo eb_emlrtBCI{ 1,     // iFirst
  0,                                   // iLast
  293,                                 // lineNo
  26,                                  // colNo
  "F.factors(n).U",                    // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtECInfo eb_emlrtECI{ -1,    // nDims
  293,                                 // lineNo
  11,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtBCInfo fb_emlrtBCI{ 1,     // iFirst
  0,                                   // iLast
  299,                                 // lineNo
  26,                                  // colNo
  "F.factors(n).C",                    // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtECInfo fb_emlrtECI{ -1,    // nDims
  299,                                 // lineNo
  11,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtBCInfo gb_emlrtBCI{ 1,     // iFirst
  0,                                   // iLast
  305,                                 // lineNo
  26,                                  // colNo
  "F.factors(n).D",                    // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtECInfo gb_emlrtECI{ -1,    // nDims
  305,                                 // lineNo
  11,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtDCInfo o_emlrtDCI{ 313,    // lineNo
  19,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo hb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  313,                                 // lineNo
  19,                                  // colNo
  "t.nodes",                           // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo p_emlrtDCI{ 315,    // lineNo
  19,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo ib_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  315,                                 // lineNo
  19,                                  // colNo
  "t.nodes",                           // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  315,                                 // lineNo
  25,                                  // colNo
  "t.nodes(i).xi",                     // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  315,                                 // lineNo
  27,                                  // colNo
  "t.nodes(i).xi",                     // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo lb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  332,                                 // lineNo
  25,                                  // colNo
  "F.factors",                         // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  332,                                 // lineNo
  27,                                  // colNo
  "F.factors",                         // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo q_emlrtDCI{ 35,     // lineNo
  3,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtDCInfo r_emlrtDCI{ 42,     // lineNo
  3,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtRTEInfo l_emlrtRTEI{ 16,   // lineNo
  19,                                  // colNo
  "mrdivide_helper",                   // fName
  "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/mrdivide_helper.m"// pName
};

static emlrtRTEInfo n_emlrtRTEI{ 13,   // lineNo
  13,                                  // colNo
  "toLogicalCheck",                    // fName
  "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/toLogicalCheck.m"// pName
};

static emlrtDCInfo s_emlrtDCI{ 82,     // lineNo
  48,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtDCInfo t_emlrtDCI{ 82,     // lineNo
  48,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  4                                    // checkKind
};

static emlrtDCInfo u_emlrtDCI{ 104,    // lineNo
  30,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo nb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  115,                                 // lineNo
  15,                                  // colNo
  "t.nodes",                           // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo v_emlrtDCI{ 115,    // lineNo
  15,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtDCInfo w_emlrtDCI{ 73,     // lineNo
  5,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtDCInfo x_emlrtDCI{ 73,     // lineNo
  5,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  4                                    // checkKind
};

static emlrtBCInfo ob_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  77,                                  // lineNo
  16,                                  // colNo
  "t.lvp",                             // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo y_emlrtDCI{ 82,     // lineNo
  40,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtDCInfo ab_emlrtDCI{ 88,    // lineNo
  3,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtDCInfo bb_emlrtDCI{ 88,    // lineNo
  3,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  4                                    // checkKind
};

static emlrtDCInfo cb_emlrtDCI{ 63,    // lineNo
  5,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtDCInfo db_emlrtDCI{ 63,    // lineNo
  5,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  4                                    // checkKind
};

static emlrtBCInfo pb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  65,                                  // lineNo
  26,                                  // colNo
  "pblk",                              // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  65,                                  // lineNo
  12,                                  // colNo
  "pblk",                              // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo rb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  98,                                  // lineNo
  19,                                  // colNo
  "t.lvp",                             // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo eb_emlrtDCI{ 98,    // lineNo
  19,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo sb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  68,                                  // lineNo
  30,                                  // colNo
  "pblk",                              // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  102,                                 // lineNo
  65,                                  // colNo
  "t.nodes(i).chld",                   // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo fb_emlrtDCI{ 104,   // lineNo
  7,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo ub_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  134,                                 // lineNo
  19,                                  // colNo
  "t.lvp",                             // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  115,                                 // lineNo
  7,                                   // colNo
  "t.nodes",                           // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo gb_emlrtDCI{ 115,   // lineNo
  7,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo wb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  320,                                 // lineNo
  11,                                  // colNo
  "F.lvp",                             // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  136,                                 // lineNo
  22,                                  // colNo
  "t.nodes",                           // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo hb_emlrtDCI{ 136,   // lineNo
  22,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo yb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  325,                                 // lineNo
  19,                                  // colNo
  "pblk",                              // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ac_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  325,                                 // lineNo
  32,                                  // colNo
  "t.lvp",                             // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  325,                                 // lineNo
  47,                                  // colNo
  "t.lvp",                             // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo cc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  159,                                 // lineNo
  24,                                  // colNo
  "t.nodes",                           // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo ib_emlrtDCI{ 159,   // lineNo
  24,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtDCInfo jb_emlrtDCI{ 209,   // lineNo
  20,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo dc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  209,                                 // lineNo
  20,                                  // colNo
  "K",                                 // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ec_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  209,                                 // lineNo
  39,                                  // colNo
  "K",                                 // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  209,                                 // lineNo
  9,                                   // colNo
  "K",                                 // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  210,                                 // lineNo
  21,                                  // colNo
  "K",                                 // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  210,                                 // lineNo
  31,                                  // colNo
  "K",                                 // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ic_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  210,                                 // lineNo
  11,                                  // colNo
  "K",                                 // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  211,                                 // lineNo
  23,                                  // colNo
  "K2",                                // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  211,                                 // lineNo
  34,                                  // colNo
  "K2",                                // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo lc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  211,                                 // lineNo
  12,                                  // colNo
  "K2",                                // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  213,                                 // lineNo
  23,                                  // colNo
  "K3",                                // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo nc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  213,                                 // lineNo
  43,                                  // colNo
  "K3",                                // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo oc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  213,                                 // lineNo
  12,                                  // colNo
  "K3",                                // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  226,                                 // lineNo
  20,                                  // colNo
  "K",                                 // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  234,                                 // lineNo
  22,                                  // colNo
  "K",                                 // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo rc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  234,                                 // lineNo
  25,                                  // colNo
  "K",                                 // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo sc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  226,                                 // lineNo
  23,                                  // colNo
  "K",                                 // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  235,                                 // lineNo
  15,                                  // colNo
  "K",                                 // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo uc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  235,                                 // lineNo
  18,                                  // colNo
  "K",                                 // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  228,                                 // lineNo
  15,                                  // colNo
  "K",                                 // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  228,                                 // lineNo
  18,                                  // colNo
  "K",                                 // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  236,                                 // lineNo
  20,                                  // colNo
  "K",                                 // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo yc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  236,                                 // lineNo
  17,                                  // colNo
  "K",                                 // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ad_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  237,                                 // lineNo
  18,                                  // colNo
  "K2",                                // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bd_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  230,                                 // lineNo
  18,                                  // colNo
  "K2",                                // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo cd_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  238,                                 // lineNo
  18,                                  // colNo
  "K3",                                // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo dd_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  309,                                 // lineNo
  19,                                  // colNo
  "lookup_list",                       // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo kb_emlrtDCI{ 309,   // lineNo
  19,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo ed_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  315,                                 // lineNo
  44,                                  // colNo
  "slf",                               // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fd_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  318,                                 // lineNo
  15,                                  // colNo
  "slf",                               // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo lb_emlrtDCI{ 318,   // lineNo
  11,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo gd_emlrtBCI{ 1,     // iFirst
  8000,                                // iLast
  318,                                 // lineNo
  11,                                  // colNo
  "rem",                               // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  3                                    // checkKind
};

static emlrtBCInfo hd_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  67,                                  // lineNo
  29,                                  // colNo
  "t.nodes",                           // aName
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo mb_emlrtDCI{ 67,    // lineNo
  29,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtECInfo hb_emlrtECI{ 1,     // nDims
  13,                                  // lineNo
  11,                                  // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtECInfo ib_emlrtECI{ 2,     // nDims
  13,                                  // lineNo
  11,                                  // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtECInfo jb_emlrtECI{ 1,     // nDims
  15,                                  // lineNo
  9,                                   // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtECInfo kb_emlrtECI{ 2,     // nDims
  15,                                  // lineNo
  9,                                   // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtECInfo lb_emlrtECI{ 1,     // nDims
  16,                                  // lineNo
  9,                                   // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtECInfo mb_emlrtECI{ 2,     // nDims
  16,                                  // lineNo
  9,                                   // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtECInfo nb_emlrtECI{ 1,     // nDims
  17,                                  // lineNo
  9,                                   // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtECInfo ob_emlrtECI{ 2,     // nDims
  17,                                  // lineNo
  9,                                   // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtECInfo pb_emlrtECI{ 2,     // nDims
  27,                                  // lineNo
  13,                                  // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtDCInfo sb_emlrtDCI{ 10,    // lineNo
  34,                                  // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo ff_emlrtBCI{ 1,     // iFirst
  8000,                                // iLast
  10,                                  // lineNo
  34,                                  // colNo
  "x",                                 // aName
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo tb_emlrtDCI{ 24,    // lineNo
  10,                                  // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo gf_emlrtBCI{ 1,     // iFirst
  8000,                                // iLast
  24,                                  // lineNo
  10,                                  // colNo
  "x",                                 // aName
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hf_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  28,                                  // lineNo
  11,                                  // colNo
  "nbr",                               // aName
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m",// pName
  0                                    // checkKind
};

static emlrtECInfo qb_emlrtECI{ -1,    // nDims
  24,                                  // lineNo
  5,                                   // colNo
  "spget_quadcorr",                    // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/spget_quadcorr.m"// pName
};

static emlrtECInfo rb_emlrtECI{ -1,    // nDims
  12,                                  // lineNo
  5,                                   // colNo
  "spget_quadcorr",                    // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/spget_quadcorr.m"// pName
};

static emlrtECInfo sb_emlrtECI{ 2,     // nDims
  16,                                  // lineNo
  5,                                   // colNo
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pName
};

static emlrtECInfo tb_emlrtECI{ 1,     // nDims
  16,                                  // lineNo
  5,                                   // colNo
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pName
};

static emlrtECInfo ub_emlrtECI{ 2,     // nDims
  15,                                  // lineNo
  3,                                   // colNo
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pName
};

static emlrtECInfo vb_emlrtECI{ 1,     // nDims
  15,                                  // lineNo
  3,                                   // colNo
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pName
};

static emlrtDCInfo ub_emlrtDCI{ 10,    // lineNo
  44,                                  // colNo
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo if_emlrtBCI{ 1,     // iFirst
  8000,                                // iLast
  10,                                  // lineNo
  44,                                  // colNo
  "x",                                 // aName
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo vb_emlrtDCI{ 12,    // lineNo
  7,                                   // colNo
  "spget_quadcorr",                    // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/spget_quadcorr.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo jf_emlrtBCI{ 1,     // iFirst
  8000,                                // iLast
  12,                                  // lineNo
  7,                                   // colNo
  "P",                                 // aName
  "spget_quadcorr",                    // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/spget_quadcorr.m",// pName
  3                                    // checkKind
};

static emlrtBCInfo of_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  20,                                  // lineNo
  11,                                  // colNo
  "I",                                 // aName
  "spget_quadcorr",                    // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/spget_quadcorr.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pf_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  21,                                  // lineNo
  11,                                  // colNo
  "J",                                 // aName
  "spget_quadcorr",                    // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/spget_quadcorr.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qf_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  22,                                  // lineNo
  13,                                  // colNo
  "S_",                                // aName
  "spget_quadcorr",                    // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/spget_quadcorr.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo rf_emlrtBCI{ 1,     // iFirst
  8000,                                // iLast
  24,                                  // lineNo
  9,                                   // colNo
  "P",                                 // aName
  "spget_quadcorr",                    // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/spget_quadcorr.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tf_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  14,                                  // lineNo
  12,                                  // colNo
  "A",                                 // aName
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo uf_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  14,                                  // lineNo
  21,                                  // colNo
  "M",                                 // aName
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vf_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  14,                                  // lineNo
  1,                                   // colNo
  "A",                                 // aName
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wf_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  15,                                  // lineNo
  15,                                  // colNo
  "A",                                 // aName
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xf_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  15,                                  // lineNo
  1,                                   // colNo
  "A",                                 // aName
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo yf_emlrtBCI{ 1,     // iFirst
  8000,                                // iLast
  10,                                  // lineNo
  51,                                  // colNo
  "x",                                 // aName
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo xb_emlrtDCI{ 10,    // lineNo
  51,                                  // colNo
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m",// pName
  1                                    // checkKind
};

static emlrtDCInfo ac_emlrtDCI{ 369,   // lineNo
  25,                                  // colNo
  "srskelf_asym_new/spget",            // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  4                                    // checkKind
};

static emlrtDCInfo bc_emlrtDCI{ 369,   // lineNo
  25,                                  // colNo
  "srskelf_asym_new/spget",            // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo bg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  375,                                 // lineNo
  24,                                  // colNo
  "update_list",                       // aName
  "srskelf_asym_new/spget",            // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo cg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  458,                                 // lineNo
  36,                                  // colNo
  "elements_to_find",                  // aName
  "find_locations_t",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo cc_emlrtDCI{ 368,   // lineNo
  15,                                  // colNo
  "srskelf_asym_new/spget",            // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtDCInfo dc_emlrtDCI{ 368,   // lineNo
  15,                                  // colNo
  "srskelf_asym_new/spget",            // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  4                                    // checkKind
};

static emlrtDCInfo ec_emlrtDCI{ 368,   // lineNo
  18,                                  // colNo
  "srskelf_asym_new/spget",            // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtDCInfo fc_emlrtDCI{ 368,   // lineNo
  18,                                  // colNo
  "srskelf_asym_new/spget",            // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  4                                    // checkKind
};

static emlrtBCInfo dg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  373,                                 // lineNo
  31,                                  // colNo
  "update_list",                       // aName
  "srskelf_asym_new/spget",            // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo gc_emlrtDCI{ 368,   // lineNo
  5,                                   // colNo
  "srskelf_asym_new/spget",            // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo eg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  372,                                 // lineNo
  31,                                  // colNo
  "lookup_list",                       // aName
  "srskelf_asym_new/spget",            // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtRTEInfo dc_emlrtRTEI{ 14,  // lineNo
  9,                                   // colNo
  "log",                               // fName
  "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elfun/log.m"// pName
};

static emlrtBCInfo nq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  443,                                 // lineNo
  25,                                  // colNo
  "nodes",                             // aName
  "srskelf_asym_new/spget/get_update_list",// fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo oq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  442,                                 // lineNo
  19,                                  // colNo
  "update_list",                       // aName
  "srskelf_asym_new/spget/get_update_list",// fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo ic_emlrtDCI{ 442,   // lineNo
  19,                                  // colNo
  "srskelf_asym_new/spget/get_update_list",// fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtDCInfo jc_emlrtDCI{ 443,   // lineNo
  19,                                  // colNo
  "srskelf_asym_new/spget/get_update_list",// fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo pq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  443,                                 // lineNo
  19,                                  // colNo
  "update_list",                       // aName
  "srskelf_asym_new/spget/get_update_list",// fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  445,                                 // lineNo
  60,                                  // colNo
  "nodes(node_idx).chld",              // aName
  "srskelf_asym_new/spget/get_update_list",// fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m",// pName
  0                                    // checkKind
};

static emlrtRTEInfo kc_emlrtRTEI{ 73,  // lineNo
  5,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo lc_emlrtRTEI{ 63,  // lineNo
  5,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo mc_emlrtRTEI{ 82,  // lineNo
  3,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo nc_emlrtRTEI{ 88,  // lineNo
  3,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo oc_emlrtRTEI{ 104, // lineNo
  7,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo pc_emlrtRTEI{ 115, // lineNo
  7,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo rc_emlrtRTEI{ 131, // lineNo
  5,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo sc_emlrtRTEI{ 136, // lineNo
  14,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo tc_emlrtRTEI{ 140, // lineNo
  7,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo uc_emlrtRTEI{ 144, // lineNo
  7,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo vc_emlrtRTEI{ 159, // lineNo
  16,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo wc_emlrtRTEI{ 159, // lineNo
  9,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo xc_emlrtRTEI{ 154, // lineNo
  9,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo yc_emlrtRTEI{ 164, // lineNo
  7,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo ad_emlrtRTEI{ 177, // lineNo
  19,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo bd_emlrtRTEI{ 308, // lineNo
  14,                                  // colNo
  "cat",                               // fName
  "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/cat.m"// pName
};

static emlrtRTEInfo cd_emlrtRTEI{ 177, // lineNo
  9,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo dd_emlrtRTEI{ 182, // lineNo
  21,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo ed_emlrtRTEI{ 182, // lineNo
  11,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo fd_emlrtRTEI{ 187, // lineNo
  10,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo gd_emlrtRTEI{ 185, // lineNo
  9,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo hd_emlrtRTEI{ 203, // lineNo
  7,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo id_emlrtRTEI{ 209, // lineNo
  20,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo jd_emlrtRTEI{ 209, // lineNo
  39,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo kd_emlrtRTEI{ 209, // lineNo
  37,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo ld_emlrtRTEI{ 209, // lineNo
  9,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo md_emlrtRTEI{ 209, // lineNo
  18,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo nd_emlrtRTEI{ 210, // lineNo
  31,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo od_emlrtRTEI{ 210, // lineNo
  27,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo pd_emlrtRTEI{ 210, // lineNo
  11,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo qd_emlrtRTEI{ 210, // lineNo
  17,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo rd_emlrtRTEI{ 211, // lineNo
  34,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo sd_emlrtRTEI{ 211, // lineNo
  29,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo td_emlrtRTEI{ 211, // lineNo
  12,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo ud_emlrtRTEI{ 211, // lineNo
  18,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo vd_emlrtRTEI{ 213, // lineNo
  43,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo wd_emlrtRTEI{ 213, // lineNo
  40,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo xd_emlrtRTEI{ 213, // lineNo
  12,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo yd_emlrtRTEI{ 213, // lineNo
  20,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo ae_emlrtRTEI{ 217, // lineNo
  7,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo be_emlrtRTEI{ 218, // lineNo
  7,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo ce_emlrtRTEI{ 219, // lineNo
  7,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo de_emlrtRTEI{ 220, // lineNo
  7,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo ee_emlrtRTEI{ 221, // lineNo
  7,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo fe_emlrtRTEI{ 222, // lineNo
  7,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo ge_emlrtRTEI{ 234, // lineNo
  20,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo he_emlrtRTEI{ 235, // lineNo
  9,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo ie_emlrtRTEI{ 236, // lineNo
  20,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo je_emlrtRTEI{ 236, // lineNo
  15,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo ke_emlrtRTEI{ 237, // lineNo
  9,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo le_emlrtRTEI{ 238, // lineNo
  15,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo me_emlrtRTEI{ 12,  // lineNo
  5,                                   // colNo
  "chol",                              // fName
  "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/chol.m"// pName
};

static emlrtRTEInfo ne_emlrtRTEI{ 227, // lineNo
  9,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo oe_emlrtRTEI{ 228, // lineNo
  22,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo pe_emlrtRTEI{ 228, // lineNo
  9,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo qe_emlrtRTEI{ 229, // lineNo
  9,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo re_emlrtRTEI{ 230, // lineNo
  9,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo se_emlrtRTEI{ 231, // lineNo
  9,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo te_emlrtRTEI{ 315, // lineNo
  40,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo ue_emlrtRTEI{ 318, // lineNo
  11,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo ve_emlrtRTEI{ 332, // lineNo
  3,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo tg_emlrtRTEI{ 76,  // lineNo
  9,                                   // colNo
  "eml_mtimes_helper",                 // fName
  "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"// pName
};

static emlrtRTEInfo ug_emlrtRTEI{ 10,  // lineNo
  34,                                  // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtRTEInfo vg_emlrtRTEI{ 10,  // lineNo
  20,                                  // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtRTEInfo wg_emlrtRTEI{ 11,  // lineNo
  20,                                  // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtRTEInfo xg_emlrtRTEI{ 12,  // lineNo
  20,                                  // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtRTEInfo yg_emlrtRTEI{ 13,  // lineNo
  11,                                  // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtRTEInfo ah_emlrtRTEI{ 13,  // lineNo
  19,                                  // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtRTEInfo bh_emlrtRTEI{ 13,  // lineNo
  27,                                  // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtRTEInfo ch_emlrtRTEI{ 14,  // lineNo
  1,                                   // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtRTEInfo eh_emlrtRTEI{ 15,  // lineNo
  17,                                  // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtRTEInfo fh_emlrtRTEI{ 16,  // lineNo
  17,                                  // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtRTEInfo gh_emlrtRTEI{ 16,  // lineNo
  9,                                   // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtRTEInfo hh_emlrtRTEI{ 17,  // lineNo
  17,                                  // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtRTEInfo ih_emlrtRTEI{ 18,  // lineNo
  29,                                  // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtRTEInfo jh_emlrtRTEI{ 18,  // lineNo
  23,                                  // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtRTEInfo kh_emlrtRTEI{ 19,  // lineNo
  29,                                  // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtRTEInfo lh_emlrtRTEI{ 20,  // lineNo
  29,                                  // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtRTEInfo mh_emlrtRTEI{ 21,  // lineNo
  29,                                  // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtRTEInfo oh_emlrtRTEI{ 23,  // lineNo
  1,                                   // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtRTEInfo qh_emlrtRTEI{ 27,  // lineNo
  21,                                  // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtRTEInfo rh_emlrtRTEI{ 27,  // lineNo
  29,                                  // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtRTEInfo sh_emlrtRTEI{ 27,  // lineNo
  1,                                   // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtRTEInfo th_emlrtRTEI{ 28,  // lineNo
  11,                                  // colNo
  "pxyfun_lap_neumann",                // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym1/pxyfun_lap_neumann.m"// pName
};

static emlrtRTEInfo uh_emlrtRTEI{ 44,  // lineNo
  20,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo vh_emlrtRTEI{ 41,  // lineNo
  35,                                  // colNo
  "ndgrid",                            // fName
  "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/ndgrid.m"// pName
};

static emlrtRTEInfo wh_emlrtRTEI{ 10,  // lineNo
  44,                                  // colNo
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pName
};

static emlrtRTEInfo xh_emlrtRTEI{ 10,  // lineNo
  40,                                  // colNo
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pName
};

static emlrtRTEInfo yh_emlrtRTEI{ 10,  // lineNo
  47,                                  // colNo
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pName
};

static emlrtRTEInfo ai_emlrtRTEI{ 10,  // lineNo
  54,                                  // colNo
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pName
};

static emlrtRTEInfo bi_emlrtRTEI{ 10,  // lineNo
  63,                                  // colNo
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pName
};

static emlrtRTEInfo ci_emlrtRTEI{ 11,  // lineNo
  19,                                  // colNo
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pName
};

static emlrtRTEInfo di_emlrtRTEI{ 76,  // lineNo
  13,                                  // colNo
  "eml_mtimes_helper",                 // fName
  "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"// pName
};

static emlrtRTEInfo ei_emlrtRTEI{ 37,  // lineNo
  6,                                   // colNo
  "sort",                              // fName
  "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/sort.m"// pName
};

static emlrtRTEInfo fi_emlrtRTEI{ 38,  // lineNo
  5,                                   // colNo
  "sort",                              // fName
  "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/datafun/sort.m"// pName
};

static emlrtRTEInfo gi_emlrtRTEI{ 12,  // lineNo
  7,                                   // colNo
  "spget_quadcorr",                    // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/spget_quadcorr.m"// pName
};

static emlrtRTEInfo hi_emlrtRTEI{ 12,  // lineNo
  8,                                   // colNo
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pName
};

static emlrtRTEInfo ii_emlrtRTEI{ 16,  // lineNo
  5,                                   // colNo
  "spget_quadcorr",                    // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/spget_quadcorr.m"// pName
};

static emlrtRTEInfo ji_emlrtRTEI{ 37,  // lineNo
  15,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo ki_emlrtRTEI{ 24,  // lineNo
  14,                                  // colNo
  "spget_quadcorr",                    // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/spget_quadcorr.m"// pName
};

static emlrtRTEInfo mi_emlrtRTEI{ 13,  // lineNo
  1,                                   // colNo
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pName
};

static emlrtRTEInfo ni_emlrtRTEI{ 14,  // lineNo
  10,                                  // colNo
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pName
};

static emlrtRTEInfo pi_emlrtRTEI{ 15,  // lineNo
  13,                                  // colNo
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pName
};

static emlrtRTEInfo qi_emlrtRTEI{ 16,  // lineNo
  32,                                  // colNo
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pName
};

static emlrtRTEInfo ri_emlrtRTEI{ 16,  // lineNo
  9,                                   // colNo
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pName
};

static emlrtRTEInfo si_emlrtRTEI{ 18,  // lineNo
  19,                                  // colNo
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pName
};

static emlrtRTEInfo ti_emlrtRTEI{ 18,  // lineNo
  35,                                  // colNo
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pName
};

static emlrtRTEInfo ui_emlrtRTEI{ 19,  // lineNo
  26,                                  // colNo
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pName
};

static emlrtRTEInfo wi_emlrtRTEI{ 19,  // lineNo
  19,                                  // colNo
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pName
};

static emlrtRTEInfo vj_emlrtRTEI{ 10,  // lineNo
  51,                                  // colNo
  "Afun_lap_te",                       // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"// pName
};

static emlrtRTEInfo wj_emlrtRTEI{ 32,  // lineNo
  5,                                   // colNo
  "find",                              // fName
  "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m"// pName
};

static emlrtRTEInfo xj_emlrtRTEI{ 88,  // lineNo
  13,                                  // colNo
  "eml_mtimes_helper",                 // fName
  "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"// pName
};

static emlrtRTEInfo ak_emlrtRTEI{ 368, // lineNo
  5,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo bk_emlrtRTEI{ 371, // lineNo
  5,                                   // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo ck_emlrtRTEI{ 372, // lineNo
  31,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo qo_emlrtRTEI{ 443, // lineNo
  19,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRTEInfo gp_emlrtRTEI{ 205, // lineNo
  14,                                  // colNo
  "srskelf_asym_new",                  // fName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pName
};

static emlrtRSInfo cr_emlrtRSI{ 27,    // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo dr_emlrtRSI{ 31,    // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo gr_emlrtRSI{ 32,    // lineNo
  "srskelf_asym_new",                  // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/srskelf_asym_new/srskelf_asym_new.m"// pathName
};

static emlrtRSInfo jr_emlrtRSI{ 69,    // lineNo
  "fprintf",                           // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/iofun/fprintf.m"// pathName
};

static emlrtRSInfo kr_emlrtRSI{ 68,    // lineNo
  "fprintf",                           // fcnName
  "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/iofun/fprintf.m"// pathName
};

static emlrtRSInfo sr_emlrtRSI{ 24,    // lineNo
  "spget_quadcorr",                    // fcnName
  "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/Afun_lap_te/spget_quadcorr.m"// pathName
};

// Function Declarations
static const mxArray *b_emlrt_marshallOut(const emlrtStack &sp, const char_T u
  [28]);
static void b_spget(const emlrtStack &sp, const coder::f_captured_var &slf,
                    const coder::c_captured_var &nslf, const coder::
                    f_captured_var &lst, const coder::c_captured_var &nlst,
                    const coder::c_captured_var &nbox, const coder::
                    b_captured_var &t, const coder::c_captured_var &i, const
                    coder::e_captured_var &lookup_list, const coder::
                    captured_var &opts, coder::array<real_T, 2U> &A);
static void b_srskelf_asym_new_anonFcn1(const emlrtStack &sp, const real_T x
  [24000], const real_T opts_area[8000], const real_T opts_nu[24000], const
  real_T opts_P[8000], const real_T opts_contrast[8000], real_T opts_wuse, const
  coder::sparse &opts_qcorr, const coder::array<real_T, 2U> &i, const coder::
  array<real_T, 2U> &j, coder::array<real_T, 2U> &varargout_1);
static void binary_expand_op(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
  const coder::array<real_T, 2U> &in2, const coder::array<real_T, 1U> &in3,
  const coder::array<real_T, 2U> &in4);
static void binary_expand_op_1(const emlrtStack &sp, coder::array<real_T, 2U>
  &in1, const coder::array<real_T, 2U> &in2, const coder::array<real_T, 1U> &in3,
  const coder::array<real_T, 2U> &in4);
static void c_srskelf_asym_new_anonFcn1(const emlrtStack &sp, const real_T x
  [24000], const real_T opts_area[8000], const real_T opts_nu[24000], const
  real_T opts_P[8000], const real_T opts_contrast[8000], real_T opts_wuse, const
  coder::sparse &opts_qcorr, const coder::array<real_T, 2U> &i, const coder::
  array<real_T, 2U> &j, coder::array<real_T, 2U> &varargout_1);
static real_T cast(const emlrtStack &sp, const coder::array<c_struct_T, 1U>
                   &t0_nodes, const coder::array<real_T, 2U> &t0_lvp, real_T
                   t0_nlvl, real_T t0_lrt, coder::array<struct_T, 1U> &t1_nodes,
                   coder::array<real_T, 2U> &t1_lvp, real_T &t1_lrt);
static void disp(const emlrtStack &sp, const mxArray *m, emlrtMCInfo &location);
static const mxArray *emlrt_marshallOut(const int32_T u);
static const mxArray *emlrt_marshallOut(const real_T u);
static const mxArray *emlrt_marshallOut(const emlrtStack &sp, const char_T u[43]);
static const mxArray *emlrt_marshallOut(const emlrtStack &sp);
static const mxArray *feval(const emlrtStack &sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, const mxArray *m4, const mxArray *m5,
  emlrtMCInfo &location);
static const mxArray *feval(const emlrtStack &sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, const mxArray *m4, const mxArray *m5, const
  mxArray *m6, const mxArray *m7, const mxArray *m8, const mxArray *m9, const
  mxArray *m10, emlrtMCInfo &location);
static const mxArray *g_emlrt_marshallOut(const emlrtStack &sp, const char_T u[7]);
static void get_update_list(const emlrtStack *sp, real_T node_idx, coder::array<
  boolean_T, 1U> &update_list, const coder::array<struct_T, 1U> &nodes);
static const mxArray *h_emlrt_marshallOut(const emlrtStack &sp, const char_T u
  [82]);
static const mxArray *i_emlrt_marshallOut(const emlrtStack &sp, const char_T u
  [46]);
static const mxArray *j_emlrt_marshallOut(const emlrtStack &sp, const char_T u[3]);
static const mxArray *k_emlrt_marshallOut(const emlrtStack &sp, const char_T u[4]);
static const mxArray *l_emlrt_marshallOut(const emlrtStack &sp, const char_T u[6]);
static const mxArray *m_emlrt_marshallOut(const emlrtStack &sp, const char_T u[8]);
static const mxArray *n_emlrt_marshallOut(const emlrtStack &sp, const char_T u
  [18]);
static const mxArray *p_emlrt_marshallOut(const emlrtStack &sp, const char_T u
  [52]);
static void spget(const emlrtStack &sp, const coder::f_captured_var &slf, const
                  coder::c_captured_var &nslf, const coder::f_captured_var &lst,
                  const coder::c_captured_var &nlst, const coder::c_captured_var
                  &nbox, const coder::b_captured_var &t, const coder::
                  c_captured_var &i, const coder::e_captured_var &lookup_list,
                  const coder::captured_var &opts, coder::array<real_T, 2U> &A);
static void spget(const emlrtStack &sp, const coder::f_captured_var &slf, const
                  coder::c_captured_var &nslf, const coder::c_captured_var &nbox,
                  const coder::b_captured_var &t, const coder::c_captured_var &i,
                  const coder::e_captured_var &lookup_list, const coder::
                  captured_var &opts, coder::array<real_T, 2U> &A);
static void srskelf_asym_new_anonFcn1(const emlrtStack &sp, const real_T x[24000],
  const real_T opts_area[8000], const real_T opts_nu[24000], const real_T
  opts_P[8000], const real_T opts_contrast[8000], real_T opts_wuse, const coder::
  sparse &opts_qcorr, const coder::array<real_T, 2U> &i, const coder::array<
  real_T, 2U> &j, coder::array<real_T, 2U> &varargout_1);
static void srskelf_asym_new_anonFcn2(const emlrtStack &sp, const real_T
  opts_area[8000], const real_T x[24000], const coder::array<real_T, 2U> &slf,
  const coder::array<real_T, 2U> &nbr, const coder::array<real_T, 2U> &proxy,
  real_T l, const real_T ctr[3], coder::array<real_T, 2U> &varargout_1, coder::
  array<real_T, 2U> &varargout_2);

// Function Definitions
static const mxArray *b_emlrt_marshallOut(const emlrtStack &sp, const char_T u
  [28])
{
  static const int32_T iv[2]{ 1, 28 };

  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 28, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void b_spget(const emlrtStack &sp, const coder::f_captured_var &slf,
                    const coder::c_captured_var &nslf, const coder::
                    f_captured_var &lst, const coder::c_captured_var &nlst,
                    const coder::c_captured_var &nbox, const coder::
                    b_captured_var &t, const coder::c_captured_var &i, const
                    coder::e_captured_var &lookup_list, const coder::
                    captured_var &opts, coder::array<real_T, 2U> &A)
{
  coder::array<real_T, 2U> r;
  coder::array<int32_T, 1U> ii;
  coder::array<boolean_T, 1U> update_list;
  emlrtStack b_st;
  emlrtStack st;
  real_T d;
  real_T d1;
  real_T m_;
  real_T n_;
  int32_T I__size_idx_1;
  int32_T J__size_idx_0;
  int32_T J__size_idx_1;
  int32_T b_i;
  int32_T b_lookup_list;
  int32_T c_i;
  int32_T i1;
  int32_T loop_ub;
  int32_T n;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);

  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  //  A = SPGET(ITYP,JTYP) Sparse matrix access function (native MATLAB is
  //  slow for large matrices).  We grab the accumulated Schur complement
  //  updates to a block of the matrix from previously-skeletonized
  //  levels.  Index sets ITYP and JTYP can be 'slf', 'nbr', or 'lst'.
  //  Translate input strings to index sets (and their lengths)
  m_ = nslf.contents;
  J__size_idx_0 = lst.contents.size(0);
  I__size_idx_1 = slf.contents.size(1);
  J__size_idx_1 = lst.contents.size(1);
  n_ = nlst.contents;
  if (!(m_ >= 0.0)) {
    emlrtNonNegativeCheckR2012b(m_, &dc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  d = static_cast<int32_T>(muDoubleScalarFloor(m_));
  if (m_ != d) {
    emlrtIntegerCheckR2012b(m_, &cc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (!(n_ >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n_, &fc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  d1 = static_cast<int32_T>(muDoubleScalarFloor(n_));
  if (n_ != d1) {
    emlrtIntegerCheckR2012b(n_, &ec_emlrtDCI, (emlrtConstCTX)&sp);
  }

  A.set_size(&ak_emlrtRTEI, &sp, static_cast<int32_T>(m_), static_cast<int32_T>
             (n_));
  if (m_ != d) {
    emlrtIntegerCheckR2012b(m_, &gc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (n_ != d1) {
    emlrtIntegerCheckR2012b(n_, &gc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  loop_ub = static_cast<int32_T>(m_) * static_cast<int32_T>(n_);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    A[b_i] = 0.0;
  }

  if (!(nbox.contents >= 0.0)) {
    emlrtNonNegativeCheckR2012b(nbox.contents, &ac_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (nbox.contents != static_cast<int32_T>(muDoubleScalarFloor(nbox.contents)))
  {
    emlrtIntegerCheckR2012b(nbox.contents, &bc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  //  Local copy of t.nodes to avoid outer variable usage in recursive function
  loop_ub = static_cast<int32_T>(nbox.contents);
  update_list.set_size(&bk_emlrtRTEI, &sp, loop_ub);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    update_list[b_i] = false;
  }

  st.site = &oj_emlrtRSI;
  get_update_list(&st, i.contents, update_list, t.contents.nodes);

  //  Pass nodes to the recursive function
  st.site = &pj_emlrtRSI;
  b_st.site = &ve_emlrtRSI;
  coder::c_eml_find(b_st, update_list, ii);
  loop_ub = ii.size(0);
  r.set_size(&ck_emlrtRTEI, &sp, 1, ii.size(0));
  for (b_i = 0; b_i < loop_ub; b_i++) {
    r[b_i] = ii[b_i];
  }

  int32_T iv[2];
  st.site = &pj_emlrtRSI;
  coder::flip(r);
  iv[0] = (*(int32_T (*)[2])r.size())[0];
  iv[1] = (*(int32_T (*)[2])r.size())[1];
  st.site = &pj_emlrtRSI;
  coder::internal::indexShapeCheck(st, lookup_list.contents.size(0), iv);
  b_lookup_list = lookup_list.contents.size(0);
  loop_ub = r.size(1);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    c_i = static_cast<int32_T>(r[b_i]);
    if ((c_i < 1) || (c_i > b_lookup_list)) {
      emlrtDynamicBoundsCheckR2012b(c_i, 1, b_lookup_list, &eg_emlrtBCI,
        (emlrtConstCTX)&sp);
    }
  }

  loop_ub = r.size(1) - 1;
  for (c_i = 0; c_i <= loop_ub; c_i++) {
    if ((lookup_list.contents[static_cast<int32_T>(r[c_i]) - 1] != 0) && (c_i >
         loop_ub)) {
      emlrtDynamicBoundsCheckR2012b(c_i, 0, loop_ub, &dg_emlrtBCI,
        (emlrtConstCTX)&sp);
    }
  }

  b_lookup_list = 0;
  for (c_i = 0; c_i <= loop_ub; c_i++) {
    if (lookup_list.contents[static_cast<int32_T>(r[c_i]) - 1] != 0) {
      b_lookup_list++;
    }
  }

  if (b_lookup_list - 1 >= 0) {
    i1 = I__size_idx_1;
    if ((J__size_idx_0 == 0) || (J__size_idx_1 == 0)) {
      n = 0;
    } else {
      n = muIntScalarMax_sint32(J__size_idx_0, J__size_idx_1);
    }
  }

  for (loop_ub = 0; loop_ub < b_lookup_list; loop_ub++) {
    //  Use an explicit index for the loop
    if (loop_ub + 1 > b_lookup_list) {
      emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, b_lookup_list, &bg_emlrtBCI,
        (emlrtConstCTX)&sp);
    }

    //  Use a temporary variable for the entire struct
    //  For off-diagonal block
    st.site = &qj_emlrtRSI;

    //  Helper function to replace ismembc2
    //  Initialize an empty array to store the locations
    //  Iterate over each element to find
    for (c_i = 0; c_i < i1; c_i++) {
      if (c_i + 1 > I__size_idx_1) {
        emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, I__size_idx_1, &cg_emlrtBCI,
          &st);
      }

      //  Use the local function binary_search to find the location of the element
      //  If the element is found (location is not -1), add it to the locs array
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }

    //  Replace ismembc2 with find_locations_t
    st.site = &rj_emlrtRSI;

    //  Helper function to replace ismembc2
    //  Initialize an empty array to store the locations
    //  Iterate over each element to find
    for (c_i = 0; c_i < n; c_i++) {
      b_i = J__size_idx_0 * J__size_idx_1;
      if (c_i + 1 > b_i) {
        emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, b_i, &cg_emlrtBCI, &st);
      }

      //  Use the local function binary_search to find the location of the element
      //  If the element is found (location is not -1), add it to the locs array
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }

    //  Replace ismembc2 with find_locations_t
    //  Convert to double to ensure consistent types
    //  Ensure tmp2 is consistent in size
    //  Different factorization depending on symmetry
    st.site = &sj_emlrtRSI;
    if (!coder::internal::b_strcmp(st, opts.contents.symm)) {
      st.site = &tj_emlrtRSI;
      coder::internal::c_strcmp(st, opts.contents.symm);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void b_srskelf_asym_new_anonFcn1(const emlrtStack &sp, const real_T x
  [24000], const real_T opts_area[8000], const real_T opts_nu[24000], const
  real_T opts_P[8000], const real_T opts_contrast[8000], real_T opts_wuse, const
  coder::sparse &opts_qcorr, const coder::array<real_T, 2U> &i, const coder::
  array<real_T, 2U> &j, coder::array<real_T, 2U> &varargout_1)
{
  coder::b_sparse d_x;
  coder::array<real_T, 2U> J;
  coder::array<real_T, 2U> M;
  coder::array<real_T, 2U> b_I;
  coder::array<real_T, 2U> b_opts_area;
  coder::array<real_T, 2U> b_opts_nu;
  coder::array<real_T, 2U> b_x;
  coder::array<real_T, 2U> c_x;
  coder::array<real_T, 2U> r;
  coder::array<real_T, 2U> y;
  coder::array<real_T, 1U> b_opts_contrast;
  coder::array<real_T, 1U> c_I;
  coder::array<real_T, 1U> idx;
  coder::array<int32_T, 2U> E;
  coder::array<int32_T, 2U> b_j;
  coder::array<int32_T, 2U> iidx;
  coder::array<int32_T, 1U> ii;
  coder::array<int32_T, 1U> jj;
  coder::array<int32_T, 1U> r2;
  coder::array<int32_T, 1U> r3;
  coder::array<int32_T, 1U> r4;
  coder::array<boolean_T, 2U> b_idx;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T P[8000];
  st.prev = &sp;
  st.tls = sp.tls;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &qh_emlrtRSI;
  std::copy(&opts_P[0], &opts_P[8000], &P[0]);

  //  AFUN(I,J) computes entries of the matrix A to be factorized at the
  //  index sets I and J.  This handles the near-field correction.
  if ((i.size(1) == 0) || ((j.size(0) == 0) || (j.size(1) == 0))) {
    int32_T b_i;
    int32_T k;
    int32_T loop_ub;
    if ((j.size(0) == 0) || (j.size(1) == 0)) {
      k = 0;
    } else {
      int32_T n_tmp;
      b_i = j.size(0);
      n_tmp = j.size(1);
      k = muIntScalarMax_sint32(b_i, n_tmp);
    }

    varargout_1.set_size(&ji_emlrtRTEI, &st, i.size(1), k);
    loop_ub = i.size(1) * k;
    for (b_i = 0; b_i < loop_ub; b_i++) {
      varargout_1[b_i] = 0.0;
    }
  } else {
    __m128d r1;
    real_T d;
    int32_T iv[2];
    int32_T iv1[2];
    int32_T b;
    int32_T b_i;
    int32_T b_k;
    int32_T b_loop_ub;
    int32_T k;
    int32_T loop_ub;
    int32_T loop_ub_tmp;
    int32_T n_tmp;
    int32_T unnamed_idx_1_tmp;
    b_st.site = &rh_emlrtRSI;
    unnamed_idx_1_tmp = j.size(0) * j.size(1);
    b = i.size(1);
    b_I.set_size(&vh_emlrtRTEI, &b_st, i.size(1), unnamed_idx_1_tmp);
    c_st.site = &bi_emlrtRSI;
    d_st.site = &ci_emlrtRSI;
    if (unnamed_idx_1_tmp > 2147483646) {
      e_st.site = &ge_emlrtRSI;
      coder::check_forloop_overflow_error(e_st);
    }

    for (k = 0; k < unnamed_idx_1_tmp; k++) {
      d_st.site = &di_emlrtRSI;
      e_st.site = &ci_emlrtRSI;
      if (b_I.size(0) > 2147483646) {
        f_st.site = &ge_emlrtRSI;
        coder::check_forloop_overflow_error(f_st);
      }

      for (b_k = 0; b_k < b; b_k++) {
        b_I[b_k + b_I.size(0) * k] = i[b_k];
      }
    }

    J.set_size(&vh_emlrtRTEI, &b_st, i.size(1), unnamed_idx_1_tmp);
    c_st.site = &bi_emlrtRSI;
    d_st.site = &ci_emlrtRSI;
    for (k = 0; k < unnamed_idx_1_tmp; k++) {
      d_st.site = &di_emlrtRSI;
      e_st.site = &ci_emlrtRSI;
      if (J.size(0) > 2147483646) {
        f_st.site = &ge_emlrtRSI;
        coder::check_forloop_overflow_error(f_st);
      }

      for (b_k = 0; b_k < b; b_k++) {
        J[b_k + J.size(0) * k] = j[k];
      }
    }

    iv[0] = (*(int32_T (*)[2])((coder::array<real_T, 2U> *)&j)->size())[0];
    iv[1] = (*(int32_T (*)[2])((coder::array<real_T, 2U> *)&j)->size())[1];
    b_st.site = &sh_emlrtRSI;
    coder::internal::b_indexShapeCheck(b_st, iv);
    loop_ub = j.size(1);
    b_j.set_size(&vj_emlrtRTEI, &st, j.size(0), j.size(1));
    for (b_i = 0; b_i < unnamed_idx_1_tmp; b_i++) {
      d = j[b_i];
      if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
        emlrtIntegerCheckR2012b(d, &xb_emlrtDCI, &st);
      }

      if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > 8000)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 8000,
          &yf_emlrtBCI, &st);
      }

      b_j[b_i] = static_cast<int32_T>(d);
    }

    b_x.set_size(&xh_emlrtRTEI, &st, 3, i.size(1));
    for (b_i = 0; b_i < b; b_i++) {
      b_k = static_cast<int32_T>(muDoubleScalarFloor(i[b_i]));
      if (i[b_i] != b_k) {
        emlrtIntegerCheckR2012b(i[b_i], &ub_emlrtDCI, &st);
      }

      k = static_cast<int32_T>(i[b_i]);
      if ((k < 1) || (k > 8000)) {
        emlrtDynamicBoundsCheckR2012b(k, 1, 8000, &if_emlrtBCI, &st);
      }

      k = 3 * (k - 1);
      b_x[3 * b_i] = x[k];
      if (i[b_i] != b_k) {
        emlrtIntegerCheckR2012b(i[b_i], &ub_emlrtDCI, &st);
      }

      b_x[3 * b_i + 1] = x[k + 1];
      if (i[b_i] != b_k) {
        emlrtIntegerCheckR2012b(i[b_i], &ub_emlrtDCI, &st);
      }

      b_x[3 * b_i + 2] = x[k + 2];
    }

    c_x.set_size(&yh_emlrtRTEI, &st, 3, unnamed_idx_1_tmp);
    for (b_i = 0; b_i < unnamed_idx_1_tmp; b_i++) {
      k = 3 * (b_j[b_i] - 1);
      c_x[3 * b_i] = x[k];
      c_x[3 * b_i + 1] = x[k + 1];
      c_x[3 * b_i + 2] = x[k + 2];
    }

    b_opts_nu.set_size(&ai_emlrtRTEI, &st, 3, i.size(1));
    for (b_i = 0; b_i < b; b_i++) {
      k = 3 * (static_cast<int32_T>(i[b_i]) - 1);
      b_opts_nu[3 * b_i] = opts_nu[k];
      b_opts_nu[3 * b_i + 1] = opts_nu[k + 1];
      b_opts_nu[3 * b_i + 2] = opts_nu[k + 2];
    }

    b_st.site = &sh_emlrtRSI;
    lap_neumann_kernel(b_st, b_x, c_x, b_opts_nu, r);
    b_opts_area.set_size(&bi_emlrtRTEI, &st, j.size(0), j.size(1));
    for (b_i = 0; b_i < unnamed_idx_1_tmp; b_i++) {
      b_opts_area[b_i] = opts_area[static_cast<int32_T>(j[b_i]) - 1];
    }

    b_st.site = &sh_emlrtRSI;
    coder::c_bsxfun(b_st, r, b_opts_area, M);
    b_opts_contrast.set_size(&ci_emlrtRTEI, &st, i.size(1));
    for (b_i = 0; b_i < b; b_i++) {
      b_opts_contrast[b_i] = opts_contrast[static_cast<int32_T>(i[b_i]) - 1];
    }

    r.set_size(&di_emlrtRTEI, &st, M.size(0), M.size(1));
    b_loop_ub = M.size(0) * M.size(1);
    k = (b_loop_ub / 2) << 1;
    b_k = k - 2;
    for (b_i = 0; b_i <= b_k; b_i += 2) {
      r1 = _mm_loadu_pd(&M[b_i]);
      _mm_storeu_pd(&r[b_i], _mm_mul_pd(_mm_set1_pd(2.0), r1));
    }

    for (b_i = k; b_i < b_loop_ub; b_i++) {
      r[b_i] = 2.0 * M[b_i];
    }

    b_st.site = &th_emlrtRSI;
    coder::bsxfun(b_st, b_opts_contrast, r, varargout_1);
    b_st.site = &uh_emlrtRSI;

    //  SPGET_quadcorr(I,J,P,S) computes entries of a sparse matrix of near-field
    //  corrections that should be added to the kernel matrix, as used in
    //  AFUN. P is the permutation required for extracting near
    //  quadrature correction and is only used as a temporary array,
    //  and S stores the sparse matrix corresponding
    //  to the quadrature correction
    b_i = j.size(0);
    n_tmp = j.size(1);
    n_tmp = muIntScalarMax_sint32(b_i, n_tmp);
    c_st.site = &ji_emlrtRSI;
    y.set_size(&ei_emlrtRTEI, &c_st, 1, i.size(1));
    for (b_i = 0; b_i < b; b_i++) {
      y[b_i] = i[b_i];
    }

    d_st.site = &mi_emlrtRSI;
    coder::internal::b_sort(d_st, y, iidx);
    b_loop_ub = iidx.size(1);
    E.set_size(&fi_emlrtRTEI, &c_st, 1, iidx.size(1));
    for (b_i = 0; b_i < b_loop_ub; b_i++) {
      E[b_i] = iidx[b_i];
    }

    k = y.size(1);
    iidx.set_size(&gi_emlrtRTEI, &b_st, 1, y.size(1));
    for (b_i = 0; b_i < k; b_i++) {
      if (y[b_i] != static_cast<int32_T>(muDoubleScalarFloor(y[b_i]))) {
        emlrtIntegerCheckR2012b(y[b_i], &vb_emlrtDCI, &b_st);
      }

      b_k = static_cast<int32_T>(y[b_i]);
      if ((b_k < 1) || (b_k > 8000)) {
        emlrtDynamicBoundsCheckR2012b(b_k, 1, 8000, &jf_emlrtBCI, &b_st);
      }

      iidx[b_i] = b_k;
    }

    if (iidx.size(1) != b_loop_ub) {
      emlrtSubAssignSizeCheck1dR2017a(iidx.size(1), b_loop_ub, &rb_emlrtECI,
        &b_st);
    }

    for (b_i = 0; b_i < b_loop_ub; b_i++) {
      P[iidx[b_i] - 1] = E[b_i];
    }

    M.set_size(&hi_emlrtRTEI, &b_st, i.size(1), n_tmp);
    loop_ub_tmp = i.size(1) * n_tmp;
    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      M[b_i] = 0.0;
    }

    c_st.site = &ki_emlrtRSI;
    d_st.site = &ki_emlrtRSI;
    opts_qcorr.b_parenReference(d_st, j, d_x);
    d_st.site = &cj_emlrtRSI;
    coder::b_eml_find(d_st, d_x, ii, jj, b_opts_contrast);
    b_loop_ub = ii.size(0);
    c_I.set_size(&wj_emlrtRTEI, &c_st, ii.size(0));
    for (b_i = 0; b_i < b_loop_ub; b_i++) {
      c_I[b_i] = ii[b_i];
    }

    c_st.site = &li_emlrtRSI;
    find_locations_t(c_st, y, c_I, idx);

    //  Replace ismembc with custom function
    //  Filter out invalid indices
    b_k = idx.size(0) - 1;
    k = 0;
    for (b_loop_ub = 0; b_loop_ub <= b_k; b_loop_ub++) {
      if ((idx[b_loop_ub] > 0.0) && (idx[b_loop_ub] <= y.size(1))) {
        k++;
      }
    }

    r2.set_size(&ji_emlrtRTEI, &b_st, k);
    k = 0;
    for (b_loop_ub = 0; b_loop_ub <= b_k; b_loop_ub++) {
      if ((idx[b_loop_ub] > 0.0) && (idx[b_loop_ub] <= y.size(1))) {
        r2[k] = b_loop_ub;
        k++;
      }
    }

    k = r2.size(0);
    for (b_i = 0; b_i < k; b_i++) {
      if (r2[b_i] > c_I.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(r2[b_i], 0, c_I.size(0) - 1, &of_emlrtBCI,
          &b_st);
      }
    }

    for (b_i = 0; b_i < k; b_i++) {
      if (r2[b_i] > jj.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(r2[b_i], 0, jj.size(0) - 1, &pf_emlrtBCI,
          &b_st);
      }
    }

    for (b_i = 0; b_i < k; b_i++) {
      if (r2[b_i] > b_opts_contrast.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(r2[b_i], 0, b_opts_contrast.size(0) - 1,
          &qf_emlrtBCI, &b_st);
      }
    }

    for (b_i = 0; b_i < k; b_i++) {
      b_k = static_cast<int32_T>(c_I[r2[b_i]]);
      if ((b_k < 1) || (b_k > 8000)) {
        emlrtDynamicBoundsCheckR2012b(b_k, 1, 8000, &rf_emlrtBCI, &b_st);
      }
    }

    idx.set_size(&ki_emlrtRTEI, &b_st, r2.size(0));
    for (b_i = 0; b_i < k; b_i++) {
      idx[b_i] = (static_cast<real_T>(jj[r2[b_i]]) - 1.0) * static_cast<real_T>
        (i.size(1));
    }

    if (r2.size(0) == idx.size(0)) {
      ii.set_size(&li_emlrtRTEI, &b_st, r2.size(0));
      for (b_i = 0; b_i < k; b_i++) {
        d = P[static_cast<int32_T>(c_I[r2[b_i]]) - 1] + idx[b_i];
        if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
          emlrtIntegerCheckR2012b(d, &wb_emlrtDCI, &b_st);
        }

        if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) >
             loop_ub_tmp)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, loop_ub_tmp,
            &sf_emlrtBCI, &b_st);
        }

        ii[b_i] = static_cast<int32_T>(d);
      }
    } else {
      c_st.site = &sr_emlrtRSI;
      binary_expand_op_9(c_st, ii, P, c_I, r2, idx, i, n_tmp);
    }

    b_loop_ub = r2.size(0);
    if (ii.size(0) != r2.size(0)) {
      emlrtSubAssignSizeCheck1dR2017a(ii.size(0), r2.size(0), &qb_emlrtECI,
        &b_st);
    }

    for (b_i = 0; b_i < b_loop_ub; b_i++) {
      M[ii[b_i] - 1] = b_opts_contrast[r2[b_i]];
    }

    k = (loop_ub_tmp / 2) << 1;
    b_k = k - 2;
    for (b_i = 0; b_i <= b_k; b_i += 2) {
      r1 = _mm_loadu_pd(&M[b_i]);
      _mm_storeu_pd(&M[b_i], _mm_mul_pd(_mm_set1_pd(-2.0), r1));
    }

    for (b_i = k; b_i < loop_ub_tmp; b_i++) {
      M[b_i] = -2.0 * M[b_i];
    }

    b_st.site = &vh_emlrtRSI;
    coder::c_abs(b_st, M, r);
    b_idx.set_size(&mi_emlrtRTEI, &st, r.size(0), r.size(1));
    loop_ub_tmp = r.size(0) * r.size(1);
    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      b_idx[b_i] = (r[b_i] != 0.0);
    }

    iv[0] = (*(int32_T (*)[2])varargout_1.size())[0];
    iv[1] = (*(int32_T (*)[2])varargout_1.size())[1];
    iv1[0] = (*(int32_T (*)[2])b_idx.size())[0];
    iv1[1] = (*(int32_T (*)[2])b_idx.size())[1];
    b_st.site = &wh_emlrtRSI;
    coder::internal::b_indexShapeCheck(b_st, iv, iv1);
    iv[0] = (*(int32_T (*)[2])M.size())[0];
    iv[1] = (*(int32_T (*)[2])M.size())[1];
    iv1[0] = (*(int32_T (*)[2])b_idx.size())[0];
    iv1[1] = (*(int32_T (*)[2])b_idx.size())[1];
    b_st.site = &wh_emlrtRSI;
    coder::internal::b_indexShapeCheck(b_st, iv, iv1);
    b_k = loop_ub_tmp - 1;
    k = 0;
    for (b_loop_ub = 0; b_loop_ub <= b_k; b_loop_ub++) {
      if (b_idx[b_loop_ub]) {
        k++;
      }
    }

    r3.set_size(&ji_emlrtRTEI, &st, k);
    k = 0;
    for (b_loop_ub = 0; b_loop_ub <= b_k; b_loop_ub++) {
      if (b_idx[b_loop_ub]) {
        r3[k] = b_loop_ub;
        k++;
      }
    }

    k = varargout_1.size(0) * varargout_1.size(1);
    loop_ub_tmp = r3.size(0);
    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      if (r3[b_i] > k - 1) {
        emlrtDynamicBoundsCheckR2012b(r3[b_i], 0, k - 1, &tf_emlrtBCI, &st);
      }
    }

    b_k = M.size(0) * M.size(1);
    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      if (r3[b_i] > b_k - 1) {
        emlrtDynamicBoundsCheckR2012b(r3[b_i], 0, b_k - 1, &uf_emlrtBCI, &st);
      }
    }

    b_opts_contrast.set_size(&ni_emlrtRTEI, &st, r3.size(0));
    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      b_opts_contrast[b_i] = varargout_1[r3[b_i]] + M[r3[b_i]];
    }

    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      if (r3[b_i] > k - 1) {
        emlrtDynamicBoundsCheckR2012b(r3[b_i], 0, k - 1, &vf_emlrtBCI, &st);
      }

      varargout_1[r3[b_i]] = b_opts_contrast[b_i];
    }

    if ((b_I.size(0) == J.size(0)) && (b_I.size(1) == J.size(1))) {
      b_idx.set_size(&oi_emlrtRTEI, &st, i.size(1), unnamed_idx_1_tmp);
      b_loop_ub = b_I.size(0) * b_I.size(1);
      for (b_i = 0; b_i < b_loop_ub; b_i++) {
        b_idx[b_i] = (b_I[b_i] == J[b_i]);
      }
    } else {
      b_st.site = &xh_emlrtRSI;
      eq(b_st, b_idx, b_I, J);
    }

    iv[0] = (*(int32_T (*)[2])varargout_1.size())[0];
    iv[1] = (*(int32_T (*)[2])varargout_1.size())[1];
    iv1[0] = (*(int32_T (*)[2])b_idx.size())[0];
    iv1[1] = (*(int32_T (*)[2])b_idx.size())[1];
    b_st.site = &xh_emlrtRSI;
    coder::internal::b_indexShapeCheck(b_st, iv, iv1);
    if ((b_I.size(0) != J.size(0)) && ((b_I.size(0) != 1) && (J.size(0) != 1)))
    {
      emlrtDimSizeImpxCheckR2021b(b_I.size(0), J.size(0), &vb_emlrtECI, &st);
    }

    if ((b_I.size(1) != J.size(1)) && ((b_I.size(1) != 1) && (J.size(1) != 1)))
    {
      emlrtDimSizeImpxCheckR2021b(b_I.size(1), J.size(1), &ub_emlrtECI, &st);
    }

    b_k = b_idx.size(0) * b_idx.size(1) - 1;
    k = 0;
    for (b_loop_ub = 0; b_loop_ub <= b_k; b_loop_ub++) {
      if (b_idx[b_loop_ub]) {
        k++;
      }
    }

    r4.set_size(&ji_emlrtRTEI, &st, k);
    k = 0;
    for (b_loop_ub = 0; b_loop_ub <= b_k; b_loop_ub++) {
      if (b_idx[b_loop_ub]) {
        r4[k] = b_loop_ub;
        k++;
      }
    }

    k = varargout_1.size(0) * varargout_1.size(1);
    loop_ub_tmp = r4.size(0);
    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      if (r4[b_i] > k - 1) {
        emlrtDynamicBoundsCheckR2012b(r4[b_i], 0, k - 1, &wf_emlrtBCI, &st);
      }
    }

    b_opts_contrast.set_size(&pi_emlrtRTEI, &st, r4.size(0));
    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      b_opts_contrast[b_i] = varargout_1[r4[b_i]] + 1.0;
    }

    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      if (r4[b_i] > k - 1) {
        emlrtDynamicBoundsCheckR2012b(r4[b_i], 0, k - 1, &xf_emlrtBCI, &st);
      }

      varargout_1[r4[b_i]] = b_opts_contrast[b_i];
    }

    iv[0] = (*(int32_T (*)[2])((coder::array<real_T, 2U> *)&j)->size())[0];
    iv[1] = (*(int32_T (*)[2])((coder::array<real_T, 2U> *)&j)->size())[1];
    b_st.site = &mj_emlrtRSI;
    coder::internal::b_indexShapeCheck(b_st, iv);
    b_st.site = &mj_emlrtRSI;
    c_st.site = &nj_emlrtRSI;
    if (j.size(0) != 1) {
      if (i.size(1) == 1) {
        emlrtErrorWithMessageIdR2018a(&c_st, &mb_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&c_st, &nb_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    y.set_size(&xj_emlrtRTEI, &b_st, 1, j.size(1));
    for (b_i = 0; b_i < loop_ub; b_i++) {
      y[b_i] = opts_area[static_cast<int32_T>(j[b_i]) - 1];
    }

    r.set_size(&ri_emlrtRTEI, &b_st, i.size(1), j.size(1));
    for (b_i = 0; b_i < loop_ub; b_i++) {
      for (b_k = 0; b_k < b; b_k++) {
        r[b_k + r.size(0) * b_i] = opts_wuse * y[b_i];
      }
    }

    if ((varargout_1.size(0) != i.size(1)) && ((varargout_1.size(0) != 1) &&
         (i.size(1) != 1))) {
      emlrtDimSizeImpxCheckR2021b(varargout_1.size(0), i.size(1), &tb_emlrtECI,
        &st);
    }

    if ((varargout_1.size(1) != j.size(1)) && ((varargout_1.size(1) != 1) &&
         (j.size(1) != 1))) {
      emlrtDimSizeImpxCheckR2021b(varargout_1.size(1), j.size(1), &sb_emlrtECI,
        &st);
    }

    if ((varargout_1.size(0) == r.size(0)) && (varargout_1.size(1) == r.size(1)))
    {
      b_loop_ub = varargout_1.size(0) * varargout_1.size(1);
      k = (b_loop_ub / 2) << 1;
      b_k = k - 2;
      for (b_i = 0; b_i <= b_k; b_i += 2) {
        __m128d r5;
        r1 = _mm_loadu_pd(&varargout_1[b_i]);
        r5 = _mm_loadu_pd(&r[b_i]);
        _mm_storeu_pd(&varargout_1[b_i], _mm_add_pd(r1, r5));
      }

      for (b_i = k; b_i < b_loop_ub; b_i++) {
        varargout_1[b_i] = varargout_1[b_i] + r[b_i];
      }
    } else {
      b_st.site = &mj_emlrtRSI;
      plus(b_st, varargout_1, r);
    }

    y.set_size(&si_emlrtRTEI, &st, 1, i.size(1));
    for (b_i = 0; b_i < b; b_i++) {
      y[b_i] = opts_area[static_cast<int32_T>(i[b_i]) - 1];
    }

    b_st.site = &yh_emlrtRSI;
    coder::b_sqrt(b_st, y);
    b_loop_ub = y.size(1);
    b_opts_contrast.set_size(&si_emlrtRTEI, &st, y.size(1));
    for (b_i = 0; b_i < b_loop_ub; b_i++) {
      b_opts_contrast[b_i] = y[b_i];
    }

    b_opts_area.set_size(&ti_emlrtRTEI, &st, varargout_1.size(0),
                         varargout_1.size(1));
    b_loop_ub = varargout_1.size(0) * varargout_1.size(1) - 1;
    for (b_i = 0; b_i <= b_loop_ub; b_i++) {
      b_opts_area[b_i] = varargout_1[b_i];
    }

    b_st.site = &yh_emlrtRSI;
    coder::bsxfun(b_st, b_opts_contrast, b_opts_area, varargout_1);
    iv[0] = (*(int32_T (*)[2])((coder::array<real_T, 2U> *)&j)->size())[0];
    iv[1] = (*(int32_T (*)[2])((coder::array<real_T, 2U> *)&j)->size())[1];
    b_st.site = &ai_emlrtRSI;
    coder::internal::b_indexShapeCheck(b_st, iv);
    M.set_size(&ui_emlrtRTEI, &st, 1, j.size(1));
    for (b_i = 0; b_i < loop_ub; b_i++) {
      M[b_i] = opts_area[static_cast<int32_T>(j[b_i]) - 1];
    }

    b_st.site = &ai_emlrtRSI;
    coder::c_sqrt(b_st, M);
    r.set_size(&vi_emlrtRTEI, &st, M.size(0), M.size(1));
    loop_ub = M.size(0) * M.size(1);
    k = (loop_ub / 2) << 1;
    b_k = k - 2;
    for (b_i = 0; b_i <= b_k; b_i += 2) {
      r1 = _mm_loadu_pd(&M[b_i]);
      _mm_storeu_pd(&r[b_i], _mm_div_pd(_mm_set1_pd(1.0), r1));
    }

    for (b_i = k; b_i < loop_ub; b_i++) {
      r[b_i] = 1.0 / M[b_i];
    }

    b_opts_area.set_size(&wi_emlrtRTEI, &st, varargout_1.size(0),
                         varargout_1.size(1));
    loop_ub = varargout_1.size(0) * varargout_1.size(1) - 1;
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      b_opts_area[b_i] = varargout_1[b_i];
    }

    b_st.site = &ai_emlrtRSI;
    coder::c_bsxfun(b_st, b_opts_area, r, varargout_1);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
  const coder::array<real_T, 2U> &in2, const coder::array<real_T, 1U> &in3,
  const coder::array<real_T, 2U> &in4)
{
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  if (in4.size(0) == 1) {
    loop_ub = in3.size(0);
  } else {
    loop_ub = in4.size(0);
  }

  in1.set_size(&yd_emlrtRTEI, &sp, loop_ub, in1.size(1));
  if (in4.size(1) == 1) {
    b_loop_ub = in2.size(1);
  } else {
    b_loop_ub = in4.size(1);
  }

  in1.set_size(&yd_emlrtRTEI, &sp, in1.size(0), b_loop_ub);
  stride_0_0 = (in3.size(0) != 1);
  stride_0_1 = (in2.size(1) != 1);
  stride_1_0 = (in4.size(0) != 1);
  stride_1_1 = (in4.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] = in2[(static_cast<int32_T>(in3[i1 * stride_0_0])
        + in2.size(0) * aux_0_1) - 1] - in4[i1 * stride_1_0 + in4.size(0) *
        aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

static void binary_expand_op_1(const emlrtStack &sp, coder::array<real_T, 2U>
  &in1, const coder::array<real_T, 2U> &in2, const coder::array<real_T, 1U> &in3,
  const coder::array<real_T, 2U> &in4)
{
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  if (in4.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in4.size(0);
  }

  in1.set_size(&ud_emlrtRTEI, &sp, loop_ub, in1.size(1));
  if (in4.size(1) == 1) {
    b_loop_ub = in3.size(0);
  } else {
    b_loop_ub = in4.size(1);
  }

  in1.set_size(&ud_emlrtRTEI, &sp, in1.size(0), b_loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_0_1 = (in3.size(0) != 1);
  stride_1_0 = (in4.size(0) != 1);
  stride_1_1 = (in4.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] = in2[i1 * stride_0_0 + in2.size(0) * (
        static_cast<int32_T>(in3[aux_0_1]) - 1)] - in4[i1 * stride_1_0 +
        in4.size(0) * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

static void c_srskelf_asym_new_anonFcn1(const emlrtStack &sp, const real_T x
  [24000], const real_T opts_area[8000], const real_T opts_nu[24000], const
  real_T opts_P[8000], const real_T opts_contrast[8000], real_T opts_wuse, const
  coder::sparse &opts_qcorr, const coder::array<real_T, 2U> &i, const coder::
  array<real_T, 2U> &j, coder::array<real_T, 2U> &varargout_1)
{
  coder::b_sparse d_x;
  coder::array<real_T, 2U> J;
  coder::array<real_T, 2U> M;
  coder::array<real_T, 2U> b_I;
  coder::array<real_T, 2U> b_opts_area;
  coder::array<real_T, 2U> b_opts_nu;
  coder::array<real_T, 2U> b_x;
  coder::array<real_T, 2U> c_x;
  coder::array<real_T, 2U> r;
  coder::array<real_T, 2U> r6;
  coder::array<real_T, 1U> b_opts_contrast;
  coder::array<real_T, 1U> c_I;
  coder::array<real_T, 1U> idx;
  coder::array<int32_T, 2U> E;
  coder::array<int32_T, 2U> iidx;
  coder::array<int32_T, 1U> ii;
  coder::array<int32_T, 1U> jj;
  coder::array<int32_T, 1U> r2;
  coder::array<int32_T, 1U> r3;
  coder::array<int32_T, 1U> r4;
  coder::array<boolean_T, 2U> b_idx;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T P[8000];
  st.prev = &sp;
  st.tls = sp.tls;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &qh_emlrtRSI;
  std::copy(&opts_P[0], &opts_P[8000], &P[0]);

  //  AFUN(I,J) computes entries of the matrix A to be factorized at the
  //  index sets I and J.  This handles the near-field correction.
  if ((i.size(1) == 0) || (j.size(1) == 0)) {
    int32_T loop_ub;
    varargout_1.set_size(&ji_emlrtRTEI, &st, i.size(1), j.size(1));
    loop_ub = i.size(1) * j.size(1);
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      varargout_1[b_i] = 0.0;
    }
  } else {
    __m128d r1;
    int32_T iv[2];
    int32_T iv1[2];
    int32_T b;
    int32_T b_b;
    int32_T b_k;
    int32_T k;
    int32_T loop_ub;
    int32_T loop_ub_tmp;
    b_st.site = &rh_emlrtRSI;
    b = i.size(1);
    b_b = j.size(1);
    b_I.set_size(&vh_emlrtRTEI, &b_st, i.size(1), j.size(1));
    c_st.site = &bi_emlrtRSI;
    d_st.site = &ci_emlrtRSI;
    if (j.size(1) > 2147483646) {
      e_st.site = &ge_emlrtRSI;
      coder::check_forloop_overflow_error(e_st);
    }

    for (k = 0; k < b_b; k++) {
      d_st.site = &di_emlrtRSI;
      e_st.site = &ci_emlrtRSI;
      if (b_I.size(0) > 2147483646) {
        f_st.site = &ge_emlrtRSI;
        coder::check_forloop_overflow_error(f_st);
      }

      for (b_k = 0; b_k < b; b_k++) {
        b_I[b_k + b_I.size(0) * k] = i[b_k];
      }
    }

    J.set_size(&vh_emlrtRTEI, &b_st, i.size(1), j.size(1));
    c_st.site = &bi_emlrtRSI;
    d_st.site = &ci_emlrtRSI;
    if (j.size(1) > 2147483646) {
      e_st.site = &ge_emlrtRSI;
      coder::check_forloop_overflow_error(e_st);
    }

    for (k = 0; k < b_b; k++) {
      d_st.site = &di_emlrtRSI;
      e_st.site = &ci_emlrtRSI;
      if (J.size(0) > 2147483646) {
        f_st.site = &ge_emlrtRSI;
        coder::check_forloop_overflow_error(f_st);
      }

      for (b_k = 0; b_k < b; b_k++) {
        J[b_k + J.size(0) * k] = j[k];
      }
    }

    b_x.set_size(&xh_emlrtRTEI, &st, 3, i.size(1));
    for (int32_T b_i{0}; b_i < b; b_i++) {
      b_k = static_cast<int32_T>(muDoubleScalarFloor(i[b_i]));
      if (i[b_i] != b_k) {
        emlrtIntegerCheckR2012b(i[b_i], &ub_emlrtDCI, &st);
      }

      k = static_cast<int32_T>(i[b_i]);
      if ((k < 1) || (k > 8000)) {
        emlrtDynamicBoundsCheckR2012b(k, 1, 8000, &if_emlrtBCI, &st);
      }

      k = 3 * (k - 1);
      b_x[3 * b_i] = x[k];
      if (i[b_i] != b_k) {
        emlrtIntegerCheckR2012b(i[b_i], &ub_emlrtDCI, &st);
      }

      b_x[3 * b_i + 1] = x[k + 1];
      if (i[b_i] != b_k) {
        emlrtIntegerCheckR2012b(i[b_i], &ub_emlrtDCI, &st);
      }

      b_x[3 * b_i + 2] = x[k + 2];
    }

    c_x.set_size(&yh_emlrtRTEI, &st, 3, j.size(1));
    for (int32_T b_i{0}; b_i < b_b; b_i++) {
      b_k = static_cast<int32_T>(muDoubleScalarFloor(j[b_i]));
      if (j[b_i] != b_k) {
        emlrtIntegerCheckR2012b(j[b_i], &xb_emlrtDCI, &st);
      }

      k = static_cast<int32_T>(j[b_i]);
      if ((k < 1) || (k > 8000)) {
        emlrtDynamicBoundsCheckR2012b(k, 1, 8000, &yf_emlrtBCI, &st);
      }

      k = 3 * (k - 1);
      c_x[3 * b_i] = x[k];
      if (j[b_i] != b_k) {
        emlrtIntegerCheckR2012b(j[b_i], &xb_emlrtDCI, &st);
      }

      c_x[3 * b_i + 1] = x[k + 1];
      if (j[b_i] != b_k) {
        emlrtIntegerCheckR2012b(j[b_i], &xb_emlrtDCI, &st);
      }

      c_x[3 * b_i + 2] = x[k + 2];
    }

    b_opts_nu.set_size(&ai_emlrtRTEI, &st, 3, i.size(1));
    for (int32_T b_i{0}; b_i < b; b_i++) {
      k = 3 * (static_cast<int32_T>(i[b_i]) - 1);
      b_opts_nu[3 * b_i] = opts_nu[k];
      b_opts_nu[3 * b_i + 1] = opts_nu[k + 1];
      b_opts_nu[3 * b_i + 2] = opts_nu[k + 2];
    }

    b_st.site = &sh_emlrtRSI;
    lap_neumann_kernel(b_st, b_x, c_x, b_opts_nu, r);
    b_opts_area.set_size(&bi_emlrtRTEI, &st, 1, j.size(1));
    for (int32_T b_i{0}; b_i < b_b; b_i++) {
      b_opts_area[b_i] = opts_area[static_cast<int32_T>(j[b_i]) - 1];
    }

    b_st.site = &sh_emlrtRSI;
    coder::b_bsxfun(b_st, r, b_opts_area, M);
    b_opts_contrast.set_size(&ci_emlrtRTEI, &st, i.size(1));
    for (int32_T b_i{0}; b_i < b; b_i++) {
      b_opts_contrast[b_i] = opts_contrast[static_cast<int32_T>(i[b_i]) - 1];
    }

    r.set_size(&di_emlrtRTEI, &st, M.size(0), M.size(1));
    loop_ub = M.size(0) * M.size(1);
    k = (loop_ub / 2) << 1;
    b_k = k - 2;
    for (int32_T b_i{0}; b_i <= b_k; b_i += 2) {
      r1 = _mm_loadu_pd(&M[b_i]);
      _mm_storeu_pd(&r[b_i], _mm_mul_pd(_mm_set1_pd(2.0), r1));
    }

    for (int32_T b_i{k}; b_i < loop_ub; b_i++) {
      r[b_i] = 2.0 * M[b_i];
    }

    b_st.site = &th_emlrtRSI;
    coder::bsxfun(b_st, b_opts_contrast, r, varargout_1);
    b_st.site = &uh_emlrtRSI;

    //  SPGET_quadcorr(I,J,P,S) computes entries of a sparse matrix of near-field
    //  corrections that should be added to the kernel matrix, as used in
    //  AFUN. P is the permutation required for extracting near
    //  quadrature correction and is only used as a temporary array,
    //  and S stores the sparse matrix corresponding
    //  to the quadrature correction
    c_st.site = &ji_emlrtRSI;
    b_opts_area.set_size(&ei_emlrtRTEI, &c_st, 1, i.size(1));
    for (int32_T b_i{0}; b_i < b; b_i++) {
      b_opts_area[b_i] = i[b_i];
    }

    d_st.site = &mi_emlrtRSI;
    coder::internal::b_sort(d_st, b_opts_area, iidx);
    loop_ub = iidx.size(1);
    E.set_size(&fi_emlrtRTEI, &c_st, 1, iidx.size(1));
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      E[b_i] = iidx[b_i];
    }

    k = b_opts_area.size(1);
    iidx.set_size(&gi_emlrtRTEI, &b_st, 1, b_opts_area.size(1));
    for (int32_T b_i{0}; b_i < k; b_i++) {
      if (b_opts_area[b_i] != static_cast<int32_T>(muDoubleScalarFloor
           (b_opts_area[b_i]))) {
        emlrtIntegerCheckR2012b(b_opts_area[b_i], &vb_emlrtDCI, &b_st);
      }

      b_k = static_cast<int32_T>(b_opts_area[b_i]);
      if ((b_k < 1) || (b_k > 8000)) {
        emlrtDynamicBoundsCheckR2012b(b_k, 1, 8000, &jf_emlrtBCI, &b_st);
      }

      iidx[b_i] = b_k;
    }

    if (iidx.size(1) != loop_ub) {
      emlrtSubAssignSizeCheck1dR2017a(iidx.size(1), loop_ub, &rb_emlrtECI, &b_st);
    }

    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      P[iidx[b_i] - 1] = E[b_i];
    }

    M.set_size(&hi_emlrtRTEI, &b_st, i.size(1), j.size(1));
    loop_ub_tmp = i.size(1) * j.size(1);
    for (int32_T b_i{0}; b_i < loop_ub_tmp; b_i++) {
      M[b_i] = 0.0;
    }

    c_st.site = &ki_emlrtRSI;
    d_st.site = &ki_emlrtRSI;
    opts_qcorr.parenReference(d_st, j, d_x);
    d_st.site = &cj_emlrtRSI;
    coder::b_eml_find(d_st, d_x, ii, jj, b_opts_contrast);
    loop_ub = ii.size(0);
    c_I.set_size(&wj_emlrtRTEI, &c_st, ii.size(0));
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      c_I[b_i] = ii[b_i];
    }

    c_st.site = &li_emlrtRSI;
    find_locations_t(c_st, b_opts_area, c_I, idx);

    //  Replace ismembc with custom function
    //  Filter out invalid indices
    b_k = idx.size(0) - 1;
    k = 0;
    for (loop_ub = 0; loop_ub <= b_k; loop_ub++) {
      if ((idx[loop_ub] > 0.0) && (idx[loop_ub] <= b_opts_area.size(1))) {
        k++;
      }
    }

    r2.set_size(&ji_emlrtRTEI, &b_st, k);
    k = 0;
    for (loop_ub = 0; loop_ub <= b_k; loop_ub++) {
      if ((idx[loop_ub] > 0.0) && (idx[loop_ub] <= b_opts_area.size(1))) {
        r2[k] = loop_ub;
        k++;
      }
    }

    loop_ub = r2.size(0);
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (r2[b_i] > c_I.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(r2[b_i], 0, c_I.size(0) - 1, &of_emlrtBCI,
          &b_st);
      }
    }

    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (r2[b_i] > jj.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(r2[b_i], 0, jj.size(0) - 1, &pf_emlrtBCI,
          &b_st);
      }
    }

    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (r2[b_i] > b_opts_contrast.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(r2[b_i], 0, b_opts_contrast.size(0) - 1,
          &qf_emlrtBCI, &b_st);
      }
    }

    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      b_k = static_cast<int32_T>(c_I[r2[b_i]]);
      if ((b_k < 1) || (b_k > 8000)) {
        emlrtDynamicBoundsCheckR2012b(b_k, 1, 8000, &rf_emlrtBCI, &b_st);
      }
    }

    idx.set_size(&ki_emlrtRTEI, &b_st, r2.size(0));
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      idx[b_i] = (static_cast<real_T>(jj[r2[b_i]]) - 1.0) * static_cast<real_T>
        (i.size(1));
    }

    if (r2.size(0) == idx.size(0)) {
      ii.set_size(&li_emlrtRTEI, &b_st, r2.size(0));
      for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
        real_T d;
        d = P[static_cast<int32_T>(c_I[r2[b_i]]) - 1] + idx[b_i];
        if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
          emlrtIntegerCheckR2012b(d, &wb_emlrtDCI, &b_st);
        }

        if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) >
             loop_ub_tmp)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, loop_ub_tmp,
            &sf_emlrtBCI, &b_st);
        }

        ii[b_i] = static_cast<int32_T>(d);
      }
    } else {
      c_st.site = &sr_emlrtRSI;
      binary_expand_op_21(c_st, ii, P, c_I, r2, idx, i, j);
    }

    loop_ub = r2.size(0);
    if (ii.size(0) != r2.size(0)) {
      emlrtSubAssignSizeCheck1dR2017a(ii.size(0), r2.size(0), &qb_emlrtECI,
        &b_st);
    }

    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      M[ii[b_i] - 1] = b_opts_contrast[r2[b_i]];
    }

    k = (loop_ub_tmp / 2) << 1;
    b_k = k - 2;
    for (int32_T b_i{0}; b_i <= b_k; b_i += 2) {
      r1 = _mm_loadu_pd(&M[b_i]);
      _mm_storeu_pd(&M[b_i], _mm_mul_pd(_mm_set1_pd(-2.0), r1));
    }

    for (int32_T b_i{k}; b_i < loop_ub_tmp; b_i++) {
      M[b_i] = -2.0 * M[b_i];
    }

    b_st.site = &vh_emlrtRSI;
    coder::c_abs(b_st, M, r);
    b_idx.set_size(&mi_emlrtRTEI, &st, r.size(0), r.size(1));
    loop_ub = r.size(0) * r.size(1);
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      b_idx[b_i] = (r[b_i] != 0.0);
    }

    iv[0] = (*(int32_T (*)[2])varargout_1.size())[0];
    iv[1] = (*(int32_T (*)[2])varargout_1.size())[1];
    iv1[0] = (*(int32_T (*)[2])b_idx.size())[0];
    iv1[1] = (*(int32_T (*)[2])b_idx.size())[1];
    b_st.site = &wh_emlrtRSI;
    coder::internal::b_indexShapeCheck(b_st, iv, iv1);
    iv[0] = (*(int32_T (*)[2])M.size())[0];
    iv[1] = (*(int32_T (*)[2])M.size())[1];
    iv1[0] = (*(int32_T (*)[2])b_idx.size())[0];
    iv1[1] = (*(int32_T (*)[2])b_idx.size())[1];
    b_st.site = &wh_emlrtRSI;
    coder::internal::b_indexShapeCheck(b_st, iv, iv1);
    b_k = loop_ub - 1;
    k = 0;
    for (loop_ub = 0; loop_ub <= b_k; loop_ub++) {
      if (b_idx[loop_ub]) {
        k++;
      }
    }

    r3.set_size(&ji_emlrtRTEI, &st, k);
    k = 0;
    for (loop_ub = 0; loop_ub <= b_k; loop_ub++) {
      if (b_idx[loop_ub]) {
        r3[k] = loop_ub;
        k++;
      }
    }

    k = varargout_1.size(0) * varargout_1.size(1);
    loop_ub = r3.size(0);
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (r3[b_i] > k - 1) {
        emlrtDynamicBoundsCheckR2012b(r3[b_i], 0, k - 1, &tf_emlrtBCI, &st);
      }
    }

    b_k = M.size(0) * M.size(1);
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (r3[b_i] > b_k - 1) {
        emlrtDynamicBoundsCheckR2012b(r3[b_i], 0, b_k - 1, &uf_emlrtBCI, &st);
      }
    }

    b_opts_contrast.set_size(&ni_emlrtRTEI, &st, r3.size(0));
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      b_opts_contrast[b_i] = varargout_1[r3[b_i]] + M[r3[b_i]];
    }

    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (r3[b_i] > k - 1) {
        emlrtDynamicBoundsCheckR2012b(r3[b_i], 0, k - 1, &vf_emlrtBCI, &st);
      }

      varargout_1[r3[b_i]] = b_opts_contrast[b_i];
    }

    if ((b_I.size(0) == J.size(0)) && (b_I.size(1) == J.size(1))) {
      b_idx.set_size(&oi_emlrtRTEI, &st, i.size(1), j.size(1));
      for (int32_T b_i{0}; b_i < loop_ub_tmp; b_i++) {
        b_idx[b_i] = (b_I[b_i] == J[b_i]);
      }
    } else {
      b_st.site = &xh_emlrtRSI;
      eq(b_st, b_idx, b_I, J);
    }

    iv[0] = (*(int32_T (*)[2])varargout_1.size())[0];
    iv[1] = (*(int32_T (*)[2])varargout_1.size())[1];
    iv1[0] = (*(int32_T (*)[2])b_idx.size())[0];
    iv1[1] = (*(int32_T (*)[2])b_idx.size())[1];
    b_st.site = &xh_emlrtRSI;
    coder::internal::b_indexShapeCheck(b_st, iv, iv1);
    if ((b_I.size(0) != J.size(0)) && ((b_I.size(0) != 1) && (J.size(0) != 1)))
    {
      emlrtDimSizeImpxCheckR2021b(b_I.size(0), J.size(0), &vb_emlrtECI, &st);
    }

    if ((b_I.size(1) != J.size(1)) && ((b_I.size(1) != 1) && (J.size(1) != 1)))
    {
      emlrtDimSizeImpxCheckR2021b(b_I.size(1), J.size(1), &ub_emlrtECI, &st);
    }

    b_k = b_idx.size(0) * b_idx.size(1) - 1;
    k = 0;
    for (loop_ub = 0; loop_ub <= b_k; loop_ub++) {
      if (b_idx[loop_ub]) {
        k++;
      }
    }

    r4.set_size(&ji_emlrtRTEI, &st, k);
    k = 0;
    for (loop_ub = 0; loop_ub <= b_k; loop_ub++) {
      if (b_idx[loop_ub]) {
        r4[k] = loop_ub;
        k++;
      }
    }

    k = varargout_1.size(0) * varargout_1.size(1);
    loop_ub_tmp = r4.size(0);
    for (int32_T b_i{0}; b_i < loop_ub_tmp; b_i++) {
      if (r4[b_i] > k - 1) {
        emlrtDynamicBoundsCheckR2012b(r4[b_i], 0, k - 1, &wf_emlrtBCI, &st);
      }
    }

    b_opts_contrast.set_size(&pi_emlrtRTEI, &st, r4.size(0));
    for (int32_T b_i{0}; b_i < loop_ub_tmp; b_i++) {
      b_opts_contrast[b_i] = varargout_1[r4[b_i]] + 1.0;
    }

    for (int32_T b_i{0}; b_i < loop_ub_tmp; b_i++) {
      if (r4[b_i] > k - 1) {
        emlrtDynamicBoundsCheckR2012b(r4[b_i], 0, k - 1, &xf_emlrtBCI, &st);
      }

      varargout_1[r4[b_i]] = b_opts_contrast[b_i];
    }

    b_opts_area.set_size(&qi_emlrtRTEI, &st, 1, j.size(1));
    for (int32_T b_i{0}; b_i < b_b; b_i++) {
      b_opts_area[b_i] = opts_area[static_cast<int32_T>(j[b_i]) - 1];
    }

    r.set_size(&ri_emlrtRTEI, &st, i.size(1), j.size(1));
    for (int32_T b_i{0}; b_i < b_b; b_i++) {
      for (b_k = 0; b_k < b; b_k++) {
        r[b_k + r.size(0) * b_i] = opts_wuse * b_opts_area[b_i];
      }
    }

    if ((varargout_1.size(0) != i.size(1)) && ((varargout_1.size(0) != 1) &&
         (i.size(1) != 1))) {
      emlrtDimSizeImpxCheckR2021b(varargout_1.size(0), i.size(1), &tb_emlrtECI,
        &st);
    }

    if ((varargout_1.size(1) != j.size(1)) && ((varargout_1.size(1) != 1) &&
         (j.size(1) != 1))) {
      emlrtDimSizeImpxCheckR2021b(varargout_1.size(1), j.size(1), &sb_emlrtECI,
        &st);
    }

    if ((varargout_1.size(0) == r.size(0)) && (varargout_1.size(1) == r.size(1)))
    {
      loop_ub = varargout_1.size(0) * varargout_1.size(1);
      k = (loop_ub / 2) << 1;
      b_k = k - 2;
      for (int32_T b_i{0}; b_i <= b_k; b_i += 2) {
        __m128d r5;
        r1 = _mm_loadu_pd(&varargout_1[b_i]);
        r5 = _mm_loadu_pd(&r[b_i]);
        _mm_storeu_pd(&varargout_1[b_i], _mm_add_pd(r1, r5));
      }

      for (int32_T b_i{k}; b_i < loop_ub; b_i++) {
        varargout_1[b_i] = varargout_1[b_i] + r[b_i];
      }
    } else {
      b_st.site = &mj_emlrtRSI;
      plus(b_st, varargout_1, r);
    }

    b_opts_area.set_size(&si_emlrtRTEI, &st, 1, i.size(1));
    for (int32_T b_i{0}; b_i < b; b_i++) {
      b_opts_area[b_i] = opts_area[static_cast<int32_T>(i[b_i]) - 1];
    }

    b_st.site = &yh_emlrtRSI;
    coder::b_sqrt(b_st, b_opts_area);
    loop_ub = b_opts_area.size(1);
    b_opts_contrast.set_size(&si_emlrtRTEI, &st, b_opts_area.size(1));
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      b_opts_contrast[b_i] = b_opts_area[b_i];
    }

    b_I.set_size(&ti_emlrtRTEI, &st, varargout_1.size(0), varargout_1.size(1));
    loop_ub = varargout_1.size(0) * varargout_1.size(1) - 1;
    for (int32_T b_i{0}; b_i <= loop_ub; b_i++) {
      b_I[b_i] = varargout_1[b_i];
    }

    b_st.site = &yh_emlrtRSI;
    coder::bsxfun(b_st, b_opts_contrast, b_I, varargout_1);
    b_opts_area.set_size(&ui_emlrtRTEI, &st, 1, j.size(1));
    for (int32_T b_i{0}; b_i < b_b; b_i++) {
      b_opts_area[b_i] = opts_area[static_cast<int32_T>(j[b_i]) - 1];
    }

    b_st.site = &ai_emlrtRSI;
    coder::b_sqrt(b_st, b_opts_area);
    loop_ub = b_opts_area.size(1);
    r6.set_size(&vi_emlrtRTEI, &st, 1, b_opts_area.size(1));
    k = (b_opts_area.size(1) / 2) << 1;
    b_k = k - 2;
    for (int32_T b_i{0}; b_i <= b_k; b_i += 2) {
      r1 = _mm_loadu_pd(&b_opts_area[b_i]);
      _mm_storeu_pd(&r6[b_i], _mm_div_pd(_mm_set1_pd(1.0), r1));
    }

    for (int32_T b_i{k}; b_i < loop_ub; b_i++) {
      r6[b_i] = 1.0 / b_opts_area[b_i];
    }

    b_I.set_size(&wi_emlrtRTEI, &st, varargout_1.size(0), varargout_1.size(1));
    loop_ub = varargout_1.size(0) * varargout_1.size(1) - 1;
    for (int32_T b_i{0}; b_i <= loop_ub; b_i++) {
      b_I[b_i] = varargout_1[b_i];
    }

    b_st.site = &ai_emlrtRSI;
    coder::b_bsxfun(b_st, b_I, r6, varargout_1);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static real_T cast(const emlrtStack &sp, const coder::array<c_struct_T, 1U>
                   &t0_nodes, const coder::array<real_T, 2U> &t0_lvp, real_T
                   t0_nlvl, real_T t0_lrt, coder::array<struct_T, 1U> &t1_nodes,
                   coder::array<real_T, 2U> &t1_lvp, real_T &t1_lrt)
{
  real_T t1_nlvl;
  int32_T i;
  int32_T loop_ub_tmp;
  i = t0_nodes.size(0);
  t1_nodes.set_size(&xf_emlrtRTEI, &sp, t0_nodes.size(0));
  for (int32_T i1{0}; i1 < i; i1++) {
    t1_nodes[i1].ctr[0] = t0_nodes[i1].ctr[0];
    t1_nodes[i1].ctr[1] = t0_nodes[i1].ctr[1];
    t1_nodes[i1].ctr[2] = t0_nodes[i1].ctr[2];
    loop_ub_tmp = t0_nodes[i1].xi.size[1];
    t1_nodes[i1].xi.set_size(&xf_emlrtRTEI, &sp, 1, loop_ub_tmp);
    for (int32_T i2{0}; i2 < loop_ub_tmp; i2++) {
      t1_nodes[i1].xi[i2] = t0_nodes[i1].xi.data[i2];
    }

    t1_nodes[i1].prnt = t0_nodes[i1].prnt;
    loop_ub_tmp = t0_nodes[i1].chld.size(1);
    t1_nodes[i1].chld.set_size(&xf_emlrtRTEI, &sp, 1, loop_ub_tmp);
    for (int32_T i2{0}; i2 < loop_ub_tmp; i2++) {
      t1_nodes[i1].chld[i2] = t0_nodes[i1].chld[i2];
    }

    loop_ub_tmp = t0_nodes[i1].nbor.size(1);
    t1_nodes[i1].nbor.set_size(&xf_emlrtRTEI, &sp, 1, loop_ub_tmp);
    for (int32_T i2{0}; i2 < loop_ub_tmp; i2++) {
      t1_nodes[i1].nbor[i2] = t0_nodes[i1].nbor[i2];
    }

    loop_ub_tmp = t0_nodes[i1].ilist.size(1);
    t1_nodes[i1].ilist.set_size(&xf_emlrtRTEI, &sp, 1, loop_ub_tmp);
    for (int32_T i2{0}; i2 < loop_ub_tmp; i2++) {
      t1_nodes[i1].ilist[i2] = t0_nodes[i1].ilist[i2];
    }

    loop_ub_tmp = t0_nodes[i1].snbor.size(1);
    t1_nodes[i1].snbor.set_size(&xf_emlrtRTEI, &sp, 1, loop_ub_tmp);
    for (int32_T i2{0}; i2 < loop_ub_tmp; i2++) {
      t1_nodes[i1].snbor[i2] = t0_nodes[i1].snbor[i2];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }

  loop_ub_tmp = t0_lvp.size(1);
  t1_lvp.set_size(&xf_emlrtRTEI, &sp, 1, t0_lvp.size(1));
  for (i = 0; i < loop_ub_tmp; i++) {
    t1_lvp[i] = t0_lvp[i];
  }

  t1_nlvl = t0_nlvl;
  t1_lrt = t0_lrt;
  return t1_nlvl;
}

static void disp(const emlrtStack &sp, const mxArray *m, emlrtMCInfo &location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtConstCTX)&sp, 0, nullptr, 1, &pArray, "disp", true,
                        &location);
}

static const mxArray *emlrt_marshallOut(const emlrtStack &sp)
{
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateString1R2022a((emlrtCTX)&sp, '-');
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const int32_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *static_cast<int32_T *>(emlrtMxGetData(m)) = u;
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack &sp, const char_T u[43])
{
  static const int32_T iv[2]{ 1, 43 };

  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 43, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *feval(const emlrtStack &sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, const mxArray *m4, const mxArray *m5,
  emlrtMCInfo &location)
{
  const mxArray *pArrays[5];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  pArrays[4] = m5;
  return emlrtCallMATLABR2012b((emlrtConstCTX)&sp, 1, &m, 5, &pArrays[0],
    "feval", true, &location);
}

static const mxArray *feval(const emlrtStack &sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, const mxArray *m4, const mxArray *m5, const
  mxArray *m6, const mxArray *m7, const mxArray *m8, const mxArray *m9, const
  mxArray *m10, emlrtMCInfo &location)
{
  const mxArray *pArrays[10];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  pArrays[4] = m5;
  pArrays[5] = m6;
  pArrays[6] = m7;
  pArrays[7] = m8;
  pArrays[8] = m9;
  pArrays[9] = m10;
  return emlrtCallMATLABR2012b((emlrtConstCTX)&sp, 1, &m, 10, &pArrays[0],
    "feval", true, &location);
}

static const mxArray *g_emlrt_marshallOut(const emlrtStack &sp, const char_T u[7])
{
  static const int32_T iv[2]{ 1, 7 };

  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void get_update_list(const emlrtStack *sp, real_T node_idx, coder::array<
  boolean_T, 1U> &update_list, const coder::array<struct_T, 1U> &nodes)
{
  coder::array<int32_T, 2U> r;
  emlrtStack st;
  int32_T b_update_list;
  int32_T i;
  int32_T loop_ub;
  boolean_T b;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (*emlrtBreakCheckR2012bFlagVar != 0) {
    emlrtBreakCheckR2012b((emlrtConstCTX)sp);
  }

  //  GET_UPDATE_LIST(NODE_IDX) Recursively get the list of all nodes in
  //  the tree that could have generated Schur complement updates to
  //  points in node NODE_IDX
  i = update_list.size(0);
  if (node_idx != static_cast<int32_T>(muDoubleScalarFloor(node_idx))) {
    emlrtIntegerCheckR2012b(node_idx, &ic_emlrtDCI, (emlrtConstCTX)sp);
  }

  if ((static_cast<int32_T>(node_idx) < 1) || (static_cast<int32_T>(node_idx) >
       i)) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(node_idx), 1, i,
      &oq_emlrtBCI, (emlrtConstCTX)sp);
  }

  update_list[static_cast<int32_T>(node_idx) - 1] = true;
  b = ((static_cast<int32_T>(node_idx) < 1) || (static_cast<int32_T>(node_idx) >
        nodes.size(0)));
  if (b) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(node_idx), 1, nodes.size
      (0), &nq_emlrtBCI, (emlrtConstCTX)sp);
  }

  loop_ub = nodes[static_cast<int32_T>(node_idx) - 1].snbor.size(1);
  r.set_size(&qo_emlrtRTEI, sp, 1, loop_ub);
  if ((static_cast<int32_T>(node_idx) < 1) || (static_cast<int32_T>(node_idx) >
       nodes.size(0))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(node_idx), 1, nodes.size
      (0), &nq_emlrtBCI, (emlrtConstCTX)sp);
  }

  b_update_list = update_list.size(0);
  for (i = 0; i < loop_ub; i++) {
    real_T d;
    d = nodes[static_cast<int32_T>(node_idx) - 1].snbor[i];
    if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
      emlrtIntegerCheckR2012b(d, &jc_emlrtDCI, (emlrtConstCTX)sp);
    }

    if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) >
         b_update_list)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, b_update_list,
        &pq_emlrtBCI, (emlrtConstCTX)sp);
    }

    r[i] = static_cast<int32_T>(d);
  }

  loop_ub = r.size(1);
  for (i = 0; i < loop_ub; i++) {
    update_list[r[i] - 1] = true;
  }

  i = nodes[static_cast<int32_T>(node_idx) - 1].chld.size(1);
  for (loop_ub = 0; loop_ub < i; loop_ub++) {
    if (loop_ub + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, i, &qq_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    st.site = &uj_emlrtRSI;
    get_update_list(&st, nodes[static_cast<int32_T>(node_idx) - 1].chld[loop_ub],
                    update_list, nodes);

    //  Pass nodes to the recursive function
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static const mxArray *h_emlrt_marshallOut(const emlrtStack &sp, const char_T u
  [82])
{
  static const int32_T iv[2]{ 1, 82 };

  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 82, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *i_emlrt_marshallOut(const emlrtStack &sp, const char_T u
  [46])
{
  static const int32_T iv[2]{ 1, 46 };

  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 46, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *j_emlrt_marshallOut(const emlrtStack &sp, const char_T u[3])
{
  static const int32_T iv[2]{ 1, 3 };

  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 3, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *k_emlrt_marshallOut(const emlrtStack &sp, const char_T u[4])
{
  static const int32_T iv[2]{ 1, 4 };

  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 4, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *l_emlrt_marshallOut(const emlrtStack &sp, const char_T u[6])
{
  static const int32_T iv[2]{ 1, 6 };

  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 6, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *m_emlrt_marshallOut(const emlrtStack &sp, const char_T u[8])
{
  static const int32_T iv[2]{ 1, 8 };

  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 8, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *n_emlrt_marshallOut(const emlrtStack &sp, const char_T u
  [18])
{
  static const int32_T iv[2]{ 1, 18 };

  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 18, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *p_emlrt_marshallOut(const emlrtStack &sp, const char_T u
  [52])
{
  static const int32_T iv[2]{ 1, 52 };

  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 52, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void spget(const emlrtStack &sp, const coder::f_captured_var &slf, const
                  coder::c_captured_var &nslf, const coder::c_captured_var &nbox,
                  const coder::b_captured_var &t, const coder::c_captured_var &i,
                  const coder::e_captured_var &lookup_list, const coder::
                  captured_var &opts, coder::array<real_T, 2U> &A)
{
  coder::array<real_T, 2U> r;
  coder::array<int32_T, 1U> ii;
  coder::array<boolean_T, 1U> update_list;
  emlrtStack b_st;
  emlrtStack st;
  real_T m__tmp;
  int32_T I__size_idx_1;
  int32_T b_i;
  int32_T b_lookup_list;
  int32_T c_i;
  int32_T loop_ub;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);

  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  //  A = SPGET(ITYP,JTYP) Sparse matrix access function (native MATLAB is
  //  slow for large matrices).  We grab the accumulated Schur complement
  //  updates to a block of the matrix from previously-skeletonized
  //  levels.  Index sets ITYP and JTYP can be 'slf', 'nbr', or 'lst'.
  //  Translate input strings to index sets (and their lengths)
  I__size_idx_1 = slf.contents.size(1);
  m__tmp = nslf.contents;
  if (!(m__tmp >= 0.0)) {
    emlrtNonNegativeCheckR2012b(m__tmp, &dc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  b_i = static_cast<int32_T>(muDoubleScalarFloor(m__tmp));
  if (m__tmp != b_i) {
    emlrtIntegerCheckR2012b(m__tmp, &cc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  A.set_size(&ak_emlrtRTEI, &sp, static_cast<int32_T>(m__tmp), static_cast<
             int32_T>(m__tmp));
  if (m__tmp != b_i) {
    emlrtIntegerCheckR2012b(m__tmp, &gc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  loop_ub = static_cast<int32_T>(m__tmp) * static_cast<int32_T>(m__tmp);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    A[b_i] = 0.0;
  }

  if (!(nbox.contents >= 0.0)) {
    emlrtNonNegativeCheckR2012b(nbox.contents, &ac_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (nbox.contents != static_cast<int32_T>(muDoubleScalarFloor(nbox.contents)))
  {
    emlrtIntegerCheckR2012b(nbox.contents, &bc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  //  Local copy of t.nodes to avoid outer variable usage in recursive function
  loop_ub = static_cast<int32_T>(nbox.contents);
  update_list.set_size(&bk_emlrtRTEI, &sp, loop_ub);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    update_list[b_i] = false;
  }

  st.site = &oj_emlrtRSI;
  get_update_list(&st, i.contents, update_list, t.contents.nodes);

  //  Pass nodes to the recursive function
  st.site = &pj_emlrtRSI;
  b_st.site = &ve_emlrtRSI;
  coder::c_eml_find(b_st, update_list, ii);
  loop_ub = ii.size(0);
  r.set_size(&ck_emlrtRTEI, &sp, 1, ii.size(0));
  for (b_i = 0; b_i < loop_ub; b_i++) {
    r[b_i] = ii[b_i];
  }

  int32_T iv[2];
  st.site = &pj_emlrtRSI;
  coder::flip(r);
  iv[0] = (*(int32_T (*)[2])r.size())[0];
  iv[1] = (*(int32_T (*)[2])r.size())[1];
  st.site = &pj_emlrtRSI;
  coder::internal::indexShapeCheck(st, lookup_list.contents.size(0), iv);
  b_lookup_list = lookup_list.contents.size(0);
  loop_ub = r.size(1);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    c_i = static_cast<int32_T>(r[b_i]);
    if ((c_i < 1) || (c_i > b_lookup_list)) {
      emlrtDynamicBoundsCheckR2012b(c_i, 1, b_lookup_list, &eg_emlrtBCI,
        (emlrtConstCTX)&sp);
    }
  }

  loop_ub = r.size(1) - 1;
  for (c_i = 0; c_i <= loop_ub; c_i++) {
    if ((lookup_list.contents[static_cast<int32_T>(r[c_i]) - 1] != 0) && (c_i >
         loop_ub)) {
      emlrtDynamicBoundsCheckR2012b(c_i, 0, loop_ub, &dg_emlrtBCI,
        (emlrtConstCTX)&sp);
    }
  }

  b_lookup_list = 0;
  for (c_i = 0; c_i <= loop_ub; c_i++) {
    if (lookup_list.contents[static_cast<int32_T>(r[c_i]) - 1] != 0) {
      b_lookup_list++;
    }
  }

  for (loop_ub = 0; loop_ub < b_lookup_list; loop_ub++) {
    //  Use an explicit index for the loop
    if (loop_ub + 1 > b_lookup_list) {
      emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, b_lookup_list, &bg_emlrtBCI,
        (emlrtConstCTX)&sp);
    }

    //  Use a temporary variable for the entire struct
    //  For diagonal block
    st.site = &gq_emlrtRSI;

    //  Helper function to replace ismembc2
    //  Initialize an empty array to store the locations
    //  Iterate over each element to find
    for (c_i = 0; c_i < I__size_idx_1; c_i++) {
      if (c_i + 1 > I__size_idx_1) {
        emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, I__size_idx_1, &cg_emlrtBCI,
          &st);
      }

      //  Use the local function binary_search to find the location of the element
      //  If the element is found (location is not -1), add it to the locs array
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }

    //  Replace ismembc2 with find_locations_t
    //  Convert to double to ensure consistent types
    //  Ensure tmp2 is consistent in size
    //  Different factorization depending on symmetry
    st.site = &hq_emlrtRSI;
    if (!coder::internal::b_strcmp(st, opts.contents.symm)) {
      st.site = &iq_emlrtRSI;
      coder::internal::c_strcmp(st, opts.contents.symm);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void spget(const emlrtStack &sp, const coder::f_captured_var &slf, const
                  coder::c_captured_var &nslf, const coder::f_captured_var &lst,
                  const coder::c_captured_var &nlst, const coder::c_captured_var
                  &nbox, const coder::b_captured_var &t, const coder::
                  c_captured_var &i, const coder::e_captured_var &lookup_list,
                  const coder::captured_var &opts, coder::array<real_T, 2U> &A)
{
  coder::array<real_T, 2U> r;
  coder::array<int32_T, 1U> ii;
  coder::array<boolean_T, 1U> update_list;
  emlrtStack b_st;
  emlrtStack st;
  real_T d;
  real_T d1;
  real_T m_;
  real_T n_;
  int32_T I__size_idx_0;
  int32_T I__size_idx_1;
  int32_T J__size_idx_1;
  int32_T b_i;
  int32_T b_lookup_list;
  int32_T c_i;
  int32_T i1;
  int32_T loop_ub;
  int32_T n;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);

  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  //  A = SPGET(ITYP,JTYP) Sparse matrix access function (native MATLAB is
  //  slow for large matrices).  We grab the accumulated Schur complement
  //  updates to a block of the matrix from previously-skeletonized
  //  levels.  Index sets ITYP and JTYP can be 'slf', 'nbr', or 'lst'.
  //  Translate input strings to index sets (and their lengths)
  m_ = nlst.contents;
  I__size_idx_0 = lst.contents.size(0);
  I__size_idx_1 = lst.contents.size(1);
  J__size_idx_1 = slf.contents.size(1);
  n_ = nslf.contents;
  if (!(m_ >= 0.0)) {
    emlrtNonNegativeCheckR2012b(m_, &dc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  d = static_cast<int32_T>(muDoubleScalarFloor(m_));
  if (m_ != d) {
    emlrtIntegerCheckR2012b(m_, &cc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (!(n_ >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n_, &fc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  d1 = static_cast<int32_T>(muDoubleScalarFloor(n_));
  if (n_ != d1) {
    emlrtIntegerCheckR2012b(n_, &ec_emlrtDCI, (emlrtConstCTX)&sp);
  }

  A.set_size(&ak_emlrtRTEI, &sp, static_cast<int32_T>(m_), static_cast<int32_T>
             (n_));
  if (m_ != d) {
    emlrtIntegerCheckR2012b(m_, &gc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (n_ != d1) {
    emlrtIntegerCheckR2012b(n_, &gc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  loop_ub = static_cast<int32_T>(m_) * static_cast<int32_T>(n_);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    A[b_i] = 0.0;
  }

  if (!(nbox.contents >= 0.0)) {
    emlrtNonNegativeCheckR2012b(nbox.contents, &ac_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (nbox.contents != static_cast<int32_T>(muDoubleScalarFloor(nbox.contents)))
  {
    emlrtIntegerCheckR2012b(nbox.contents, &bc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  //  Local copy of t.nodes to avoid outer variable usage in recursive function
  loop_ub = static_cast<int32_T>(nbox.contents);
  update_list.set_size(&bk_emlrtRTEI, &sp, loop_ub);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    update_list[b_i] = false;
  }

  st.site = &oj_emlrtRSI;
  get_update_list(&st, i.contents, update_list, t.contents.nodes);

  //  Pass nodes to the recursive function
  st.site = &pj_emlrtRSI;
  b_st.site = &ve_emlrtRSI;
  coder::c_eml_find(b_st, update_list, ii);
  loop_ub = ii.size(0);
  r.set_size(&ck_emlrtRTEI, &sp, 1, ii.size(0));
  for (b_i = 0; b_i < loop_ub; b_i++) {
    r[b_i] = ii[b_i];
  }

  int32_T iv[2];
  st.site = &pj_emlrtRSI;
  coder::flip(r);
  iv[0] = (*(int32_T (*)[2])r.size())[0];
  iv[1] = (*(int32_T (*)[2])r.size())[1];
  st.site = &pj_emlrtRSI;
  coder::internal::indexShapeCheck(st, lookup_list.contents.size(0), iv);
  b_lookup_list = lookup_list.contents.size(0);
  loop_ub = r.size(1);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    c_i = static_cast<int32_T>(r[b_i]);
    if ((c_i < 1) || (c_i > b_lookup_list)) {
      emlrtDynamicBoundsCheckR2012b(c_i, 1, b_lookup_list, &eg_emlrtBCI,
        (emlrtConstCTX)&sp);
    }
  }

  loop_ub = r.size(1) - 1;
  for (c_i = 0; c_i <= loop_ub; c_i++) {
    if ((lookup_list.contents[static_cast<int32_T>(r[c_i]) - 1] != 0) && (c_i >
         loop_ub)) {
      emlrtDynamicBoundsCheckR2012b(c_i, 0, loop_ub, &dg_emlrtBCI,
        (emlrtConstCTX)&sp);
    }
  }

  b_lookup_list = 0;
  for (c_i = 0; c_i <= loop_ub; c_i++) {
    if (lookup_list.contents[static_cast<int32_T>(r[c_i]) - 1] != 0) {
      b_lookup_list++;
    }
  }

  if (b_lookup_list - 1 >= 0) {
    if ((I__size_idx_0 == 0) || (I__size_idx_1 == 0)) {
      n = 0;
    } else {
      n = muIntScalarMax_sint32(I__size_idx_0, I__size_idx_1);
    }

    i1 = J__size_idx_1;
  }

  for (loop_ub = 0; loop_ub < b_lookup_list; loop_ub++) {
    //  Use an explicit index for the loop
    if (loop_ub + 1 > b_lookup_list) {
      emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, b_lookup_list, &bg_emlrtBCI,
        (emlrtConstCTX)&sp);
    }

    //  Use a temporary variable for the entire struct
    //  For off-diagonal block
    st.site = &qj_emlrtRSI;

    //  Helper function to replace ismembc2
    //  Initialize an empty array to store the locations
    //  Iterate over each element to find
    for (c_i = 0; c_i < n; c_i++) {
      b_i = I__size_idx_0 * I__size_idx_1;
      if (c_i + 1 > b_i) {
        emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, b_i, &cg_emlrtBCI, &st);
      }

      //  Use the local function binary_search to find the location of the element
      //  If the element is found (location is not -1), add it to the locs array
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }

    //  Replace ismembc2 with find_locations_t
    st.site = &rj_emlrtRSI;

    //  Helper function to replace ismembc2
    //  Initialize an empty array to store the locations
    //  Iterate over each element to find
    for (c_i = 0; c_i < i1; c_i++) {
      if (c_i + 1 > J__size_idx_1) {
        emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, J__size_idx_1, &cg_emlrtBCI,
          &st);
      }

      //  Use the local function binary_search to find the location of the element
      //  If the element is found (location is not -1), add it to the locs array
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }

    //  Replace ismembc2 with find_locations_t
    //  Convert to double to ensure consistent types
    //  Ensure tmp2 is consistent in size
    //  Different factorization depending on symmetry
    st.site = &sj_emlrtRSI;
    if (!coder::internal::b_strcmp(st, opts.contents.symm)) {
      st.site = &tj_emlrtRSI;
      coder::internal::c_strcmp(st, opts.contents.symm);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void srskelf_asym_new_anonFcn1(const emlrtStack &sp, const real_T x[24000],
  const real_T opts_area[8000], const real_T opts_nu[24000], const real_T
  opts_P[8000], const real_T opts_contrast[8000], real_T opts_wuse, const coder::
  sparse &opts_qcorr, const coder::array<real_T, 2U> &i, const coder::array<
  real_T, 2U> &j, coder::array<real_T, 2U> &varargout_1)
{
  coder::b_sparse d_x;
  coder::array<real_T, 2U> J;
  coder::array<real_T, 2U> M;
  coder::array<real_T, 2U> b_I;
  coder::array<real_T, 2U> b_opts_area;
  coder::array<real_T, 2U> b_opts_contrast;
  coder::array<real_T, 2U> b_opts_nu;
  coder::array<real_T, 2U> b_x;
  coder::array<real_T, 2U> c_x;
  coder::array<real_T, 2U> r5;
  coder::array<real_T, 2U> y;
  coder::array<real_T, 1U> idx;
  coder::array<real_T, 1U> v;
  coder::array<int32_T, 2U> c_i;
  coder::array<int32_T, 1U> c_I;
  coder::array<int32_T, 1U> jj;
  coder::array<int32_T, 1U> r1;
  coder::array<int32_T, 1U> r2;
  coder::array<int32_T, 1U> r3;
  coder::array<boolean_T, 2U> b_idx;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T P[8000];
  int32_T n;
  st.prev = &sp;
  st.tls = sp.tls;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &qh_emlrtRSI;
  std::copy(&opts_P[0], &opts_P[8000], &P[0]);

  //  AFUN(I,J) computes entries of the matrix A to be factorized at the
  //  index sets I and J.  This handles the near-field correction.
  if ((i.size(0) == 0) || (i.size(1) == 0) || (j.size(1) == 0)) {
    int32_T b_i;
    int32_T loop_ub;
    if ((i.size(0) == 0) || (i.size(1) == 0)) {
      n = 0;
    } else {
      int32_T mid;
      b_i = i.size(0);
      mid = i.size(1);
      n = muIntScalarMax_sint32(b_i, mid);
    }

    varargout_1.set_size(&ji_emlrtRTEI, &st, n, j.size(1));
    loop_ub = n * j.size(1);
    for (b_i = 0; b_i < loop_ub; b_i++) {
      varargout_1[b_i] = 0.0;
    }
  } else {
    __m128d r;
    real_T d;
    int32_T iv[2];
    int32_T iv1[2];
    int32_T b;
    int32_T b_i;
    int32_T b_loop_ub_tmp;
    int32_T k;
    int32_T loop_ub;
    int32_T loop_ub_tmp;
    int32_T mid;
    int32_T n_tmp;
    int32_T right;
    int32_T unnamed_idx_0_tmp;
    b_st.site = &rh_emlrtRSI;
    unnamed_idx_0_tmp = i.size(0) * i.size(1);
    b = j.size(1);
    b_I.set_size(&vh_emlrtRTEI, &b_st, unnamed_idx_0_tmp, j.size(1));
    c_st.site = &bi_emlrtRSI;
    d_st.site = &ci_emlrtRSI;
    if (j.size(1) > 2147483646) {
      e_st.site = &ge_emlrtRSI;
      coder::check_forloop_overflow_error(e_st);
    }

    for (k = 0; k < b; k++) {
      d_st.site = &di_emlrtRSI;
      e_st.site = &ci_emlrtRSI;
      if (b_I.size(0) > 2147483646) {
        f_st.site = &ge_emlrtRSI;
        coder::check_forloop_overflow_error(f_st);
      }

      for (right = 0; right < unnamed_idx_0_tmp; right++) {
        b_I[right + b_I.size(0) * k] = i[right];
      }
    }

    J.set_size(&vh_emlrtRTEI, &b_st, unnamed_idx_0_tmp, j.size(1));
    c_st.site = &bi_emlrtRSI;
    d_st.site = &ci_emlrtRSI;
    for (k = 0; k < b; k++) {
      d_st.site = &di_emlrtRSI;
      e_st.site = &ci_emlrtRSI;
      if (J.size(0) > 2147483646) {
        f_st.site = &ge_emlrtRSI;
        coder::check_forloop_overflow_error(f_st);
      }

      for (right = 0; right < unnamed_idx_0_tmp; right++) {
        J[right + J.size(0) * k] = j[k];
      }
    }

    c_i.set_size(&wh_emlrtRTEI, &st, i.size(0), i.size(1));
    for (b_i = 0; b_i < unnamed_idx_0_tmp; b_i++) {
      d = i[b_i];
      if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
        emlrtIntegerCheckR2012b(d, &ub_emlrtDCI, &st);
      }

      if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > 8000)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 8000,
          &if_emlrtBCI, &st);
      }

      c_i[b_i] = static_cast<int32_T>(d);
    }

    b_x.set_size(&xh_emlrtRTEI, &st, 3, unnamed_idx_0_tmp);
    for (b_i = 0; b_i < unnamed_idx_0_tmp; b_i++) {
      k = 3 * (c_i[b_i] - 1);
      b_x[3 * b_i] = x[k];
      b_x[3 * b_i + 1] = x[k + 1];
      b_x[3 * b_i + 2] = x[k + 2];
    }

    c_x.set_size(&yh_emlrtRTEI, &st, 3, j.size(1));
    for (b_i = 0; b_i < b; b_i++) {
      right = static_cast<int32_T>(muDoubleScalarFloor(j[b_i]));
      if (j[b_i] != right) {
        emlrtIntegerCheckR2012b(j[b_i], &xb_emlrtDCI, &st);
      }

      k = static_cast<int32_T>(j[b_i]);
      if ((k < 1) || (k > 8000)) {
        emlrtDynamicBoundsCheckR2012b(k, 1, 8000, &yf_emlrtBCI, &st);
      }

      k = 3 * (k - 1);
      c_x[3 * b_i] = x[k];
      if (j[b_i] != right) {
        emlrtIntegerCheckR2012b(j[b_i], &xb_emlrtDCI, &st);
      }

      c_x[3 * b_i + 1] = x[k + 1];
      if (j[b_i] != right) {
        emlrtIntegerCheckR2012b(j[b_i], &xb_emlrtDCI, &st);
      }

      c_x[3 * b_i + 2] = x[k + 2];
    }

    b_opts_nu.set_size(&ai_emlrtRTEI, &st, 3, unnamed_idx_0_tmp);
    for (b_i = 0; b_i < unnamed_idx_0_tmp; b_i++) {
      k = 3 * (static_cast<int32_T>(i[b_i]) - 1);
      b_opts_nu[3 * b_i] = opts_nu[k];
      b_opts_nu[3 * b_i + 1] = opts_nu[k + 1];
      b_opts_nu[3 * b_i + 2] = opts_nu[k + 2];
    }

    b_st.site = &sh_emlrtRSI;
    lap_neumann_kernel(b_st, b_x, c_x, b_opts_nu, y);
    b_opts_area.set_size(&bi_emlrtRTEI, &st, 1, j.size(1));
    for (b_i = 0; b_i < b; b_i++) {
      b_opts_area[b_i] = opts_area[static_cast<int32_T>(j[b_i]) - 1];
    }

    b_st.site = &sh_emlrtRSI;
    coder::b_bsxfun(b_st, y, b_opts_area, M);
    iv[0] = (*(int32_T (*)[2])((coder::array<real_T, 2U> *)&i)->size())[0];
    iv[1] = (*(int32_T (*)[2])((coder::array<real_T, 2U> *)&i)->size())[1];
    b_st.site = &th_emlrtRSI;
    coder::internal::indexShapeCheck(b_st, iv);
    b_opts_contrast.set_size(&ci_emlrtRTEI, &st, i.size(0), i.size(1));
    for (b_i = 0; b_i < unnamed_idx_0_tmp; b_i++) {
      b_opts_contrast[b_i] = opts_contrast[static_cast<int32_T>(i[b_i]) - 1];
    }

    y.set_size(&di_emlrtRTEI, &st, M.size(0), M.size(1));
    loop_ub = M.size(0) * M.size(1);
    k = (loop_ub / 2) << 1;
    right = k - 2;
    for (b_i = 0; b_i <= right; b_i += 2) {
      r = _mm_loadu_pd(&M[b_i]);
      _mm_storeu_pd(&y[b_i], _mm_mul_pd(_mm_set1_pd(2.0), r));
    }

    for (b_i = k; b_i < loop_ub; b_i++) {
      y[b_i] = 2.0 * M[b_i];
    }

    b_st.site = &th_emlrtRSI;
    coder::c_bsxfun(b_st, b_opts_contrast, y, varargout_1);
    b_st.site = &uh_emlrtRSI;

    //  SPGET_quadcorr(I,J,P,S) computes entries of a sparse matrix of near-field
    //  corrections that should be added to the kernel matrix, as used in
    //  AFUN. P is the permutation required for extracting near
    //  quadrature correction and is only used as a temporary array,
    //  and S stores the sparse matrix corresponding
    //  to the quadrature correction
    b_i = i.size(0);
    mid = i.size(1);
    n_tmp = muIntScalarMax_sint32(b_i, mid);
    c_st.site = &ji_emlrtRSI;
    y.set_size(&ei_emlrtRTEI, &c_st, i.size(0), i.size(1));
    for (b_i = 0; b_i < unnamed_idx_0_tmp; b_i++) {
      y[b_i] = i[b_i];
    }

    d_st.site = &mi_emlrtRSI;
    coder::internal::sort(d_st, y, c_i);
    M.set_size(&fi_emlrtRTEI, &c_st, c_i.size(0), c_i.size(1));
    loop_ub_tmp = c_i.size(0) * c_i.size(1);
    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      M[b_i] = c_i[b_i];
    }

    c_i.set_size(&gi_emlrtRTEI, &b_st, y.size(0), y.size(1));
    b_loop_ub_tmp = y.size(0) * y.size(1);
    for (b_i = 0; b_i < b_loop_ub_tmp; b_i++) {
      d = y[b_i];
      if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
        emlrtIntegerCheckR2012b(d, &vb_emlrtDCI, &b_st);
      }

      if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > 8000)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 8000,
          &jf_emlrtBCI, &b_st);
      }

      c_i[b_i] = static_cast<int32_T>(d);
    }

    b_i = c_i.size(0) * c_i.size(1);
    if (b_i != loop_ub_tmp) {
      emlrtSubAssignSizeCheck1dR2017a(b_i, loop_ub_tmp, &rb_emlrtECI, &b_st);
    }

    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      P[c_i[b_i] - 1] = M[b_i];
    }

    M.set_size(&hi_emlrtRTEI, &b_st, n_tmp, j.size(1));
    loop_ub_tmp = n_tmp * j.size(1);
    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      M[b_i] = 0.0;
    }

    c_st.site = &ki_emlrtRSI;
    d_st.site = &ki_emlrtRSI;
    opts_qcorr.parenReference(d_st, j, d_x);
    d_st.site = &cj_emlrtRSI;
    coder::b_eml_find(d_st, d_x, c_I, jj, v);
    c_st.site = &li_emlrtRSI;

    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    //  Initialize an empty array to store the locations
    loop_ub = c_I.size(0);
    idx.set_size(&ii_emlrtRTEI, &c_st, c_I.size(0));
    for (b_i = 0; b_i < loop_ub; b_i++) {
      idx[b_i] = 0.0;
    }

    //  Iterate over each element to find
    if (c_I.size(0) - 1 >= 0) {
      if ((y.size(0) == 0) || (y.size(1) == 0)) {
        n = 0;
      } else {
        b_i = y.size(0);
        mid = y.size(1);
        n = muIntScalarMax_sint32(b_i, mid);
      }
    }

    for (int32_T d_i{0}; d_i < loop_ub; d_i++) {
      uint32_T left;
      if (d_i + 1 > loop_ub) {
        emlrtDynamicBoundsCheckR2012b(d_i + 1, 1, loop_ub, &kf_emlrtBCI, &c_st);
      }

      k = c_I[d_i];

      //  Use the local function binary_search to find the location of the element
      d_st.site = &jj_emlrtRSI;

      // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
      //  Initialize the bounds for the search
      left = 1U;
      right = n;

      //  Perform the binary search
      int32_T exitg1;
      do {
        exitg1 = 0;
        if (left <= static_cast<uint32_T>(right)) {
          //  Calculate the midpoint
          mid = static_cast<int32_T>(muDoubleScalarFloor(static_cast<real_T>
            (left + static_cast<uint32_T>(right)) / 2.0));

          //  Check if the target is found
          if ((mid < 1) || (mid > b_loop_ub_tmp)) {
            emlrtDynamicBoundsCheckR2012b(mid, 1, b_loop_ub_tmp, &mf_emlrtBCI,
              &d_st);
          }

          b_i = static_cast<int16_T>(y[mid - 1]);
          if (b_i == k) {
            if (d_i + 1 > idx.size(0)) {
              emlrtDynamicBoundsCheckR2012b(d_i + 1, 1, idx.size(0),
                &lf_emlrtBCI, &d_st);
            }

            idx[d_i] = mid;
            exitg1 = 1;
          } else {
            if (mid > b_loop_ub_tmp) {
              emlrtDynamicBoundsCheckR2012b(mid, 1, b_loop_ub_tmp, &nf_emlrtBCI,
                &d_st);
            }

            if (b_i < k) {
              left = static_cast<uint32_T>(mid) + 1U;
            } else {
              right = mid - 1;
            }

            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&d_st);
            }
          }
        } else {
          //  If the element is not found, return -1
          if (d_i + 1 > idx.size(0)) {
            emlrtDynamicBoundsCheckR2012b(d_i + 1, 1, idx.size(0), &lf_emlrtBCI,
              &d_st);
          }

          idx[d_i] = -1.0;
          exitg1 = 1;
        }
      } while (exitg1 == 0);

      //  If the element is found (location is not -1), add it to the locs array
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&c_st);
      }
    }

    //  Replace ismembc with custom function
    //  Filter out invalid indices
    if ((y.size(0) == 0) || (y.size(1) == 0)) {
      n = 0;
    } else {
      b_i = y.size(0);
      mid = y.size(1);
      n = muIntScalarMax_sint32(b_i, mid);
    }

    right = idx.size(0) - 1;
    k = 0;
    for (int32_T d_i{0}; d_i <= right; d_i++) {
      if ((idx[d_i] > 0.0) && (static_cast<int32_T>(idx[d_i]) <= n)) {
        k++;
      }
    }

    r1.set_size(&ji_emlrtRTEI, &b_st, k);
    k = 0;
    for (int32_T d_i{0}; d_i <= right; d_i++) {
      if ((idx[d_i] > 0.0) && (static_cast<int32_T>(idx[d_i]) <= n)) {
        r1[k] = d_i;
        k++;
      }
    }

    b_loop_ub_tmp = r1.size(0);
    for (b_i = 0; b_i < b_loop_ub_tmp; b_i++) {
      if (r1[b_i] > c_I.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(r1[b_i], 0, c_I.size(0) - 1, &of_emlrtBCI,
          &b_st);
      }
    }

    for (b_i = 0; b_i < b_loop_ub_tmp; b_i++) {
      if (r1[b_i] > jj.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(r1[b_i], 0, jj.size(0) - 1, &pf_emlrtBCI,
          &b_st);
      }
    }

    for (b_i = 0; b_i < b_loop_ub_tmp; b_i++) {
      if (r1[b_i] > v.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(r1[b_i], 0, v.size(0) - 1, &qf_emlrtBCI,
          &b_st);
      }
    }

    for (b_i = 0; b_i < b_loop_ub_tmp; b_i++) {
      right = c_I[r1[b_i]];
      if ((right < 1) || (right > 8000)) {
        emlrtDynamicBoundsCheckR2012b(right, 1, 8000, &rf_emlrtBCI, &b_st);
      }
    }

    idx.set_size(&ki_emlrtRTEI, &b_st, r1.size(0));
    for (b_i = 0; b_i < b_loop_ub_tmp; b_i++) {
      idx[b_i] = (static_cast<real_T>(jj[r1[b_i]]) - 1.0) * static_cast<real_T>
        (n_tmp);
    }

    if (r1.size(0) == idx.size(0)) {
      jj.set_size(&li_emlrtRTEI, &b_st, r1.size(0));
      for (b_i = 0; b_i < b_loop_ub_tmp; b_i++) {
        d = P[c_I[r1[b_i]] - 1] + idx[b_i];
        if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
          emlrtIntegerCheckR2012b(d, &wb_emlrtDCI, &b_st);
        }

        if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) >
             loop_ub_tmp)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, loop_ub_tmp,
            &sf_emlrtBCI, &b_st);
        }

        jj[b_i] = static_cast<int32_T>(d);
      }

      loop_ub = jj.size(0);
      c_I.set_size(&li_emlrtRTEI, &b_st, jj.size(0));
      for (b_i = 0; b_i < loop_ub; b_i++) {
        c_I[b_i] = jj[b_i];
      }
    } else {
      c_st.site = &sr_emlrtRSI;
      binary_expand_op_7(c_st, c_I, P, r1, idx, n_tmp, j);
    }

    loop_ub = r1.size(0);
    if (c_I.size(0) != r1.size(0)) {
      emlrtSubAssignSizeCheck1dR2017a(c_I.size(0), r1.size(0), &qb_emlrtECI,
        &b_st);
    }

    for (b_i = 0; b_i < loop_ub; b_i++) {
      M[c_I[b_i] - 1] = v[r1[b_i]];
    }

    k = (loop_ub_tmp / 2) << 1;
    right = k - 2;
    for (b_i = 0; b_i <= right; b_i += 2) {
      r = _mm_loadu_pd(&M[b_i]);
      _mm_storeu_pd(&M[b_i], _mm_mul_pd(_mm_set1_pd(-2.0), r));
    }

    for (b_i = k; b_i < loop_ub_tmp; b_i++) {
      M[b_i] = -2.0 * M[b_i];
    }

    b_st.site = &vh_emlrtRSI;
    coder::c_abs(b_st, M, y);
    b_idx.set_size(&mi_emlrtRTEI, &st, y.size(0), y.size(1));
    loop_ub_tmp = y.size(0) * y.size(1);
    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      b_idx[b_i] = (y[b_i] != 0.0);
    }

    iv[0] = (*(int32_T (*)[2])varargout_1.size())[0];
    iv[1] = (*(int32_T (*)[2])varargout_1.size())[1];
    iv1[0] = (*(int32_T (*)[2])b_idx.size())[0];
    iv1[1] = (*(int32_T (*)[2])b_idx.size())[1];
    b_st.site = &wh_emlrtRSI;
    coder::internal::b_indexShapeCheck(b_st, iv, iv1);
    iv[0] = (*(int32_T (*)[2])M.size())[0];
    iv[1] = (*(int32_T (*)[2])M.size())[1];
    iv1[0] = (*(int32_T (*)[2])b_idx.size())[0];
    iv1[1] = (*(int32_T (*)[2])b_idx.size())[1];
    b_st.site = &wh_emlrtRSI;
    coder::internal::b_indexShapeCheck(b_st, iv, iv1);
    right = loop_ub_tmp - 1;
    k = 0;
    for (int32_T d_i{0}; d_i <= right; d_i++) {
      if (b_idx[d_i]) {
        k++;
      }
    }

    r2.set_size(&ji_emlrtRTEI, &st, k);
    k = 0;
    for (int32_T d_i{0}; d_i <= right; d_i++) {
      if (b_idx[d_i]) {
        r2[k] = d_i;
        k++;
      }
    }

    k = varargout_1.size(0) * varargout_1.size(1);
    loop_ub_tmp = r2.size(0);
    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      if (r2[b_i] > k - 1) {
        emlrtDynamicBoundsCheckR2012b(r2[b_i], 0, k - 1, &tf_emlrtBCI, &st);
      }
    }

    right = M.size(0) * M.size(1);
    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      if (r2[b_i] > right - 1) {
        emlrtDynamicBoundsCheckR2012b(r2[b_i], 0, right - 1, &uf_emlrtBCI, &st);
      }
    }

    v.set_size(&ni_emlrtRTEI, &st, r2.size(0));
    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      v[b_i] = varargout_1[r2[b_i]] + M[r2[b_i]];
    }

    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      if (r2[b_i] > k - 1) {
        emlrtDynamicBoundsCheckR2012b(r2[b_i], 0, k - 1, &vf_emlrtBCI, &st);
      }

      varargout_1[r2[b_i]] = v[b_i];
    }

    if ((b_I.size(0) == J.size(0)) && (b_I.size(1) == J.size(1))) {
      b_idx.set_size(&oi_emlrtRTEI, &st, unnamed_idx_0_tmp, j.size(1));
      loop_ub = b_I.size(0) * b_I.size(1);
      for (b_i = 0; b_i < loop_ub; b_i++) {
        b_idx[b_i] = (b_I[b_i] == J[b_i]);
      }
    } else {
      b_st.site = &xh_emlrtRSI;
      eq(b_st, b_idx, b_I, J);
    }

    iv[0] = (*(int32_T (*)[2])varargout_1.size())[0];
    iv[1] = (*(int32_T (*)[2])varargout_1.size())[1];
    iv1[0] = (*(int32_T (*)[2])b_idx.size())[0];
    iv1[1] = (*(int32_T (*)[2])b_idx.size())[1];
    b_st.site = &xh_emlrtRSI;
    coder::internal::b_indexShapeCheck(b_st, iv, iv1);
    if ((b_I.size(0) != J.size(0)) && ((b_I.size(0) != 1) && (J.size(0) != 1)))
    {
      emlrtDimSizeImpxCheckR2021b(b_I.size(0), J.size(0), &vb_emlrtECI, &st);
    }

    if ((b_I.size(1) != J.size(1)) && ((b_I.size(1) != 1) && (J.size(1) != 1)))
    {
      emlrtDimSizeImpxCheckR2021b(b_I.size(1), J.size(1), &ub_emlrtECI, &st);
    }

    right = b_idx.size(0) * b_idx.size(1) - 1;
    k = 0;
    for (int32_T d_i{0}; d_i <= right; d_i++) {
      if (b_idx[d_i]) {
        k++;
      }
    }

    r3.set_size(&ji_emlrtRTEI, &st, k);
    k = 0;
    for (int32_T d_i{0}; d_i <= right; d_i++) {
      if (b_idx[d_i]) {
        r3[k] = d_i;
        k++;
      }
    }

    k = varargout_1.size(0) * varargout_1.size(1);
    loop_ub_tmp = r3.size(0);
    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      if (r3[b_i] > k - 1) {
        emlrtDynamicBoundsCheckR2012b(r3[b_i], 0, k - 1, &wf_emlrtBCI, &st);
      }
    }

    v.set_size(&pi_emlrtRTEI, &st, r3.size(0));
    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      v[b_i] = varargout_1[r3[b_i]] + 1.0;
    }

    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      if (r3[b_i] > k - 1) {
        emlrtDynamicBoundsCheckR2012b(r3[b_i], 0, k - 1, &xf_emlrtBCI, &st);
      }

      varargout_1[r3[b_i]] = v[b_i];
    }

    b_opts_area.set_size(&qi_emlrtRTEI, &st, 1, j.size(1));
    for (b_i = 0; b_i < b; b_i++) {
      b_opts_area[b_i] = opts_area[static_cast<int32_T>(j[b_i]) - 1];
    }

    y.set_size(&ri_emlrtRTEI, &st, n_tmp, j.size(1));
    for (b_i = 0; b_i < b; b_i++) {
      for (right = 0; right < n_tmp; right++) {
        y[right + y.size(0) * b_i] = opts_wuse * b_opts_area[b_i];
      }
    }

    if ((varargout_1.size(0) != n_tmp) && ((varargout_1.size(0) != 1) && (n_tmp
          != 1))) {
      emlrtDimSizeImpxCheckR2021b(varargout_1.size(0), n_tmp, &tb_emlrtECI, &st);
    }

    if ((varargout_1.size(1) != j.size(1)) && ((varargout_1.size(1) != 1) &&
         (j.size(1) != 1))) {
      emlrtDimSizeImpxCheckR2021b(varargout_1.size(1), j.size(1), &sb_emlrtECI,
        &st);
    }

    if ((varargout_1.size(0) == y.size(0)) && (varargout_1.size(1) == y.size(1)))
    {
      loop_ub = varargout_1.size(0) * varargout_1.size(1);
      k = (loop_ub / 2) << 1;
      right = k - 2;
      for (b_i = 0; b_i <= right; b_i += 2) {
        __m128d r4;
        r = _mm_loadu_pd(&varargout_1[b_i]);
        r4 = _mm_loadu_pd(&y[b_i]);
        _mm_storeu_pd(&varargout_1[b_i], _mm_add_pd(r, r4));
      }

      for (b_i = k; b_i < loop_ub; b_i++) {
        varargout_1[b_i] = varargout_1[b_i] + y[b_i];
      }
    } else {
      b_st.site = &mj_emlrtRSI;
      plus(b_st, varargout_1, y);
    }

    iv[0] = (*(int32_T (*)[2])((coder::array<real_T, 2U> *)&i)->size())[0];
    iv[1] = (*(int32_T (*)[2])((coder::array<real_T, 2U> *)&i)->size())[1];
    b_st.site = &yh_emlrtRSI;
    coder::internal::b_indexShapeCheck(b_st, iv);
    y.set_size(&si_emlrtRTEI, &st, i.size(0), i.size(1));
    for (b_i = 0; b_i < unnamed_idx_0_tmp; b_i++) {
      y[b_i] = opts_area[static_cast<int32_T>(i[b_i]) - 1];
    }

    b_st.site = &yh_emlrtRSI;
    coder::c_sqrt(b_st, y);
    loop_ub = y.size(1);
    k = y.size(0);
    b_opts_contrast.set_size(&si_emlrtRTEI, &st, y.size(1), y.size(0));
    for (b_i = 0; b_i < k; b_i++) {
      for (right = 0; right < loop_ub; right++) {
        b_opts_contrast[right + b_opts_contrast.size(0) * b_i] = y[b_i + y.size
          (0) * right];
      }
    }

    b_I.set_size(&ti_emlrtRTEI, &st, varargout_1.size(0), varargout_1.size(1));
    loop_ub = varargout_1.size(0) * varargout_1.size(1) - 1;
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      b_I[b_i] = varargout_1[b_i];
    }

    b_st.site = &yh_emlrtRSI;
    coder::c_bsxfun(b_st, b_opts_contrast, b_I, varargout_1);
    b_opts_area.set_size(&ui_emlrtRTEI, &st, 1, j.size(1));
    for (b_i = 0; b_i < b; b_i++) {
      b_opts_area[b_i] = opts_area[static_cast<int32_T>(j[b_i]) - 1];
    }

    b_st.site = &ai_emlrtRSI;
    coder::b_sqrt(b_st, b_opts_area);
    loop_ub = b_opts_area.size(1);
    r5.set_size(&vi_emlrtRTEI, &st, 1, b_opts_area.size(1));
    k = (b_opts_area.size(1) / 2) << 1;
    right = k - 2;
    for (b_i = 0; b_i <= right; b_i += 2) {
      r = _mm_loadu_pd(&b_opts_area[b_i]);
      _mm_storeu_pd(&r5[b_i], _mm_div_pd(_mm_set1_pd(1.0), r));
    }

    for (b_i = k; b_i < loop_ub; b_i++) {
      r5[b_i] = 1.0 / b_opts_area[b_i];
    }

    b_I.set_size(&wi_emlrtRTEI, &st, varargout_1.size(0), varargout_1.size(1));
    loop_ub = varargout_1.size(0) * varargout_1.size(1) - 1;
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      b_I[b_i] = varargout_1[b_i];
    }

    b_st.site = &ai_emlrtRSI;
    coder::b_bsxfun(b_st, b_I, r5, varargout_1);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void srskelf_asym_new_anonFcn2(const emlrtStack &sp, const real_T
  opts_area[8000], const real_T x[24000], const coder::array<real_T, 2U> &slf,
  const coder::array<real_T, 2U> &nbr, const coder::array<real_T, 2U> &proxy,
  real_T l, const real_T ctr[3], coder::array<real_T, 2U> &varargout_1, coder::
  array<real_T, 2U> &varargout_2)
{
  __m128d r;
  __m128d r1;
  coder::array<real_T, 2U> Kpxy1;
  coder::array<real_T, 2U> Kpxy2;
  coder::array<real_T, 2U> Kpxy4;
  coder::array<real_T, 2U> b_y;
  coder::array<real_T, 2U> dist;
  coder::array<real_T, 2U> dr;
  coder::array<real_T, 2U> dx;
  coder::array<real_T, 2U> dy;
  coder::array<real_T, 2U> dz;
  coder::array<real_T, 2U> pxy;
  coder::array<real_T, 2U> r2;
  coder::array<real_T, 2U> x_tmp;
  coder::array<real_T, 2U> y;
  coder::array<real_T, 1U> a;
  coder::array<real_T, 1U> dx_tmp;
  coder::array<boolean_T, 2U> r3;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T varargin_1;
  int32_T acoef;
  int32_T b_input_sizes_idx_0;
  int32_T bcoef;
  int32_T csz_idx_0;
  int32_T i;
  int32_T i1;
  int32_T input_sizes_idx_0;
  int32_T k;
  boolean_T b;
  boolean_T empty_non_axis_sizes;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &yg_emlrtRSI;

  //  proxy function
  //  PXYFUN(X,SLF,NBR,L,CTR) computes interactions between the points
  //  X(:,SLF) and the set of proxy points by scaling the proxy sphere to
  //  appropriately contain a box at level L centered at CTR and then
  y.set_size(&tg_emlrtRTEI, &st, 3, proxy.size(1));
  input_sizes_idx_0 = 3 * proxy.size(1);
  bcoef = (input_sizes_idx_0 / 2) << 1;
  acoef = bcoef - 2;
  for (i = 0; i <= acoef; i += 2) {
    _mm_storeu_pd(&y[i], _mm_mul_pd(_mm_loadu_pd(&proxy[i]), _mm_set1_pd(l)));
  }

  for (i = bcoef; i < input_sizes_idx_0; i++) {
    y[i] = proxy[i] * l;
  }

  pxy.set_size(&lg_emlrtRTEI, &st, 3, y.size(1));
  i = y.size(1) - 1;
  for (k = 0; k <= i; k++) {
    r = _mm_loadu_pd(&y[3 * k]);
    _mm_storeu_pd(&pxy[3 * k], _mm_add_pd(r, _mm_loadu_pd(&ctr[0])));
    pxy[3 * k + 2] = y[3 * k + 2] + ctr[2];
  }

  input_sizes_idx_0 = slf.size(1);
  dx_tmp.set_size(&ug_emlrtRTEI, &st, slf.size(1));
  for (i = 0; i < input_sizes_idx_0; i++) {
    dx_tmp[i] = slf[i];
  }

  csz_idx_0 = pxy.size(1);
  a.set_size(&vg_emlrtRTEI, &st, pxy.size(1));
  for (i = 0; i < csz_idx_0; i++) {
    a[i] = pxy[3 * i];
  }

  for (i = 0; i < input_sizes_idx_0; i++) {
    if (dx_tmp[i] != static_cast<int32_T>(muDoubleScalarFloor(dx_tmp[i]))) {
      emlrtIntegerCheckR2012b(dx_tmp[i], &sb_emlrtDCI, &st);
    }

    i1 = static_cast<int32_T>(dx_tmp[i]);
    if ((i1 < 1) || (i1 > 8000)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, 8000, &ff_emlrtBCI, &st);
    }
  }

  dx.set_size(&lg_emlrtRTEI, &st, pxy.size(1), slf.size(1));
  b = ((a.size(0) != 0) && (dx_tmp.size(0) != 0));
  if (b) {
    bcoef = (dx_tmp.size(0) != 1);
    i = dx_tmp.size(0) - 1;
    acoef = (a.size(0) != 1);
    for (k = 0; k <= i; k++) {
      b_input_sizes_idx_0 = bcoef * k;
      i1 = dx.size(0) - 1;
      for (int32_T b_k{0}; b_k <= i1; b_k++) {
        dx[b_k + dx.size(0) * k] = a[acoef * b_k] - x[3 * (static_cast<int32_T>
          (dx_tmp[b_input_sizes_idx_0]) - 1)];
      }
    }
  }

  a.set_size(&wg_emlrtRTEI, &st, pxy.size(1));
  for (i = 0; i < csz_idx_0; i++) {
    a[i] = pxy[3 * i + 1];
  }

  dy.set_size(&lg_emlrtRTEI, &st, pxy.size(1), slf.size(1));
  if (b) {
    bcoef = (dx_tmp.size(0) != 1);
    i = dx_tmp.size(0) - 1;
    acoef = (a.size(0) != 1);
    for (k = 0; k <= i; k++) {
      b_input_sizes_idx_0 = bcoef * k;
      i1 = dy.size(0) - 1;
      for (int32_T b_k{0}; b_k <= i1; b_k++) {
        dy[b_k + dy.size(0) * k] = a[acoef * b_k] - x[3 * (static_cast<int32_T>
          (dx_tmp[b_input_sizes_idx_0]) - 1) + 1];
      }
    }
  }

  a.set_size(&xg_emlrtRTEI, &st, pxy.size(1));
  for (i = 0; i < csz_idx_0; i++) {
    a[i] = pxy[3 * i + 2];
  }

  dz.set_size(&lg_emlrtRTEI, &st, pxy.size(1), slf.size(1));
  if (b) {
    bcoef = (slf.size(1) != 1);
    i = slf.size(1) - 1;
    acoef = (a.size(0) != 1);
    for (k = 0; k <= i; k++) {
      b_input_sizes_idx_0 = bcoef * k;
      i1 = dz.size(0) - 1;
      for (int32_T b_k{0}; b_k <= i1; b_k++) {
        dz[b_k + dz.size(0) * k] = a[acoef * b_k] - x[3 * (static_cast<int32_T>
          (slf[b_input_sizes_idx_0]) - 1) + 2];
      }
    }
  }

  b_st.site = &ah_emlrtRSI;
  c_st.site = &pe_emlrtRSI;
  dr.set_size(&yg_emlrtRTEI, &c_st, pxy.size(1), slf.size(1));
  b_input_sizes_idx_0 = dx.size(0) * dx.size(1);
  for (i = 0; i < b_input_sizes_idx_0; i++) {
    varargin_1 = dx[i];
    dr[i] = muDoubleScalarPower(varargin_1, 2.0);
  }

  b_st.site = &ah_emlrtRSI;
  c_st.site = &pe_emlrtRSI;
  Kpxy4.set_size(&ah_emlrtRTEI, &c_st, pxy.size(1), slf.size(1));
  for (i = 0; i < b_input_sizes_idx_0; i++) {
    varargin_1 = dy[i];
    Kpxy4[i] = muDoubleScalarPower(varargin_1, 2.0);
  }

  if (dr.size(1) == Kpxy4.size(1)) {
    bcoef = (b_input_sizes_idx_0 / 2) << 1;
    acoef = bcoef - 2;
    for (i = 0; i <= acoef; i += 2) {
      r = _mm_loadu_pd(&dr[i]);
      r1 = _mm_loadu_pd(&Kpxy4[i]);
      _mm_storeu_pd(&dr[i], _mm_add_pd(r, r1));
    }

    for (i = bcoef; i < b_input_sizes_idx_0; i++) {
      dr[i] = dr[i] + Kpxy4[i];
    }
  } else {
    b_st.site = &ah_emlrtRSI;
    plus(b_st, dr, Kpxy4);
  }

  b_st.site = &ah_emlrtRSI;
  c_st.site = &pe_emlrtRSI;
  Kpxy4.set_size(&bh_emlrtRTEI, &c_st, pxy.size(1), slf.size(1));
  for (i = 0; i < b_input_sizes_idx_0; i++) {
    varargin_1 = dz[i];
    Kpxy4[i] = muDoubleScalarPower(varargin_1, 2.0);
  }

  if ((dr.size(0) != pxy.size(1)) && ((dr.size(0) != 1) && (pxy.size(1) != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(dr.size(0), pxy.size(1), &hb_emlrtECI, &st);
  }

  if ((dr.size(1) != slf.size(1)) && ((dr.size(1) != 1) && (slf.size(1) != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(dr.size(1), slf.size(1), &ib_emlrtECI, &st);
  }

  if ((dr.size(0) == Kpxy4.size(0)) && (dr.size(1) == Kpxy4.size(1))) {
    csz_idx_0 = dr.size(0) * dr.size(1);
    bcoef = (csz_idx_0 / 2) << 1;
    acoef = bcoef - 2;
    for (i = 0; i <= acoef; i += 2) {
      r = _mm_loadu_pd(&dr[i]);
      r1 = _mm_loadu_pd(&Kpxy4[i]);
      _mm_storeu_pd(&dr[i], _mm_add_pd(r, r1));
    }

    for (i = bcoef; i < csz_idx_0; i++) {
      dr[i] = dr[i] + Kpxy4[i];
    }
  } else {
    plus(st, dr, Kpxy4);
  }

  b_st.site = &ah_emlrtRSI;
  coder::c_sqrt(b_st, dr);
  Kpxy1.set_size(&ch_emlrtRTEI, &st, dr.size(0), dr.size(1));
  b_input_sizes_idx_0 = dr.size(0) * dr.size(1);
  bcoef = (b_input_sizes_idx_0 / 2) << 1;
  acoef = bcoef - 2;
  for (i = 0; i <= acoef; i += 2) {
    r = _mm_loadu_pd(&dr[i]);
    _mm_storeu_pd(&Kpxy1[i], _mm_div_pd(_mm_set1_pd(1.0), _mm_mul_pd(_mm_set1_pd
      (12.566370614359172), r)));
  }

  for (i = bcoef; i < b_input_sizes_idx_0; i++) {
    Kpxy1[i] = 1.0 / (12.566370614359172 * dr[i]);
  }

  b_st.site = &bh_emlrtRSI;
  x_tmp.set_size(&dh_emlrtRTEI, &b_st, Kpxy1.size(0), Kpxy1.size(1));
  csz_idx_0 = Kpxy1.size(0) * Kpxy1.size(1);
  bcoef = (csz_idx_0 / 2) << 1;
  acoef = bcoef - 2;
  for (i = 0; i <= acoef; i += 2) {
    r = _mm_loadu_pd(&Kpxy1[i]);
    _mm_storeu_pd(&x_tmp[i], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
  }

  for (i = bcoef; i < csz_idx_0; i++) {
    x_tmp[i] = -Kpxy1[i];
  }

  c_st.site = &bh_emlrtRSI;
  d_st.site = &pe_emlrtRSI;
  Kpxy2.set_size(&eh_emlrtRTEI, &d_st, dr.size(0), dr.size(1));
  for (i = 0; i < b_input_sizes_idx_0; i++) {
    varargin_1 = dr[i];
    Kpxy2[i] = muDoubleScalarPower(varargin_1, 2.0);
  }

  c_st.site = &lh_emlrtRSI;
  d_st.site = &mh_emlrtRSI;
  coder::internal::assertCompatibleDims(d_st, x_tmp, Kpxy2);
  if ((x_tmp.size(0) == Kpxy2.size(0)) && (x_tmp.size(1) == Kpxy2.size(1))) {
    csz_idx_0 = x_tmp.size(0) * x_tmp.size(1);
    Kpxy2.set_size(&dh_emlrtRTEI, &c_st, x_tmp.size(0), x_tmp.size(1));
    bcoef = (csz_idx_0 / 2) << 1;
    acoef = bcoef - 2;
    for (i = 0; i <= acoef; i += 2) {
      r = _mm_loadu_pd(&x_tmp[i]);
      r1 = _mm_loadu_pd(&Kpxy2[i]);
      _mm_storeu_pd(&Kpxy2[i], _mm_div_pd(r, r1));
    }

    for (i = bcoef; i < csz_idx_0; i++) {
      Kpxy2[i] = x_tmp[i] / Kpxy2[i];
    }
  } else {
    d_st.site = &rr_emlrtRSI;
    b_rdivide(d_st, Kpxy2, x_tmp);
  }

  if ((Kpxy2.size(0) != pxy.size(1)) && ((Kpxy2.size(0) != 1) && (pxy.size(1) !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(Kpxy2.size(0), pxy.size(1), &jb_emlrtECI, &st);
  }

  if ((Kpxy2.size(1) != slf.size(1)) && ((Kpxy2.size(1) != 1) && (slf.size(1) !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(Kpxy2.size(1), slf.size(1), &kb_emlrtECI, &st);
  }

  b_st.site = &ch_emlrtRSI;
  c_st.site = &ch_emlrtRSI;
  d_st.site = &pe_emlrtRSI;
  b_y.set_size(&fh_emlrtRTEI, &d_st, dr.size(0), dr.size(1));
  for (i = 0; i < b_input_sizes_idx_0; i++) {
    varargin_1 = dr[i];
    b_y[i] = muDoubleScalarPower(varargin_1, 2.0);
  }

  c_st.site = &lh_emlrtRSI;
  d_st.site = &mh_emlrtRSI;
  coder::internal::assertCompatibleDims(d_st, x_tmp, b_y);
  if ((x_tmp.size(0) == b_y.size(0)) && (x_tmp.size(1) == b_y.size(1))) {
    csz_idx_0 = x_tmp.size(0) * x_tmp.size(1);
    b_y.set_size(&gh_emlrtRTEI, &c_st, x_tmp.size(0), x_tmp.size(1));
    bcoef = (csz_idx_0 / 2) << 1;
    acoef = bcoef - 2;
    for (i = 0; i <= acoef; i += 2) {
      r = _mm_loadu_pd(&x_tmp[i]);
      r1 = _mm_loadu_pd(&b_y[i]);
      _mm_storeu_pd(&b_y[i], _mm_div_pd(r, r1));
    }

    for (i = bcoef; i < csz_idx_0; i++) {
      b_y[i] = x_tmp[i] / b_y[i];
    }
  } else {
    d_st.site = &rr_emlrtRSI;
    b_rdivide(d_st, b_y, x_tmp);
  }

  if ((b_y.size(0) != pxy.size(1)) && ((b_y.size(0) != 1) && (pxy.size(1) != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(b_y.size(0), pxy.size(1), &lb_emlrtECI, &st);
  }

  if ((b_y.size(1) != slf.size(1)) && ((b_y.size(1) != 1) && (slf.size(1) != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(b_y.size(1), slf.size(1), &mb_emlrtECI, &st);
  }

  b_st.site = &dh_emlrtRSI;
  c_st.site = &dh_emlrtRSI;
  d_st.site = &pe_emlrtRSI;
  Kpxy4.set_size(&hh_emlrtRTEI, &d_st, dr.size(0), dr.size(1));
  for (i = 0; i < b_input_sizes_idx_0; i++) {
    varargin_1 = dr[i];
    Kpxy4[i] = muDoubleScalarPower(varargin_1, 2.0);
  }

  c_st.site = &lh_emlrtRSI;
  d_st.site = &mh_emlrtRSI;
  coder::internal::assertCompatibleDims(d_st, x_tmp, Kpxy4);
  if ((x_tmp.size(0) == Kpxy4.size(0)) && (x_tmp.size(1) == Kpxy4.size(1))) {
    csz_idx_0 = x_tmp.size(0) * x_tmp.size(1);
    bcoef = (csz_idx_0 / 2) << 1;
    acoef = bcoef - 2;
    for (i = 0; i <= acoef; i += 2) {
      r = _mm_loadu_pd(&x_tmp[i]);
      r1 = _mm_loadu_pd(&Kpxy4[i]);
      _mm_storeu_pd(&x_tmp[i], _mm_div_pd(r, r1));
    }

    for (i = bcoef; i < csz_idx_0; i++) {
      x_tmp[i] = x_tmp[i] / Kpxy4[i];
    }
  } else {
    d_st.site = &rr_emlrtRSI;
    rdivide(d_st, x_tmp, Kpxy4);
  }

  if ((x_tmp.size(0) != pxy.size(1)) && ((x_tmp.size(0) != 1) && (pxy.size(1) !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(x_tmp.size(0), pxy.size(1), &nb_emlrtECI, &st);
  }

  if ((x_tmp.size(1) != slf.size(1)) && ((x_tmp.size(1) != 1) && (slf.size(1) !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(x_tmp.size(1), slf.size(1), &ob_emlrtECI, &st);
  }

  r2.set_size(&ih_emlrtRTEI, &st, 1, slf.size(1));
  for (i = 0; i < input_sizes_idx_0; i++) {
    r2[i] = opts_area[static_cast<int32_T>(slf[i]) - 1];
  }

  b_st.site = &eh_emlrtRSI;
  coder::b_sqrt(b_st, r2);
  dr.set_size(&jh_emlrtRTEI, &st, Kpxy1.size(0), Kpxy1.size(1));
  csz_idx_0 = Kpxy1.size(0) * Kpxy1.size(1) - 1;
  for (i = 0; i <= csz_idx_0; i++) {
    dr[i] = Kpxy1[i];
  }

  b_st.site = &eh_emlrtRSI;
  coder::b_bsxfun(b_st, dr, r2, Kpxy1);
  r2.set_size(&kh_emlrtRTEI, &st, 1, slf.size(1));
  for (i = 0; i < input_sizes_idx_0; i++) {
    r2[i] = opts_area[static_cast<int32_T>(slf[i]) - 1];
  }

  b_st.site = &fh_emlrtRSI;
  coder::b_sqrt(b_st, r2);
  if ((Kpxy2.size(0) == dx.size(0)) && (Kpxy2.size(1) == dx.size(1))) {
    dr.set_size(&dh_emlrtRTEI, &st, Kpxy2.size(0), Kpxy2.size(1));
    csz_idx_0 = Kpxy2.size(0) * Kpxy2.size(1);
    bcoef = (csz_idx_0 / 2) << 1;
    acoef = bcoef - 2;
    for (i = 0; i <= acoef; i += 2) {
      r = _mm_loadu_pd(&Kpxy2[i]);
      r1 = _mm_loadu_pd(&dx[i]);
      _mm_storeu_pd(&dr[i], _mm_mul_pd(r, r1));
    }

    for (i = bcoef; i < csz_idx_0; i++) {
      dr[i] = Kpxy2[i] * dx[i];
    }

    b_st.site = &fh_emlrtRSI;
    coder::b_bsxfun(b_st, dr, r2, Kpxy2);
  } else {
    b_st.site = &fh_emlrtRSI;
    binary_expand_op_6(b_st, Kpxy2, fh_emlrtRSI, dx, r2);
  }

  r2.set_size(&lh_emlrtRTEI, &st, 1, slf.size(1));
  for (i = 0; i < input_sizes_idx_0; i++) {
    r2[i] = opts_area[static_cast<int32_T>(slf[i]) - 1];
  }

  b_st.site = &gh_emlrtRSI;
  coder::b_sqrt(b_st, r2);
  if ((b_y.size(0) == dy.size(0)) && (b_y.size(1) == dy.size(1))) {
    dx.set_size(&gh_emlrtRTEI, &st, b_y.size(0), b_y.size(1));
    csz_idx_0 = b_y.size(0) * b_y.size(1);
    bcoef = (csz_idx_0 / 2) << 1;
    acoef = bcoef - 2;
    for (i = 0; i <= acoef; i += 2) {
      r = _mm_loadu_pd(&b_y[i]);
      r1 = _mm_loadu_pd(&dy[i]);
      _mm_storeu_pd(&dx[i], _mm_mul_pd(r, r1));
    }

    for (i = bcoef; i < csz_idx_0; i++) {
      dx[i] = b_y[i] * dy[i];
    }

    b_st.site = &gh_emlrtRSI;
    coder::b_bsxfun(b_st, dx, r2, dr);
  } else {
    b_st.site = &gh_emlrtRSI;
    binary_expand_op_4(b_st, dr, gh_emlrtRSI, b_y, dy, r2);
  }

  r2.set_size(&mh_emlrtRTEI, &st, 1, slf.size(1));
  for (i = 0; i < input_sizes_idx_0; i++) {
    r2[i] = opts_area[static_cast<int32_T>(slf[i]) - 1];
  }

  b_st.site = &hh_emlrtRSI;
  coder::b_sqrt(b_st, r2);
  if ((x_tmp.size(0) == dz.size(0)) && (x_tmp.size(1) == dz.size(1))) {
    dx.set_size(&nh_emlrtRTEI, &st, x_tmp.size(0), x_tmp.size(1));
    input_sizes_idx_0 = x_tmp.size(0) * x_tmp.size(1);
    bcoef = (input_sizes_idx_0 / 2) << 1;
    acoef = bcoef - 2;
    for (i = 0; i <= acoef; i += 2) {
      r = _mm_loadu_pd(&x_tmp[i]);
      r1 = _mm_loadu_pd(&dz[i]);
      _mm_storeu_pd(&dx[i], _mm_mul_pd(r, r1));
    }

    for (i = bcoef; i < input_sizes_idx_0; i++) {
      dx[i] = x_tmp[i] * dz[i];
    }

    b_st.site = &hh_emlrtRSI;
    coder::b_bsxfun(b_st, dx, r2, Kpxy4);
  } else {
    b_st.site = &hh_emlrtRSI;
    binary_expand_op_4(b_st, Kpxy4, hh_emlrtRSI, x_tmp, dz, r2);
  }

  b_st.site = &ih_emlrtRSI;
  c_st.site = &nh_emlrtRSI;
  b = ((Kpxy1.size(0) != 0) && (Kpxy1.size(1) != 0));
  if (b) {
    bcoef = Kpxy1.size(1);
  } else if ((Kpxy2.size(0) != 0) && (Kpxy2.size(1) != 0)) {
    bcoef = Kpxy2.size(1);
  } else if ((dr.size(0) != 0) && (dr.size(1) != 0)) {
    bcoef = dr.size(1);
  } else if ((Kpxy4.size(0) != 0) && (Kpxy4.size(1) != 0)) {
    bcoef = Kpxy4.size(1);
  } else {
    bcoef = Kpxy1.size(1);
    if (Kpxy2.size(1) > Kpxy1.size(1)) {
      bcoef = Kpxy2.size(1);
    }

    if (dr.size(1) > bcoef) {
      bcoef = dr.size(1);
    }

    if (Kpxy4.size(1) > bcoef) {
      bcoef = Kpxy4.size(1);
    }
  }

  d_st.site = &oh_emlrtRSI;
  if ((Kpxy1.size(1) != bcoef) && ((Kpxy1.size(0) != 0) && (Kpxy1.size(1) != 0)))
  {
    emlrtErrorWithMessageIdR2018a(&d_st, &m_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((Kpxy2.size(1) != bcoef) && ((Kpxy2.size(0) != 0) && (Kpxy2.size(1) != 0)))
  {
    emlrtErrorWithMessageIdR2018a(&d_st, &m_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((dr.size(1) != bcoef) && ((dr.size(0) != 0) && (dr.size(1) != 0))) {
    emlrtErrorWithMessageIdR2018a(&d_st, &m_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((Kpxy4.size(1) != bcoef) && ((Kpxy4.size(0) != 0) && (Kpxy4.size(1) != 0)))
  {
    emlrtErrorWithMessageIdR2018a(&d_st, &m_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (bcoef == 0);
  if (empty_non_axis_sizes || b) {
    acoef = Kpxy1.size(0);
  } else {
    acoef = 0;
  }

  if (empty_non_axis_sizes || ((Kpxy2.size(0) != 0) && (Kpxy2.size(1) != 0))) {
    b_input_sizes_idx_0 = Kpxy2.size(0);
  } else {
    b_input_sizes_idx_0 = 0;
  }

  if (empty_non_axis_sizes || ((dr.size(0) != 0) && (dr.size(1) != 0))) {
    input_sizes_idx_0 = dr.size(0);
  } else {
    input_sizes_idx_0 = 0;
  }

  if (empty_non_axis_sizes || ((Kpxy4.size(0) != 0) && (Kpxy4.size(1) != 0))) {
    csz_idx_0 = Kpxy4.size(0);
  } else {
    csz_idx_0 = 0;
  }

  k = acoef;
  acoef = b_input_sizes_idx_0;
  varargout_1.set_size(&oh_emlrtRTEI, &c_st, ((k + acoef) + input_sizes_idx_0) +
                       csz_idx_0, bcoef);
  for (i = 0; i < bcoef; i++) {
    for (i1 = 0; i1 < k; i1++) {
      varargout_1[i1 + varargout_1.size(0) * i] = Kpxy1[i1 + k * i];
    }

    for (i1 = 0; i1 < acoef; i1++) {
      varargout_1[(i1 + k) + varargout_1.size(0) * i] = Kpxy2[i1 + acoef * i];
    }

    for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
      varargout_1[((i1 + k) + acoef) + varargout_1.size(0) * i] = dr[i1 +
        input_sizes_idx_0 * i];
    }

    for (i1 = 0; i1 < csz_idx_0; i1++) {
      varargout_1[(((i1 + k) + acoef) + input_sizes_idx_0) + varargout_1.size(0)
        * i] = Kpxy4[i1 + csz_idx_0 * i];
    }
  }

  b_input_sizes_idx_0 = nbr.size(0) * nbr.size(1);
  for (i = 0; i < b_input_sizes_idx_0; i++) {
    varargin_1 = nbr[i];
    if (varargin_1 != static_cast<int32_T>(muDoubleScalarFloor(varargin_1))) {
      emlrtIntegerCheckR2012b(varargin_1, &tb_emlrtDCI, &st);
    }

    if ((static_cast<int32_T>(varargin_1) < 1) || (static_cast<int32_T>
         (varargin_1) > 8000)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(varargin_1), 1, 8000,
        &gf_emlrtBCI, &st);
    }
  }

  b_st.site = &jh_emlrtRSI;
  c_st.site = &pe_emlrtRSI;
  dist.set_size(&ph_emlrtRTEI, &c_st, 1, b_input_sizes_idx_0);
  for (i = 0; i < b_input_sizes_idx_0; i++) {
    varargin_1 = x[3 * (static_cast<int32_T>(nbr[i]) - 1)] - ctr[0];
    dist[i] = muDoubleScalarPower(varargin_1, 2.0);
  }

  b_st.site = &jh_emlrtRSI;
  c_st.site = &pe_emlrtRSI;
  r2.set_size(&qh_emlrtRTEI, &c_st, 1, b_input_sizes_idx_0);
  for (i = 0; i < b_input_sizes_idx_0; i++) {
    varargin_1 = x[3 * (static_cast<int32_T>(nbr[i]) - 1) + 1] - ctr[1];
    r2[i] = muDoubleScalarPower(varargin_1, 2.0);
  }

  if (dist.size(1) == r2.size(1)) {
    input_sizes_idx_0 = dist.size(1) - 1;
    dist.set_size(&ph_emlrtRTEI, &st, 1, dist.size(1));
    bcoef = (dist.size(1) / 2) << 1;
    acoef = bcoef - 2;
    for (i = 0; i <= acoef; i += 2) {
      r = _mm_loadu_pd(&dist[i]);
      r1 = _mm_loadu_pd(&r2[i]);
      _mm_storeu_pd(&dist[i], _mm_add_pd(r, r1));
    }

    for (i = bcoef; i <= input_sizes_idx_0; i++) {
      dist[i] = dist[i] + r2[i];
    }
  } else {
    b_st.site = &jh_emlrtRSI;
    b_plus(b_st, dist, r2);
  }

  b_st.site = &jh_emlrtRSI;
  c_st.site = &pe_emlrtRSI;
  r2.set_size(&rh_emlrtRTEI, &c_st, 1, b_input_sizes_idx_0);
  for (i = 0; i < b_input_sizes_idx_0; i++) {
    varargin_1 = x[3 * (static_cast<int32_T>(nbr[i]) - 1) + 2] - ctr[2];
    r2[i] = muDoubleScalarPower(varargin_1, 2.0);
  }

  if ((dist.size(1) != b_input_sizes_idx_0) && ((dist.size(1) != 1) &&
       (b_input_sizes_idx_0 != 1))) {
    emlrtDimSizeImpxCheckR2021b(dist.size(1), b_input_sizes_idx_0, &pb_emlrtECI,
      &st);
  }

  if (dist.size(1) == r2.size(1)) {
    input_sizes_idx_0 = dist.size(1) - 1;
    dist.set_size(&sh_emlrtRTEI, &st, 1, dist.size(1));
    bcoef = (dist.size(1) / 2) << 1;
    acoef = bcoef - 2;
    for (i = 0; i <= acoef; i += 2) {
      r = _mm_loadu_pd(&dist[i]);
      r1 = _mm_loadu_pd(&r2[i]);
      _mm_storeu_pd(&dist[i], _mm_add_pd(r, r1));
    }

    for (i = bcoef; i <= input_sizes_idx_0; i++) {
      dist[i] = dist[i] + r2[i];
    }
  } else {
    b_plus(st, dist, r2);
  }

  b_st.site = &jh_emlrtRSI;
  coder::b_sqrt(b_st, dist);
  input_sizes_idx_0 = dist.size(1);
  r3.set_size(&th_emlrtRTEI, &st, 1, dist.size(1));
  for (i = 0; i < input_sizes_idx_0; i++) {
    r3[i] = (dist[i] / l < 1.5);
  }

  int32_T iv[2];
  int32_T iv1[2];
  iv[0] = (*(int32_T (*)[2])((coder::array<real_T, 2U> *)&nbr)->size())[0];
  iv[1] = (*(int32_T (*)[2])((coder::array<real_T, 2U> *)&nbr)->size())[1];
  iv1[0] = (*(int32_T (*)[2])r3.size())[0];
  iv1[1] = (*(int32_T (*)[2])r3.size())[1];
  b_st.site = &kh_emlrtRSI;
  coder::internal::indexShapeCheck(b_st, iv, iv1);
  acoef = r3.size(1) - 1;
  bcoef = 0;
  for (input_sizes_idx_0 = 0; input_sizes_idx_0 <= acoef; input_sizes_idx_0++) {
    if (r3[input_sizes_idx_0]) {
      bcoef++;
    }
  }

  varargout_2.set_size(&uh_emlrtRTEI, &st, 1, bcoef);
  bcoef = 0;
  for (input_sizes_idx_0 = 0; input_sizes_idx_0 <= acoef; input_sizes_idx_0++) {
    if (r3[input_sizes_idx_0]) {
      if (input_sizes_idx_0 > b_input_sizes_idx_0 - 1) {
        emlrtDynamicBoundsCheckR2012b(input_sizes_idx_0, 0, b_input_sizes_idx_0
          - 1, &hf_emlrtBCI, &st);
      }

      varargout_2[bcoef] = static_cast<int16_T>(nbr[input_sizes_idx_0]);
      bcoef++;
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void plus(const emlrtStack &sp, coder::array<real_T, 2U> &in1, const coder::
          array<real_T, 2U> &in2)
{
  coder::array<real_T, 2U> b_in1;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }

  if (in2.size(1) == 1) {
    b_loop_ub = in1.size(1);
  } else {
    b_loop_ub = in2.size(1);
  }

  b_in1.set_size(&gp_emlrtRTEI, &sp, loop_ub, b_loop_ub);
  stride_0_0 = (in1.size(0) != 1);
  stride_0_1 = (in1.size(1) != 1);
  stride_1_0 = (in2.size(0) != 1);
  stride_1_1 = (in2.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      b_in1[i1 + b_in1.size(0) * i] = in1[i1 * stride_0_0 + in1.size(0) *
        aux_0_1] + in2[i1 * stride_1_0 + in2.size(0) * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  in1.set_size(&gp_emlrtRTEI, &sp, loop_ub, b_loop_ub);
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] = b_in1[i1 + b_in1.size(0) * i];
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void srskelf_asym_new(srskelf_asym_newStackData *SD, const emlrtStack *sp,
                      real_T A_func_id, const real_T x[24000], real_T occ,
                      real_T rank_or_tol, real_T pxyfun_func_id, const struct0_T
                      *opts, struct1_T *F)
{
  static const char_T cv4[82]{ '-', '-', '-', '-', '-', '-', '-', '-', '-', '-',
    '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-',
    '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-',
    '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-',
    '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-',
    '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '\\', 'n' };

  static const char_T cv7[52]{ '%', '3', 'd', ' ', '|', ' ', '%', '6', 'd', ' ',
    '|', ' ', '%', '8', 'd', ' ', '|', ' ', '%', '8', 'd', ' ', '|', ' ', '%',
    '8', '.', '2', 'f', ' ', '|', ' ', '%', '8', '.', '2', 'f', ' ', '|', ' ',
    '%', '1', '0', '.', '2', 'e', ' ', '(', 's', ')', '\\', 'n' };

  static const char_T cv5[46]{ '%', '3', 's', ' ', '|', ' ', '%', '6', 's', ' ',
    '|', ' ', '%', '8', 's', ' ', '|', ' ', '%', '8', 's', ' ', '|', ' ', '%',
    '8', 's', ' ', '|', ' ', '%', '8', 's', ' ', '|', ' ', '%', '1', '0', 's',
    ' ', '(', 's', ')', '\\', 'n' };

  static const char_T b_cv[43]{ 'T', 'h', 'i', 's', ' ', 'i', 's', ' ', 's', 't',
    'a', 'n', 'd', 'a', 'r', 'd', ' ', 'a', 's', 'y', 'm', 'm', 'e', 't', 'r',
    'i', 'c', ' ', 's', 'r', 's', 'k', 'e', 'l', 'f', ' ', '(', 'R', 'S', '-',
    'S', ')', '.' };

  static const char_T b_cv2[38]{ 'S', 'y', 'm', 'm', 'e', 't', 'r', 'y', ' ',
    'p', 'a', 'r', 'a', 'm', 'e', 't', 'e', 'r', ' ', 'm', 'u', 's', 't', ' ',
    'b', 'e', ' ', '\'', 'p', '\'', ' ', 'o', 'r', ' ', '\'', 'n', '\'', '.' };

  static const char_T b_cv1[28]{ 'R', 'S', 'S', ':', 's', 'r', 's', 'k', 'e',
    'l', 'f', '_', 'a', 's', 'y', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'S', 'y', 'm', 'm' };

  static const char_T cv6[18]{ '%', '3', 's', ' ', '|', ' ', '%', '6', '3', '.',
    '2', 'e', ' ', '(', 's', ')', '\\', 'n' };

  static const char_T varargin_6[8]{ 'o', 'u', 't', 'R', 'a', 't', 'i', 'o' };

  static const char_T cv3[7]{ 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  static const char_T varargin_4[7]{ 'n', 'R', 'e', 'm', 'O', 'u', 't' };

  static const char_T varargin_5[7]{ 'i', 'n', 'R', 'a', 't', 'i', 'o' };

  static const char_T varargin_3[6]{ 'n', 'R', 'e', 'm', 'I', 'n' };

  static const char_T varargin_2[4]{ 'n', 'b', 'l', 'k' };

  static const char_T varargin_7[4]{ 't', 'i', 'm', 'e' };

  static const char_T varargin_1[3]{ 'l', 'v', 'l' };

  coder::b_captured_var t;
  coder::c_captured_var c_i;
  coder::c_captured_var nbox;
  coder::c_captured_var nlst;
  coder::c_captured_var nnbr;
  coder::c_captured_var nslf;
  coder::d_captured_var b_F;
  coder::e_captured_var lookup_list;
  coder::f_captured_var lst;
  coder::f_captured_var nbr;
  coder::f_captured_var slf;
  coder::array<c_struct_T, 1U> t2_nodes;
  coder::array<struct_T, 1U> b_t;
  coder::array<real_T, 2U> C;
  coder::array<real_T, 2U> D;
  coder::array<real_T, 2U> G;
  coder::array<real_T, 2U> K;
  coder::array<real_T, 2U> K1;
  coder::array<real_T, 2U> K2;
  coder::array<real_T, 2U> K3;
  coder::array<real_T, 2U> Kpxy;
  coder::array<real_T, 2U> L;
  coder::array<real_T, 2U> T;
  coder::array<real_T, 2U> b;
  coder::array<real_T, 2U> b_K1;
  coder::array<real_T, 2U> b_sk;
  coder::array<real_T, 2U> proxy;
  coder::array<real_T, 2U> sk;
  coder::array<real_T, 2U> xi_combined;
  coder::array<real_T, 1U> r2;
  coder::array<int32_T, 1U> pblk;
  coder::array<int32_T, 1U> r3;
  coder::array<int16_T, 2U> r4;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  emlrtTimespec savedTime;
  real_T d;
  real_T l;
  real_T start_tv_nsec;
  real_T start_tv_sec;
  real_T total_size;
  int32_T sizes[2];
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T loop_ub;
  int32_T q0;
  uint32_T n;
  boolean_T b_rem[8000];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = sp;
  c_st.tls = sp->tls;
  d_st.prev = sp;
  d_st.tls = sp->tls;
  e_st.prev = &b_st;
  e_st.tls = b_st.tls;
  f_st.prev = &b_st;
  f_st.tls = b_st.tls;
  g_st.prev = &b_st;
  g_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &emlrtRSI;
  b_st.site = &pc_emlrtRSI;
  SD->f1.opts.contents = *opts;
  st.site = &emlrtRSI;
  b_st.site = &pc_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &pc_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &pc_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &pc_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &pc_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &pc_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &pc_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &pc_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &pc_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &pc_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &pc_emlrtRSI;
  st.site = &b_emlrtRSI;
  savedTime = coder::tic(st);
  start_tv_sec = savedTime.tv_sec;
  start_tv_nsec = savedTime.tv_nsec;
  st.site = &c_emlrtRSI;
  if (muDoubleScalarIsNaN(opts->verb)) {
    emlrtErrorWithMessageIdR2018a(&st, &n_emlrtRTEI, "MATLAB:nologicalnan",
      "MATLAB:nologicalnan", 0);
  }

  if (opts->verb != 0.0) {
    st.site = &cr_emlrtRSI;
    disp(st, emlrt_marshallOut(st, b_cv), emlrtMCI);
  }

  st.site = &d_emlrtRSI;
  if ((!coder::internal::b_strcmp(st, opts->symm)) && (!coder::internal::
       c_strcmp(st, opts->symm))) {
    st.site = &d_emlrtRSI;
    c_st.site = &dr_emlrtRSI;
    d_st.site = &gr_emlrtRSI;
    b_error(st, b_emlrt_marshallOut(c_st, b_cv1), c_emlrt_marshallOut(d_st,
             b_cv2), b_emlrtMCI);
  }

  //  Dispatch function handles based on identifiers
  if (A_func_id != static_cast<int32_T>(muDoubleScalarFloor(A_func_id))) {
    emlrtIntegerCheckR2012b(A_func_id, &q_emlrtDCI, (emlrtConstCTX)sp);
  }

  if (static_cast<int32_T>(A_func_id) != 1) {
    st.site = &e_emlrtRSI;
    coder::c_error(st);
  }

  if (pxyfun_func_id != static_cast<int32_T>(muDoubleScalarFloor(pxyfun_func_id)))
  {
    emlrtIntegerCheckR2012b(pxyfun_func_id, &r_emlrtDCI, (emlrtConstCTX)sp);
  }

  if (static_cast<int32_T>(pxyfun_func_id) == 1) {
    SD->f1.pxyfun.workspace.opts = *opts;
  } else {
    st.site = &f_emlrtRSI;
    coder::d_error(st);
  }

  //  Build tree to hold the discretization points
  st.site = &g_emlrtRSI;
  coder::tic(st, savedTime);
  st.site = &h_emlrtRSI;
  l = b_shypoct(SD, st, x, occ, opts->lvlmax, t2_nodes, xi_combined, total_size);
  st.site = &h_emlrtRSI;
  t.contents.nlvl = cast(st, t2_nodes, xi_combined, l, total_size,
    t.contents.nodes, t.contents.lvp, t.contents.lrt);
  st.site = &i_emlrtRSI;
  if (opts->verb != 0.0) {
    st.site = &j_emlrtRSI;
    b_st.site = &hf_emlrtRSI;
    e_st.site = &ir_emlrtRSI;
    f_st.site = &kr_emlrtRSI;
    l = emlrt_marshallIn(e_st, feval(e_st, g_emlrt_marshallOut(e_st, cv3),
      emlrt_marshallOut(static_cast<real_T>(1.0)), h_emlrt_marshallOut(f_st, cv4),
      f_emlrtMCI), "<output of feval>");
    emlrtDisplayR2012b(emlrt_marshallOut(l), "ans", &emlrtRTEI, (emlrtCTX)sp);
    st.site = &k_emlrtRSI;
    b_st.site = &if_emlrtRSI;
    e_st.site = &ir_emlrtRSI;
    f_st.site = &kr_emlrtRSI;
    g_st.site = &jr_emlrtRSI;
    l = emlrt_marshallIn(e_st, feval(e_st, g_emlrt_marshallOut(e_st, cv3),
      emlrt_marshallOut(static_cast<real_T>(1.0)), i_emlrt_marshallOut(f_st, cv5),
      j_emlrt_marshallOut(g_st, varargin_1), k_emlrt_marshallOut(g_st,
      varargin_2), l_emlrt_marshallOut(g_st, varargin_3), g_emlrt_marshallOut
      (g_st, varargin_4), g_emlrt_marshallOut(g_st, varargin_5),
      m_emlrt_marshallOut(g_st, varargin_6), k_emlrt_marshallOut(g_st,
      varargin_7), f_emlrtMCI), "<output of feval>");
    emlrtDisplayR2012b(emlrt_marshallOut(l), "ans", &b_emlrtRTEI, (emlrtCTX)sp);

    //  Print summary information about tree construction
    st.site = &l_emlrtRSI;
    b_st.site = &hf_emlrtRSI;
    e_st.site = &ir_emlrtRSI;
    f_st.site = &kr_emlrtRSI;
    l = emlrt_marshallIn(e_st, feval(e_st, g_emlrt_marshallOut(e_st, cv3),
      emlrt_marshallOut(static_cast<real_T>(1.0)), h_emlrt_marshallOut(f_st, cv4),
      f_emlrtMCI), "<output of feval>");
    emlrtDisplayR2012b(emlrt_marshallOut(l), "ans", &c_emlrtRTEI, (emlrtCTX)sp);
    st.site = &m_emlrtRSI;
    b_st.site = &m_emlrtRSI;
    l = coder::toc(b_st, savedTime);
    b_st.site = &if_emlrtRSI;
    e_st.site = &ir_emlrtRSI;
    f_st.site = &kr_emlrtRSI;
    g_st.site = &jr_emlrtRSI;
    l = emlrt_marshallIn(e_st, feval(e_st, g_emlrt_marshallOut(e_st, cv3),
      emlrt_marshallOut(static_cast<real_T>(1.0)), n_emlrt_marshallOut(f_st, cv6),
      emlrt_marshallOut(g_st), emlrt_marshallOut(l), f_emlrtMCI),
                         "<output of feval>");
    emlrtDisplayR2012b(emlrt_marshallOut(l), "ans", &d_emlrtRTEI, (emlrtCTX)sp);

    //  Count the nonempty boxes at each level
    if (!(t.contents.nlvl + 1.0 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(t.contents.nlvl + 1.0, &db_emlrtDCI,
        (emlrtConstCTX)sp);
    }

    d = static_cast<int32_T>(muDoubleScalarFloor(t.contents.nlvl + 1.0));
    if (t.contents.nlvl + 1.0 != d) {
      emlrtIntegerCheckR2012b(t.contents.nlvl + 1.0, &cb_emlrtDCI,
        (emlrtConstCTX)sp);
    }

    pblk.set_size(&lc_emlrtRTEI, sp, static_cast<int32_T>(t.contents.nlvl + 1.0));
    if (t.contents.nlvl + 1.0 != d) {
      emlrtIntegerCheckR2012b(t.contents.nlvl + 1.0, &cb_emlrtDCI,
        (emlrtConstCTX)sp);
    }

    loop_ub = static_cast<int32_T>(t.contents.nlvl + 1.0);
    for (i = 0; i < loop_ub; i++) {
      pblk[i] = 0;
    }

    i = static_cast<int32_T>(t.contents.nlvl);
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, t.contents.nlvl, mxDOUBLE_CLASS,
      static_cast<int32_T>(t.contents.nlvl), &g_emlrtRTEI, (emlrtConstCTX)sp);
    for (int32_T lvl{0}; lvl < i; lvl++) {
      if ((static_cast<int32_T>(static_cast<uint32_T>(lvl) + 1U) < 1) || (
           static_cast<int32_T>(static_cast<uint32_T>(lvl) + 1U) > pblk.size(0)))
      {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
          (lvl) + 1U), 1, pblk.size(0), &pb_emlrtBCI, (emlrtConstCTX)sp);
      }

      if ((static_cast<int32_T>(static_cast<uint32_T>(lvl) + 2U) < 1) || (
           static_cast<int32_T>(static_cast<uint32_T>(lvl) + 2U) > pblk.size(0)))
      {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
          (lvl) + 2U), 1, pblk.size(0), &qb_emlrtBCI, (emlrtConstCTX)sp);
      }

      pblk[lvl + 1] = pblk[lvl];
      if ((lvl + 1 < 1) || (lvl + 1 > t.contents.lvp.size(1))) {
        emlrtDynamicBoundsCheckR2012b(lvl + 1, 1, t.contents.lvp.size(1),
          &emlrtBCI, (emlrtConstCTX)sp);
      }

      if ((static_cast<int32_T>((static_cast<real_T>(lvl) + 1.0) + 1.0) < 1) ||
          (static_cast<int32_T>((static_cast<real_T>(lvl) + 1.0) + 1.0) >
           t.contents.lvp.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((static_cast<real_T>
          (lvl) + 1.0) + 1.0), 1, t.contents.lvp.size(1), &b_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      d = t.contents.lvp[lvl + 1];
      i1 = static_cast<int32_T>(d + (1.0 - (t.contents.lvp[lvl] + 1.0)));
      emlrtForLoopVectorCheckR2021a(t.contents.lvp[lvl] + 1.0, 1.0, d,
        mxDOUBLE_CLASS, i1, &h_emlrtRTEI, (emlrtConstCTX)sp);
      for (int32_T b_i{0}; b_i < i1; b_i++) {
        d = (t.contents.lvp[lvl] + 1.0) + static_cast<real_T>(b_i);
        i2 = static_cast<int32_T>(muDoubleScalarFloor(d));
        if (d != i2) {
          emlrtIntegerCheckR2012b(d, &mb_emlrtDCI, (emlrtConstCTX)sp);
        }

        i3 = static_cast<int32_T>(d);
        if ((d < 1.0) || (i3 > t.contents.nodes.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
            t.contents.nodes.size(0), &hd_emlrtBCI, (emlrtConstCTX)sp);
        }

        if (i3 != i2) {
          emlrtIntegerCheckR2012b(d, &mb_emlrtDCI, (emlrtConstCTX)sp);
        }

        if ((d < 1.0) || (i3 > t.contents.nodes.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
            t.contents.nodes.size(0), &hd_emlrtBCI, (emlrtConstCTX)sp);
        }

        if (t.contents.nodes[static_cast<int32_T>(d) - 1].xi.size(1) != 0) {
          if ((static_cast<int32_T>(static_cast<uint32_T>(lvl) + 2U) < 1) || (
               static_cast<int32_T>(static_cast<uint32_T>(lvl) + 2U) > pblk.size
               (0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
              (static_cast<uint32_T>(lvl) + 2U), 1, pblk.size(0), &sb_emlrtBCI,
              (emlrtConstCTX)sp);
          }

          q0 = pblk[lvl + 1];
          if (q0 > 2147483646) {
            q0 = MAX_int32_T;
          } else {
            q0++;
          }

          pblk[lvl + 1] = q0;
        }

        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
  } else {
    if (!(t.contents.nlvl + 1.0 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(t.contents.nlvl + 1.0, &x_emlrtDCI,
        (emlrtConstCTX)sp);
    }

    d = static_cast<int32_T>(muDoubleScalarFloor(t.contents.nlvl + 1.0));
    if (t.contents.nlvl + 1.0 != d) {
      emlrtIntegerCheckR2012b(t.contents.nlvl + 1.0, &w_emlrtDCI, (emlrtConstCTX)
        sp);
    }

    pblk.set_size(&kc_emlrtRTEI, sp, static_cast<int32_T>(t.contents.nlvl + 1.0));
    if (t.contents.nlvl + 1.0 != d) {
      emlrtIntegerCheckR2012b(t.contents.nlvl + 1.0, &w_emlrtDCI, (emlrtConstCTX)
        sp);
    }

    loop_ub = static_cast<int32_T>(t.contents.nlvl + 1.0);
    for (i = 0; i < loop_ub; i++) {
      pblk[i] = 0;
    }

    //  Initialize pblk to avoid undefined variable error
  }

  //  Initialize the data structure holding the factorization
  i = t.contents.lvp.size(1);
  if (t.contents.lvp.size(1) < 1) {
    emlrtDynamicBoundsCheckR2012b(t.contents.lvp.size(1), 1, t.contents.lvp.size
      (1), &ob_emlrtBCI, (emlrtConstCTX)sp);
  }

  l = t.contents.lvp[t.contents.lvp.size(1) - 1];
  nbox.contents = l;
  st.site = &n_emlrtRSI;
  coder::repmat(st, l, b_F.contents.factors);
  b_F.contents.N = 8000.0;
  b_F.contents.nlvl = t.contents.nlvl;
  if (!(t.contents.nlvl + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(t.contents.nlvl + 1.0, &t_emlrtDCI,
      (emlrtConstCTX)sp);
  }

  d = static_cast<int32_T>(muDoubleScalarFloor(t.contents.nlvl + 1.0));
  if (t.contents.nlvl + 1.0 != d) {
    emlrtIntegerCheckR2012b(t.contents.nlvl + 1.0, &s_emlrtDCI, (emlrtConstCTX)
      sp);
  }

  b_F.contents.lvp.set_size(&mc_emlrtRTEI, sp, 1, static_cast<int32_T>
    (t.contents.nlvl + 1.0));
  if (t.contents.nlvl + 1.0 != d) {
    emlrtIntegerCheckR2012b(t.contents.nlvl + 1.0, &y_emlrtDCI, (emlrtConstCTX)
      sp);
  }

  loop_ub = static_cast<int32_T>(t.contents.nlvl + 1.0);
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_F.contents.lvp[i1] = 0;
  }

  b_F.contents.symm = opts->symm;
  n = 0U;

  //  Mark every DOF as "remaining", i.e., not yet eliminated
  for (int32_T b_i{0}; b_i < 8000; b_i++) {
    b_rem[b_i] = true;
  }

  if (!(l >= 0.0)) {
    emlrtNonNegativeCheckR2012b(l, &bb_emlrtDCI, (emlrtConstCTX)sp);
  }

  d = static_cast<int32_T>(muDoubleScalarFloor(l));
  if (l != d) {
    emlrtIntegerCheckR2012b(l, &ab_emlrtDCI, (emlrtConstCTX)sp);
  }

  lookup_list.contents.set_size(&nc_emlrtRTEI, sp, static_cast<int32_T>(l));
  if (l != d) {
    emlrtIntegerCheckR2012b(l, &ab_emlrtDCI, (emlrtConstCTX)sp);
  }

  loop_ub = static_cast<int32_T>(l);
  for (i1 = 0; i1 < loop_ub; i1++) {
    lookup_list.contents[i1] = 0;
  }

  st.site = &o_emlrtRSI;
  coder::rng(st);

  //  Loop over the levels of the tree from bottom to top
  i1 = static_cast<int32_T>(-((-1.0 - t.contents.nlvl) + 1.0));
  emlrtForLoopVectorCheckR2021a(t.contents.nlvl, -1.0, 1.0, mxDOUBLE_CLASS,
    static_cast<int32_T>(-((-1.0 - t.contents.nlvl) + 1.0)), &i_emlrtRTEI,
    (emlrtConstCTX)sp);
  for (int32_T lvl{0}; lvl < i1; lvl++) {
    __m128d r;
    real_T b_lvl;
    real_T d1;
    real_T d2;
    int32_T b_loop_ub;
    int32_T i4;
    int32_T i5;
    int32_T i6;
    int32_T k;
    int32_T loop_ub_tmp;
    int32_T nz_tmp;
    b_lvl = t.contents.nlvl - static_cast<real_T>(lvl);
    st.site = &p_emlrtRSI;
    savedTime = coder::tic(st);
    nz_tmp = b_rem[0];
    for (k = 0; k < 7999; k++) {
      nz_tmp += b_rem[k + 1];
    }

    //  For each box, pull up information about skeletons from child boxes
    if (b_lvl != static_cast<int32_T>(muDoubleScalarFloor(b_lvl))) {
      emlrtIntegerCheckR2012b(b_lvl, &eb_emlrtDCI, (emlrtConstCTX)sp);
    }

    if ((static_cast<int32_T>(b_lvl) < 1) || (static_cast<int32_T>(b_lvl) > i))
    {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_lvl), 1, i,
        &rb_emlrtBCI, (emlrtConstCTX)sp);
    }

    d = t.contents.lvp[static_cast<int32_T>(b_lvl) - 1] + 1.0;
    if ((static_cast<int32_T>(b_lvl + 1.0) < 1) || (static_cast<int32_T>(b_lvl +
          1.0) > i)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_lvl + 1.0), 1, i,
        &c_emlrtBCI, (emlrtConstCTX)sp);
    }

    d1 = t.contents.lvp[static_cast<int32_T>(b_lvl) - 1];
    d2 = t.contents.lvp[static_cast<int32_T>(b_lvl)];
    i2 = static_cast<int32_T>(d2 + (1.0 - (d1 + 1.0)));
    emlrtForLoopVectorCheckR2021a(d1 + 1.0, 1.0, d2, mxDOUBLE_CLASS, i2,
      &j_emlrtRTEI, (emlrtConstCTX)sp);
    for (int32_T b_i{0}; b_i < i2; b_i++) {
      real_T offset;
      c_i.contents = d + static_cast<real_T>(b_i);

      //  Preallocate xi_combined
      i3 = static_cast<int32_T>(muDoubleScalarFloor(c_i.contents));
      if (c_i.contents != i3) {
        emlrtIntegerCheckR2012b(c_i.contents, &emlrtDCI, (emlrtConstCTX)sp);
      }

      i4 = t.contents.nodes.size(0);
      i5 = static_cast<int32_T>(c_i.contents);
      if ((c_i.contents < 1.0) || (i5 > t.contents.nodes.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i.contents), 1,
          t.contents.nodes.size(0), &d_emlrtBCI, (emlrtConstCTX)sp);
      }

      q0 = t.contents.nodes[static_cast<int32_T>(c_i.contents) - 1].xi.size(1);
      total_size = q0;
      if (i5 != i3) {
        emlrtIntegerCheckR2012b(c_i.contents, &b_emlrtDCI, (emlrtConstCTX)sp);
      }

      if ((c_i.contents < 1.0) || (i5 > t.contents.nodes.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i.contents), 1,
          t.contents.nodes.size(0), &e_emlrtBCI, (emlrtConstCTX)sp);
      }

      i6 = t.contents.nodes[static_cast<int32_T>(c_i.contents) - 1].chld.size(1);
      for (k = 0; k < i6; k++) {
        if (i5 != i3) {
          emlrtIntegerCheckR2012b(c_i.contents, &c_emlrtDCI, (emlrtConstCTX)sp);
        }

        if ((i5 < 1) || (i5 > i4)) {
          emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &f_emlrtBCI, (emlrtConstCTX)
            sp);
        }

        if (k + 1 > i6) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, i6, &tb_emlrtBCI,
            (emlrtConstCTX)sp);
        }

        l = t.contents.nodes[i5 - 1].chld[k];
        if (l != static_cast<int32_T>(muDoubleScalarFloor(l))) {
          emlrtIntegerCheckR2012b(l, &d_emlrtDCI, (emlrtConstCTX)sp);
        }

        if ((static_cast<int32_T>(l) < 1) || (static_cast<int32_T>(l) > i4)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(l), 1, i4,
            &g_emlrtBCI, (emlrtConstCTX)sp);
        }

        total_size += static_cast<real_T>(t.contents.nodes[static_cast<int32_T>
          (t.contents.nodes[static_cast<int32_T>(c_i.contents) - 1].chld[k]) - 1]
          .xi.size(1));
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }

      if (total_size != static_cast<int32_T>(total_size)) {
        emlrtIntegerCheckR2012b(total_size, &u_emlrtDCI, (emlrtConstCTX)sp);
      }

      loop_ub = static_cast<int32_T>(total_size);
      xi_combined.set_size(&oc_emlrtRTEI, sp, 1, static_cast<int32_T>(total_size));
      if (total_size != static_cast<int32_T>(total_size)) {
        emlrtIntegerCheckR2012b(total_size, &fb_emlrtDCI, (emlrtConstCTX)sp);
      }

      for (loop_ub_tmp = 0; loop_ub_tmp < loop_ub; loop_ub_tmp++) {
        xi_combined[loop_ub_tmp] = 0.0;
      }

      //  Preallocate xi_combined
      if (i5 != i3) {
        emlrtIntegerCheckR2012b(c_i.contents, &j_emlrtDCI, (emlrtConstCTX)sp);
      }

      if ((c_i.contents < 1.0) || (i5 > t.contents.nodes.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i.contents), 1,
          t.contents.nodes.size(0), &n_emlrtBCI, (emlrtConstCTX)sp);
      }

      if (q0 < 1) {
        loop_ub_tmp = 0;
      } else {
        if (static_cast<int32_T>(total_size) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, static_cast<int32_T>(total_size),
            &o_emlrtBCI, (emlrtConstCTX)sp);
        }

        if (q0 > static_cast<int32_T>(total_size)) {
          emlrtDynamicBoundsCheckR2012b(q0, 1, static_cast<int32_T>(total_size),
            &p_emlrtBCI, (emlrtConstCTX)sp);
        }

        loop_ub_tmp = q0;
      }

      if (i5 != i3) {
        emlrtIntegerCheckR2012b(c_i.contents, &e_emlrtDCI, (emlrtConstCTX)sp);
      }

      if ((c_i.contents < 1.0) || (i5 > t.contents.nodes.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i.contents), 1,
          t.contents.nodes.size(0), &h_emlrtBCI, (emlrtConstCTX)sp);
      }

      if (loop_ub_tmp != q0) {
        emlrtSubAssignSizeCheck1dR2017a(loop_ub_tmp, q0, &emlrtECI,
          (emlrtConstCTX)sp);
      }

      for (loop_ub_tmp = 0; loop_ub_tmp < q0; loop_ub_tmp++) {
        xi_combined[loop_ub_tmp] = t.contents.nodes[static_cast<int32_T>
          (c_i.contents) - 1].xi[loop_ub_tmp];
      }

      //  Concatenate xi fields
      if (i5 != i3) {
        emlrtIntegerCheckR2012b(c_i.contents, &f_emlrtDCI, (emlrtConstCTX)sp);
      }

      if ((c_i.contents < 1.0) || (i5 > t.contents.nodes.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i.contents), 1,
          t.contents.nodes.size(0), &i_emlrtBCI, (emlrtConstCTX)sp);
      }

      offset = q0;
      if (i5 != i3) {
        emlrtIntegerCheckR2012b(c_i.contents, &g_emlrtDCI, (emlrtConstCTX)sp);
      }

      if ((c_i.contents < 1.0) || (i5 > t.contents.nodes.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i.contents), 1,
          t.contents.nodes.size(0), &j_emlrtBCI, (emlrtConstCTX)sp);
      }

      for (k = 0; k < i6; k++) {
        if (i5 != i3) {
          emlrtIntegerCheckR2012b(c_i.contents, &h_emlrtDCI, (emlrtConstCTX)sp);
        }

        if ((i5 < 1) || (i5 > i4)) {
          emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &k_emlrtBCI, (emlrtConstCTX)
            sp);
        }

        if (k + 1 > i6) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, i6, &l_emlrtBCI,
            (emlrtConstCTX)sp);
        }

        l = t.contents.nodes[static_cast<int32_T>(c_i.contents) - 1].chld[k];
        if (l != static_cast<int32_T>(muDoubleScalarFloor(l))) {
          emlrtIntegerCheckR2012b(l, &i_emlrtDCI, (emlrtConstCTX)sp);
        }

        if ((static_cast<int32_T>(l) < 1) || (static_cast<int32_T>(l) > i4)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(l), 1, i4,
            &m_emlrtBCI, (emlrtConstCTX)sp);
        }

        b_loop_ub = t.contents.nodes[static_cast<int32_T>(t.contents.nodes[
          static_cast<int32_T>(c_i.contents) - 1].chld[k]) - 1].xi.size(1);
        l = offset + static_cast<real_T>(b_loop_ub);
        if (offset + 1.0 > l) {
          loop_ub_tmp = 0;
          q0 = 0;
        } else {
          if ((static_cast<int32_T>(offset + 1.0) < 1) || (static_cast<int32_T>
               (offset + 1.0) > static_cast<int32_T>(total_size))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(offset + 1.0), 1,
              static_cast<int32_T>(total_size), &q_emlrtBCI, (emlrtConstCTX)sp);
          }

          loop_ub_tmp = static_cast<int32_T>(offset + 1.0) - 1;
          if ((static_cast<int32_T>(l) < 1) || (static_cast<int32_T>(l) >
               static_cast<int32_T>(total_size))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(l), 1,
              static_cast<int32_T>(total_size), &r_emlrtBCI, (emlrtConstCTX)sp);
          }

          q0 = static_cast<int32_T>(l);
        }

        q0 -= loop_ub_tmp;
        if (q0 != b_loop_ub) {
          emlrtSubAssignSizeCheck1dR2017a(q0, b_loop_ub, &b_emlrtECI,
            (emlrtConstCTX)sp);
        }

        for (q0 = 0; q0 < b_loop_ub; q0++) {
          xi_combined[loop_ub_tmp + q0] = t.contents.nodes[static_cast<int32_T>
            (t.contents.nodes[static_cast<int32_T>(c_i.contents) - 1].chld[k]) -
            1].xi[q0];
        }

        offset = l;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }

      if (i5 != i3) {
        emlrtIntegerCheckR2012b(c_i.contents, &v_emlrtDCI, (emlrtConstCTX)sp);
      }

      if ((c_i.contents < 1.0) || (i5 > t.contents.nodes.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i.contents), 1,
          t.contents.nodes.size(0), &nb_emlrtBCI, (emlrtConstCTX)sp);
      }

      t.contents.nodes[static_cast<int32_T>(c_i.contents) - 1].xi.set_size
        (&pc_emlrtRTEI, sp, 1, t.contents.nodes[static_cast<int32_T>
         (c_i.contents) - 1].xi.size(1));
      if (i5 != i3) {
        emlrtIntegerCheckR2012b(c_i.contents, &v_emlrtDCI, (emlrtConstCTX)sp);
      }

      if ((c_i.contents < 1.0) || (i5 > t.contents.nodes.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i.contents), 1,
          t.contents.nodes.size(0), &nb_emlrtBCI, (emlrtConstCTX)sp);
      }

      t.contents.nodes[static_cast<int32_T>(c_i.contents) - 1].xi.set_size
        (&pc_emlrtRTEI, sp, t.contents.nodes[static_cast<int32_T>(c_i.contents)
         - 1].xi.size(0), static_cast<int32_T>(total_size));
      if (i5 != i3) {
        emlrtIntegerCheckR2012b(c_i.contents, &v_emlrtDCI, (emlrtConstCTX)sp);
      }

      if ((c_i.contents < 1.0) || (i5 > t.contents.nodes.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i.contents), 1,
          t.contents.nodes.size(0), &nb_emlrtBCI, (emlrtConstCTX)sp);
      }

      if (i5 != i3) {
        emlrtIntegerCheckR2012b(c_i.contents, &v_emlrtDCI, (emlrtConstCTX)sp);
      }

      if ((c_i.contents < 1.0) || (i5 > t.contents.nodes.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i.contents), 1,
          t.contents.nodes.size(0), &nb_emlrtBCI, (emlrtConstCTX)sp);
      }

      for (i6 = 0; i6 < loop_ub; i6++) {
        if (i5 != i3) {
          emlrtIntegerCheckR2012b(c_i.contents, &gb_emlrtDCI, (emlrtConstCTX)sp);
        }

        if ((i5 < 1) || (i5 > i4)) {
          emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &vb_emlrtBCI, (emlrtConstCTX)
            sp);
        }

        t.contents.nodes[i5 - 1].xi[i6] = xi_combined[i6];
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }

    st.site = &q_emlrtRSI;
    b_st.site = &oe_emlrtRSI;
    e_st.site = &pe_emlrtRSI;

    //  Directly set use_lproxy to true
    d = 1.0 / rank_or_tol;
    st.site = &r_emlrtRSI;
    if (d < 0.0) {
      emlrtErrorWithMessageIdR2018a(&st, &dc_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        3, "log");
    }

    d = muDoubleScalarLog(d);
    st.site = &s_emlrtRSI;
    total_size = muDoubleScalarMax(d / -0.54930614433405478, 3.0) + 1.0;
    b_st.site = &oe_emlrtRSI;
    e_st.site = &pe_emlrtRSI;
    st.site = &t_emlrtRSI;
    coder::randn(st, total_size * total_size, proxy);
    b.set_size(&qc_emlrtRTEI, sp, 3, proxy.size(1));
    loop_ub = 3 * proxy.size(1);
    for (i3 = 0; i3 < loop_ub; i3++) {
      total_size = proxy[i3];
      b[i3] = muDoubleScalarPower(total_size, 2.0);
    }

    st.site = &u_emlrtRSI;
    coder::sum(st, b, xi_combined);
    st.site = &u_emlrtRSI;
    coder::b_sqrt(st, xi_combined);
    st.site = &u_emlrtRSI;
    coder::bsxfun(st, proxy, xi_combined, b);
    proxy.set_size(&rc_emlrtRTEI, sp, 3, b.size(1));
    loop_ub = 3 * b.size(1);
    q0 = (loop_ub / 2) << 1;
    k = q0 - 2;
    for (i3 = 0; i3 <= k; i3 += 2) {
      r = _mm_loadu_pd(&b[i3]);
      _mm_storeu_pd(&proxy[i3], _mm_mul_pd(_mm_set1_pd(1.5), r));
    }

    for (i3 = q0; i3 < loop_ub; i3++) {
      proxy[i3] = 1.5 * b[i3];
    }

    //  Loop over each box in this level
    if ((static_cast<int32_T>(b_lvl) < 1) || (static_cast<int32_T>(b_lvl) > i))
    {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_lvl), 1, i,
        &ub_emlrtBCI, (emlrtConstCTX)sp);
    }

    emlrtForLoopVectorCheckR2021a(d1 + 1.0, 1.0, d2, mxDOUBLE_CLASS, i2,
      &k_emlrtRTEI, (emlrtConstCTX)sp);
    for (int32_T b_i{0}; b_i < i2; b_i++) {
      __m128d r1;
      int32_T nslf_tmp;
      boolean_T b_b;
      boolean_T empty_non_axis_sizes;
      c_i.contents = (d1 + 1.0) + static_cast<real_T>(b_i);
      i3 = static_cast<int32_T>(muDoubleScalarFloor(c_i.contents));
      if (c_i.contents != i3) {
        emlrtIntegerCheckR2012b(c_i.contents, &k_emlrtDCI, (emlrtConstCTX)sp);
      }

      i4 = t.contents.nodes.size(0);
      if ((c_i.contents < 1.0) || (static_cast<int32_T>(c_i.contents) >
           t.contents.nodes.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i.contents), 1,
          t.contents.nodes.size(0), &s_emlrtBCI, (emlrtConstCTX)sp);
      }

      if (static_cast<int32_T>(c_i.contents) != i3) {
        emlrtIntegerCheckR2012b(c_i.contents, &l_emlrtDCI, (emlrtConstCTX)sp);
      }

      if ((c_i.contents < 1.0) || (static_cast<int32_T>(c_i.contents) >
           t.contents.nodes.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i.contents), 1,
          t.contents.nodes.size(0), &t_emlrtBCI, (emlrtConstCTX)sp);
      }

      sizes[0] = (*(int32_T (*)[2])t.contents.nodes[static_cast<int32_T>
                  (c_i.contents) - 1].nbor.size())[0];
      sizes[1] = (*(int32_T (*)[2])t.contents.nodes[static_cast<int32_T>
                  (c_i.contents) - 1].nbor.size())[1];
      st.site = &v_emlrtRSI;
      coder::internal::indexShapeCheck(st, t.contents.nodes.size(0), sizes);
      loop_ub = t.contents.nodes[static_cast<int32_T>(c_i.contents) - 1].
        nbor.size(1);
      b_t.set_size(&sc_emlrtRTEI, sp, loop_ub);
      for (i5 = 0; i5 < loop_ub; i5++) {
        d = t.contents.nodes[static_cast<int32_T>(c_i.contents) - 1].nbor[i5];
        if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
          emlrtIntegerCheckR2012b(d, &hb_emlrtDCI, (emlrtConstCTX)sp);
        }

        if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > i4)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, i4,
            &xb_emlrtBCI, (emlrtConstCTX)sp);
        }

        b_t[i5] = t.contents.nodes[static_cast<int32_T>(d) - 1];
      }

      st.site = &v_emlrtRSI;
      coder::internal::c_horzcatStructList(st, b_t, xi_combined);
      nslf_tmp = t.contents.nodes[static_cast<int32_T>(c_i.contents) - 1].
        xi.size(1);
      nslf.contents = nslf_tmp;

      //  Sorting not necessary, but makes debugging easier
      st.site = &w_emlrtRSI;
      slf.contents.set_size(&tc_emlrtRTEI, &st, 1, nslf_tmp);
      for (i5 = 0; i5 < nslf_tmp; i5++) {
        slf.contents[i5] = t.contents.nodes[static_cast<int32_T>(c_i.contents) -
          1].xi[i5];
      }

      b_st.site = &wf_emlrtRSI;
      coder::internal::sort(b_st, slf.contents);
      if (xi_combined.size(1) == 0) {
        nnbr.contents = 0.0;
      } else {
        nnbr.contents = xi_combined.size(1);
      }

      //  Sorting not necessary, but makes debugging easier
      st.site = &x_emlrtRSI;
      loop_ub = xi_combined.size(1);
      nbr.contents.set_size(&uc_emlrtRTEI, &st, 1, xi_combined.size(1));
      for (i5 = 0; i5 < loop_ub; i5++) {
        nbr.contents[i5] = xi_combined[i5];
      }

      b_st.site = &wf_emlrtRSI;
      coder::internal::b_sort(b_st, nbr.contents);

      //  If we are at the second level (i.e., the first level we reach in a
      //  bottom-to-top loop in which there do not exist pairs of
      //  non-adjacent boxes) then we can do weak skeletonization, so instead
      //  of the interaction list we skeletonize against the neighbor set.
      //  Currently turned off skeletonization at level 1 in current version
      //  also removed selecting subset of indices from interaction list,
      //  needs to be fixed..
      if (b_lvl == 2.0) {
        lst.contents.set_size(&xc_emlrtRTEI, sp, 0, 0);

        // nbr = [];
        // nnbr = 0;
        st.site = &y_emlrtRSI;
        b_st.site = &oe_emlrtRSI;
        e_st.site = &pe_emlrtRSI;
        l = t.contents.lrt / 2.0;
      } else {
        if (static_cast<int32_T>(c_i.contents) != i3) {
          emlrtIntegerCheckR2012b(c_i.contents, &m_emlrtDCI, (emlrtConstCTX)sp);
        }

        if ((c_i.contents < 1.0) || (static_cast<int32_T>(c_i.contents) >
             t.contents.nodes.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i.contents), 1,
            t.contents.nodes.size(0), &u_emlrtBCI, (emlrtConstCTX)sp);
        }

        sizes[0] = (*(int32_T (*)[2])t.contents.nodes[static_cast<int32_T>
                    (c_i.contents) - 1].ilist.size())[0];
        sizes[1] = (*(int32_T (*)[2])t.contents.nodes[static_cast<int32_T>
                    (c_i.contents) - 1].ilist.size())[1];
        st.site = &ab_emlrtRSI;
        coder::internal::indexShapeCheck(st, t.contents.nodes.size(0), sizes);
        loop_ub = t.contents.nodes[static_cast<int32_T>(c_i.contents) - 1].
          ilist.size(1);
        b_t.set_size(&vc_emlrtRTEI, sp, loop_ub);
        for (i5 = 0; i5 < loop_ub; i5++) {
          d = t.contents.nodes[static_cast<int32_T>(c_i.contents) - 1].ilist[i5];
          if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
            emlrtIntegerCheckR2012b(d, &ib_emlrtDCI, (emlrtConstCTX)sp);
          }

          if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > i4)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, i4,
              &cc_emlrtBCI, (emlrtConstCTX)sp);
          }

          b_t[i5] = t.contents.nodes[static_cast<int32_T>(d) - 1];
        }

        st.site = &ab_emlrtRSI;
        coder::internal::c_horzcatStructList(st, b_t, xi_combined);
        loop_ub = xi_combined.size(1);
        lst.contents.set_size(&wc_emlrtRTEI, sp, 1, xi_combined.size(1));
        for (i4 = 0; i4 < loop_ub; i4++) {
          lst.contents[i4] = xi_combined[i4];
        }

        st.site = &bb_emlrtRSI;
        b_st.site = &oe_emlrtRSI;
        e_st.site = &pe_emlrtRSI;
        l = t.contents.lrt / muDoubleScalarPower(2.0, b_lvl - 1.0) * 3.0 / 2.0;
      }

      //  Compute proxy interactions and subselect neighbors
      Kpxy.set_size(&yc_emlrtRTEI, sp, 0, nslf_tmp);
      if (b_lvl > 2.0) {
        real_T dv[3];
        st.site = &cb_emlrtRSI;
        if (static_cast<int32_T>(c_i.contents) != i3) {
          emlrtIntegerCheckR2012b(c_i.contents, &n_emlrtDCI, &st);
        }

        if ((c_i.contents < 1.0) || (static_cast<int32_T>(c_i.contents) >
             t.contents.nodes.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i.contents), 1,
            t.contents.nodes.size(0), &v_emlrtBCI, &st);
        }

        dv[0] = t.contents.nodes[static_cast<int32_T>(c_i.contents) - 1].ctr[0];
        dv[1] = t.contents.nodes[static_cast<int32_T>(c_i.contents) - 1].ctr[1];
        dv[2] = t.contents.nodes[static_cast<int32_T>(c_i.contents) - 1].ctr[2];
        b_st.site = &qe_emlrtRSI;
        srskelf_asym_new_anonFcn2(b_st, SD->f1.pxyfun.workspace.opts.area, x,
          slf.contents, lst.contents, proxy, l, dv, Kpxy, xi_combined);
      }

      if ((lst.contents.size(0) == 0) || (lst.contents.size(1) == 0)) {
        q0 = 0;
      } else {
        q0 = lst.contents.size(1);
      }

      nlst.contents = q0;

      //  Sorting not necessary, but makes debugging easier
      st.site = &db_emlrtRSI;
      b_st.site = &wf_emlrtRSI;
      coder::internal::b_sort(b_st, lst.contents);

      //  Compute interaction matrix between box and far-field (except level
      //  2, where near-field is included).
      st.site = &eb_emlrtRSI;
      b_st.site = &qe_emlrtRSI;
      srskelf_asym_new_anonFcn1(b_st, x, opts->area, opts->nu, opts->P,
        opts->contrast, opts->wuse, opts->qcorr, lst.contents, slf.contents, K1);
      st.site = &fb_emlrtRSI;
      if (coder::internal::c_strcmp(st, opts->symm)) {
        st.site = &gb_emlrtRSI;
        b_st.site = &qe_emlrtRSI;
        b_srskelf_asym_new_anonFcn1(b_st, x, opts->area, opts->nu, opts->P,
          opts->contrast, opts->wuse, opts->qcorr, slf.contents, lst.contents, D);
        st.site = &gb_emlrtRSI;
        loop_ub = D.size(1);
        b_loop_ub = D.size(0);
        L.set_size(&ad_emlrtRTEI, &st, D.size(1), D.size(0));
        for (i4 = 0; i4 < b_loop_ub; i4++) {
          for (i5 = 0; i5 < loop_ub; i5++) {
            L[i5 + L.size(0) * i4] = D[i4 + D.size(0) * i5];
          }
        }

        b_st.site = &nh_emlrtRSI;
        b_b = ((K1.size(0) != 0) && (K1.size(1) != 0));
        if (b_b) {
          q0 = K1.size(1);
        } else if ((L.size(0) != 0) && (L.size(1) != 0)) {
          q0 = D.size(0);
        } else {
          q0 = K1.size(1);
          if (L.size(1) > K1.size(1)) {
            q0 = D.size(0);
          }
        }

        e_st.site = &oh_emlrtRSI;
        if ((K1.size(1) != q0) && ((K1.size(0) != 0) && (K1.size(1) != 0))) {
          emlrtErrorWithMessageIdR2018a(&e_st, &m_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        if ((L.size(1) != q0) && ((L.size(0) != 0) && (L.size(1) != 0))) {
          emlrtErrorWithMessageIdR2018a(&e_st, &m_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        empty_non_axis_sizes = (q0 == 0);
        if (empty_non_axis_sizes || b_b) {
          loop_ub = K1.size(0);
        } else {
          loop_ub = 0;
        }

        if (empty_non_axis_sizes || ((L.size(0) != 0) && (L.size(1) != 0))) {
          sizes[0] = D.size(1);
        } else {
          sizes[0] = 0;
        }

        k = sizes[0];
        i4 = loop_ub + sizes[0];
        b_K1.set_size(&bd_emlrtRTEI, &b_st, i4, q0);
        for (i5 = 0; i5 < q0; i5++) {
          for (i6 = 0; i6 < loop_ub; i6++) {
            b_K1[i6 + b_K1.size(0) * i5] = K1[i6 + loop_ub * i5];
          }
        }

        for (i5 = 0; i5 < q0; i5++) {
          for (i6 = 0; i6 < k; i6++) {
            b_K1[(i6 + loop_ub) + b_K1.size(0) * i5] = L[i6 + k * i5];
          }
        }

        K1.set_size(&cd_emlrtRTEI, &b_st, i4, b_K1.size(1));
        loop_ub = b_K1.size(0) * b_K1.size(1);
        for (i4 = 0; i4 < loop_ub; i4++) {
          K1[i4] = b_K1[i4];
        }
      }

      st.site = &hb_emlrtRSI;
      spget(st, slf, nslf, lst, nlst, nbox, t, c_i, lookup_list, SD->f1.opts, K2);
      st.site = &ib_emlrtRSI;
      if (coder::internal::c_strcmp(st, opts->symm)) {
        st.site = &jb_emlrtRSI;
        b_st.site = &jb_emlrtRSI;
        b_spget(b_st, slf, nslf, lst, nlst, nbox, t, c_i, lookup_list,
                SD->f1.opts, G);
        loop_ub = G.size(1);
        b_loop_ub = G.size(0);
        L.set_size(&dd_emlrtRTEI, &st, G.size(1), G.size(0));
        for (i4 = 0; i4 < b_loop_ub; i4++) {
          for (i5 = 0; i5 < loop_ub; i5++) {
            L[i5 + L.size(0) * i4] = G[i4 + G.size(0) * i5];
          }
        }

        b_st.site = &nh_emlrtRSI;
        b_b = ((K2.size(0) != 0) && (K2.size(1) != 0));
        if (b_b) {
          q0 = K2.size(1);
        } else if ((L.size(0) != 0) && (L.size(1) != 0)) {
          q0 = G.size(0);
        } else {
          q0 = K2.size(1);
          if (L.size(1) > K2.size(1)) {
            q0 = G.size(0);
          }
        }

        e_st.site = &oh_emlrtRSI;
        if ((K2.size(1) != q0) && ((K2.size(0) != 0) && (K2.size(1) != 0))) {
          emlrtErrorWithMessageIdR2018a(&e_st, &m_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        if ((L.size(1) != q0) && ((L.size(0) != 0) && (L.size(1) != 0))) {
          emlrtErrorWithMessageIdR2018a(&e_st, &m_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        empty_non_axis_sizes = (q0 == 0);
        if (empty_non_axis_sizes || b_b) {
          loop_ub = K2.size(0);
        } else {
          loop_ub = 0;
        }

        if (empty_non_axis_sizes || ((L.size(0) != 0) && (L.size(1) != 0))) {
          sizes[0] = G.size(1);
        } else {
          sizes[0] = 0;
        }

        k = sizes[0];
        i4 = loop_ub + sizes[0];
        b_K1.set_size(&bd_emlrtRTEI, &b_st, i4, q0);
        for (i5 = 0; i5 < q0; i5++) {
          for (i6 = 0; i6 < loop_ub; i6++) {
            b_K1[i6 + b_K1.size(0) * i5] = K2[i6 + loop_ub * i5];
          }
        }

        for (i5 = 0; i5 < q0; i5++) {
          for (i6 = 0; i6 < k; i6++) {
            b_K1[(i6 + loop_ub) + b_K1.size(0) * i5] = L[i6 + k * i5];
          }
        }

        K2.set_size(&ed_emlrtRTEI, &b_st, i4, b_K1.size(1));
        loop_ub = b_K1.size(0) * b_K1.size(1);
        for (i4 = 0; i4 < loop_ub; i4++) {
          K2[i4] = b_K1[i4];
        }
      }

      if (b_lvl > 2.0) {
        if ((K1.size(0) != K2.size(0)) && ((K1.size(0) != 1) && (K2.size(0) != 1)))
        {
          emlrtDimSizeImpxCheckR2021b(K1.size(0), K2.size(0), &c_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if ((K1.size(1) != K2.size(1)) && ((K1.size(1) != 1) && (K2.size(1) != 1)))
        {
          emlrtDimSizeImpxCheckR2021b(K1.size(1), K2.size(1), &d_emlrtECI,
            (emlrtConstCTX)sp);
        }

        st.site = &kb_emlrtRSI;
        if ((K1.size(0) == K2.size(0)) && (K1.size(1) == K2.size(1))) {
          loop_ub = K1.size(0) * K1.size(1);
          q0 = (loop_ub / 2) << 1;
          k = q0 - 2;
          for (i4 = 0; i4 <= k; i4 += 2) {
            r = _mm_loadu_pd(&K1[i4]);
            r1 = _mm_loadu_pd(&K2[i4]);
            _mm_storeu_pd(&K1[i4], _mm_add_pd(r, r1));
          }

          for (i4 = q0; i4 < loop_ub; i4++) {
            K1[i4] = K1[i4] + K2[i4];
          }
        } else {
          b_st.site = &kb_emlrtRSI;
          plus(b_st, K1, K2);
        }

        b_st.site = &nh_emlrtRSI;
        b_b = ((K1.size(0) != 0) && (K1.size(1) != 0));
        if (b_b) {
          q0 = K1.size(1);
        } else if ((Kpxy.size(0) != 0) && (Kpxy.size(1) != 0)) {
          q0 = Kpxy.size(1);
        } else {
          q0 = K1.size(1);
          if (Kpxy.size(1) > K1.size(1)) {
            q0 = Kpxy.size(1);
          }
        }

        e_st.site = &oh_emlrtRSI;
        if ((K1.size(1) != q0) && ((K1.size(0) != 0) && (K1.size(1) != 0))) {
          emlrtErrorWithMessageIdR2018a(&e_st, &m_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        if ((Kpxy.size(1) != q0) && ((Kpxy.size(0) != 0) && (Kpxy.size(1) != 0)))
        {
          emlrtErrorWithMessageIdR2018a(&e_st, &m_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        empty_non_axis_sizes = (q0 == 0);
        if (empty_non_axis_sizes || b_b) {
          loop_ub = K1.size(0);
        } else {
          loop_ub = 0;
        }

        if (empty_non_axis_sizes || ((Kpxy.size(0) != 0) && (Kpxy.size(1) != 0)))
        {
          sizes[0] = Kpxy.size(0);
        } else {
          sizes[0] = 0;
        }

        k = sizes[0];
        K.set_size(&gd_emlrtRTEI, &b_st, loop_ub + sizes[0], q0);
        for (i4 = 0; i4 < q0; i4++) {
          for (i5 = 0; i5 < loop_ub; i5++) {
            K[i5 + K.size(0) * i4] = K1[i5 + loop_ub * i4];
          }
        }

        for (i4 = 0; i4 < q0; i4++) {
          for (i5 = 0; i5 < k; i5++) {
            K[(i5 + loop_ub) + K.size(0) * i4] = Kpxy[i5 + k * i4];
          }
        }
      } else {
        if ((K1.size(0) != K2.size(0)) && ((K1.size(0) != 1) && (K2.size(0) != 1)))
        {
          emlrtDimSizeImpxCheckR2021b(K1.size(0), K2.size(0), &e_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if ((K1.size(1) != K2.size(1)) && ((K1.size(1) != 1) && (K2.size(1) != 1)))
        {
          emlrtDimSizeImpxCheckR2021b(K1.size(1), K2.size(1), &f_emlrtECI,
            (emlrtConstCTX)sp);
        }

        st.site = &lb_emlrtRSI;
        if ((K1.size(0) == K2.size(0)) && (K1.size(1) == K2.size(1))) {
          loop_ub = K1.size(0) * K1.size(1);
          q0 = (loop_ub / 2) << 1;
          k = q0 - 2;
          for (i4 = 0; i4 <= k; i4 += 2) {
            r = _mm_loadu_pd(&K1[i4]);
            r1 = _mm_loadu_pd(&K2[i4]);
            _mm_storeu_pd(&K1[i4], _mm_add_pd(r, r1));
          }

          for (i4 = q0; i4 < loop_ub; i4++) {
            K1[i4] = K1[i4] + K2[i4];
          }
        } else {
          b_st.site = &lb_emlrtRSI;
          plus(b_st, K1, K2);
        }

        b_st.site = &nh_emlrtRSI;
        b_b = ((K1.size(0) != 0) && (K1.size(1) != 0));
        if (b_b) {
          q0 = K1.size(1);
        } else if ((Kpxy.size(0) != 0) && (Kpxy.size(1) != 0)) {
          q0 = Kpxy.size(1);
        } else {
          q0 = K1.size(1);
          if (Kpxy.size(1) > K1.size(1)) {
            q0 = Kpxy.size(1);
          }
        }

        e_st.site = &oh_emlrtRSI;
        if ((K1.size(1) != q0) && ((K1.size(0) != 0) && (K1.size(1) != 0))) {
          emlrtErrorWithMessageIdR2018a(&e_st, &m_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        if ((Kpxy.size(1) != q0) && ((Kpxy.size(0) != 0) && (Kpxy.size(1) != 0)))
        {
          emlrtErrorWithMessageIdR2018a(&e_st, &m_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        empty_non_axis_sizes = (q0 == 0);
        if (empty_non_axis_sizes || b_b) {
          loop_ub = K1.size(0);
        } else {
          loop_ub = 0;
        }

        if (empty_non_axis_sizes || ((Kpxy.size(0) != 0) && (Kpxy.size(1) != 0)))
        {
          sizes[0] = Kpxy.size(0);
        } else {
          sizes[0] = 0;
        }

        k = sizes[0];
        K.set_size(&fd_emlrtRTEI, &b_st, loop_ub + sizes[0], q0);
        for (i4 = 0; i4 < q0; i4++) {
          for (i5 = 0; i5 < loop_ub; i5++) {
            K[i5 + K.size(0) * i4] = K1[i5 + loop_ub * i4];
          }
        }

        for (i4 = 0; i4 < q0; i4++) {
          for (i5 = 0; i5 < k; i5++) {
            K[(i5 + loop_ub) + K.size(0) * i4] = Kpxy[i5 + k * i4];
          }
        }
      }

      //  Compute the skeleton/redundant points and interpolation matrix
      st.site = &mb_emlrtRSI;
      id(st, K, rank_or_tol, sk, xi_combined, T);

      //  Move on to next box if no compression for this box
      if (xi_combined.size(1) != 0) {
        int32_T b_loop_ub_tmp;
        int32_T b_sizes_tmp;
        int32_T c_loop_ub;
        int32_T sizes_tmp;

        //  Otherwise, compute the diagonal and off-diagonal blocks for this
        //  box
        st.site = &nb_emlrtRSI;
        b_st.site = &qe_emlrtRSI;
        c_srskelf_asym_new_anonFcn1(b_st, x, opts->area, opts->nu, opts->P,
          opts->contrast, opts->wuse, opts->qcorr, slf.contents, slf.contents, K);
        st.site = &nb_emlrtRSI;
        spget(st, slf, nslf, nbox, t, c_i, lookup_list, SD->f1.opts, G);
        if ((K.size(0) != G.size(0)) && ((K.size(0) != 1) && (G.size(0) != 1)))
        {
          emlrtDimSizeImpxCheckR2021b(K.size(0), G.size(0), &g_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if ((K.size(1) != G.size(1)) && ((K.size(1) != 1) && (G.size(1) != 1)))
        {
          emlrtDimSizeImpxCheckR2021b(K.size(1), G.size(1), &h_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if ((K.size(0) == G.size(0)) && (K.size(1) == G.size(1))) {
          loop_ub = K.size(0) * K.size(1);
          q0 = (loop_ub / 2) << 1;
          k = q0 - 2;
          for (i4 = 0; i4 <= k; i4 += 2) {
            r = _mm_loadu_pd(&K[i4]);
            r1 = _mm_loadu_pd(&G[i4]);
            _mm_storeu_pd(&K[i4], _mm_add_pd(r, r1));
          }

          for (i4 = q0; i4 < loop_ub; i4++) {
            K[i4] = K[i4] + G[i4];
          }
        } else {
          st.site = &nb_emlrtRSI;
          plus(st, K, G);
        }

        st.site = &ob_emlrtRSI;
        b_st.site = &qe_emlrtRSI;
        srskelf_asym_new_anonFcn1(b_st, x, opts->area, opts->nu, opts->P,
          opts->contrast, opts->wuse, opts->qcorr, nbr.contents, slf.contents,
          K2);
        st.site = &ob_emlrtRSI;
        spget(st, slf, nslf, nbr, nnbr, nbox, t, c_i, lookup_list, SD->f1.opts,
              G);
        if ((K2.size(0) != G.size(0)) && ((K2.size(0) != 1) && (G.size(0) != 1)))
        {
          emlrtDimSizeImpxCheckR2021b(K2.size(0), G.size(0), &i_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if ((K2.size(1) != G.size(1)) && ((K2.size(1) != 1) && (G.size(1) != 1)))
        {
          emlrtDimSizeImpxCheckR2021b(K2.size(1), G.size(1), &j_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if ((K2.size(0) == G.size(0)) && (K2.size(1) == G.size(1))) {
          loop_ub = K2.size(0) * K2.size(1);
          q0 = (loop_ub / 2) << 1;
          k = q0 - 2;
          for (i4 = 0; i4 <= k; i4 += 2) {
            r = _mm_loadu_pd(&K2[i4]);
            r1 = _mm_loadu_pd(&G[i4]);
            _mm_storeu_pd(&K2[i4], _mm_add_pd(r, r1));
          }

          for (i4 = q0; i4 < loop_ub; i4++) {
            K2[i4] = K2[i4] + G[i4];
          }
        } else {
          st.site = &ob_emlrtRSI;
          plus(st, K2, G);
        }

        i4 = K2.size(1);
        i5 = K.size(0);
        K3.set_size(&hd_emlrtRTEI, sp, K2.size(1), K.size(0));
        loop_ub = K.size(0) * K2.size(1);
        for (i6 = 0; i6 < loop_ub; i6++) {
          K3[i6] = 0.0;
        }

        //  Initialize K3 with the appropriate size
        st.site = &pb_emlrtRSI;
        if (coder::internal::c_strcmp(st, opts->symm)) {
          st.site = &qb_emlrtRSI;
          b_st.site = &qe_emlrtRSI;
          b_srskelf_asym_new_anonFcn1(b_st, x, opts->area, opts->nu, opts->P,
            opts->contrast, opts->wuse, opts->qcorr, slf.contents, nbr.contents,
            K3);
          st.site = &qb_emlrtRSI;
          b_spget(st, slf, nslf, nbr, nnbr, nbox, t, c_i, lookup_list,
                  SD->f1.opts, G);
          if ((K3.size(0) != G.size(0)) && ((K3.size(0) != 1) && (G.size(0) != 1)))
          {
            emlrtDimSizeImpxCheckR2021b(K3.size(0), G.size(0), &k_emlrtECI,
              (emlrtConstCTX)sp);
          }

          if ((K3.size(1) != G.size(1)) && ((K3.size(1) != 1) && (G.size(1) != 1)))
          {
            emlrtDimSizeImpxCheckR2021b(K3.size(1), G.size(1), &l_emlrtECI,
              (emlrtConstCTX)sp);
          }

          if ((K3.size(0) == G.size(0)) && (K3.size(1) == G.size(1))) {
            loop_ub = K3.size(0) * K3.size(1);
            q0 = (loop_ub / 2) << 1;
            k = q0 - 2;
            for (i6 = 0; i6 <= k; i6 += 2) {
              r = _mm_loadu_pd(&K3[i6]);
              r1 = _mm_loadu_pd(&G[i6]);
              _mm_storeu_pd(&K3[i6], _mm_add_pd(r, r1));
            }

            for (i6 = q0; i6 < loop_ub; i6++) {
              K3[i6] = K3[i6] + G[i6];
            }
          } else {
            st.site = &qb_emlrtRSI;
            plus(st, K3, G);
          }
        }

        //  Skeletonize
        loop_ub = xi_combined.size(1);
        r2.set_size(&id_emlrtRTEI, sp, xi_combined.size(1));
        for (i6 = 0; i6 < loop_ub; i6++) {
          r2[i6] = xi_combined[i6];
        }

        for (i6 = 0; i6 < loop_ub; i6++) {
          if (r2[i6] != static_cast<int32_T>(muDoubleScalarFloor(r2[i6]))) {
            emlrtIntegerCheckR2012b(r2[i6], &jb_emlrtDCI, (emlrtConstCTX)sp);
          }

          loop_ub_tmp = static_cast<int32_T>(r2[i6]);
          if ((loop_ub_tmp < 1) || (loop_ub_tmp > i5)) {
            emlrtDynamicBoundsCheckR2012b(loop_ub_tmp, 1, i5, &dc_emlrtBCI,
              (emlrtConstCTX)sp);
          }
        }

        st.site = &rb_emlrtRSI;
        b_loop_ub = sk.size(1);
        b_sk.set_size(&jd_emlrtRTEI, &st, sk.size(0), sk.size(1));
        b_loop_ub_tmp = sk.size(0) * sk.size(1);
        for (i6 = 0; i6 < b_loop_ub_tmp; i6++) {
          loop_ub_tmp = static_cast<int32_T>(sk[i6]);
          if ((loop_ub_tmp < 1) || (loop_ub_tmp > i5)) {
            emlrtDynamicBoundsCheckR2012b(loop_ub_tmp, 1, i5, &ec_emlrtBCI, &st);
          }

          b_sk[i6] = loop_ub_tmp;
        }

        c_loop_ub = K.size(1);
        D.set_size(&kd_emlrtRTEI, &st, b_loop_ub_tmp, K.size(1));
        for (i6 = 0; i6 < c_loop_ub; i6++) {
          for (loop_ub_tmp = 0; loop_ub_tmp < b_loop_ub_tmp; loop_ub_tmp++) {
            D[loop_ub_tmp + D.size(0) * i6] = K[(static_cast<int32_T>
              (b_sk[loop_ub_tmp]) + K.size(0) * i6) - 1];
          }
        }

        b_st.site = &nj_emlrtRSI;
        coder::dynamic_size_checks(b_st, T, D, T.size(0), b_loop_ub_tmp);
        b_st.site = &wp_emlrtRSI;
        coder::internal::blas::mtimes(b_st, T, D, G);
        if ((G.size(0) != xi_combined.size(1)) && ((xi_combined.size(1) != 1) &&
             (G.size(0) != 1))) {
          emlrtDimSizeImpxCheckR2021b(xi_combined.size(1), G.size(0),
            &m_emlrtECI, (emlrtConstCTX)sp);
        }

        if ((K.size(1) != G.size(1)) && ((K.size(1) != 1) && (G.size(1) != 1)))
        {
          emlrtDimSizeImpxCheckR2021b(K.size(1), G.size(1), &n_emlrtECI,
            (emlrtConstCTX)sp);
        }

        r3.set_size(&ld_emlrtRTEI, sp, xi_combined.size(1));
        for (i6 = 0; i6 < loop_ub; i6++) {
          loop_ub_tmp = static_cast<int32_T>(r2[i6]);
          if ((loop_ub_tmp < 1) || (loop_ub_tmp > i5)) {
            emlrtDynamicBoundsCheckR2012b(loop_ub_tmp, 1, i5, &fc_emlrtBCI,
              (emlrtConstCTX)sp);
          }

          r3[i6] = loop_ub_tmp - 1;
        }

        if ((r2.size(0) == G.size(0)) && (K.size(1) == G.size(1))) {
          D.set_size(&md_emlrtRTEI, sp, xi_combined.size(1), K.size(1));
          for (i5 = 0; i5 < c_loop_ub; i5++) {
            for (i6 = 0; i6 < loop_ub; i6++) {
              D[i6 + D.size(0) * i5] = K[(static_cast<int32_T>(r2[i6]) + K.size
                (0) * i5) - 1] - G[i6 + G.size(0) * i5];
            }
          }
        } else {
          st.site = &rb_emlrtRSI;
          binary_expand_op(st, D, K, r2, G);
        }

        sizes_tmp = r3.size(0);
        sizes[0] = r3.size(0);
        b_sizes_tmp = K.size(1);
        sizes[1] = K.size(1);
        emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, D.size(), 2, &o_emlrtECI,
          (emlrtCTX)sp);
        sizes[0] = r3.size(0);
        for (i5 = 0; i5 < b_sizes_tmp; i5++) {
          for (i6 = 0; i6 < sizes_tmp; i6++) {
            K[r3[i6] + K.size(0) * i5] = D[i6 + sizes[0] * i5];
          }
        }

        loop_ub_tmp = r2.size(0);
        for (i5 = 0; i5 < loop_ub_tmp; i5++) {
          i6 = static_cast<int32_T>(r2[i5]);
          if ((i6 < 1) || (i6 > b_sizes_tmp)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, b_sizes_tmp, &gc_emlrtBCI,
              (emlrtConstCTX)sp);
          }
        }

        st.site = &sb_emlrtRSI;
        b_sk.set_size(&nd_emlrtRTEI, &st, sk.size(0), sk.size(1));
        for (i5 = 0; i5 < b_loop_ub_tmp; i5++) {
          i6 = static_cast<int32_T>(sk[i5]);
          if ((i6 < 1) || (i6 > b_sizes_tmp)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, b_sizes_tmp, &hc_emlrtBCI, &st);
          }

          b_sk[i5] = i6;
        }

        c_loop_ub = K.size(0);
        D.set_size(&od_emlrtRTEI, &st, K.size(0), b_loop_ub_tmp);
        for (i5 = 0; i5 < b_loop_ub_tmp; i5++) {
          for (i6 = 0; i6 < c_loop_ub; i6++) {
            D[i6 + D.size(0) * i5] = K[i6 + K.size(0) * (static_cast<int32_T>
              (b_sk[i5]) - 1)];
          }
        }

        b_st.site = &nj_emlrtRSI;
        coder::dynamic_size_checks(b_st, D, T, b_loop_ub_tmp, T.size(0));
        b_st.site = &wp_emlrtRSI;
        coder::internal::blas::b_mtimes(b_st, D, T, G);
        if ((K.size(0) != G.size(0)) && ((K.size(0) != 1) && (G.size(0) != 1)))
        {
          emlrtDimSizeImpxCheckR2021b(K.size(0), G.size(0), &p_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if ((r2.size(0) != G.size(1)) && ((r2.size(0) != 1) && (G.size(1) != 1)))
        {
          emlrtDimSizeImpxCheckR2021b(r2.size(0), G.size(1), &q_emlrtECI,
            (emlrtConstCTX)sp);
        }

        r3.set_size(&pd_emlrtRTEI, sp, r2.size(0));
        for (i5 = 0; i5 < loop_ub_tmp; i5++) {
          i6 = static_cast<int32_T>(r2[i5]);
          if ((i6 < 1) || (i6 > b_sizes_tmp)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, b_sizes_tmp, &ic_emlrtBCI,
              (emlrtConstCTX)sp);
          }

          r3[i5] = i6 - 1;
        }

        if ((K.size(0) == G.size(0)) && (r2.size(0) == G.size(1))) {
          D.set_size(&qd_emlrtRTEI, sp, K.size(0), r2.size(0));
          for (i5 = 0; i5 < loop_ub_tmp; i5++) {
            q0 = (K.size(0) / 2) << 1;
            k = q0 - 2;
            for (i6 = 0; i6 <= k; i6 += 2) {
              r = _mm_loadu_pd(&K[i6 + K.size(0) * (static_cast<int32_T>(r2[i5])
                - 1)]);
              r1 = _mm_loadu_pd(&G[i6 + G.size(0) * i5]);
              _mm_storeu_pd(&D[i6 + D.size(0) * i5], _mm_sub_pd(r, r1));
            }

            for (i6 = q0; i6 < c_loop_ub; i6++) {
              D[i6 + D.size(0) * i5] = K[i6 + K.size(0) * (static_cast<int32_T>
                (r2[i5]) - 1)] - G[i6 + G.size(0) * i5];
            }
          }
        } else {
          st.site = &sb_emlrtRSI;
          binary_expand_op_1(st, D, K, r2, G);
        }

        sizes_tmp = K.size(0);
        sizes[0] = K.size(0);
        b_sizes_tmp = r3.size(0);
        sizes[1] = r3.size(0);
        emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, D.size(), 2, &r_emlrtECI,
          (emlrtCTX)sp);
        sizes[0] = K.size(0);
        for (i5 = 0; i5 < b_sizes_tmp; i5++) {
          for (i6 = 0; i6 < sizes_tmp; i6++) {
            K[i6 + K.size(0) * r3[i5]] = D[i6 + sizes[0] * i5];
          }
        }

        loop_ub_tmp = r2.size(0);
        for (i5 = 0; i5 < loop_ub_tmp; i5++) {
          i6 = static_cast<int32_T>(r2[i5]);
          if ((i6 < 1) || (i6 > i4)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i4, &jc_emlrtBCI,
              (emlrtConstCTX)sp);
          }
        }

        st.site = &tb_emlrtRSI;
        b_sk.set_size(&rd_emlrtRTEI, &st, sk.size(0), sk.size(1));
        for (i5 = 0; i5 < b_loop_ub_tmp; i5++) {
          i6 = static_cast<int32_T>(sk[i5]);
          if ((i6 < 1) || (i6 > i4)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i4, &kc_emlrtBCI, &st);
          }

          b_sk[i5] = i6;
        }

        c_loop_ub = K2.size(0);
        D.set_size(&sd_emlrtRTEI, &st, K2.size(0), b_loop_ub_tmp);
        for (i5 = 0; i5 < b_loop_ub_tmp; i5++) {
          for (i6 = 0; i6 < c_loop_ub; i6++) {
            D[i6 + D.size(0) * i5] = K2[i6 + K2.size(0) * (static_cast<int32_T>
              (b_sk[i5]) - 1)];
          }
        }

        b_st.site = &nj_emlrtRSI;
        coder::dynamic_size_checks(b_st, D, T, b_loop_ub_tmp, T.size(0));
        b_st.site = &wp_emlrtRSI;
        coder::internal::blas::b_mtimes(b_st, D, T, G);
        if ((K2.size(0) != G.size(0)) && ((K2.size(0) != 1) && (G.size(0) != 1)))
        {
          emlrtDimSizeImpxCheckR2021b(K2.size(0), G.size(0), &s_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if ((r2.size(0) != G.size(1)) && ((r2.size(0) != 1) && (G.size(1) != 1)))
        {
          emlrtDimSizeImpxCheckR2021b(r2.size(0), G.size(1), &t_emlrtECI,
            (emlrtConstCTX)sp);
        }

        r3.set_size(&td_emlrtRTEI, sp, r2.size(0));
        for (i5 = 0; i5 < loop_ub_tmp; i5++) {
          i6 = static_cast<int32_T>(r2[i5]);
          if ((i6 < 1) || (i6 > i4)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i4, &lc_emlrtBCI,
              (emlrtConstCTX)sp);
          }

          r3[i5] = i6 - 1;
        }

        if ((K2.size(0) == G.size(0)) && (r2.size(0) == G.size(1))) {
          D.set_size(&ud_emlrtRTEI, sp, K2.size(0), r2.size(0));
          for (i4 = 0; i4 < loop_ub_tmp; i4++) {
            q0 = (K2.size(0) / 2) << 1;
            k = q0 - 2;
            for (i5 = 0; i5 <= k; i5 += 2) {
              r = _mm_loadu_pd(&K2[i5 + K2.size(0) * (static_cast<int32_T>(r2[i4])
                - 1)]);
              r1 = _mm_loadu_pd(&G[i5 + G.size(0) * i4]);
              _mm_storeu_pd(&D[i5 + D.size(0) * i4], _mm_sub_pd(r, r1));
            }

            for (i5 = q0; i5 < c_loop_ub; i5++) {
              D[i5 + D.size(0) * i4] = K2[i5 + K2.size(0) * (static_cast<int32_T>
                (r2[i4]) - 1)] - G[i5 + G.size(0) * i4];
            }
          }
        } else {
          st.site = &tb_emlrtRSI;
          binary_expand_op_1(st, D, K2, r2, G);
        }

        b_sizes_tmp = K2.size(0);
        sizes[0] = K2.size(0);
        q0 = r3.size(0);
        sizes[1] = r3.size(0);
        emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, D.size(), 2, &u_emlrtECI,
          (emlrtCTX)sp);
        sizes[0] = K2.size(0);
        for (i4 = 0; i4 < q0; i4++) {
          for (i5 = 0; i5 < b_sizes_tmp; i5++) {
            K2[i5 + K2.size(0) * r3[i4]] = D[i5 + sizes[0] * i4];
          }
        }

        st.site = &ub_emlrtRSI;
        if (coder::internal::c_strcmp(st, opts->symm)) {
          loop_ub_tmp = r2.size(0);
          for (i4 = 0; i4 < loop_ub_tmp; i4++) {
            i5 = static_cast<int32_T>(r2[i4]);
            if ((i5 < 1) || (i5 > K3.size(0))) {
              emlrtDynamicBoundsCheckR2012b(i5, 1, K3.size(0), &mc_emlrtBCI,
                (emlrtConstCTX)sp);
            }
          }

          st.site = &vb_emlrtRSI;
          b_sk.set_size(&vd_emlrtRTEI, &st, sk.size(0), sk.size(1));
          for (i4 = 0; i4 < b_loop_ub_tmp; i4++) {
            i5 = static_cast<int32_T>(sk[i4]);
            if ((i5 < 1) || (i5 > K3.size(0))) {
              emlrtDynamicBoundsCheckR2012b(i5, 1, K3.size(0), &nc_emlrtBCI, &st);
            }

            b_sk[i4] = i5;
          }

          c_loop_ub = K3.size(1);
          D.set_size(&wd_emlrtRTEI, &st, b_loop_ub_tmp, K3.size(1));
          for (i4 = 0; i4 < c_loop_ub; i4++) {
            for (i5 = 0; i5 < b_loop_ub_tmp; i5++) {
              D[i5 + D.size(0) * i4] = K3[(static_cast<int32_T>(b_sk[i5]) +
                K3.size(0) * i4) - 1];
            }
          }

          b_st.site = &nj_emlrtRSI;
          coder::dynamic_size_checks(b_st, T, D, T.size(0), b_loop_ub_tmp);
          b_st.site = &wp_emlrtRSI;
          coder::internal::blas::mtimes(b_st, T, D, G);
          if ((r2.size(0) != G.size(0)) && ((r2.size(0) != 1) && (G.size(0) != 1)))
          {
            emlrtDimSizeImpxCheckR2021b(r2.size(0), G.size(0), &v_emlrtECI,
              (emlrtConstCTX)sp);
          }

          if ((K3.size(1) != G.size(1)) && ((K3.size(1) != 1) && (G.size(1) != 1)))
          {
            emlrtDimSizeImpxCheckR2021b(K3.size(1), G.size(1), &w_emlrtECI,
              (emlrtConstCTX)sp);
          }

          r3.set_size(&xd_emlrtRTEI, sp, r2.size(0));
          for (i4 = 0; i4 < loop_ub_tmp; i4++) {
            i5 = static_cast<int32_T>(r2[i4]);
            if ((i5 < 1) || (i5 > K3.size(0))) {
              emlrtDynamicBoundsCheckR2012b(i5, 1, K3.size(0), &oc_emlrtBCI,
                (emlrtConstCTX)sp);
            }

            r3[i4] = i5 - 1;
          }

          if ((r2.size(0) == G.size(0)) && (K3.size(1) == G.size(1))) {
            D.set_size(&yd_emlrtRTEI, sp, r2.size(0), K3.size(1));
            for (i4 = 0; i4 < c_loop_ub; i4++) {
              for (i5 = 0; i5 < loop_ub_tmp; i5++) {
                D[i5 + D.size(0) * i4] = K3[(static_cast<int32_T>(r2[i5]) +
                  K3.size(0) * i4) - 1] - G[i5 + G.size(0) * i4];
              }
            }
          } else {
            st.site = &vb_emlrtRSI;
            binary_expand_op(st, D, K3, r2, G);
          }

          q0 = r3.size(0);
          sizes[0] = r3.size(0);
          k = K3.size(1);
          sizes[1] = K3.size(1);
          emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, D.size(), 2, &x_emlrtECI,
            (emlrtCTX)sp);
          sizes[0] = r3.size(0);
          for (i4 = 0; i4 < k; i4++) {
            for (i5 = 0; i5 < q0; i5++) {
              K3[r3[i5] + K3.size(0) * i4] = D[i5 + sizes[0] * i4];
            }
          }
        }

        //  Initialize L and U to avoid undefined variable error
        L.set_size(&ae_emlrtRTEI, sp, 0, 0);
        Kpxy.set_size(&be_emlrtRTEI, sp, 0, 0);
        K1.set_size(&ce_emlrtRTEI, sp, 0, 0);
        G.set_size(&de_emlrtRTEI, sp, 0, 0);
        C.set_size(&ee_emlrtRTEI, sp, 0, 0);
        D.set_size(&fe_emlrtRTEI, sp, 0, 0);
        st.site = &wb_emlrtRSI;
        if (coder::internal::b_strcmp(st, opts->symm)) {
          //  Cholesky for positive definite input
          st.site = &xb_emlrtRSI;
          loop_ub_tmp = r2.size(0);
          for (i4 = 0; i4 < loop_ub_tmp; i4++) {
            i5 = static_cast<int32_T>(r2[i4]);
            if ((i5 < 1) || (i5 > sizes_tmp)) {
              emlrtDynamicBoundsCheckR2012b(i5, 1, sizes_tmp, &pc_emlrtBCI, &st);
            }
          }

          for (i4 = 0; i4 < loop_ub_tmp; i4++) {
            i5 = static_cast<int32_T>(r2[i4]);
            if ((i5 < 1) || (i5 > K.size(1))) {
              emlrtDynamicBoundsCheckR2012b(i5, 1, K.size(1), &sc_emlrtBCI, &st);
            }
          }

          L.set_size(&me_emlrtRTEI, &st, r2.size(0), r2.size(0));
          for (i4 = 0; i4 < loop_ub_tmp; i4++) {
            for (i5 = 0; i5 < loop_ub_tmp; i5++) {
              L[i5 + L.size(0) * i4] = K[(static_cast<int32_T>(r2[i5]) + K.size
                (0) * (static_cast<int32_T>(r2[i4]) - 1)) - 1];
            }
          }

          b_st.site = &jq_emlrtRSI;
          coder::internal::chol(b_st, L);
          Kpxy.set_size(&ne_emlrtRTEI, sp, 0, 0);
          st.site = &yb_emlrtRSI;
          for (i4 = 0; i4 < b_loop_ub_tmp; i4++) {
            i5 = static_cast<int32_T>(sk[i4]);
            if ((i5 < 1) || (i5 > sizes_tmp)) {
              emlrtDynamicBoundsCheckR2012b(i5, 1, sizes_tmp, &vc_emlrtBCI, &st);
            }
          }

          for (i4 = 0; i4 < loop_ub_tmp; i4++) {
            i5 = static_cast<int32_T>(r2[i4]);
            if ((i5 < 1) || (i5 > K.size(1))) {
              emlrtDynamicBoundsCheckR2012b(i5, 1, K.size(1), &wc_emlrtBCI, &st);
            }
          }

          c_loop_ub = L.size(1);
          q0 = L.size(0);
          D.set_size(&oe_emlrtRTEI, &st, L.size(1), L.size(0));
          for (i4 = 0; i4 < q0; i4++) {
            for (i5 = 0; i5 < c_loop_ub; i5++) {
              D[i5 + D.size(0) * i4] = L[i4 + L.size(0) * i5];
            }
          }

          if (r2.size(0) != D.size(1)) {
            emlrtErrorWithMessageIdR2018a(&st, &l_emlrtRTEI, "MATLAB:dimagree",
              "MATLAB:dimagree", 0);
          }

          K1.set_size(&pe_emlrtRTEI, &st, b_loop_ub_tmp, r2.size(0));
          for (i4 = 0; i4 < loop_ub_tmp; i4++) {
            for (i5 = 0; i5 < b_loop_ub_tmp; i5++) {
              K1[i5 + K1.size(0) * i4] = K[(static_cast<int32_T>(sk[i5]) +
                K.size(0) * (static_cast<int32_T>(r2[i4]) - 1)) - 1];
            }
          }

          b_st.site = &pq_emlrtRSI;
          coder::internal::mrdiv(b_st, K1, D);
          G.set_size(&qe_emlrtRTEI, sp, 0, 0);
          st.site = &ac_emlrtRSI;
          for (i4 = 0; i4 < loop_ub_tmp; i4++) {
            i5 = static_cast<int32_T>(r2[i4]);
            if ((i5 < 1) || (i5 > K2.size(1))) {
              emlrtDynamicBoundsCheckR2012b(i5, 1, K2.size(1), &bd_emlrtBCI, &st);
            }
          }

          if (r2.size(0) != D.size(1)) {
            emlrtErrorWithMessageIdR2018a(&st, &l_emlrtRTEI, "MATLAB:dimagree",
              "MATLAB:dimagree", 0);
          }

          C.set_size(&re_emlrtRTEI, &st, K2.size(0), r2.size(0));
          for (i4 = 0; i4 < loop_ub_tmp; i4++) {
            for (i5 = 0; i5 < b_sizes_tmp; i5++) {
              C[i5 + C.size(0) * i4] = K2[i5 + K2.size(0) * (static_cast<int32_T>
                (r2[i4]) - 1)];
            }
          }

          b_st.site = &pq_emlrtRSI;
          coder::internal::mrdiv(b_st, C, D);
          D.set_size(&se_emlrtRTEI, sp, 0, 0);
        } else {
          st.site = &bc_emlrtRSI;
          if (coder::internal::c_strcmp(st, opts->symm)) {
            //  Otherwise, LU
            b_K1.set_size(&ge_emlrtRTEI, sp, xi_combined.size(1),
                          xi_combined.size(1));
            for (i4 = 0; i4 < loop_ub; i4++) {
              i5 = static_cast<int32_T>(xi_combined[i4]);
              for (i6 = 0; i6 < loop_ub; i6++) {
                loop_ub_tmp = static_cast<int32_T>(xi_combined[i6]);
                if ((loop_ub_tmp < 1) || (loop_ub_tmp > sizes_tmp)) {
                  emlrtDynamicBoundsCheckR2012b(loop_ub_tmp, 1, sizes_tmp,
                    &qc_emlrtBCI, (emlrtConstCTX)sp);
                }

                if ((i5 < 1) || (i5 > K.size(1))) {
                  emlrtDynamicBoundsCheckR2012b(i5, 1, K.size(1), &rc_emlrtBCI,
                    (emlrtConstCTX)sp);
                }

                b_K1[i6 + b_K1.size(0) * i4] = K[(loop_ub_tmp + K.size(0) * (i5
                  - 1)) - 1];
              }
            }

            st.site = &cc_emlrtRSI;
            coder::lu(st, b_K1, L, Kpxy);
            st.site = &dc_emlrtRSI;
            for (i4 = 0; i4 < b_loop_ub_tmp; i4++) {
              i5 = static_cast<int32_T>(sk[i4]);
              if ((i5 < 1) || (i5 > sizes_tmp)) {
                emlrtDynamicBoundsCheckR2012b(i5, 1, sizes_tmp, &tc_emlrtBCI,
                  &st);
              }
            }

            loop_ub_tmp = r2.size(0);
            for (i4 = 0; i4 < loop_ub_tmp; i4++) {
              i5 = static_cast<int32_T>(r2[i4]);
              if ((i5 < 1) || (i5 > K.size(1))) {
                emlrtDynamicBoundsCheckR2012b(i5, 1, K.size(1), &uc_emlrtBCI,
                  &st);
              }
            }

            if (r2.size(0) != Kpxy.size(1)) {
              emlrtErrorWithMessageIdR2018a(&st, &l_emlrtRTEI, "MATLAB:dimagree",
                "MATLAB:dimagree", 0);
            }

            K1.set_size(&he_emlrtRTEI, &st, b_loop_ub_tmp, r2.size(0));
            for (i4 = 0; i4 < loop_ub_tmp; i4++) {
              for (i5 = 0; i5 < b_loop_ub_tmp; i5++) {
                K1[i5 + K1.size(0) * i4] = K[(static_cast<int32_T>(sk[i5]) +
                  K.size(0) * (static_cast<int32_T>(r2[i4]) - 1)) - 1];
              }
            }

            b_st.site = &pq_emlrtRSI;
            coder::internal::mrdiv(b_st, K1, Kpxy);
            b_sk.set_size(&ie_emlrtRTEI, sp, sk.size(0), sk.size(1));
            for (i4 = 0; i4 < b_loop_ub_tmp; i4++) {
              i5 = static_cast<int32_T>(sk[i4]);
              if ((i5 < 1) || (i5 > K.size(1))) {
                emlrtDynamicBoundsCheckR2012b(i5, 1, K.size(1), &xc_emlrtBCI,
                  (emlrtConstCTX)sp);
              }

              b_sk[i4] = i5;
            }

            b_K1.set_size(&je_emlrtRTEI, sp, xi_combined.size(1), b_loop_ub_tmp);
            for (i4 = 0; i4 < b_loop_ub_tmp; i4++) {
              for (i5 = 0; i5 < loop_ub; i5++) {
                i6 = static_cast<int32_T>(xi_combined[i5]);
                if ((i6 < 1) || (i6 > sizes_tmp)) {
                  emlrtDynamicBoundsCheckR2012b(i6, 1, sizes_tmp, &yc_emlrtBCI,
                    (emlrtConstCTX)sp);
                }

                b_K1[i5 + b_K1.size(0) * i4] = K[(i6 + K.size(0) * (static_cast<
                  int32_T>(b_sk[i4]) - 1)) - 1];
              }
            }

            st.site = &ec_emlrtRSI;
            coder::mldivide(st, L, b_K1, G);
            st.site = &fc_emlrtRSI;
            for (i4 = 0; i4 < loop_ub_tmp; i4++) {
              i5 = static_cast<int32_T>(r2[i4]);
              if ((i5 < 1) || (i5 > K2.size(1))) {
                emlrtDynamicBoundsCheckR2012b(i5, 1, K2.size(1), &ad_emlrtBCI,
                  &st);
              }
            }

            if (r2.size(0) != Kpxy.size(1)) {
              emlrtErrorWithMessageIdR2018a(&st, &l_emlrtRTEI, "MATLAB:dimagree",
                "MATLAB:dimagree", 0);
            }

            C.set_size(&ke_emlrtRTEI, &st, K2.size(0), r2.size(0));
            for (i4 = 0; i4 < loop_ub_tmp; i4++) {
              for (i5 = 0; i5 < b_sizes_tmp; i5++) {
                C[i5 + C.size(0) * i4] = K2[i5 + K2.size(0) *
                  (static_cast<int32_T>(r2[i4]) - 1)];
              }
            }

            b_st.site = &pq_emlrtRSI;
            coder::internal::mrdiv(b_st, C, Kpxy);
            c_loop_ub = K3.size(1);
            b_K1.set_size(&le_emlrtRTEI, sp, xi_combined.size(1), K3.size(1));
            for (i4 = 0; i4 < c_loop_ub; i4++) {
              for (i5 = 0; i5 < loop_ub; i5++) {
                i6 = static_cast<int32_T>(xi_combined[i5]);
                if ((i6 < 1) || (i6 > K3.size(0))) {
                  emlrtDynamicBoundsCheckR2012b(i6, 1, K3.size(0), &cd_emlrtBCI,
                    (emlrtConstCTX)sp);
                }

                b_K1[i5 + b_K1.size(0) * i4] = K3[(i6 + K3.size(0) * i4) - 1];
              }
            }

            st.site = &gc_emlrtRSI;
            coder::mldivide(st, L, b_K1, D);
          }
        }

        //  Store matrix factors for this box
        n++;

        //  Ensure slf and sk are not empty and have consistent dimensions
        if ((slf.contents.size(1) != 0) && ((sk.size(0) != 0) && (sk.size(1) !=
              0))) {
          int32_T iv[2];

          //  Preallocate with the correct size and assign the values
          sizes[0] = (*(int32_T (*)[2])slf.contents.size())[0];
          sizes[1] = (*(int32_T (*)[2])slf.contents.size())[1];
          iv[0] = (*(int32_T (*)[2])sk.size())[0];
          iv[1] = (*(int32_T (*)[2])sk.size())[1];
          st.site = &hc_emlrtRSI;
          coder::internal::c_indexShapeCheck(st, sizes, iv);
          emlrtDynamicBoundsCheckR2012b(1, 1, 0, &w_emlrtBCI, (emlrtConstCTX)sp);
        } else {
          //  Use an empty column vector for consistency
        }

        //  Ensure slf and rd are not empty and have consistent dimensions
        if (slf.contents.size(1) != 0) {
          //  Preallocate with the correct size and assign the values
          emlrtDynamicBoundsCheckR2012b(1, 1, 0, &x_emlrtBCI, (emlrtConstCTX)sp);
        } else {
          //  Use an empty column vector for consistency
        }

        if ((nbr.contents.size(0) != 0) && (nbr.contents.size(1) != 0)) {
          i4 = nbr.contents.size(0) * nbr.contents.size(1);
          if (i4 >= 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, 0, &y_emlrtBCI, (emlrtConstCTX)
              sp);
          }

          if (i4 != 0) {
            emlrtSubAssignSizeCheck1dR2017a(0, i4, &y_emlrtECI, (emlrtConstCTX)
              sp);
          }
        } else {
          //  Use an empty column vector for consistency
        }

        if ((T.size(0) != 0) && (T.size(1) != 0)) {
          i4 = T.size(0) * T.size(1);
          if (i4 >= 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, 0, &ab_emlrtBCI, (emlrtConstCTX)
              sp);
          }

          if (i4 != 0) {
            emlrtSubAssignSizeCheck1dR2017a(0, i4, &ab_emlrtECI, (emlrtConstCTX)
              sp);
          }
        } else {
          //  Use an empty column vector for consistency
        }

        if ((K1.size(0) != 0) && (K1.size(1) != 0)) {
          i4 = K1.size(0) * K1.size(1);
          if (i4 >= 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, 0, &bb_emlrtBCI, (emlrtConstCTX)
              sp);
          }

          if (i4 != 0) {
            emlrtSubAssignSizeCheck1dR2017a(0, i4, &bb_emlrtECI, (emlrtConstCTX)
              sp);
          }
        } else {
          //  Use an empty column vector for consistency
        }

        if ((G.size(0) != 0) && (G.size(1) != 0)) {
          i4 = G.size(0) * G.size(1);
          if (i4 >= 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, 0, &cb_emlrtBCI, (emlrtConstCTX)
              sp);
          }

          if (i4 != 0) {
            emlrtSubAssignSizeCheck1dR2017a(0, i4, &cb_emlrtECI, (emlrtConstCTX)
              sp);
          }
        } else {
          //  Use an empty column vector for consistency
        }

        if ((L.size(0) != 0) && (L.size(1) != 0)) {
          i4 = L.size(0) * L.size(1);
          if (i4 >= 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, 0, &db_emlrtBCI, (emlrtConstCTX)
              sp);
          }

          if (i4 != 0) {
            emlrtSubAssignSizeCheck1dR2017a(0, i4, &db_emlrtECI, (emlrtConstCTX)
              sp);
          }
        } else {
          //  Use an empty column vector for consistency
        }

        if ((Kpxy.size(0) != 0) && (Kpxy.size(1) != 0)) {
          i4 = Kpxy.size(0) * Kpxy.size(1);
          if (i4 >= 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, 0, &eb_emlrtBCI, (emlrtConstCTX)
              sp);
          }

          if (i4 != 0) {
            emlrtSubAssignSizeCheck1dR2017a(0, i4, &eb_emlrtECI, (emlrtConstCTX)
              sp);
          }
        } else {
          //  Use an empty column vector for consistency
        }

        if ((C.size(0) != 0) && (C.size(1) != 0)) {
          i4 = C.size(0) * C.size(1);
          if (i4 >= 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, 0, &fb_emlrtBCI, (emlrtConstCTX)
              sp);
          }

          if (i4 != 0) {
            emlrtSubAssignSizeCheck1dR2017a(0, i4, &fb_emlrtECI, (emlrtConstCTX)
              sp);
          }
        } else {
          //  Use an empty column vector for consistency
        }

        if ((D.size(0) != 0) && (D.size(1) != 0)) {
          i4 = D.size(0) * D.size(1);
          if (i4 >= 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, 0, &gb_emlrtBCI, (emlrtConstCTX)
              sp);
          }

          if (i4 != 0) {
            emlrtSubAssignSizeCheck1dR2017a(0, i4, &gb_emlrtECI, (emlrtConstCTX)
              sp);
          }
        } else {
          //  Use an empty column vector for consistency
        }

        //  Box number i is at index n (more sensible for non-uniform case)
        if (static_cast<int32_T>(c_i.contents) != i3) {
          emlrtIntegerCheckR2012b(c_i.contents, &kb_emlrtDCI, (emlrtConstCTX)sp);
        }

        if ((c_i.contents < 1.0) || (static_cast<int32_T>(c_i.contents) >
             lookup_list.contents.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i.contents), 1,
            lookup_list.contents.size(0), &dd_emlrtBCI, (emlrtConstCTX)sp);
        }

        lookup_list.contents[static_cast<int32_T>(c_i.contents) - 1] =
          static_cast<int32_T>(n);

        //  Ensure t.nodes(i).xi is not empty and has consistent dimensions
        if ((slf.contents.size(1) == 0) || ((sk.size(0) == 0) || (sk.size(1) ==
              0))) {
          if (static_cast<int32_T>(c_i.contents) != i3) {
            emlrtIntegerCheckR2012b(c_i.contents, &o_emlrtDCI, (emlrtConstCTX)sp);
          }

          if ((c_i.contents < 1.0) || (static_cast<int32_T>(c_i.contents) >
               t.contents.nodes.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i.contents), 1,
              t.contents.nodes.size(0), &hb_emlrtBCI, (emlrtConstCTX)sp);
          }

          //  Use an empty column vector for consistency
        } else {
          if (static_cast<int32_T>(c_i.contents) != i3) {
            emlrtIntegerCheckR2012b(c_i.contents, &p_emlrtDCI, (emlrtConstCTX)sp);
          }

          if ((c_i.contents < 1.0) || (static_cast<int32_T>(c_i.contents) >
               t.contents.nodes.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i.contents), 1,
              t.contents.nodes.size(0), &ib_emlrtBCI, (emlrtConstCTX)sp);
          }

          if (nslf_tmp < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, nslf_tmp, &jb_emlrtBCI,
              (emlrtConstCTX)sp);
          }

          if (sk.size(1) > nslf_tmp) {
            emlrtDynamicBoundsCheckR2012b(sk.size(1), 1, nslf_tmp, &kb_emlrtBCI,
              (emlrtConstCTX)sp);
          }

          for (i3 = 0; i3 < b_loop_ub; i3++) {
            i4 = static_cast<int32_T>(sk[i3]);
            if ((i4 < 1) || (i4 > slf.contents.size(1))) {
              emlrtDynamicBoundsCheckR2012b(i4, 1, slf.contents.size(1),
                &ed_emlrtBCI, (emlrtConstCTX)sp);
            }
          }

          b_sk.set_size(&te_emlrtRTEI, sp, 1, sk.size(1));
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            b_sk[i3] = slf.contents[static_cast<int32_T>(sk[i3]) - 1];
          }

          for (i3 = 0; i3 < b_loop_ub; i3++) {
            t.contents.nodes[static_cast<int32_T>(c_i.contents) - 1].xi[i3] =
              b_sk[i3];
          }
        }

        r4.set_size(&ue_emlrtRTEI, sp, 1, xi_combined.size(1));
        for (i3 = 0; i3 < loop_ub; i3++) {
          i4 = static_cast<int32_T>(xi_combined[i3]);
          if ((i4 < 1) || (i4 > slf.contents.size(1))) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, slf.contents.size(1),
              &fd_emlrtBCI, (emlrtConstCTX)sp);
          }

          d = slf.contents[i4 - 1];
          if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
            emlrtIntegerCheckR2012b(d, &lb_emlrtDCI, (emlrtConstCTX)sp);
          }

          if ((static_cast<int16_T>(d) < 1) || (static_cast<int16_T>(d) > 8000))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
              (static_cast<int16_T>(d)), 1, 8000, &gd_emlrtBCI, (emlrtConstCTX)
              sp);
          }

          r4[i3] = static_cast<int16_T>(d);
        }

        loop_ub = r4.size(1);
        for (i3 = 0; i3 < loop_ub; i3++) {
          b_rem[r4[i3] - 1] = false;
        }
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }

    if ((static_cast<int32_T>((static_cast<real_T>(lvl) + 1.0) + 1.0) < 1) || (
         static_cast<int32_T>((static_cast<real_T>(lvl) + 1.0) + 1.0) >
         b_F.contents.lvp.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((static_cast<real_T>
        (lvl) + 1.0) + 1.0), 1, b_F.contents.lvp.size(1), &wb_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    b_F.contents.lvp[static_cast<int32_T>((static_cast<real_T>(lvl) + 1.0) + 1.0)
      - 1] = static_cast<int32_T>(n);

    //  Print summary for the latest level
    st.site = &ic_emlrtRSI;
    if (opts->verb != 0.0) {
      i2 = b_rem[0];
      for (k = 0; k < 7999; k++) {
        i2 += b_rem[k + 1];
      }

      if ((static_cast<int32_T>(b_lvl) < 1) || (static_cast<int32_T>(b_lvl) >
           pblk.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_lvl), 1, pblk.size
          (0), &yb_emlrtBCI, (emlrtConstCTX)sp);
      }

      if ((static_cast<int32_T>(static_cast<uint32_T>(b_lvl) + 1U) < 1) || (
           static_cast<int32_T>(static_cast<uint32_T>(b_lvl) + 1U) > i)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
          (b_lvl) + 1U), 1, i, &ac_emlrtBCI, (emlrtConstCTX)sp);
      }

      if ((static_cast<int32_T>(b_lvl) < 1) || (static_cast<int32_T>(b_lvl) > i))
      {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_lvl), 1, i,
          &bc_emlrtBCI, (emlrtConstCTX)sp);
      }

      d = muDoubleScalarRound(static_cast<real_T>(pblk[static_cast<int32_T>
        (b_lvl) - 1]) + t.contents.lvp[static_cast<int32_T>(static_cast<uint32_T>
        (b_lvl))]);
      if (d < 2.147483648E+9) {
        if (d >= -2.147483648E+9) {
          i3 = static_cast<int32_T>(d);
        } else {
          i3 = MIN_int32_T;
        }
      } else if (d >= 2.147483648E+9) {
        i3 = MAX_int32_T;
      } else {
        i3 = 0;
      }

      d = muDoubleScalarRound(static_cast<real_T>(i3) - d1);
      if (d < 2.147483648E+9) {
        if (d >= -2.147483648E+9) {
          i3 = static_cast<int32_T>(d);
        } else {
          i3 = MIN_int32_T;
        }
      } else if (d >= 2.147483648E+9) {
        i3 = MAX_int32_T;
      } else {
        i3 = 0;
      }

      st.site = &kc_emlrtRSI;
      b_st.site = &jc_emlrtRSI;
      l = coder::toc(b_st, savedTime.tv_sec, savedTime.tv_nsec);
      b_st.site = &if_emlrtRSI;
      e_st.site = &ir_emlrtRSI;
      f_st.site = &kr_emlrtRSI;
      l = emlrt_marshallIn(e_st, feval(e_st, g_emlrt_marshallOut(e_st, cv3),
        emlrt_marshallOut(static_cast<real_T>(1.0)), p_emlrt_marshallOut(f_st,
        cv7), emlrt_marshallOut(static_cast<int32_T>(b_lvl)), emlrt_marshallOut
        (i3), emlrt_marshallOut(nz_tmp), emlrt_marshallOut(i2),
        emlrt_marshallOut(static_cast<real_T>(nz_tmp) / static_cast<real_T>(i3)),
        emlrt_marshallOut(static_cast<real_T>(i2) / static_cast<real_T>(i3)),
        emlrt_marshallOut(l), f_emlrtMCI), "<output of feval>");
      emlrtDisplayR2012b(emlrt_marshallOut(l), "ans", &e_emlrtRTEI, (emlrtCTX)sp);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  //  Truncate extra storage, and we are done
  if (static_cast<int32_T>(n) < 1) {
    i = 0;
  } else {
    if (b_F.contents.factors.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, b_F.contents.factors.size(0),
        &lb_emlrtBCI, (emlrtConstCTX)sp);
    }

    if ((static_cast<int32_T>(n) < 1) || (static_cast<int32_T>(n) >
         b_F.contents.factors.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(n), 1,
        b_F.contents.factors.size(0), &mb_emlrtBCI, (emlrtConstCTX)sp);
    }

    i = static_cast<int32_T>(n);
  }

  sizes[0] = 1;
  sizes[1] = i;
  st.site = &lc_emlrtRSI;
  coder::internal::indexShapeCheck(st, b_F.contents.factors.size(0), sizes);
  b_F.contents.factors.set_size(&ve_emlrtRTEI, sp, i);
  st.site = &mc_emlrtRSI;
  if (opts->verb != 0.0) {
    st.site = &nc_emlrtRSI;
    b_st.site = &hf_emlrtRSI;
    e_st.site = &ir_emlrtRSI;
    f_st.site = &kr_emlrtRSI;
    l = emlrt_marshallIn(e_st, feval(e_st, g_emlrt_marshallOut(e_st, cv3),
      emlrt_marshallOut(static_cast<real_T>(1.0)), h_emlrt_marshallOut(f_st, cv4),
      f_emlrtMCI), "<output of feval>");
    emlrtDisplayR2012b(emlrt_marshallOut(l), "ans", &f_emlrtRTEI, (emlrtCTX)sp);
    st.site = &oc_emlrtRSI;
    coder::b_toc(st, start_tv_sec, start_tv_nsec);
  }

  *F = b_F.contents;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (srskelf_asym_new.cpp)
