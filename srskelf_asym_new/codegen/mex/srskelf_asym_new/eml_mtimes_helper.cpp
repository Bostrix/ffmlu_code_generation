//
// eml_mtimes_helper.cpp
//
// Code generation for function 'eml_mtimes_helper'
//

// Include files
#include "eml_mtimes_helper.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "coder_array.h"
#include <emmintrin.h>

// Variable Definitions
static emlrtRTEInfo mp_emlrtRTEI{
    207,                                                             // lineNo
    47,                                                              // colNo
    "id",                                                            // fName
    "/home/user/ffmlu_code_generation/ffmlu_code_generation/id/id.m" // pName
};

// Function Definitions
void binary_expand_op_16(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
                         const coder::array<real_T, 1U> &in2,
                         const coder::array<real_T, 1U> &in3, real_T in4,
                         const coder::array<real_T, 2U> &in5,
                         const coder::array<real_T, 2U> &in6, int32_T in7,
                         int32_T in8)
{
  __m128d r;
  coder::array<real_T, 2U> b_in5;
  coder::array<real_T, 1U> b_in2;
  real_T b_in3;
  int32_T b_loop_ub;
  int32_T i;
  int32_T loop_ub;
  int32_T scalarLB;
  int32_T vectorUB;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  b_in3 = in3[static_cast<int32_T>(in4) - 1];
  loop_ub = in2.size(0);
  b_in2.set_size(&mp_emlrtRTEI, &sp, loop_ub);
  scalarLB = (loop_ub / 2) << 1;
  vectorUB = scalarLB - 2;
  for (i = 0; i <= vectorUB; i += 2) {
    r = _mm_loadu_pd(&in2[i]);
    _mm_storeu_pd(&b_in2[i], _mm_div_pd(r, _mm_set1_pd(b_in3)));
  }
  for (i = scalarLB; i < loop_ub; i++) {
    b_in2[i] = in2[i] / b_in3;
  }
  i = in8 - in7;
  if (i == 1) {
    loop_ub = in5.size(1);
  } else {
    loop_ub = i;
  }
  b_in5.set_size(&yl_emlrtRTEI, &sp, 1, loop_ub);
  scalarLB = (in5.size(1) != 1);
  vectorUB = (i != 1);
  for (i = 0; i < loop_ub; i++) {
    b_in5[i] =
        in5[i * scalarLB] -
        in6[(static_cast<int32_T>(in4) + in6.size(0) * (in7 + i * vectorUB)) -
            1];
  }
  b_loop_ub = b_in2.size(0);
  in1.set_size(&pk_emlrtRTEI, &sp, b_in2.size(0), loop_ub);
  for (i = 0; i < loop_ub; i++) {
    scalarLB = (b_in2.size(0) / 2) << 1;
    vectorUB = scalarLB - 2;
    for (int32_T i1{0}; i1 <= vectorUB; i1 += 2) {
      r = _mm_loadu_pd(&b_in2[i1]);
      _mm_storeu_pd(&in1[i1 + in1.size(0) * i],
                    _mm_mul_pd(r, _mm_set1_pd(b_in5[i])));
    }
    for (int32_T i1{scalarLB}; i1 < b_loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] = b_in2[i1] * b_in5[i];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

namespace coder {
void dynamic_size_checks(const emlrtStack &sp, const array<real_T, 2U> &a,
                         const array<real_T, 1U> &b, int32_T innerDimA,
                         int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if (((a.size(0) == 1) && (a.size(1) == 1)) || (b.size(0) == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &sp, &mb_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&sp, &nb_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void dynamic_size_checks(const emlrtStack &sp, const array<real_T, 1U> &a,
                         const array<real_T, 2U> &b, int32_T innerDimA,
                         int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if ((a.size(0) == 1) || ((b.size(0) == 1) && (b.size(1) == 1))) {
      emlrtErrorWithMessageIdR2018a(
          &sp, &mb_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&sp, &nb_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void dynamic_size_checks(const emlrtStack &sp, const array<real_T, 2U> &a,
                         const array<real_T, 2U> &b, int32_T innerDimA,
                         int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if (((a.size(0) == 1) && (a.size(1) == 1)) ||
        ((b.size(0) == 1) && (b.size(1) == 1))) {
      emlrtErrorWithMessageIdR2018a(
          &sp, &mb_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&sp, &nb_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

} // namespace coder

// End of code generation (eml_mtimes_helper.cpp)
