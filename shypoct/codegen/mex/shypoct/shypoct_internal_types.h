//
// shypoct_internal_types.h
//
// Code generation for function 'shypoct'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "shypoct_types.h"
#include "coder_bounded_array.h"
#include "emlrt.h"

// Type Definitions
struct b_struct_T {
  real_T ctr[3];
  coder::bounded_array<real_T, 1000U, 2U> chld;
};

struct rtDesignRangeCheckInfo {
  int32_T lineNo;
  int32_T colNo;
  const char_T *fName;
  const char_T *pName;
};

struct rtDoubleCheckInfo {
  int32_T lineNo;
  int32_T colNo;
  const char_T *fName;
  const char_T *pName;
  int32_T checkKind;
};

struct rtRunTimeErrorInfo {
  int32_T lineNo;
  int32_T colNo;
  const char_T *fName;
  const char_T *pName;
};

// End of code generation (shypoct_internal_types.h)
