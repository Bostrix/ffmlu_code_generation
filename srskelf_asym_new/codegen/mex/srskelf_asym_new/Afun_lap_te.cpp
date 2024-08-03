//
// Afun_lap_te.cpp
//
// Code generation for function 'Afun_lap_te'
//

// Include files
#include "Afun_lap_te.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "coder_array.h"

// Function Definitions
void eq(const emlrtStack &sp, coder::array<boolean_T, 2U> &in1,
        const coder::array<real_T, 2U> &in2,
        const coder::array<real_T, 2U> &in3)
{
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  in1.set_size(&oi_emlrtRTEI, &sp, loop_ub, in1.size(1));
  if (in3.size(1) == 1) {
    b_loop_ub = in2.size(1);
  } else {
    b_loop_ub = in3.size(1);
  }
  in1.set_size(&oi_emlrtRTEI, &sp, in1.size(0), b_loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_0_1 = (in2.size(1) != 1);
  stride_1_0 = (in3.size(0) != 1);
  stride_1_1 = (in3.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] =
          (in2[i1 * stride_0_0 + in2.size(0) * aux_0_1] ==
           in3[i1 * stride_1_0 + in3.size(0) * aux_1_1]);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

// End of code generation (Afun_lap_te.cpp)
