//
// spget_quadcorr.cpp
//
// Code generation for function 'spget_quadcorr'
//

// Include files
#include "spget_quadcorr.h"
#include "Afun_lap_te_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Function Definitions
void binary_expand_op(const emlrtStack &sp, coder::array<int32_T, 1U> &in1,
                      const real_T in2[8000],
                      const coder::array<int32_T, 1U> &in3,
                      const coder::array<real_T, 1U> &in4)
{
  coder::array<int32_T, 1U> b_in2;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in4.size(0) == 1) {
    loop_ub = in3.size(0);
  } else {
    loop_ub = in4.size(0);
  }
  b_in2.set_size(&w_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in3.size(0) != 1);
  stride_1_0 = (in4.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    real_T d;
    d = in2[in1[in3[i * stride_0_0]] - 1] + in4[i * stride_1_0];
    if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
      emlrtIntegerCheckR2012b(d, &b_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > 4095)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 4095,
                                    &h_emlrtBCI, (emlrtConstCTX)&sp);
    }
    b_in2[i] = static_cast<int32_T>(d);
  }
  loop_ub = b_in2.size(0);
  in1.set_size(&w_emlrtRTEI, &sp, b_in2.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = b_in2[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (spget_quadcorr.cpp)
