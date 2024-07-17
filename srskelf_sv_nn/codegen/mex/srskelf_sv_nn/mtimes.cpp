//
// mtimes.cpp
//
// Code generation for function 'mtimes'
//

// Include files
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "coder_array.h"
#include <cstddef>
#include <cstring>

// Function Definitions
namespace coder {
namespace internal {
namespace blas {
int32_T mtimes(const array<real_T, 2U> &A, const real_T B_data[],
               int32_T B_size, real_T C_data[])
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
  if ((A.size(0) == 0) || (A.size(1) == 0) || (B_size == 0)) {
    int32_T loop_ub;
    loop_ub = A.size(0);
    C_size = A.size(0);
    if (loop_ub - 1 >= 0) {
      std::memset(&C_data[0], 0,
                  static_cast<uint32_T>(loop_ub) * sizeof(real_T));
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A.size(0);
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)A.size(1);
    lda_t = (ptrdiff_t)A.size(0);
    ldb_t = (ptrdiff_t)B_size;
    ldc_t = (ptrdiff_t)A.size(0);
    C_size = A.size(0);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1,
          &(((array<real_T, 2U> *)&A)->data())[0], &lda_t, (real_T *)&B_data[0],
          &ldb_t, &beta1, &C_data[0], &ldc_t);
  }
  return C_size;
}

} // namespace blas
} // namespace internal
} // namespace coder

// End of code generation (mtimes.cpp)
