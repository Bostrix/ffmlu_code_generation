//
// sqrt.cpp
//
// Code generation for function 'sqrt'
//

// Include files
#include "sqrt.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo vf_emlrtRSI{
    16,                                                            // lineNo
    "sqrt",                                                        // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elfun/sqrt.m" // pathName
};

// Function Definitions
namespace coder {
void b_sqrt(const emlrtStack &sp, array<real_T, 1U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T i;
  int32_T scalarLB;
  int32_T vectorUB;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  p = false;
  i = x.size(0);
  for (int32_T k{0}; k < i; k++) {
    if (p || (x[k] < 0.0)) {
      p = true;
    }
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        &sp, &ec_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  st.site = &vf_emlrtRSI;
  b_st.site = &gf_emlrtRSI;
  if (x.size(0) > 2147483646) {
    c_st.site = &ge_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  scalarLB = (i / 2) << 1;
  vectorUB = scalarLB - 2;
  for (int32_T k{0}; k <= vectorUB; k += 2) {
    __m128d r;
    r = _mm_loadu_pd(&x[k]);
    _mm_storeu_pd(&x[k], _mm_sqrt_pd(r));
  }
  for (int32_T k{scalarLB}; k < i; k++) {
    x[k] = muDoubleScalarSqrt(x[k]);
  }
}

void b_sqrt(const emlrtStack &sp, array<real_T, 2U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T i;
  int32_T scalarLB;
  int32_T vectorUB;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  p = false;
  i = x.size(1);
  for (int32_T k{0}; k < i; k++) {
    if (p || (x[k] < 0.0)) {
      p = true;
    }
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        &sp, &ec_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  st.site = &vf_emlrtRSI;
  b_st.site = &gf_emlrtRSI;
  if (x.size(1) > 2147483646) {
    c_st.site = &ge_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  scalarLB = (i / 2) << 1;
  vectorUB = scalarLB - 2;
  for (int32_T k{0}; k <= vectorUB; k += 2) {
    __m128d r;
    r = _mm_loadu_pd(&x[k]);
    _mm_storeu_pd(&x[k], _mm_sqrt_pd(r));
  }
  for (int32_T k{scalarLB}; k < i; k++) {
    x[k] = muDoubleScalarSqrt(x[k]);
  }
}

void c_sqrt(const emlrtStack &sp, array<real_T, 2U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T i;
  int32_T scalarLB;
  int32_T vectorUB;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  p = false;
  i = x.size(0) * x.size(1);
  for (int32_T k{0}; k < i; k++) {
    if (p || (x[k] < 0.0)) {
      p = true;
    }
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        &sp, &ec_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  st.site = &vf_emlrtRSI;
  b_st.site = &gf_emlrtRSI;
  if (i > 2147483646) {
    c_st.site = &ge_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  scalarLB = (i / 2) << 1;
  vectorUB = scalarLB - 2;
  for (int32_T k{0}; k <= vectorUB; k += 2) {
    __m128d r;
    r = _mm_loadu_pd(&x[k]);
    _mm_storeu_pd(&x[k], _mm_sqrt_pd(r));
  }
  for (int32_T k{scalarLB}; k < i; k++) {
    x[k] = muDoubleScalarSqrt(x[k]);
  }
}

} // namespace coder

// End of code generation (sqrt.cpp)
