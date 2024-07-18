/*
 * eml_mtimes_helper.c
 *
 * Code generation for function 'eml_mtimes_helper'
 *
 */

/* Include files */
#include "eml_mtimes_helper.h"
#include "id_data.h"
#include "rt_nonfinite.h"
#include <emmintrin.h>

/* Function Definitions */
void b_dynamic_size_checks(const emlrtStack *sp, int32_T a_size,
                           const int32_T b_size[2], int32_T innerDimA,
                           int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if ((a_size == 1) || ((b_size[0] == 1) && (b_size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(
          sp, &l_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &k_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void binary_expand_op_6(real_T in1_data[], int32_T in1_size[2],
                        const real_T in2_data[], const int32_T *in2_size,
                        const real_T in3_data[], real_T in4,
                        const real_T in5_data[], const int32_T in5_size[2],
                        const real_T in6_data[], const int32_T in6_size[2],
                        int32_T in7, int32_T in8)
{
  __m128d r;
  real_T b_in2_data[5];
  real_T b_in5_data[5];
  real_T in3;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T scalarLB;
  int32_T stride_0_1;
  int32_T stride_1_1;
  int32_T vectorUB;
  in3 = in3_data[(int32_T)in4 - 1];
  loop_ub = *in2_size;
  scalarLB = (loop_ub / 2) << 1;
  vectorUB = scalarLB - 2;
  for (i = 0; i <= vectorUB; i += 2) {
    r = _mm_loadu_pd(&in2_data[i]);
    _mm_storeu_pd(&b_in2_data[i], _mm_div_pd(r, _mm_set1_pd(in3)));
  }
  for (i = scalarLB; i < loop_ub; i++) {
    b_in2_data[i] = in2_data[i] / in3;
  }
  i = (in8 - in7) + 1;
  if (i == 1) {
    b_loop_ub = in5_size[1];
  } else {
    b_loop_ub = i;
  }
  stride_0_1 = (in5_size[1] != 1);
  stride_1_1 = (i != 1);
  in1_size[0] = loop_ub;
  in1_size[1] = b_loop_ub;
  for (i = 0; i < b_loop_ub; i++) {
    b_in5_data[i] =
        in5_data[i * stride_0_1] -
        in6_data[((int32_T)in4 + in6_size[0] * (in7 + i * stride_1_1)) - 1];
    scalarLB = (loop_ub / 2) << 1;
    vectorUB = scalarLB - 2;
    for (i1 = 0; i1 <= vectorUB; i1 += 2) {
      r = _mm_loadu_pd(&b_in2_data[i1]);
      _mm_storeu_pd(&in1_data[i1 + in1_size[0] * i],
                    _mm_mul_pd(r, _mm_set1_pd(b_in5_data[i])));
    }
    for (i1 = scalarLB; i1 < loop_ub; i1++) {
      in1_data[i1 + in1_size[0] * i] = b_in2_data[i1] * b_in5_data[i];
    }
  }
}

void dynamic_size_checks(const emlrtStack *sp, const int32_T a_size[2],
                         int32_T b_size, int32_T innerDimA, int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if (((a_size[0] == 1) && (a_size[1] == 1)) || (b_size == 1)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &l_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &k_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

/* End of code generation (eml_mtimes_helper.c) */
