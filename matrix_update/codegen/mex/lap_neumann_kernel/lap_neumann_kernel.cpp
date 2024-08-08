//
// lap_neumann_kernel.cpp
//
// Code generation for function 'lap_neumann_kernel'
//

// Include files
#include "lap_neumann_kernel.h"
#include "lap_neumann_kernel_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    10,                   // lineNo
    "lap_neumann_kernel", // fcnName
    "/home/user/Documents/ffmlu_code_generation/matrix_update/"
    "lap_neumann_kernel.m" // pathName
};

static emlrtRTEInfo emlrtRTEI{
    13,                                                            // lineNo
    9,                                                             // colNo
    "sqrt",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elfun/sqrt.m" // pName
};

// Function Definitions
void lap_neumann_kernel(lap_neumann_kernelStackData *SD, const emlrtStack *sp,
                        const real_T x[6216], const real_T y[330],
                        const real_T nuuse[6216], real_T K[227920])
{
  __m128d r;
  emlrtStack st;
  real_T d;
  int32_T dx_tmp;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  //  KFUN(X,Y,zpars,NU) computes the Helmholtz potential evaluated
  //  pairwise between points in X and points in Y (does not handle the
  //  singularity).  zpars says which layer potential to use
  //  using the surface normal vectors in NU.
  for (int32_T k{0}; k < 110; k++) {
    real_T d1;
    real_T d2;
    d = y[3 * k];
    d1 = y[3 * k + 1];
    d2 = y[3 * k + 2];
    for (int32_T b_k{0}; b_k < 2072; b_k++) {
      dx_tmp = b_k + 2072 * k;
      SD->f0.dx[dx_tmp] = x[3 * b_k] - d;
      SD->f0.dy[dx_tmp] = x[3 * b_k + 1] - d1;
      SD->f0.dz[dx_tmp] = x[3 * b_k + 2] - d2;
    }
  }
  for (int32_T k{0}; k <= 227918; k += 2) {
    r = _mm_loadu_pd(&SD->f0.dx[k]);
    _mm_storeu_pd(&SD->f0.dr[k], _mm_mul_pd(r, r));
    r = _mm_loadu_pd(&SD->f0.dy[k]);
    _mm_storeu_pd(&SD->f0.y[k], _mm_mul_pd(r, r));
    r = _mm_loadu_pd(&SD->f0.dz[k]);
    _mm_storeu_pd(&SD->f0.b_y[k], _mm_mul_pd(r, r));
  }
  st.site = &emlrtRSI;
  p = false;
  for (int32_T k{0}; k < 227920; k++) {
    d = (SD->f0.dr[k] + SD->f0.y[k]) + SD->f0.b_y[k];
    SD->f0.dr[k] = d;
    if (p || (d < 0.0)) {
      p = true;
    }
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        &st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  for (int32_T k{0}; k <= 227918; k += 2) {
    r = _mm_loadu_pd(&SD->f0.dr[k]);
    _mm_storeu_pd(&SD->f0.dr[k], _mm_sqrt_pd(r));
  }
  for (int32_T k{0}; k < 110; k++) {
    for (int32_T b_k{0}; b_k < 2072; b_k++) {
      dx_tmp = b_k + 2072 * k;
      K[dx_tmp] = nuuse[3 * b_k] * SD->f0.dx[dx_tmp];
      SD->f0.dx[dx_tmp] = nuuse[3 * b_k + 1] * SD->f0.dy[dx_tmp];
      SD->f0.b_y[dx_tmp] = nuuse[3 * b_k + 2] * SD->f0.dz[dx_tmp];
    }
  }
  for (int32_T k{0}; k < 227920; k++) {
    d = SD->f0.dr[k];
    K[k] = -0.079577471545947673 * ((K[k] + SD->f0.dx[k]) + SD->f0.b_y[k]) /
           muDoubleScalarPower(d, 3.0);
    if (d == 0.0) {
      K[k] = 0.0;
    }
  }
}

// End of code generation (lap_neumann_kernel.cpp)
