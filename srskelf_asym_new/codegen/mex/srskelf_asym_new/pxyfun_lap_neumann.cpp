//
// pxyfun_lap_neumann.cpp
//
// Code generation for function 'pxyfun_lap_neumann'
//

// Include files
#include "pxyfun_lap_neumann.h"
#include "bsxfun.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "coder_array.h"

// Function Definitions
void binary_expand_op_4(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
                        const emlrtRSInfo in2,
                        const coder::array<real_T, 2U> &in3,
                        const coder::array<real_T, 2U> &in4,
                        const coder::array<real_T, 2U> &in5)
{
  coder::array<real_T, 2U> b_in3;
  emlrtStack st;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_1;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  loop_ub = in4.size(0);
  if (in4.size(1) == 1) {
    b_loop_ub = in3.size(1);
  } else {
    b_loop_ub = in4.size(1);
  }
  b_in3.set_size(&oh_emlrtRTEI, &sp, loop_ub, b_loop_ub);
  stride_0_0 = (in3.size(0) != 1);
  stride_0_1 = (in3.size(1) != 1);
  stride_1_1 = (in4.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      b_in3[i1 + b_in3.size(0) * i] =
          in3[i1 * stride_0_0 + in3.size(0) * aux_0_1] *
          in4[i1 + in4.size(0) * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  st.site = const_cast<emlrtRSInfo *>(&in2);
  coder::b_bsxfun(st, b_in3, in5, in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void binary_expand_op_6(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
                        const emlrtRSInfo in2,
                        const coder::array<real_T, 2U> &in3,
                        const coder::array<real_T, 2U> &in4)
{
  coder::array<real_T, 2U> b_in1;
  emlrtStack st;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_1;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  loop_ub = in3.size(0);
  if (in3.size(1) == 1) {
    b_loop_ub = in1.size(1);
  } else {
    b_loop_ub = in3.size(1);
  }
  b_in1.set_size(&eh_emlrtRTEI, &sp, loop_ub, b_loop_ub);
  stride_0_0 = (in1.size(0) != 1);
  stride_0_1 = (in1.size(1) != 1);
  stride_1_1 = (in3.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      b_in1[i1 + b_in1.size(0) * i] =
          in1[i1 * stride_0_0 + in1.size(0) * aux_0_1] *
          in3[i1 + in3.size(0) * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  st.site = const_cast<emlrtRSInfo *>(&in2);
  coder::b_bsxfun(st, b_in1, in4, in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (pxyfun_lap_neumann.cpp)
