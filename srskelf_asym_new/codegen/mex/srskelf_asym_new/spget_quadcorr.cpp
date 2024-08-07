//
// spget_quadcorr.cpp
//
// Code generation for function 'spget_quadcorr'
//

// Include files
#include "spget_quadcorr.h"
#include "rt_nonfinite.h"
#include "srskelf_asym_new_data.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRTEInfo yj_emlrtRTEI{
    29,               // lineNo
    5,                // colNo
    "spget_quadcorr", // fName
    "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/"
    "Afun_lap_te/spget_quadcorr.m" // pName
};

// Function Definitions
void binary_expand_op_21(const emlrtStack &sp, coder::array<int32_T, 1U> &in1,
                         const real_T in2[8000],
                         const coder::array<real_T, 1U> &in3,
                         const coder::array<int32_T, 1U> &in4,
                         const coder::array<real_T, 1U> &in5,
                         const coder::array<real_T, 2U> &in6,
                         const coder::array<real_T, 2U> &in7)
{
  int32_T b_in6;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  b_in6 = in6.size(1) * in7.size(1);
  if (in5.size(0) == 1) {
    loop_ub = in4.size(0);
  } else {
    loop_ub = in5.size(0);
  }
  in1.set_size(&li_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in4.size(0) != 1);
  stride_1_0 = (in5.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    real_T d;
    d = in2[static_cast<int32_T>(in3[in4[i * stride_0_0]]) - 1] +
        in5[i * stride_1_0];
    if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
      emlrtIntegerCheckR2012b(d, &vb_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > b_in6)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, b_in6,
                                    &rf_emlrtBCI, (emlrtConstCTX)&sp);
    }
    in1[i] = static_cast<int32_T>(d);
  }
}

void binary_expand_op_7(const emlrtStack &sp, coder::array<int32_T, 1U> &in1,
                        const real_T in2[8000],
                        const coder::array<int32_T, 1U> &in3,
                        const coder::array<real_T, 1U> &in4, int32_T in5,
                        const coder::array<real_T, 2U> &in6)
{
  coder::array<int32_T, 1U> b_in2;
  int32_T b_in5;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  b_in5 = in5 * in6.size(1);
  if (in4.size(0) == 1) {
    loop_ub = in3.size(0);
  } else {
    loop_ub = in4.size(0);
  }
  b_in2.set_size(&li_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in3.size(0) != 1);
  stride_1_0 = (in4.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    real_T d;
    d = in2[in1[in3[i * stride_0_0]] - 1] + in4[i * stride_1_0];
    if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
      emlrtIntegerCheckR2012b(d, &vb_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > b_in5)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, b_in5,
                                    &rf_emlrtBCI, (emlrtConstCTX)&sp);
    }
    b_in2[i] = static_cast<int32_T>(d);
  }
  loop_ub = b_in2.size(0);
  in1.set_size(&li_emlrtRTEI, &sp, b_in2.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = b_in2[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void binary_expand_op_9(const emlrtStack &sp, coder::array<int32_T, 1U> &in1,
                        const real_T in2[8000],
                        const coder::array<real_T, 1U> &in3,
                        const coder::array<int32_T, 1U> &in4,
                        const coder::array<real_T, 1U> &in5,
                        const coder::array<real_T, 2U> &in6, int32_T in7)
{
  int32_T b_in6;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  b_in6 = in6.size(1) * in7;
  if (in5.size(0) == 1) {
    loop_ub = in4.size(0);
  } else {
    loop_ub = in5.size(0);
  }
  in1.set_size(&li_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in4.size(0) != 1);
  stride_1_0 = (in5.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    real_T d;
    d = in2[static_cast<int32_T>(in3[in4[i * stride_0_0]]) - 1] +
        in5[i * stride_1_0];
    if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
      emlrtIntegerCheckR2012b(d, &vb_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > b_in6)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, b_in6,
                                    &rf_emlrtBCI, (emlrtConstCTX)&sp);
    }
    in1[i] = static_cast<int32_T>(d);
  }
}

void find_locations_t(const emlrtStack &sp,
                      const coder::array<real_T, 2U> &big_sorted_list,
                      const coder::array<real_T, 1U> &elements_to_find,
                      coder::array<real_T, 1U> &locs)
{
  emlrtStack st;
  int32_T loop_ub;
  int32_T right;
  st.prev = &sp;
  st.tls = sp.tls;
  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  //  Initialize an empty array to store the locations
  loop_ub = elements_to_find.size(0);
  locs.set_size(&yj_emlrtRTEI, &sp, elements_to_find.size(0));
  for (right = 0; right < loop_ub; right++) {
    locs[right] = 0.0;
  }
  //  Iterate over each element to find
  for (int32_T i{0}; i < loop_ub; i++) {
    real_T target_;
    uint32_T left;
    if (i + 1 > loop_ub) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, loop_ub, &jf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    target_ = elements_to_find[i];
    //  Use the local function binary_search to find the location of the element
    st.site = &ij_emlrtRSI;
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    //  Initialize the bounds for the search
    left = 1U;
    right = big_sorted_list.size(1);
    //  Perform the binary search
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (left <= static_cast<uint32_T>(right)) {
        real_T d;
        int32_T mid;
        //  Calculate the midpoint
        mid = static_cast<int32_T>(muDoubleScalarFloor(
            static_cast<real_T>(left + static_cast<uint32_T>(right)) / 2.0));
        //  Check if the target is found
        if ((mid < 1) || (mid > big_sorted_list.size(1))) {
          emlrtDynamicBoundsCheckR2012b(mid, 1, big_sorted_list.size(1),
                                        &lf_emlrtBCI, &st);
        }
        d = big_sorted_list[mid - 1];
        if (d == target_) {
          if (i + 1 > locs.size(0)) {
            emlrtDynamicBoundsCheckR2012b(i + 1, 1, locs.size(0), &kf_emlrtBCI,
                                          &st);
          }
          locs[i] = mid;
          exitg1 = 1;
        } else {
          if (mid > big_sorted_list.size(1)) {
            emlrtDynamicBoundsCheckR2012b(mid, 1, big_sorted_list.size(1),
                                          &mf_emlrtBCI, &st);
          }
          if (d < target_) {
            left = static_cast<uint32_T>(mid) + 1U;
          } else {
            right = mid - 1;
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
      } else {
        //  If the element is not found, return -1
        if (i + 1 > locs.size(0)) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, locs.size(0), &kf_emlrtBCI,
                                        &st);
        }
        locs[i] = -1.0;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
    //  If the element is found (location is not -1), add it to the locs array
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
}

// End of code generation (spget_quadcorr.cpp)
