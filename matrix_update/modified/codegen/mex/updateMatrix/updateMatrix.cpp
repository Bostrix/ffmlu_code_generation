//
// updateMatrix.cpp
//
// Code generation for function 'updateMatrix'
//

// Include files
#include "updateMatrix.h"
#include "rt_nonfinite.h"
#include "updateMatrix_types.h"
#include "blas.h"
#include "mwmathutil.h"
#include <cstddef>

// Variable Definitions
static emlrtBCInfo emlrtBCI{
    1,              // iFirst
    1842,           // iLast
    3,              // lineNo
    5,              // colNo
    "A",            // aName
    "updateMatrix", // fName
    "/home/user/Documents/ffmlu_code_generation/matrix_update/modified/"
    "updateMatrix.m", // pName
    3                 // checkKind
};

static emlrtDCInfo emlrtDCI{
    3,              // lineNo
    5,              // colNo
    "updateMatrix", // fName
    "/home/user/Documents/ffmlu_code_generation/matrix_update/modified/"
    "updateMatrix.m", // pName
    1                 // checkKind
};

static emlrtBCInfo b_emlrtBCI{
    1,              // iFirst
    60,             // iLast
    3,              // lineNo
    5,              // colNo
    "A",            // aName
    "updateMatrix", // fName
    "/home/user/Documents/ffmlu_code_generation/matrix_update/modified/"
    "updateMatrix.m", // pName
    3                 // checkKind
};

// Function Definitions
void updateMatrix(updateMatrixStackData *SD, const emlrtStack *sp,
                  real_T A[110520], const real_T subI[432],
                  const real_T subJ[60], const real_T tmp1[38880],
                  const real_T tmp2[5400])
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  //  Update the matrix A at the specified indices
  TRANSB1 = 'N';
  TRANSA1 = 'N';
  alpha1 = 1.0;
  beta1 = 0.0;
  m_t = (ptrdiff_t)432;
  n_t = (ptrdiff_t)60;
  k_t = (ptrdiff_t)90;
  lda_t = (ptrdiff_t)432;
  ldb_t = (ptrdiff_t)90;
  ldc_t = (ptrdiff_t)432;
  dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, (real_T *)&tmp1[0],
        &lda_t, (real_T *)&tmp2[0], &ldb_t, &beta1, &SD->f0.y[0], &ldc_t);
  for (int32_T i{0}; i < 60; i++) {
    for (int32_T i1{0}; i1 < 432; i1++) {
      int32_T A_tmp;
      A_tmp = i1 + 432 * i;
      SD->f0.A[A_tmp] = A[(static_cast<int32_T>(subI[i1]) +
                           1842 * (static_cast<int32_T>(subJ[i]) - 1)) -
                          1] -
                        SD->f0.y[A_tmp];
    }
  }
  for (int32_T i{0}; i < 60; i++) {
    alpha1 = subJ[i];
    for (int32_T i1{0}; i1 < 432; i1++) {
      beta1 = subI[i1];
      if (beta1 != static_cast<int32_T>(muDoubleScalarFloor(beta1))) {
        emlrtIntegerCheckR2012b(beta1, &emlrtDCI, (emlrtConstCTX)sp);
      }
      if ((static_cast<int32_T>(beta1) < 1) ||
          (static_cast<int32_T>(beta1) > 1842)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(beta1), 1, 1842,
                                      &emlrtBCI, (emlrtConstCTX)sp);
      }
      if (alpha1 != static_cast<int32_T>(muDoubleScalarFloor(alpha1))) {
        emlrtIntegerCheckR2012b(alpha1, &emlrtDCI, (emlrtConstCTX)sp);
      }
      if ((static_cast<int32_T>(alpha1) < 1) ||
          (static_cast<int32_T>(alpha1) > 60)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(alpha1), 1, 60,
                                      &b_emlrtBCI, (emlrtConstCTX)sp);
      }
      A[(static_cast<int32_T>(beta1) +
         1842 * (static_cast<int32_T>(alpha1) - 1)) -
        1] = SD->f0.A[i1 + 432 * i];
    }
  }
}

// End of code generation (updateMatrix.cpp)
