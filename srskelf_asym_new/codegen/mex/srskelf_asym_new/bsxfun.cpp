//
// bsxfun.cpp
//
// Code generation for function 'bsxfun'
//

// Include files
#include "bsxfun.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <emmintrin.h>

// Variable Definitions
static emlrtRTEInfo fb_emlrtRTEI{
    53,                                                              // lineNo
    15,                                                              // colNo
    "bsxfun",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/bsxfun.m" // pName
};

// Function Definitions
namespace coder {
void b_bsxfun(const emlrtStack &sp, const array<real_T, 2U> &a,
              const array<real_T, 2U> &b, array<real_T, 2U> &c)
{
  int32_T csz_idx_1;
  if (b.size(1) == 1) {
    csz_idx_1 = a.size(1);
  } else if (a.size(1) == 1) {
    csz_idx_1 = b.size(1);
  } else if (a.size(1) == b.size(1)) {
    csz_idx_1 = a.size(1);
  } else {
    emlrtErrorWithMessageIdR2018a(&sp, &fb_emlrtRTEI,
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch",
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch", 0);
  }
  c.set_size(&lg_emlrtRTEI, &sp, a.size(0), csz_idx_1);
  if ((a.size(0) != 0) && (csz_idx_1 != 0)) {
    int32_T acoef;
    int32_T b_acoef;
    int32_T bcoef;
    acoef = (a.size(1) != 1);
    bcoef = (b.size(1) != 1);
    csz_idx_1--;
    b_acoef = (a.size(0) != 1);
    for (int32_T k{0}; k <= csz_idx_1; k++) {
      int32_T i;
      int32_T varargin_2;
      int32_T varargin_3;
      varargin_2 = acoef * k;
      varargin_3 = bcoef * k;
      i = c.size(0) - 1;
      for (int32_T b_k{0}; b_k <= i; b_k++) {
        c[b_k + c.size(0) * k] =
            a[b_acoef * b_k + a.size(0) * varargin_2] * b[varargin_3];
      }
    }
  }
}

void bsxfun(const emlrtStack &sp, const array<real_T, 2U> &a,
            const array<real_T, 2U> &b, array<real_T, 2U> &c)
{
  int32_T csz_idx_1;
  if (a.size(1) == b.size(1)) {
    csz_idx_1 = a.size(1);
  } else {
    emlrtErrorWithMessageIdR2018a(&sp, &fb_emlrtRTEI,
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch",
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch", 0);
  }
  c.set_size(&lg_emlrtRTEI, &sp, 3, csz_idx_1);
  csz_idx_1--;
  for (int32_T k{0}; k <= csz_idx_1; k++) {
    _mm_storeu_pd(&c[3 * k],
                  _mm_div_pd(_mm_loadu_pd(&a[3 * k]), _mm_set1_pd(b[k])));
    c[3 * k + 2] = a[3 * k + 2] / b[k];
  }
}

void bsxfun(const emlrtStack &sp, const array<real_T, 1U> &a,
            const array<real_T, 2U> &b, array<real_T, 2U> &c)
{
  int32_T csz_idx_0;
  if (b.size(0) == 1) {
    csz_idx_0 = a.size(0);
  } else if (a.size(0) == 1) {
    csz_idx_0 = b.size(0);
  } else if (a.size(0) == b.size(0)) {
    csz_idx_0 = a.size(0);
  } else {
    emlrtErrorWithMessageIdR2018a(&sp, &fb_emlrtRTEI,
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch",
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch", 0);
  }
  c.set_size(&lg_emlrtRTEI, &sp, csz_idx_0, b.size(1));
  if ((csz_idx_0 != 0) && (b.size(1) != 0)) {
    int32_T acoef;
    int32_T bcoef;
    int32_T i;
    csz_idx_0 = (b.size(1) != 1);
    i = b.size(1) - 1;
    acoef = (a.size(0) != 1);
    bcoef = (b.size(0) != 1);
    for (int32_T k{0}; k <= i; k++) {
      int32_T i1;
      int32_T varargin_3;
      varargin_3 = csz_idx_0 * k;
      i1 = c.size(0) - 1;
      for (int32_T b_k{0}; b_k <= i1; b_k++) {
        c[b_k + c.size(0) * k] =
            a[acoef * b_k] * b[bcoef * b_k + b.size(0) * varargin_3];
      }
    }
  }
}

void bsxfun(const emlrtStack &sp, const real_T a[3], const array<real_T, 2U> &b,
            array<real_T, 2U> &c)
{
  c.set_size(&lg_emlrtRTEI, &sp, b.size(0), 3);
  if (b.size(0) != 0) {
    int32_T bcoef;
    bcoef = (b.size(0) != 1);
    for (int32_T k{0}; k < 3; k++) {
      int32_T i;
      i = c.size(0) - 1;
      for (int32_T b_k{0}; b_k <= i; b_k++) {
        c[b_k + c.size(0) * k] = a[k] - b[bcoef * b_k + b.size(0) * k];
      }
    }
  }
}

void c_bsxfun(const emlrtStack &sp, const array<real_T, 2U> &a,
              const array<real_T, 2U> &b, array<real_T, 2U> &c)
{
  int32_T csz_idx_0;
  int32_T csz_idx_1;
  int32_T i;
  boolean_T iscompatible;
  iscompatible = true;
  if (b.size(0) == 1) {
    csz_idx_0 = a.size(0);
  } else if (a.size(0) == 1) {
    csz_idx_0 = b.size(0);
  } else if (a.size(0) == b.size(0)) {
    csz_idx_0 = a.size(0);
  } else {
    iscompatible = false;
    i = b.size(0);
    csz_idx_1 = a.size(0);
    csz_idx_0 = muIntScalarMin_sint32(i, csz_idx_1);
  }
  if (b.size(1) == 1) {
    csz_idx_1 = a.size(1);
  } else if (a.size(1) == 1) {
    csz_idx_1 = b.size(1);
  } else if (a.size(1) == b.size(1)) {
    csz_idx_1 = a.size(1);
  } else {
    iscompatible = false;
    i = b.size(1);
    csz_idx_1 = a.size(1);
    csz_idx_1 = muIntScalarMin_sint32(i, csz_idx_1);
  }
  if (!iscompatible) {
    emlrtErrorWithMessageIdR2018a(&sp, &fb_emlrtRTEI,
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch",
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch", 0);
  }
  c.set_size(&lg_emlrtRTEI, &sp, csz_idx_0, csz_idx_1);
  if ((csz_idx_0 != 0) && (csz_idx_1 != 0)) {
    int32_T acoef;
    int32_T b_bcoef;
    int32_T bcoef;
    acoef = (a.size(1) != 1);
    bcoef = (b.size(1) != 1);
    csz_idx_0 = csz_idx_1 - 1;
    csz_idx_1 = (a.size(0) != 1);
    b_bcoef = (b.size(0) != 1);
    for (int32_T k{0}; k <= csz_idx_0; k++) {
      int32_T varargin_2;
      int32_T varargin_3;
      varargin_2 = acoef * k;
      varargin_3 = bcoef * k;
      i = c.size(0) - 1;
      for (int32_T b_k{0}; b_k <= i; b_k++) {
        c[b_k + c.size(0) * k] = a[csz_idx_1 * b_k + a.size(0) * varargin_2] *
                                 b[b_bcoef * b_k + b.size(0) * varargin_3];
      }
    }
  }
}

void d_bsxfun(const array<real_T, 2U> &a, const real_T b_data[],
              boolean_T c_data[], int32_T c_size[2])
{
  c_size[0] = 3;
  c_size[1] = a.size(1);
  if (a.size(1) != 0) {
    int32_T acoef;
    int32_T i;
    acoef = (a.size(1) != 1);
    i = a.size(1) - 1;
    for (int32_T k{0}; k <= i; k++) {
      int32_T varargin_2;
      varargin_2 = acoef * k;
      c_data[3 * k] = (a[3 * varargin_2] > b_data[0]);
      c_data[3 * k + 1] = (a[3 * varargin_2 + 1] > b_data[1]);
      c_data[3 * k + 2] = (a[3 * varargin_2 + 2] > b_data[2]);
    }
  }
}

} // namespace coder

// End of code generation (bsxfun.cpp)
