//
// srskelf_asym_new_data.cpp
//
// Code generation for function 'srskelf_asym_new_data'
//

// Include files
#include "srskelf_asym_new_data.h"
#include "rt_nonfinite.h"

// Variable Definitions
emlrtCTX emlrtRootTLSGlobal{nullptr};

const volatile char_T *emlrtBreakCheckR2012bFlagVar{nullptr};

emlrtContext emlrtContextGlobal{
    true,                                                 // bFirstTime
    false,                                                // bInitialized
    131643U,                                              // fVersionInfo
    nullptr,                                              // fErrorFunction
    "srskelf_asym_new",                                   // fFunctionName
    nullptr,                                              // fRTCallStack
    false,                                                // bDebugMode
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, // fSigWrd
    nullptr                                               // fSigMem
};

emlrtRSInfo qc_emlrtRSI{
    7,         // lineNo
    "getTime", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/shared/coder/coder/lib/+coder/+internal/"
    "+time/getTime.m" // pathName
};

emlrtRSInfo rc_emlrtRSI{
    21,                     // lineNo
    "CoderTimeAPI/getTime", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/shared/coder/coder/lib/+coder/+internal/"
    "+time/CoderTimeAPI.m" // pathName
};

emlrtRSInfo sc_emlrtRSI{
    148,                                  // lineNo
    "CoderTimeAPI/callEMLRTClockGettime", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/shared/coder/coder/lib/+coder/+internal/"
    "+time/CoderTimeAPI.m" // pathName
};

emlrtRSInfo fe_emlrtRSI{
    20,                               // lineNo
    "eml_int_forloop_overflow_check", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/eml/"
    "eml_int_forloop_overflow_check.m" // pathName
};

emlrtRSInfo ne_emlrtRSI{
    44,                                                               // lineNo
    "mpower",                                                         // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/mpower.m" // pathName
};

emlrtRSInfo oe_emlrtRSI{
    71,                                                           // lineNo
    "power",                                                      // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/power.m" // pathName
};

emlrtRSInfo ue_emlrtRSI{
    39,                                                            // lineNo
    "find",                                                        // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

emlrtRSInfo ff_emlrtRSI{
    33,                           // lineNo
    "applyScalarFunctionInPlace", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "applyScalarFunctionInPlace.m" // pathName
};

emlrtRSInfo hf_emlrtRSI{
    38,                                                               // lineNo
    "fprintf",                                                        // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/iofun/fprintf.m" // pathName
};

emlrtRSInfo
    kh_emlrtRSI{
        34,               // lineNo
        "rdivide_helper", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
        "rdivide_helper.m" // pathName
    };

emlrtRSInfo lh_emlrtRSI{
    53,                                                               // lineNo
    "div",                                                            // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/div.m" // pathName
};

emlrtRSInfo mh_emlrtRSI{
    41,                                                               // lineNo
    "cat",                                                            // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/cat.m" // pathName
};

emlrtRSInfo nh_emlrtRSI{
    113,                                                              // lineNo
    "cat_impl",                                                       // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/cat.m" // pathName
};

emlrtRSInfo ij_emlrtRSI{
    35,                 // lineNo
    "find_locations_t", // fcnName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/"
    "Afun_lap_te/spget_quadcorr.m" // pathName
};

emlrtRSInfo
    mj_emlrtRSI{
        69,                  // lineNo
        "eml_mtimes_helper", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/"
        "eml_mtimes_helper.m" // pathName
    };

emlrtRSInfo
    hl_emlrtRSI{
        174,       // lineNo
        "qr_econ", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/private/"
        "eml_qr.m" // pathName
    };

emlrtRSInfo
    il_emlrtRSI{
        175,       // lineNo
        "qr_econ", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/private/"
        "eml_qr.m" // pathName
    };

emlrtRSInfo
    jl_emlrtRSI{
        178,       // lineNo
        "qr_econ", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/private/"
        "eml_qr.m" // pathName
    };

emlrtRSInfo
    kl_emlrtRSI{
        182,       // lineNo
        "qr_econ", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/private/"
        "eml_qr.m" // pathName
    };

emlrtRSInfo
    ll_emlrtRSI{
        183,       // lineNo
        "qr_econ", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/private/"
        "eml_qr.m" // pathName
    };

emlrtRSInfo
    ml_emlrtRSI{
        187,       // lineNo
        "qr_econ", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/private/"
        "eml_qr.m" // pathName
    };

emlrtRSInfo
    nl_emlrtRSI{
        189,       // lineNo
        "qr_econ", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/private/"
        "eml_qr.m" // pathName
    };

emlrtRSInfo
    ol_emlrtRSI{
        190,       // lineNo
        "qr_econ", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/private/"
        "eml_qr.m" // pathName
    };

emlrtRSInfo
    wl_emlrtRSI{
        202,        // lineNo
        "unpackQR", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/private/"
        "eml_qr.m" // pathName
    };

emlrtRSInfo om_emlrtRSI{
    67,        // lineNo
    "lusolve", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/lusolve.m" // pathName
};

emlrtRSInfo qm_emlrtRSI{
    112,          // lineNo
    "lusolveNxN", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/lusolve.m" // pathName
};

emlrtRSInfo
    vm_emlrtRSI{
        27,       // lineNo
        "xgetrf", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgetrf.m" // pathName
    };

emlrtRSInfo
    wm_emlrtRSI{
        91,             // lineNo
        "ceval_xgetrf", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgetrf.m" // pathName
    };

emlrtRSInfo
    xm_emlrtRSI{
        58,             // lineNo
        "ceval_xgetrf", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgetrf.m" // pathName
    };

emlrtRSInfo
    dn_emlrtRSI{
        67,      // lineNo
        "xtrsm", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+blas/"
        "xtrsm.m" // pathName
    };

emlrtRSInfo fn_emlrtRSI{
    90,              // lineNo
    "warn_singular", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/lusolve.m" // pathName
};

emlrtRSInfo gn_emlrtRSI{
    61,        // lineNo
    "qrsolve", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/qrsolve.m" // pathName
};

emlrtRSInfo hn_emlrtRSI{
    72,        // lineNo
    "qrsolve", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/qrsolve.m" // pathName
};

emlrtRSInfo in_emlrtRSI{
    85,        // lineNo
    "qrsolve", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/qrsolve.m" // pathName
};

emlrtRSInfo ln_emlrtRSI{
    119,         // lineNo
    "LSQFromQR", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/qrsolve.m" // pathName
};

emlrtRSInfo nn_emlrtRSI{
    128,         // lineNo
    "LSQFromQR", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/qrsolve.m" // pathName
};

emlrtRSInfo on_emlrtRSI{
    138,         // lineNo
    "LSQFromQR", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/qrsolve.m" // pathName
};

emlrtRSInfo pn_emlrtRSI{
    40,         // lineNo
    "xunormqr", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xunormqr.m" // pathName
};

emlrtRSInfo qn_emlrtRSI{
    106,              // lineNo
    "ceval_xunormqr", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xunormqr.m" // pathName
};

emlrtRSInfo
    vp_emlrtRSI{
        94,                  // lineNo
        "eml_mtimes_helper", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/"
        "eml_mtimes_helper.m" // pathName
    };

emlrtRSInfo
    wp_emlrtRSI{
        142,      // lineNo
        "mtimes", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+blas/"
        "mtimes.m" // pathName
    };

emlrtRSInfo
    xp_emlrtRSI{
        178,           // lineNo
        "mtimes_blas", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+blas/"
        "mtimes.m" // pathName
    };

emlrtMCInfo f_emlrtMCI{
    66,                                                               // lineNo
    18,                                                               // colNo
    "fprintf",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/iofun/fprintf.m" // pName
};

emlrtMCInfo k_emlrtMCI{
    53,        // lineNo
    19,        // colNo
    "flt2str", // fName
    "/usr/local/MATLAB/R2024a/toolbox/shared/coder/coder/lib/+coder/+internal/"
    "flt2str.m" // pName
};

emlrtRTEInfo m_emlrtRTEI{
    288,                                                              // lineNo
    27,                                                               // colNo
    "check_non_axis_size",                                            // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/cat.m" // pName
};

emlrtRTEInfo o_emlrtRTEI{
    159,                    // lineNo
    13,                     // colNo
    "coderTimeCheckStatus", // fName
    "/usr/local/MATLAB/R2024a/toolbox/shared/coder/coder/lib/+coder/+internal/"
    "+time/CoderTimeAPI.m" // pName
};

emlrtRTEInfo db_emlrtRTEI{
    58,                   // lineNo
    23,                   // colNo
    "assertValidSizeArg", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "assertValidSizeArg.m" // pName
};

emlrtBCInfo jf_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    33,                 // lineNo
    36,                 // colNo
    "elements_to_find", // aName
    "find_locations_t", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/"
    "Afun_lap_te/spget_quadcorr.m", // pName
    0                               // checkKind
};

emlrtBCInfo kf_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    38,                 // lineNo
    14,                 // colNo
    "locs",             // aName
    "find_locations_t", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/"
    "Afun_lap_te/spget_quadcorr.m", // pName
    0                               // checkKind
};

emlrtBCInfo lf_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    53,                // lineNo
    17,                // colNo
    "arr_",            // aName
    "binary_search_t", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/"
    "Afun_lap_te/spget_quadcorr.m", // pName
    0                               // checkKind
};

emlrtBCInfo mf_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    56,                // lineNo
    21,                // colNo
    "arr_",            // aName
    "binary_search_t", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/"
    "Afun_lap_te/spget_quadcorr.m", // pName
    0                               // checkKind
};

emlrtDCInfo vb_emlrtDCI{
    24,               // lineNo
    7,                // colNo
    "spget_quadcorr", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/"
    "Afun_lap_te/spget_quadcorr.m", // pName
    1                               // checkKind
};

emlrtBCInfo rf_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    24,               // lineNo
    7,                // colNo
    "A",              // aName
    "spget_quadcorr", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/"
    "Afun_lap_te/spget_quadcorr.m", // pName
    0                               // checkKind
};

emlrtRTEInfo
    mb_emlrtRTEI{
        133,                   // lineNo
        23,                    // colNo
        "dynamic_size_checks", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/"
        "eml_mtimes_helper.m" // pName
    };

emlrtRTEInfo
    nb_emlrtRTEI{
        138,                   // lineNo
        23,                    // colNo
        "dynamic_size_checks", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/"
        "eml_mtimes_helper.m" // pName
    };

emlrtRTEInfo qb_emlrtRTEI{
    45,          // lineNo
    13,          // colNo
    "infocheck", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
    "infocheck.m" // pName
};

emlrtRTEInfo rb_emlrtRTEI{
    48,          // lineNo
    13,          // colNo
    "infocheck", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
    "infocheck.m" // pName
};

emlrtRTEInfo ec_emlrtRTEI{
    13,                                                            // lineNo
    9,                                                             // colNo
    "sqrt",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elfun/sqrt.m" // pName
};

emlrtRTEInfo
    qc_emlrtRTEI{
        31,            // lineNo
        30,            // colNo
        "unsafeSxfun", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
        "unsafeSxfun.m" // pName
    };

emlrtRTEInfo xf_emlrtRTEI{
    52,                 // lineNo
    3,                  // colNo
    "srskelf_asym_new", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/"
    "srskelf_asym_new/srskelf_asym_new.m" // pName
};

emlrtRTEInfo lg_emlrtRTEI{
    60,                                                              // lineNo
    20,                                                              // colNo
    "bsxfun",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/bsxfun.m" // pName
};

emlrtRTEInfo qg_emlrtRTEI{
    63,                                                              // lineNo
    9,                                                               // colNo
    "repmat",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/repmat.m" // pName
};

emlrtRTEInfo dh_emlrtRTEI{
    15,                   // lineNo
    9,                    // colNo
    "pxyfun_lap_neumann", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/"
    "srskelf_asym1/pxyfun_lap_neumann.m" // pName
};

emlrtRTEInfo nh_emlrtRTEI{
    17,                   // lineNo
    9,                    // colNo
    "pxyfun_lap_neumann", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/"
    "srskelf_asym1/pxyfun_lap_neumann.m" // pName
};

emlrtRTEInfo ph_emlrtRTEI{
    27,                   // lineNo
    13,                   // colNo
    "pxyfun_lap_neumann", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/"
    "srskelf_asym1/pxyfun_lap_neumann.m" // pName
};

emlrtRTEInfo li_emlrtRTEI{
    24,               // lineNo
    7,                // colNo
    "spget_quadcorr", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/"
    "Afun_lap_te/spget_quadcorr.m" // pName
};

emlrtRTEInfo oi_emlrtRTEI{
    15,            // lineNo
    15,            // colNo
    "Afun_lap_te", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/"
    "Afun_lap_te/Afun_lap_te.m" // pName
};

emlrtRTEInfo vi_emlrtRTEI{
    54,                                                               // lineNo
    9,                                                                // colNo
    "div",                                                            // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/div.m" // pName
};

emlrtRTEInfo
    mk_emlrtRTEI{
        88,                  // lineNo
        9,                   // colNo
        "eml_mtimes_helper", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/"
        "eml_mtimes_helper.m" // pName
    };

emlrtRTEInfo
    vl_emlrtRTEI{
        207,  // lineNo
        55,   // colNo
        "id", // fName
        "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/id/"
        "id.m" // pName
    };

emlrtRTEInfo
    kn_emlrtRTEI{
        171,      // lineNo
        20,       // colNo
        "eml_qr", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/private/"
        "eml_qr.m" // pName
    };

emlrtRTEInfo
    ln_emlrtRTEI{
        188,      // lineNo
        20,       // colNo
        "eml_qr", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/private/"
        "eml_qr.m" // pName
    };

emlrtRTEInfo tn_emlrtRTEI{
    61,        // lineNo
    2,         // colNo
    "qrsolve", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/qrsolve.m" // pName
};

emlrtRTEInfo un_emlrtRTEI{
    85,        // lineNo
    26,        // colNo
    "qrsolve", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/qrsolve.m" // pName
};

emlrtRTEInfo wn_emlrtRTEI{
    119,       // lineNo
    5,         // colNo
    "qrsolve", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/qrsolve.m" // pName
};

emlrtRTEInfo
    fo_emlrtRTEI{
        218,      // lineNo
        20,       // colNo
        "mtimes", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+blas/"
        "mtimes.m" // pName
    };

emlrtRTEInfo
    vo_emlrtRTEI{
        58,       // lineNo
        29,       // colNo
        "xgetrf", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgetrf.m" // pName
    };

emlrtRTEInfo
    wo_emlrtRTEI{
        89,       // lineNo
        27,       // colNo
        "xgetrf", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgetrf.m" // pName
    };

const char_T cv[26]{'e', 'm', 'l', 'r', 't', 'C', 'l', 'o', 'c',
                    'k', 'G', 'e', 't', 't', 'i', 'm', 'e', 'M',
                    'o', 'n', 'o', 't', 'o', 'n', 'i', 'c'};

const char_T cv1[19]{'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd', 'g',
                     'e', 't', 'r', 'f', '_', 'w', 'o', 'r', 'k'};

emlrtRSInfo hr_emlrtRSI{
    66,                                                               // lineNo
    "fprintf",                                                        // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/iofun/fprintf.m" // pathName
};

emlrtRSInfo or_emlrtRSI{
    53,        // lineNo
    "flt2str", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/shared/coder/coder/lib/+coder/+internal/"
    "flt2str.m" // pathName
};

emlrtRSInfo qr_emlrtRSI{
    54,                                                               // lineNo
    "div",                                                            // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/div.m" // pathName
};

// End of code generation (srskelf_asym_new_data.cpp)
