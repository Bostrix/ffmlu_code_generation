//
// srskelf_sv_nn.cpp
//
// Code generation for function 'srskelf_sv_nn'
//

// Include files
#include "srskelf_sv_nn.h"
#include "mldivide.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "srskelf_sv_nn_data.h"
#include "srskelf_sv_nn_types.h"
#include "blas.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstddef>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo
    emlrtRSI{
        16,              // lineNo
        "srskelf_sv_nn", // fcnName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m" // pathName
    };

static emlrtRSInfo
    b_emlrtRSI{
        17,              // lineNo
        "srskelf_sv_nn", // fcnName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m" // pathName
    };

static emlrtRSInfo
    c_emlrtRSI{
        18,              // lineNo
        "srskelf_sv_nn", // fcnName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m" // pathName
    };

static emlrtRSInfo
    d_emlrtRSI{
        19,              // lineNo
        "srskelf_sv_nn", // fcnName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m" // pathName
    };

static emlrtRSInfo
    e_emlrtRSI{
        28,              // lineNo
        "srskelf_sv_nn", // fcnName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m" // pathName
    };

static emlrtRSInfo
    f_emlrtRSI{
        29,              // lineNo
        "srskelf_sv_nn", // fcnName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m" // pathName
    };

static emlrtRSInfo
    g_emlrtRSI{
        30,              // lineNo
        "srskelf_sv_nn", // fcnName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m" // pathName
    };

static emlrtRSInfo
    h_emlrtRSI{
        31,              // lineNo
        "srskelf_sv_nn", // fcnName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m" // pathName
    };

static emlrtRSInfo
    j_emlrtRSI{
        69,                  // lineNo
        "eml_mtimes_helper", // fcnName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/"
        "eml_mtimes_helper.m" // pathName
    };

static emlrtRTEInfo
    emlrtRTEI{
        11,              // lineNo
        11,              // colNo
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m" // pName
    };

static emlrtBCInfo
    emlrtBCI{
        1,               // iFirst
        149,             // iLast
        12,              // lineNo
        21,              // colNo
        "F.factors",     // aName
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m", // pName
        0                  // checkKind
    };

static emlrtECInfo
    emlrtECI{
        1,               // nDims
        16,              // lineNo
        15,              // colNo
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m" // pName
    };

static emlrtECInfo
    b_emlrtECI{
        -1,              // nDims
        16,              // lineNo
        5,               // colNo
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m" // pName
    };

static emlrtECInfo
    c_emlrtECI{
        -1,              // nDims
        17,              // lineNo
        5,               // colNo
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m" // pName
    };

static emlrtECInfo
    d_emlrtECI{
        1,               // nDims
        18,              // lineNo
        15,              // colNo
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m" // pName
    };

static emlrtECInfo
    e_emlrtECI{
        -1,              // nDims
        18,              // lineNo
        5,               // colNo
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m" // pName
    };

static emlrtECInfo
    f_emlrtECI{
        1,               // nDims
        19,              // lineNo
        16,              // colNo
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m" // pName
    };

static emlrtECInfo
    g_emlrtECI{
        -1,              // nDims
        19,              // lineNo
        5,               // colNo
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m" // pName
    };

static emlrtRTEInfo
    b_emlrtRTEI{
        23,              // lineNo
        11,              // colNo
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m" // pName
    };

static emlrtDCInfo
    emlrtDCI{
        24,              // lineNo
        21,              // colNo
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m", // pName
        1                  // checkKind
    };

static emlrtBCInfo
    b_emlrtBCI{
        1,               // iFirst
        149,             // iLast
        24,              // lineNo
        21,              // colNo
        "F.factors",     // aName
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m", // pName
        0                  // checkKind
    };

static emlrtECInfo
    h_emlrtECI{
        1,               // nDims
        28,              // lineNo
        15,              // colNo
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m" // pName
    };

static emlrtECInfo
    i_emlrtECI{
        -1,              // nDims
        28,              // lineNo
        5,               // colNo
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m" // pName
    };

static emlrtECInfo
    j_emlrtECI{
        1,               // nDims
        29,              // lineNo
        15,              // colNo
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m" // pName
    };

static emlrtECInfo
    k_emlrtECI{
        -1,              // nDims
        29,              // lineNo
        5,               // colNo
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m" // pName
    };

static emlrtECInfo
    l_emlrtECI{
        -1,              // nDims
        30,              // lineNo
        5,               // colNo
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m" // pName
    };

static emlrtECInfo
    m_emlrtECI{
        1,               // nDims
        31,              // lineNo
        15,              // colNo
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m" // pName
    };

static emlrtECInfo
    n_emlrtECI{
        -1,              // nDims
        31,              // lineNo
        5,               // colNo
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m" // pName
    };

static emlrtRTEInfo
    c_emlrtRTEI{
        138,                   // lineNo
        23,                    // colNo
        "dynamic_size_checks", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/"
        "eml_mtimes_helper.m" // pName
    };

static emlrtRTEInfo
    d_emlrtRTEI{
        133,                   // lineNo
        23,                    // colNo
        "dynamic_size_checks", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/ops/"
        "eml_mtimes_helper.m" // pName
    };

static emlrtBCInfo
    c_emlrtBCI{
        1,               // iFirst
        80000,           // iLast
        16,              // lineNo
        17,              // colNo
        "Y",             // aName
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m", // pName
        0                  // checkKind
    };

static emlrtDCInfo
    b_emlrtDCI{
        16,              // lineNo
        17,              // colNo
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m", // pName
        1                  // checkKind
    };

static emlrtDCInfo
    c_emlrtDCI{
        28,              // lineNo
        17,              // colNo
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m", // pName
        1                  // checkKind
    };

static emlrtBCInfo
    d_emlrtBCI{
        1,               // iFirst
        80000,           // iLast
        28,              // lineNo
        17,              // colNo
        "Y",             // aName
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m", // pName
        0                  // checkKind
    };

static emlrtDCInfo
    d_emlrtDCI{
        16,              // lineNo
        49,              // colNo
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m", // pName
        1                  // checkKind
    };

static emlrtBCInfo
    e_emlrtBCI{
        1,               // iFirst
        80000,           // iLast
        16,              // lineNo
        49,              // colNo
        "Y",             // aName
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m", // pName
        0                  // checkKind
    };

static emlrtDCInfo
    e_emlrtDCI{
        28,              // lineNo
        42,              // colNo
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m", // pName
        1                  // checkKind
    };

static emlrtBCInfo
    f_emlrtBCI{
        1,               // iFirst
        80000,           // iLast
        28,              // lineNo
        42,              // colNo
        "Y",             // aName
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m", // pName
        0                  // checkKind
    };

static emlrtDCInfo
    f_emlrtDCI{
        29,              // lineNo
        42,              // colNo
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m", // pName
        1                  // checkKind
    };

static emlrtBCInfo
    g_emlrtBCI{
        1,               // iFirst
        80000,           // iLast
        29,              // lineNo
        42,              // colNo
        "Y",             // aName
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m", // pName
        0                  // checkKind
    };

static emlrtDCInfo
    g_emlrtDCI{
        19,              // lineNo
        18,              // colNo
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m", // pName
        1                  // checkKind
    };

static emlrtBCInfo
    h_emlrtBCI{
        1,               // iFirst
        80000,           // iLast
        19,              // lineNo
        18,              // colNo
        "Y",             // aName
        "srskelf_sv_nn", // fName
        "/home/user/Documents/ffmlu_code_generation/srskelf_sv_nn/"
        "srskelf_sv_nn.m", // pName
        0                  // checkKind
    };

// Function Declarations
static int32_T binary_expand_op(real_T in1_data[], const real_T in2[80000],
                                const struct0_T *in3, int32_T in4,
                                const real_T in5_data[],
                                const int32_T &in5_size);

static int32_T binary_expand_op_1(real_T in1_data[], const real_T in2[80000],
                                  const struct0_T *in3, int32_T in4,
                                  const real_T in5_data[],
                                  const int32_T &in5_size);

static int32_T binary_expand_op_2(real_T in1_data[], const real_T in2[80000],
                                  const struct0_T *in3, real_T in4,
                                  const real_T in5_data[],
                                  const int32_T &in5_size);

static int32_T binary_expand_op_3(real_T in1_data[], const real_T in2[80000],
                                  const struct0_T *in3, real_T in4,
                                  const real_T in5_data[],
                                  const int32_T &in5_size);

static int32_T binary_expand_op_4(real_T in1_data[], const real_T in2[80000],
                                  const real_T in3_data[],
                                  const int32_T &in3_size,
                                  const real_T in4_data[],
                                  const int32_T &in4_size);

static void minus(real_T in1_data[], int32_T &in1_size, const real_T in2_data[],
                  const int32_T &in2_size);

// Function Definitions
static int32_T binary_expand_op(real_T in1_data[], const real_T in2[80000],
                                const struct0_T *in3, int32_T in4,
                                const real_T in5_data[],
                                const int32_T &in5_size)
{
  int32_T b_in3;
  int32_T in1_size;
  int32_T stride_1_0;
  b_in3 = in3->factors[in4].nbr.size[0] * in3->factors[in4].nbr.size[1];
  if (in5_size == 1) {
    in1_size = b_in3;
  } else {
    in1_size = in5_size;
  }
  b_in3 = (b_in3 != 1);
  stride_1_0 = (in5_size != 1);
  for (int32_T i{0}; i < in1_size; i++) {
    in1_data[i] =
        in2[static_cast<int32_T>(in3->factors[in4].nbr.data[i * b_in3]) - 1] -
        in5_data[i * stride_1_0];
  }
  return in1_size;
}

static int32_T binary_expand_op_1(real_T in1_data[], const real_T in2[80000],
                                  const struct0_T *in3, int32_T in4,
                                  const real_T in5_data[],
                                  const int32_T &in5_size)
{
  int32_T b_in3;
  int32_T in1_size;
  int32_T stride_1_0;
  b_in3 = in3->factors[in4].sk.size[0] * in3->factors[in4].sk.size[1];
  if (in5_size == 1) {
    in1_size = b_in3;
  } else {
    in1_size = in5_size;
  }
  b_in3 = (b_in3 != 1);
  stride_1_0 = (in5_size != 1);
  for (int32_T i{0}; i < in1_size; i++) {
    in1_data[i] =
        in2[static_cast<int32_T>(in3->factors[in4].sk.data[i * b_in3]) - 1] -
        in5_data[i * stride_1_0];
  }
  return in1_size;
}

static int32_T binary_expand_op_2(real_T in1_data[], const real_T in2[80000],
                                  const struct0_T *in3, real_T in4,
                                  const real_T in5_data[],
                                  const int32_T &in5_size)
{
  int32_T b_in3;
  int32_T in1_size;
  int32_T stride_1_0;
  b_in3 = in3->factors[static_cast<int32_T>(in4) - 1].sk.size[0] *
          in3->factors[static_cast<int32_T>(in4) - 1].sk.size[1];
  if (in5_size == 1) {
    in1_size = b_in3;
  } else {
    in1_size = in5_size;
  }
  b_in3 = (b_in3 != 1);
  stride_1_0 = (in5_size != 1);
  for (int32_T i{0}; i < in1_size; i++) {
    in1_data[i] =
        in2[static_cast<int32_T>(in3->factors[static_cast<int32_T>(in4) - 1]
                                     .sk.data[i * b_in3]) -
            1] -
        in5_data[i * stride_1_0];
  }
  return in1_size;
}

static int32_T binary_expand_op_3(real_T in1_data[], const real_T in2[80000],
                                  const struct0_T *in3, real_T in4,
                                  const real_T in5_data[],
                                  const int32_T &in5_size)
{
  int32_T i;
  int32_T in1_size;
  int32_T stride_0_0;
  int32_T stride_1_0;
  i = in3->factors[static_cast<int32_T>(in4) - 1].rd.size[1];
  if (in5_size == 1) {
    in1_size = i;
  } else {
    in1_size = in5_size;
  }
  stride_0_0 = (i != 1);
  stride_1_0 = (in5_size != 1);
  for (i = 0; i < in1_size; i++) {
    in1_data[i] =
        in2[static_cast<int32_T>(in3->factors[static_cast<int32_T>(in4) - 1]
                                     .rd.data[i * stride_0_0]) -
            1] -
        in5_data[i * stride_1_0];
  }
  return in1_size;
}

static int32_T binary_expand_op_4(real_T in1_data[], const real_T in2[80000],
                                  const real_T in3_data[],
                                  const int32_T &in3_size,
                                  const real_T in4_data[],
                                  const int32_T &in4_size)
{
  int32_T in1_size;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in4_size == 1) {
    in1_size = in3_size;
  } else {
    in1_size = in4_size;
  }
  stride_0_0 = (in3_size != 1);
  stride_1_0 = (in4_size != 1);
  for (int32_T i{0}; i < in1_size; i++) {
    in1_data[i] = in2[static_cast<int32_T>(in3_data[i * stride_0_0]) - 1] -
                  in4_data[i * stride_1_0];
  }
  return in1_size;
}

static void minus(real_T in1_data[], int32_T &in1_size, const real_T in2_data[],
                  const int32_T &in2_size)
{
  real_T b_in1_data[195];
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in2_size == 1) {
    loop_ub = in1_size;
  } else {
    loop_ub = in2_size;
  }
  stride_0_0 = (in1_size != 1);
  stride_1_0 = (in2_size != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in1_data[i] = in1_data[i * stride_0_0] - in2_data[i * stride_1_0];
  }
  in1_size = loop_ub;
  if (loop_ub - 1 >= 0) {
    std::copy(&b_in1_data[0], &b_in1_data[loop_ub], &in1_data[0]);
  }
}

void srskelf_sv_nn(const emlrtStack *sp, const struct0_T *F,
                   const real_T X[80000], real_T Y[80000])
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  coder::array<real_T, 2U> b_F;
  coder::array<real_T, 2U> c_F;
  coder::array<real_T, 2U> d_F;
  emlrtStack b_st;
  emlrtStack st;
  real_T c_Y_data[887];
  real_T y_data[887];
  real_T b_Y_data[195];
  real_T b_tmp_data[195];
  real_T tmp_data[195];
  real_T b_data[23];
  real_T alpha1;
  real_T beta1;
  int32_T c_tmp_data[195];
  int32_T F_data[23];
  int32_T b_loop_ub;
  int32_T b_loop_ub_tmp;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T tmp_size;
  int32_T vectorUB;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  //  Y = SRSKELF_SV_NN(F,X) The strong skeletonization factorization stored in
  //   F is used to solve FY=X, where the "_NN" suffix indicates that the
  //   factorization in F is not symmetric and we are not taking the conjugate
  //   transpose.  The input X is a vector or matrix of appropriate size.
  //  Initialize
  std::copy(&X[0], &X[80000], &Y[0]);
  //  Upward sweep, applying the factors for each box from bottom to top
  i = static_cast<int32_T>(F->lvp[5]);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, F->lvp[5], mxDOUBLE_CLASS,
                                static_cast<int32_T>(F->lvp[5]), &emlrtRTEI,
                                (emlrtConstCTX)sp);
  for (int32_T b_i{0}; b_i < i; b_i++) {
    int32_T d_tmp_data[887];
    boolean_T guard1;
    if ((b_i + 1 < 1) || (b_i + 1 > 149)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, 149, &emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    loop_ub = F->factors[b_i].rd.size[1];
    tmp_size = loop_ub;
    for (i1 = 0; i1 < loop_ub; i1++) {
      alpha1 = F->factors[b_i].rd.data[i1];
      if (alpha1 != static_cast<int32_T>(muDoubleScalarFloor(alpha1))) {
        emlrtIntegerCheckR2012b(alpha1, &b_emlrtDCI, (emlrtConstCTX)sp);
      }
      if ((static_cast<int32_T>(alpha1) < 1) ||
          (static_cast<int32_T>(alpha1) > 80000)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(alpha1), 1, 80000,
                                      &c_emlrtBCI, (emlrtConstCTX)sp);
      }
      tmp_data[i1] = Y[static_cast<int32_T>(alpha1) - 1];
    }
    st.site = &emlrtRSI;
    i1 = F->factors[b_i].sk.size[0];
    b_loop_ub = F->factors[b_i].sk.size[1];
    loop_ub_tmp = i1 * b_loop_ub;
    for (i1 = 0; i1 < loop_ub_tmp; i1++) {
      alpha1 = F->factors[b_i].sk.data[i1];
      if (alpha1 != static_cast<int32_T>(muDoubleScalarFloor(alpha1))) {
        emlrtIntegerCheckR2012b(alpha1, &d_emlrtDCI, &st);
      }
      if ((static_cast<int32_T>(alpha1) < 1) ||
          (static_cast<int32_T>(alpha1) > 80000)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(alpha1), 1, 80000,
                                      &e_emlrtBCI, &st);
      }
      F_data[i1] = static_cast<int32_T>(alpha1);
    }
    for (i1 = 0; i1 < loop_ub_tmp; i1++) {
      b_data[i1] = Y[F_data[i1] - 1];
    }
    b_st.site = &j_emlrtRSI;
    i1 = F->factors[b_i].T.size[0];
    if (i1 != loop_ub_tmp) {
      if (((i1 == 1) && (F->factors[b_i].T.size[1] == 1)) ||
          (loop_ub_tmp == 1)) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &d_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    guard1 = false;
    if (i1 == 0) {
      guard1 = true;
    } else {
      b_loop_ub = F->factors[b_i].T.size[1];
      if ((b_loop_ub == 0) || (loop_ub_tmp == 0)) {
        guard1 = true;
      } else {
        TRANSB1 = 'N';
        TRANSA1 = 'T';
        alpha1 = 1.0;
        beta1 = 0.0;
        m_t = (ptrdiff_t)b_loop_ub;
        n_t = (ptrdiff_t)1;
        k_t = (ptrdiff_t)i1;
        lda_t = (ptrdiff_t)i1;
        ldb_t = (ptrdiff_t)loop_ub_tmp;
        ldc_t = (ptrdiff_t)b_loop_ub;
        dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1,
              (real_T *)&F->factors[b_i].T.data[0], &lda_t, &b_data[0], &ldb_t,
              &beta1, &b_tmp_data[0], &ldc_t);
      }
    }
    if (guard1) {
      b_loop_ub = F->factors[b_i].T.size[1];
      if (b_loop_ub - 1 >= 0) {
        std::memset(&b_tmp_data[0], 0,
                    static_cast<uint32_T>(b_loop_ub) * sizeof(real_T));
      }
    }
    if ((loop_ub != b_loop_ub) && ((loop_ub != 1) && (b_loop_ub != 1))) {
      emlrtDimSizeImpxCheckR2021b(loop_ub, b_loop_ub, &emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    for (i1 = 0; i1 < loop_ub; i1++) {
      c_tmp_data[i1] = static_cast<int32_T>(F->factors[b_i].rd.data[i1]) - 1;
    }
    if (loop_ub == b_loop_ub) {
      b_loop_ub = (loop_ub / 2) << 1;
      vectorUB = b_loop_ub - 2;
      for (i1 = 0; i1 <= vectorUB; i1 += 2) {
        __m128d r;
        __m128d r1;
        r = _mm_loadu_pd(&tmp_data[i1]);
        r1 = _mm_loadu_pd(&b_tmp_data[i1]);
        _mm_storeu_pd(&tmp_data[i1], _mm_sub_pd(r, r1));
      }
      for (i1 = b_loop_ub; i1 < loop_ub; i1++) {
        tmp_data[i1] -= b_tmp_data[i1];
      }
    } else {
      minus(tmp_data, tmp_size, b_tmp_data, b_loop_ub);
    }
    emlrtSubAssignSizeCheckR2012b(&loop_ub, 1, &tmp_size, 1, &b_emlrtECI,
                                  (emlrtCTX)sp);
    for (i1 = 0; i1 < loop_ub; i1++) {
      Y[c_tmp_data[i1]] = tmp_data[i1];
    }
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_Y_data[i1] = Y[static_cast<int32_T>(F->factors[b_i].rd.data[i1]) - 1];
    }
    st.site = &b_emlrtRSI;
    tmp_size =
        coder::mldivide(st, F->factors[b_i].L, b_Y_data, loop_ub, tmp_data);
    emlrtSubAssignSizeCheckR2012b(&loop_ub, 1, &tmp_size, 1, &c_emlrtECI,
                                  (emlrtCTX)sp);
    for (i1 = 0; i1 < loop_ub; i1++) {
      Y[c_tmp_data[i1]] = tmp_data[i1];
    }
    st.site = &c_emlrtRSI;
    b_st.site = &j_emlrtRSI;
    i1 = F->factors[b_i].E.size[1];
    if (i1 != loop_ub) {
      if (((F->factors[b_i].E.size[0] == 1) && (i1 == 1)) || (loop_ub == 1)) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &d_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_Y_data[i1] = Y[static_cast<int32_T>(F->factors[b_i].rd.data[i1]) - 1];
    }
    c_F.set((real_T *)&F->factors[b_i].E.data[0], F->factors[b_i].E.size[0],
            F->factors[b_i].E.size[1]);
    b_loop_ub = coder::internal::blas::mtimes(c_F, b_Y_data, loop_ub, y_data);
    if ((loop_ub_tmp != b_loop_ub) &&
        ((loop_ub_tmp != 1) && (b_loop_ub != 1))) {
      emlrtDimSizeImpxCheckR2021b(loop_ub_tmp, b_loop_ub, &d_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    for (i1 = 0; i1 < loop_ub_tmp; i1++) {
      F_data[i1] = static_cast<int32_T>(F->factors[b_i].sk.data[i1]) - 1;
    }
    if (loop_ub_tmp == b_loop_ub) {
      b_loop_ub = loop_ub_tmp;
      for (i1 = 0; i1 < loop_ub_tmp; i1++) {
        b_data[i1] = Y[static_cast<int32_T>(F->factors[b_i].sk.data[i1]) - 1] -
                     y_data[i1];
      }
    } else {
      b_loop_ub = binary_expand_op_1(b_data, Y, F, b_i, y_data, b_loop_ub);
    }
    emlrtSubAssignSizeCheckR2012b(&loop_ub_tmp, 1, &b_loop_ub, 1, &e_emlrtECI,
                                  (emlrtCTX)sp);
    for (i1 = 0; i1 < loop_ub_tmp; i1++) {
      Y[F_data[i1]] = b_data[i1];
    }
    loop_ub_tmp = F->factors[b_i].nbr.size[0] * F->factors[b_i].nbr.size[1];
    for (i1 = 0; i1 < loop_ub_tmp; i1++) {
      alpha1 = F->factors[b_i].nbr.data[i1];
      if (alpha1 != static_cast<int32_T>(muDoubleScalarFloor(alpha1))) {
        emlrtIntegerCheckR2012b(alpha1, &g_emlrtDCI, (emlrtConstCTX)sp);
      }
      if ((static_cast<int32_T>(alpha1) < 1) ||
          (static_cast<int32_T>(alpha1) > 80000)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(alpha1), 1, 80000,
                                      &h_emlrtBCI, (emlrtConstCTX)sp);
      }
    }
    st.site = &d_emlrtRSI;
    b_st.site = &j_emlrtRSI;
    i1 = F->factors[b_i].C.size(1);
    if (i1 != loop_ub) {
      if (((F->factors[b_i].C.size(0) == 1) && (i1 == 1)) || (loop_ub == 1)) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &d_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_Y_data[i1] = Y[static_cast<int32_T>(F->factors[b_i].rd.data[i1]) - 1];
    }
    b_loop_ub = coder::internal::blas::mtimes(F->factors[b_i].C, b_Y_data,
                                              loop_ub, y_data);
    if ((loop_ub_tmp != b_loop_ub) &&
        ((loop_ub_tmp != 1) && (b_loop_ub != 1))) {
      emlrtDimSizeImpxCheckR2021b(loop_ub_tmp, b_loop_ub, &f_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    for (i1 = 0; i1 < loop_ub_tmp; i1++) {
      d_tmp_data[i1] = static_cast<int32_T>(F->factors[b_i].nbr.data[i1]) - 1;
    }
    if (loop_ub_tmp == b_loop_ub) {
      b_loop_ub = loop_ub_tmp;
      for (i1 = 0; i1 < loop_ub_tmp; i1++) {
        c_Y_data[i1] =
            Y[static_cast<int32_T>(F->factors[b_i].nbr.data[i1]) - 1] -
            y_data[i1];
      }
    } else {
      b_loop_ub = binary_expand_op(c_Y_data, Y, F, b_i, y_data, b_loop_ub);
    }
    emlrtSubAssignSizeCheckR2012b(&loop_ub_tmp, 1, &b_loop_ub, 1, &g_emlrtECI,
                                  (emlrtCTX)sp);
    for (i1 = 0; i1 < loop_ub_tmp; i1++) {
      Y[d_tmp_data[i1]] = c_Y_data[i1];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  //  Downward sweep, applying the factors for each box from top to bottom
  i = static_cast<int32_T>(-((-1.0 - F->lvp[5]) + 1.0));
  emlrtForLoopVectorCheckR2021a(
      F->lvp[5], -1.0, 1.0, mxDOUBLE_CLASS,
      static_cast<int32_T>(-((-1.0 - F->lvp[5]) + 1.0)), &b_emlrtRTEI,
      (emlrtConstCTX)sp);
  for (int32_T b_i{0}; b_i < i; b_i++) {
    real_T Y_data[23];
    beta1 = F->lvp[5] - static_cast<real_T>(b_i);
    if (beta1 != static_cast<int32_T>(muDoubleScalarFloor(beta1))) {
      emlrtIntegerCheckR2012b(beta1, &emlrtDCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(beta1) < 1) ||
        (static_cast<int32_T>(beta1) > 149)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(beta1), 1, 149,
                                    &b_emlrtBCI, (emlrtConstCTX)sp);
    }
    loop_ub_tmp = static_cast<int32_T>(beta1) - 1;
    loop_ub = F->factors[static_cast<int32_T>(beta1) - 1].rd.size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      tmp_data[i1] = F->factors[static_cast<int32_T>(beta1) - 1].rd.data[i1];
    }
    for (i1 = 0; i1 < loop_ub; i1++) {
      alpha1 = tmp_data[i1];
      if (alpha1 != static_cast<int32_T>(muDoubleScalarFloor(alpha1))) {
        emlrtIntegerCheckR2012b(alpha1, &c_emlrtDCI, (emlrtConstCTX)sp);
      }
      if ((static_cast<int32_T>(alpha1) < 1) ||
          (static_cast<int32_T>(alpha1) > 80000)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(alpha1), 1, 80000,
                                      &d_emlrtBCI, (emlrtConstCTX)sp);
      }
    }
    st.site = &e_emlrtRSI;
    b_loop_ub_tmp = F->factors[static_cast<int32_T>(beta1) - 1].sk.size[0] *
                    F->factors[static_cast<int32_T>(beta1) - 1].sk.size[1];
    for (i1 = 0; i1 < b_loop_ub_tmp; i1++) {
      alpha1 = F->factors[static_cast<int32_T>(beta1) - 1].sk.data[i1];
      if (alpha1 != static_cast<int32_T>(muDoubleScalarFloor(alpha1))) {
        emlrtIntegerCheckR2012b(alpha1, &e_emlrtDCI, &st);
      }
      if ((static_cast<int32_T>(alpha1) < 1) ||
          (static_cast<int32_T>(alpha1) > 80000)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(alpha1), 1, 80000,
                                      &f_emlrtBCI, &st);
      }
    }
    b_st.site = &j_emlrtRSI;
    i1 = F->factors[static_cast<int32_T>(beta1) - 1].F.size[1];
    if (i1 != b_loop_ub_tmp) {
      if (((F->factors[static_cast<int32_T>(beta1) - 1].F.size[0] == 1) &&
           (i1 == 1)) ||
          (b_loop_ub_tmp == 1)) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &d_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    for (i1 = 0; i1 < b_loop_ub_tmp; i1++) {
      Y_data[i1] =
          Y[static_cast<int32_T>(
                F->factors[static_cast<int32_T>(beta1) - 1].sk.data[i1]) -
            1];
    }
    b_F.set((real_T *)&F->factors[loop_ub_tmp].F.data[0],
            F->factors[loop_ub_tmp].F.size[0],
            F->factors[loop_ub_tmp].F.size[1]);
    b_loop_ub =
        coder::internal::blas::mtimes(b_F, Y_data, b_loop_ub_tmp, y_data);
    if ((loop_ub != b_loop_ub) && ((loop_ub != 1) && (b_loop_ub != 1))) {
      emlrtDimSizeImpxCheckR2021b(loop_ub, b_loop_ub, &h_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    for (i1 = 0; i1 < loop_ub; i1++) {
      c_tmp_data[i1] = static_cast<int32_T>(tmp_data[i1]) - 1;
    }
    if (loop_ub == b_loop_ub) {
      b_loop_ub = loop_ub;
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_tmp_data[i1] = Y[static_cast<int32_T>(tmp_data[i1]) - 1] - y_data[i1];
      }
    } else {
      b_loop_ub = binary_expand_op_4(b_tmp_data, Y, tmp_data, loop_ub, y_data,
                                     b_loop_ub);
    }
    emlrtSubAssignSizeCheckR2012b(&loop_ub, 1, &b_loop_ub, 1, &i_emlrtECI,
                                  (emlrtCTX)sp);
    for (i1 = 0; i1 < loop_ub; i1++) {
      Y[c_tmp_data[i1]] = b_tmp_data[i1];
    }
    st.site = &f_emlrtRSI;
    vectorUB = F->factors[static_cast<int32_T>(beta1) - 1].nbr.size[0] *
               F->factors[static_cast<int32_T>(beta1) - 1].nbr.size[1];
    for (i1 = 0; i1 < vectorUB; i1++) {
      alpha1 = F->factors[static_cast<int32_T>(beta1) - 1].nbr.data[i1];
      if (alpha1 != static_cast<int32_T>(muDoubleScalarFloor(alpha1))) {
        emlrtIntegerCheckR2012b(alpha1, &f_emlrtDCI, &st);
      }
      if ((static_cast<int32_T>(alpha1) < 1) ||
          (static_cast<int32_T>(alpha1) > 80000)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(alpha1), 1, 80000,
                                      &g_emlrtBCI, &st);
      }
    }
    b_st.site = &j_emlrtRSI;
    i1 = F->factors[loop_ub_tmp].D.size(1);
    if (i1 != vectorUB) {
      if (((F->factors[loop_ub_tmp].D.size(0) == 1) && (i1 == 1)) ||
          (vectorUB == 1)) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &d_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    for (i1 = 0; i1 < vectorUB; i1++) {
      c_Y_data[i1] =
          Y[static_cast<int32_T>(
                F->factors[static_cast<int32_T>(beta1) - 1].nbr.data[i1]) -
            1];
    }
    b_loop_ub = coder::internal::blas::mtimes(
        F->factors[static_cast<int32_T>(beta1) - 1].D, c_Y_data, vectorUB,
        y_data);
    if ((loop_ub != b_loop_ub) && ((loop_ub != 1) && (b_loop_ub != 1))) {
      emlrtDimSizeImpxCheckR2021b(loop_ub, b_loop_ub, &j_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if (b_loop_ub == loop_ub) {
      tmp_size = loop_ub;
      for (i1 = 0; i1 < loop_ub; i1++) {
        tmp_data[i1] =
            Y[static_cast<int32_T>(
                  F->factors[static_cast<int32_T>(beta1) - 1].rd.data[i1]) -
              1] -
            y_data[i1];
      }
    } else {
      tmp_size = binary_expand_op_3(tmp_data, Y, F, beta1, y_data, b_loop_ub);
    }
    emlrtSubAssignSizeCheckR2012b(&loop_ub, 1, &tmp_size, 1, &k_emlrtECI,
                                  (emlrtCTX)sp);
    for (i1 = 0; i1 < loop_ub; i1++) {
      Y[c_tmp_data[i1]] = tmp_data[i1];
    }
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_Y_data[i1] =
          Y[static_cast<int32_T>(
                F->factors[static_cast<int32_T>(beta1) - 1].rd.data[i1]) -
            1];
    }
    st.site = &g_emlrtRSI;
    tmp_size =
        coder::mldivide(st, F->factors[static_cast<int32_T>(beta1) - 1].U,
                        b_Y_data, loop_ub, tmp_data);
    emlrtSubAssignSizeCheckR2012b(&loop_ub, 1, &tmp_size, 1, &l_emlrtECI,
                                  (emlrtCTX)sp);
    for (i1 = 0; i1 < loop_ub; i1++) {
      Y[c_tmp_data[i1]] = tmp_data[i1];
    }
    st.site = &h_emlrtRSI;
    b_st.site = &j_emlrtRSI;
    i1 = F->factors[static_cast<int32_T>(beta1) - 1].T.size[1];
    if (i1 != loop_ub) {
      if (((F->factors[static_cast<int32_T>(beta1) - 1].T.size[0] == 1) &&
           (i1 == 1)) ||
          (loop_ub == 1)) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &d_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_Y_data[i1] =
          Y[static_cast<int32_T>(
                F->factors[static_cast<int32_T>(beta1) - 1].rd.data[i1]) -
            1];
    }
    d_F.set((real_T *)&F->factors[loop_ub_tmp].T.data[0],
            F->factors[loop_ub_tmp].T.size[0],
            F->factors[loop_ub_tmp].T.size[1]);
    b_loop_ub = coder::internal::blas::mtimes(d_F, b_Y_data, loop_ub, y_data);
    if ((b_loop_ub_tmp != b_loop_ub) &&
        ((b_loop_ub_tmp != 1) && (b_loop_ub != 1))) {
      emlrtDimSizeImpxCheckR2021b(b_loop_ub_tmp, b_loop_ub, &m_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    for (i1 = 0; i1 < b_loop_ub_tmp; i1++) {
      F_data[i1] =
          static_cast<int32_T>(
              F->factors[static_cast<int32_T>(beta1) - 1].sk.data[i1]) -
          1;
    }
    if (b_loop_ub_tmp == b_loop_ub) {
      b_loop_ub = b_loop_ub_tmp;
      for (i1 = 0; i1 < b_loop_ub_tmp; i1++) {
        b_data[i1] =
            Y[static_cast<int32_T>(
                  F->factors[static_cast<int32_T>(beta1) - 1].sk.data[i1]) -
              1] -
            y_data[i1];
      }
    } else {
      b_loop_ub = binary_expand_op_2(b_data, Y, F, beta1, y_data, b_loop_ub);
    }
    emlrtSubAssignSizeCheckR2012b(&b_loop_ub_tmp, 1, &b_loop_ub, 1, &n_emlrtECI,
                                  (emlrtCTX)sp);
    for (i1 = 0; i1 < b_loop_ub_tmp; i1++) {
      Y[F_data[i1]] = b_data[i1];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
}

// End of code generation (srskelf_sv_nn.cpp)
