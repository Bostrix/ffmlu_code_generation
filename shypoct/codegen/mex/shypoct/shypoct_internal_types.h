//
// shypoct_internal_types.h
//
// Code generation for function 'shypoct'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "shypoct_types.h"
#include "emlrt.h"

// Type Definitions
struct rtDesignRangeCheckInfo {
  int32_T lineNo;
  int32_T colNo;
  const char_T *fName;
  const char_T *pName;
};

struct rtRunTimeErrorInfo {
  int32_T lineNo;
  int32_T colNo;
  const char_T *fName;
  const char_T *pName;
};

// End of code generation (shypoct_internal_types.h)
