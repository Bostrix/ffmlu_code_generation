//
// mtimes.cpp
//
// Code generation for function 'mtimes'
//

// Include files
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "blas.h"
#include "coder_array.h"
#include <cstddef>

// Variable Definitions
static emlrtRTEInfo
    go_emlrtRTEI{
        140,      // lineNo
        5,        // colNo
        "mtimes", // fName
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+blas/"
        "mtimes.m" // pName
    };

// Function Definitions
namespace coder {
namespace internal {
namespace blas {
void b_mtimes(const emlrtStack &sp, const array<real_T, 2U> &A,
              const array<real_T, 2U> &B, array<real_T, 2U> &C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  real_T alpha1;
  real_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((A.size(0) == 0) || (A.size(1) == 0) || (B.size(0) == 0) ||
      (B.size(1) == 0)) {
    int32_T loop_ub;
    C.set_size(&go_emlrtRTEI, &sp, A.size(0), B.size(1));
    loop_ub = A.size(0) * B.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      C[i] = 0.0;
    }
  } else {
    st.site = &xp_emlrtRSI;
    b_st.site = &yp_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A.size(0);
    n_t = (ptrdiff_t)B.size(1);
    k_t = (ptrdiff_t)A.size(1);
    lda_t = (ptrdiff_t)A.size(0);
    ldb_t = (ptrdiff_t)B.size(0);
    ldc_t = (ptrdiff_t)A.size(0);
    C.set_size(&fo_emlrtRTEI, &b_st, A.size(0), B.size(1));
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1,
          &(((array<real_T, 2U> *)&A)->data())[0], &lda_t,
          &(((array<real_T, 2U> *)&B)->data())[0], &ldb_t, &beta1,
          &(C.data())[0], &ldc_t);
  }
}

void mtimes(const emlrtStack &sp, const real_T A[4], const array<real_T, 2U> &B,
            array<real_T, 2U> &C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  real_T alpha1;
  real_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (B.size(1) == 0) {
    C.set_size(&go_emlrtRTEI, &sp, 2, 0);
  } else {
    st.site = &xp_emlrtRSI;
    b_st.site = &yp_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)2;
    n_t = (ptrdiff_t)B.size(1);
    k_t = (ptrdiff_t)2;
    lda_t = (ptrdiff_t)2;
    ldb_t = (ptrdiff_t)2;
    ldc_t = (ptrdiff_t)2;
    C.set_size(&fo_emlrtRTEI, &b_st, 2, B.size(1));
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, (real_T *)&A[0],
          &lda_t, &(((array<real_T, 2U> *)&B)->data())[0], &ldb_t, &beta1,
          &(C.data())[0], &ldc_t);
  }
}

void mtimes(const emlrtStack &sp, const array<real_T, 2U> &A,
            const array<real_T, 1U> &B, array<real_T, 1U> &C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  real_T alpha1;
  real_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &xp_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &yp_emlrtRSI;
  TRANSB1 = 'N';
  TRANSA1 = 'N';
  alpha1 = 1.0;
  beta1 = 0.0;
  m_t = (ptrdiff_t)A.size(0);
  n_t = (ptrdiff_t)1;
  k_t = (ptrdiff_t)A.size(1);
  lda_t = (ptrdiff_t)A.size(0);
  ldb_t = (ptrdiff_t)B.size(0);
  ldc_t = (ptrdiff_t)A.size(0);
  C.set_size(&fo_emlrtRTEI, &b_st, A.size(0));
  dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1,
        &(((array<real_T, 2U> *)&A)->data())[0], &lda_t,
        &(((array<real_T, 1U> *)&B)->data())[0], &ldb_t, &beta1, &(C.data())[0],
        &ldc_t);
}

void mtimes(const emlrtStack &sp, const array<real_T, 1U> &A,
            const array<real_T, 2U> &B, array<real_T, 2U> &C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  real_T alpha1;
  real_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((A.size(0) == 0) || (B.size(0) == 0) || (B.size(1) == 0)) {
    int32_T loop_ub;
    loop_ub = B.size(1);
    C.set_size(&go_emlrtRTEI, &sp, 1, B.size(1));
    for (int32_T i{0}; i < loop_ub; i++) {
      C[i] = 0.0;
    }
  } else {
    st.site = &xp_emlrtRSI;
    b_st.site = &yp_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)1;
    n_t = (ptrdiff_t)B.size(1);
    k_t = (ptrdiff_t)A.size(0);
    lda_t = (ptrdiff_t)A.size(0);
    ldb_t = (ptrdiff_t)B.size(0);
    ldc_t = (ptrdiff_t)1;
    C.set_size(&fo_emlrtRTEI, &b_st, 1, B.size(1));
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1,
          &(((array<real_T, 1U> *)&A)->data())[0], &lda_t,
          &(((array<real_T, 2U> *)&B)->data())[0], &ldb_t, &beta1, &C[0],
          &ldc_t);
  }
}

void mtimes(const emlrtStack &sp, const array<real_T, 2U> &A,
            const array<real_T, 2U> &B, array<real_T, 2U> &C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  real_T alpha1;
  real_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((A.size(0) == 0) || (A.size(1) == 0) || (B.size(0) == 0) ||
      (B.size(1) == 0)) {
    int32_T loop_ub;
    C.set_size(&go_emlrtRTEI, &sp, A.size(1), B.size(1));
    loop_ub = A.size(1) * B.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      C[i] = 0.0;
    }
  } else {
    st.site = &xp_emlrtRSI;
    b_st.site = &yp_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A.size(1);
    n_t = (ptrdiff_t)B.size(1);
    k_t = (ptrdiff_t)A.size(0);
    lda_t = (ptrdiff_t)A.size(0);
    ldb_t = (ptrdiff_t)B.size(0);
    ldc_t = (ptrdiff_t)A.size(1);
    C.set_size(&fo_emlrtRTEI, &b_st, A.size(1), B.size(1));
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1,
          &(((array<real_T, 2U> *)&A)->data())[0], &lda_t,
          &(((array<real_T, 2U> *)&B)->data())[0], &ldb_t, &beta1,
          &(C.data())[0], &ldc_t);
  }
}

} // namespace blas
} // namespace internal
} // namespace coder

// End of code generation (mtimes.cpp)
