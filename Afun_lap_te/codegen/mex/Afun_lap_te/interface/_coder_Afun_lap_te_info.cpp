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
      "789cdd55cb4ac340149d481541ac45d02f1097a9820f5c0896b68256a5b5451091383637"
      "363a8f3849a4eeddb872e7daa55fe0ca0f71e937b872a9699a368984"
      "5852e2e36eee9c9c999c937b931b246ded4a08a12c72e365c2cd935d9cebe611148c302f"
      "85f649c1ed68146502e73cfeae9b9b9c59d0b65cc03085de4995539d",
      "616635ae0d40024c4eae40ed309a4ea0a153a8fbc19e83e8a68fea018772d6c516342fea"
      "3645a265f61d123fe8d5e321e27933dfacc77a443d7221fea87c9c6f"
      "710a79db0491d7344a6ca5c95550ce8081c096ce59bea0d94c21d8502cf0af65eaf3db4e"
      "e8773ac6afc73bd20c6c8a19532e403020ee75cfc749421f63913e5c",
      "46e5f62981bede6342bd52a45e901fb44f5febd469576c9da6bee93b9cfbfbc73bf975fc"
      "564b536fa1f43c97a69e173fa597f47b9b8dd0cb85f8daaa7d5833d6"
      "b66ad64ac5d8299ceb0551d64b7d1fd5189d381f2802a775ff8788f3bf75ce1a09fd6643"
      "38ecd7e34de30c2ce5d2c66a930b31bcf76e2646dfe39dda0859fffc",
      "390b86896c1a58988086d7b78d181f1e3f68df827593695af3e166fe3ed579fbfef4b69c"
      "a69e17ff7ddee2edd583e576852fb243738950526954f78bc5bf3f6f"
      "3f00dd85ca7e",
      ""};
  nameCaptureInfo = nullptr;
  emlrtNameCaptureMxArrayR2016a(&data[0], 3056U, &nameCaptureInfo);
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
          "/home/user/ffmlu_code_generation/Afun_lap_te/Afun_lap_te.m"));
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
