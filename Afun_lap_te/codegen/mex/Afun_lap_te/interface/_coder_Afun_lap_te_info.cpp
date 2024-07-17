//
// _coder_Afun_lap_te_info.cpp
//
// Code generation for function 'Afun_lap_te'
//

// Include files
#include "_coder_Afun_lap_te_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

// Function Declarations
static const mxArray *c_emlrtMexFcnResolvedFunctionsI();

// Function Definitions
static const mxArray *c_emlrtMexFcnResolvedFunctionsI()
{
  const mxArray *nameCaptureInfo;
  const char_T *data[5]{
      "789ced565d4fdb3014752798f6c0473569fb176b34890ff158754c6205d4d2825421144c"
      "72534cfd116c67749b34fe00688f7b9ac44fe2919f43d3d46d631405"
      "ad55a64df3cbf5c9b173eebd8e8f824a3b7b2584d00a4ac6dd52129747b83c8a2f507ad8"
      "7cc95a574a2f478b6821b5cff03f46d1135c435f27806306e39dbe60",
      "8463aedb5f42401294a09fc11f3201a1d0260c5ad3603f46ece31435063115cf6be7e0f5"
      "5a1143f25c4d32a4d360dc8ffb8c7a179ed98f30a31f658b3fde3e71"
      "0e1548e5e033e2cb9eb32b3c4c5b5a48dc05a721c505785a3941c068e48a501346be8213"
      "f0779ef0a10b7cc4c4c81d40905813c19d6a107197e2d0d5303daf30",
      "535f7fc6fa5ee7d467f8589743c430e76e0f24079a3c37799cce98c7cbcc3c12c617d119"
      "8589dec38c7a57997a69be80737ddada0acbedebea33ebb4e364fdab"
      "61fc053f833816a557bff9b65ca49e197f4a6fd6fbf93643af6cf1cdcda8d30cb7769a7a"
      "a31eee562f48556e930f933c1a393a7979a00c5cd4fbff751f37fabf",
      "5bdf8a85edfa0cafc22e68f732c2be27a49cdf77fa2647dff0716364850c7e1624c7b4a2"
      "422c15a0f9f9bab2b09d87e10b38e774ab079e8e50713e54b4af5fdf"
      "7effefeb68febe8e3f6d1eadf7ebe23defa835ca68bddd38a8d5fe7e5f7f04207b1a78",
      ""};
  nameCaptureInfo = nullptr;
  emlrtNameCaptureMxArrayR2016a(&data[0], 3256U, &nameCaptureInfo);
  return nameCaptureInfo;
}

mxArray *emlrtMexFcnProperties()
{
  mxArray *xEntryPoints;
  mxArray *xInputs;
  mxArray *xResult;
  const char_T *propFieldName[9]{"Version",
                                 "ResolvedFunctions",
                                 "Checksum",
                                 "EntryPoints",
                                 "CoverageInfo",
                                 "IsPolymorphic",
                                 "PropertyList",
                                 "UUID",
                                 "ClassEntryPointIsHandle"};
  const char_T *epFieldName[8]{
      "Name",     "NumberOfInputs", "NumberOfOutputs", "ConstantInputs",
      "FullPath", "TimeStamp",      "Constructor",     "Visible"};
  xEntryPoints =
      emlrtCreateStructMatrix(1, 1, 8, (const char_T **)&epFieldName[0]);
  xInputs = emlrtCreateLogicalMatrix(1, 9);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("Afun_lap_te"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(9.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "FullPath",
      emlrtMxCreateString(
          "/Users/abidrk/LocalStorage/Projects/ffmlu_optimize/fn-codegen/"
          "ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(739450.50209490745));
  emlrtSetField(xEntryPoints, 0, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 0, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 9, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("24.1.0.2603908 (R2024a) Update 3"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)c_emlrtMexFcnResolvedFunctionsI());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("bQCAkdC8tPhrCMdrb2ushH"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

// End of code generation (_coder_Afun_lap_te_info.cpp)
