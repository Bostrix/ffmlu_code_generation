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
      "789ced593d6fd3401876aa0295102542823f006241e4a34d13654cf351a5694b42fa4185"
      "2af76a9f1313fb6cfcd1c66c951015131b12032cfc814e8881a12362"
      "e037b0202146c4c04852e712dbe5e4205b57c5ea29d2f9bd27e7e7fdb83c79e330b1ea6a"
      "8c619859c61e33b7edf9dac08e0fe629c63dbc786c305ff6d8785c62",
      "a65dfb30fe6a30730a3260d7b00d046438dcc92bb2880032d62d15321ad415691ff2a788"
      "204a705d9461d369acf52db9e28086461fea5f17db90eb344d99d1da"
      "fac843c9690cf3f19910eff498f96811f211f7e08fcb3bc9b622c3a4a9432d59520e90a4"
      "005e4f0a822c992ca7f0906d41043560880a22acea9ade8192c002dd",
      "9259040fce2c24e4615cbb01e3ba428ccb46f4b6a52a9c111a1fe95cc50708af987b121c"
      "d5ed6340be0d229f1b0fa56e76aef0dcab12e39bb7eb63c6e19d47ef"
      "9f399def27de090c45beafbfa7eed0e4c3e3bcf8ba84fb8d7b0e6f11f8e21e1c952b4ac1"
      "025abaa03dcab52ab994dad4f74a233fea3e3c7e7e30049bd6fd7f10",
      "f68f9bc743c2fde31e9c920ec7bc4b2c400aaa7068ce1377d0f373c3276e8cab5d4b3011"
      "2b01b5e78d290384dc7eec06f4e37ff53be8f7ae40e473e361d73b9d"
      "3c9bc9bea0d3d29fe5c3f754f53c5d7e9ba1c98747d4f55cc8889b5ba97c69056c64972c"
      "f88c13320fea8b177a3e697a9ef6c4ad068cfbaa4fdc182f600d32a0",
      "8b3fe8f9bde9c38ff17e0eb584d8fb51a72120257415683a74f87112d08f1d1f3f301e46"
      "fd1db9745e53edd3bf348ea9eafa8b9f204f930f8fa8ebba54984f49"
      "e925d89cabaef162b99ddbaa73d9627474fd84b07f523fd7b4fa6f47bbc8767a9a09257b"
      "7d52fb6f9ec8e7c6c3aee3d93c9e96939aae7c9b794955a753a54f17",
      "cf5398f075ba9133b71b6abeda30b23575a5f0442c68653142cf534e08fb2755a783f6d5"
      "b31edb1b0fc675b5050df6a909784ed1b4e8f5d5bb3e7e603cecbaba"
      "f39a9069e9cbf3bbafa9eaf59f0fbf1668f2e11175bd06cbb9cd856e4d49a36d3d23c952"
      "6dbdfeb018a1befae27fc87fc735e5b14771d988386834cfab8f3e0e",
      "c85723f2b9f130ea26f2bd97dd2e53d38ba337749f6b7c8747f768f2e131a9fa3b6e5fd2"
      "1696b7f6adc566aab8babf6476aa9df9ecea1a33f9fafb17bdd6b597",
      ""};
  nameCaptureInfo = nullptr;
  emlrtNameCaptureMxArrayR2016a(&data[0], 8992U, &nameCaptureInfo);
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
  emlrtSetField(
      xEntryPoints, 0, "FullPath",
      emlrtMxCreateString(
          "/home/user/Downloads/ffmlu_code_generation/ffmlu_code_generation/"
          "srskelf_asym_new/srskelf_asym_new.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(739471.49248842592));
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
                emlrtMxCreateString("LKsWr0FROgOces9e3qDVIB"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

// End of code generation (_coder_srskelf_asym_new_info.cpp)
