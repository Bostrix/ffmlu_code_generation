//
// _coder_srskelf_asym_new_info.cpp
//
// Code generation for function 'srskelf_asym_new'
//

// Include files
#include "_coder_srskelf_asym_new_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

// Function Declarations
static const mxArray *c_emlrtMexFcnResolvedFunctionsI();

// Function Definitions
static const mxArray *c_emlrtMexFcnResolvedFunctionsI()
{
  const mxArray *nameCaptureInfo;
  const char_T *data[8]{
      "789ced593d6fd3401876aa0295504b84043f002124069206d2461dd326a9da149a36ee27"
      "54eec53e37a6f6d9f5078d3b81c48284c48660280b0b430726c4c0d0"
      "5fc086c4c8ca8a18905848ea5c623b3a39aacd959a9e229ddf7b727ede8fcba3d7319398"
      "b99b6018668471c6ab6bce3cdcb693ed7980f10e3f9e68cfe77d361e",
      "e79841cf3e8cbf68cfbc8a4cd8301d03010576760aaa2221804cd6d620a34343951f41e1"
      "08112519b29202ab6ee35ecb524a2ea863b4a0d6f5541df2db554b61"
      "f4bad1f550761b9d7c1c12e21dec331f1b847c247df8fde246baae2a306d19504f8ba222"
      "5b1caf0a90db8208eac0945444583574631bca22070c5be110dced59",
      "4829ae783643c67381188f8318755b537933323ed2794ab61141b56a32ecc6f73e245f99"
      "c8e7c543d4cbc9109e8faa135c9f4b7dfaef9fbbdf1f3a9a6fa5de88"
      "34f93eff1cb84e930f8f93e26b10eed7eff9bb4ae04bfa70542ca9791be899bcbe9adb2a"
      "e546b5aa512b74fda804f004f9c1106c5af7ff4ad8df6f1e7709f74f",
      "faf0bfaabb09ff1207908a4a3cba1dd979b91c1027c6b5862d5a889381d6f4c3520042ce"
      "fa49e9f46148be07443e2f1e4d7d33e9defc39c24d4b67669fbca5aa"
      "db99e27e96261f1e71d76d312b2daf8c4e14e6c0d2f8b40df778313b5f993cd3edd3a1db"
      "994e9c5ac8382f06c489f13c561dd379228aeabc5e09e0c7782b7b7a",
      "4a6a3e9ce908c8294303ba015d7e7c0ce94735c00f8c1fbfdeae0cbaaf29f7dd8f7fef53"
      "d5eff4f32fc334f9f088bb7e2fd554b684e6f7aaeb85891a3b3f3d57"
      "1853d662d477c7e5f74cabaf763584dc765323a1cc78fcd80ce907edbe7a9dc8e7c5a3a9"
      "5f6ff6da65a4a623df869e51d5e5d1c2a7b3ff4398e875792167ad2d",
      "6813330be678599bcb3f94f27a513ad3e57f4e97c3f6cd233edb1f07c60d6d0b9adc8e05"
      "045ed5f5f8f5cdcb017e603c9a7a7ab3d92a292d3d797ae325557dfe"
      "f5e1c7184d3e3ce2aecf6036b73cd628ab19b4666465452eb395c5a9a9f8e8f32161ffff"
      "fa9e70c06777e37110c979857b627df2bb907c79229f173f7ebd24a1",
      "f9c1ed30357d38f8fe9aaade0a370fd234f9f038ad7adb6fffc1ded9adec2d4e9aecba35"
      "bd23adccd832acac32a75f6fff00368c8769",
      ""};
  nameCaptureInfo = nullptr;
  emlrtNameCaptureMxArrayR2016a(&data[0], 8880U, &nameCaptureInfo);
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
  xInputs = emlrtCreateLogicalMatrix(1, 6);
  emlrtSetField(xEntryPoints, 0, "Name",
                emlrtMxCreateString("srskelf_asym_new"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(6.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath",
                emlrtMxCreateString(
                    "/home/user/ffmlu_code_generation/ffmlu_code_generation/"
                    "srskelf_asym_new/srskelf_asym_new.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(739467.588738426));
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
                emlrtMxCreateString("XtOA6foHBlCbniqpbcw5TC"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

// End of code generation (_coder_srskelf_asym_new_info.cpp)
