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
      "789cdd55cb4ec240141d0c1a168ac444bfc0b8044d4474490013440d08214163ea486fa1"
      "328f3a6d0deeddb872e7a718172efc14bfc1954b2db4406b9a9294d4"
      "c8dddc393d333df7d1b945b1f2490c21944443db5f1efa151ba76cbf80dce6e5639e7d31"
      "f776b488e2ae730eff64fb366706f48d216098c2e8a4cca9ca30331a",
      "f71a20013a2777200f184525d05029d427c1a985e8e10435021665ad0b5d68f7ea2645a2"
      "ab8f23249360548f579f7ce353d6a3ee538f9487bf285d66ba9c42c6"
      "d44164148512536a7319a40e3010d85039f3799a574c2611ac49064caed3d495473f641e"
      "6b017938bc25cec0a49831a907820141ae38ae42c6b1e41bc79091b9",
      "794d60acf71e52efdc57cfcdcfa67fbfab67b731b07eab53e6e3f5e3fd8981ff483c2a51"
      "ea6d17df36a3d473ecaff4c2dec30d1fbd9487afe5cc564d3b28d78c"
      "bd8a769cbf51f3a2a416c77154037482e2403e38aaf7cfcb5cd642e691f4606f1e0eaf6b"
      "1d30a45b13cb6d2ec4ecbec7f5007d87b7aa23d2eacf4f5e304cd2ba",
      "86850e6876fd6c06c4e1f0b3e9a7bb9a564ba39a270f5bcf91cee7af97cf6c947a8ecdfb"
      "7cc647b966b65fe13baca5ef124a2a8dea59a1f0ffe7f3371477ee27",
      ""};
  nameCaptureInfo = nullptr;
  emlrtNameCaptureMxArrayR2016a(&data[0], 3152U, &nameCaptureInfo);
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
      emlrtMxCreateString("/home/user/ffmlu_code_generation/"
                          "ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(739439.60589120374));
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
