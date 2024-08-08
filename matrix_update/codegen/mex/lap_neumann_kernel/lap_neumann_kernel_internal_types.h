//
// lap_neumann_kernel_internal_types.h
//
// Code generation for function 'lap_neumann_kernel'
//

#pragma once

// Include files
#include "lap_neumann_kernel_types.h"
#include "rtwtypes.h"
#include "emlrt.h"

// Type Definitions
struct rtBoundsCheckInfo {
  int32_T iFirst;
  int32_T iLast;
  int32_T lineNo;
  int32_T colNo;
  const char_T *aName;
  const char_T *fName;
  const char_T *pName;
  int32_T checkKind;
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

struct rtEqualityCheckInfo {
  int32_T nDims;
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

// End of code generation (lap_neumann_kernel_internal_types.h)
