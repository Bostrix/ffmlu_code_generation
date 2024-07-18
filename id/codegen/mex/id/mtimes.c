/*
 * mtimes.c
 *
 * Code generation for function 'mtimes'
 *
 */

/* Include files */
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include <stddef.h>
#include <string.h>

/* Function Definitions */
void b_mtimes(const real_T A_data[], int32_T A_size, const real_T B_data[],
              const int32_T B_size[2], real_T C_data[], int32_T C_size[2])
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
  if ((A_size == 0) || (B_size[0] == 0) || (B_size[1] == 0)) {
    int32_T loop_ub;
    C_size[0] = 1;
    loop_ub = B_size[1];
    C_size[1] = B_size[1];
    if (loop_ub - 1 >= 0) {
      memset(&C_data[0], 0, (uint32_T)loop_ub * sizeof(real_T));
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)1;
    n_t = (ptrdiff_t)B_size[1];
    k_t = (ptrdiff_t)A_size;
    lda_t = (ptrdiff_t)A_size;
    ldb_t = (ptrdiff_t)B_size[0];
    ldc_t = (ptrdiff_t)1;
    C_size[0] = 1;
    C_size[1] = B_size[1];
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, (real_T *)&A_data[0],
          &lda_t, (real_T *)&B_data[0], &ldb_t, &beta1, &C_data[0], &ldc_t);
  }
}

void c_mtimes(const real_T A[4], const real_T B_data[], const int32_T B_size[2],
              real_T C_data[], int32_T C_size[2])
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
  TRANSB1 = 'N';
  TRANSA1 = 'N';
  alpha1 = 1.0;
  beta1 = 0.0;
  m_t = (ptrdiff_t)2;
  n_t = (ptrdiff_t)B_size[1];
  k_t = (ptrdiff_t)2;
  lda_t = (ptrdiff_t)2;
  ldb_t = (ptrdiff_t)2;
  ldc_t = (ptrdiff_t)2;
  C_size[0] = 2;
  C_size[1] = B_size[1];
  dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, (real_T *)&A[0], &lda_t,
        (real_T *)&B_data[0], &ldb_t, &beta1, &C_data[0], &ldc_t);
}

int32_T mtimes(const real_T A_data[], const int32_T A_size[2],
               const real_T B_data[], int32_T B_size, real_T C_data[])
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T C_size;
  char_T TRANSA1;
  char_T TRANSB1;
  TRANSB1 = 'N';
  TRANSA1 = 'N';
  alpha1 = 1.0;
  beta1 = 0.0;
  m_t = (ptrdiff_t)A_size[0];
  n_t = (ptrdiff_t)1;
  k_t = (ptrdiff_t)A_size[1];
  lda_t = (ptrdiff_t)A_size[0];
  ldb_t = (ptrdiff_t)B_size;
  ldc_t = (ptrdiff_t)A_size[0];
  C_size = A_size[0];
  dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, (real_T *)&A_data[0],
        &lda_t, (real_T *)&B_data[0], &ldb_t, &beta1, &C_data[0], &ldc_t);
  return C_size;
}

/* End of code generation (mtimes.c) */
