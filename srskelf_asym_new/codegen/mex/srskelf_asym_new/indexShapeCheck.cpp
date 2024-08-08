//
// indexShapeCheck.cpp
//
// Code generation for function 'indexShapeCheck'
//

// Include files
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"

// Variable Definitions
static emlrtRSInfo ue_emlrtRSI{
    42,                // lineNo
    "indexShapeCheck", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "indexShapeCheck.m" // pathName
};

static emlrtRSInfo ph_emlrtRSI{
    66,                // lineNo
    "indexShapeCheck", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "indexShapeCheck.m" // pathName
};

static emlrtRSInfo ii_emlrtRSI{
    38,                // lineNo
    "indexShapeCheck", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "indexShapeCheck.m" // pathName
};

static emlrtRSInfo kj_emlrtRSI{
    58,                // lineNo
    "indexShapeCheck", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "indexShapeCheck.m" // pathName
};

static emlrtRSInfo lj_emlrtRSI{
    51,                // lineNo
    "indexShapeCheck", // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "indexShapeCheck.m" // pathName
};

static emlrtRTEInfo y_emlrtRTEI{
    122,           // lineNo
    5,             // colNo
    "errOrWarnIf", // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/"
    "indexShapeCheck.m" // pName
};

// Function Definitions
namespace coder {
namespace internal {
void b_indexShapeCheck(const emlrtStack &sp, const int32_T matrixSize[2],
                       const int32_T indexSize[2])
{
  emlrtStack st;
  boolean_T nonSingletonDimFound;
  st.prev = &sp;
  st.tls = sp.tls;
  nonSingletonDimFound = (matrixSize[0] != 1);
  if (matrixSize[1] != 1) {
    if (nonSingletonDimFound) {
      nonSingletonDimFound = false;
    } else {
      nonSingletonDimFound = true;
    }
  }
  if (nonSingletonDimFound) {
    nonSingletonDimFound = (matrixSize[0] == 1);
    if (nonSingletonDimFound || (matrixSize[1] != 1)) {
      nonSingletonDimFound = true;
    }
    st.site = &lj_emlrtRSI;
    if (nonSingletonDimFound) {
      emlrtErrorWithMessageIdR2018a(
          &st, &y_emlrtRTEI, "Coder:FE:PotentialMatrixMatrix_MM_Logical1",
          "Coder:FE:PotentialMatrixMatrix_MM_Logical1", 0);
    }
  } else {
    nonSingletonDimFound = (indexSize[0] != 1);
    if (indexSize[1] != 1) {
      if (nonSingletonDimFound) {
        nonSingletonDimFound = false;
      } else {
        nonSingletonDimFound = true;
      }
    }
    if (nonSingletonDimFound) {
      nonSingletonDimFound = (indexSize[0] == 1);
      if (nonSingletonDimFound || (indexSize[1] != 1)) {
        nonSingletonDimFound = true;
      }
      st.site = &kj_emlrtRSI;
      if (nonSingletonDimFound) {
        emlrtErrorWithMessageIdR2018a(
            &st, &y_emlrtRTEI, "Coder:FE:PotentialMatrixMatrix_MM_Logical2",
            "Coder:FE:PotentialMatrixMatrix_MM_Logical2", 0);
      }
    }
  }
}

void b_indexShapeCheck(const emlrtStack &sp, const int32_T indexSize[2])
{
  emlrtStack st;
  boolean_T nonSingletonDimFound;
  st.prev = &sp;
  st.tls = sp.tls;
  nonSingletonDimFound = (indexSize[0] != 1);
  if (indexSize[1] != 1) {
    if (nonSingletonDimFound) {
      nonSingletonDimFound = false;
    } else {
      nonSingletonDimFound = true;
    }
  }
  if (nonSingletonDimFound) {
    nonSingletonDimFound = (indexSize[0] != 1);
    if (nonSingletonDimFound || (indexSize[1] == 1)) {
      nonSingletonDimFound = true;
    }
    if (nonSingletonDimFound) {
      nonSingletonDimFound = true;
    } else {
      nonSingletonDimFound = false;
    }
  } else {
    nonSingletonDimFound = false;
  }
  st.site = &ii_emlrtRSI;
  if (nonSingletonDimFound) {
    emlrtErrorWithMessageIdR2018a(&st, &y_emlrtRTEI,
                                  "Coder:FE:PotentialMatrixMatrix_VM",
                                  "Coder:FE:PotentialMatrixMatrix_VM", 0);
  }
}

void c_indexShapeCheck(const emlrtStack &sp, const int32_T matrixSize[2],
                       const int32_T indexSize[2])
{
  emlrtStack st;
  boolean_T nonSingletonDimFound;
  st.prev = &sp;
  st.tls = sp.tls;
  if (matrixSize[1] != 1) {
    nonSingletonDimFound = (indexSize[0] != 1);
    if (indexSize[1] != 1) {
      if (nonSingletonDimFound) {
        nonSingletonDimFound = false;
      } else {
        nonSingletonDimFound = true;
      }
    }
    if (nonSingletonDimFound) {
      nonSingletonDimFound = (indexSize[0] != 1);
      if (nonSingletonDimFound ||
          ((matrixSize[1] == 1) != (indexSize[1] == 1))) {
        nonSingletonDimFound = true;
      }
      if (nonSingletonDimFound) {
        nonSingletonDimFound = true;
      } else {
        nonSingletonDimFound = false;
      }
    } else {
      nonSingletonDimFound = false;
    }
  } else {
    nonSingletonDimFound = false;
  }
  st.site = &ii_emlrtRSI;
  if (nonSingletonDimFound) {
    emlrtErrorWithMessageIdR2018a(&st, &y_emlrtRTEI,
                                  "Coder:FE:PotentialMatrixMatrix_VM",
                                  "Coder:FE:PotentialMatrixMatrix_VM", 0);
  }
}

void indexShapeCheck(const emlrtStack &sp, const int32_T matrixSize[2],
                     const int32_T indexSize[2])
{
  emlrtStack st;
  boolean_T nonSingletonDimFound;
  st.prev = &sp;
  st.tls = sp.tls;
  nonSingletonDimFound = (matrixSize[0] != 1);
  if (matrixSize[1] != 1) {
    if (nonSingletonDimFound) {
      nonSingletonDimFound = false;
    } else {
      nonSingletonDimFound = true;
    }
  }
  if (nonSingletonDimFound) {
    nonSingletonDimFound = (matrixSize[0] != 1);
    if (nonSingletonDimFound || ((matrixSize[1] == 1) != (indexSize[1] == 1))) {
      nonSingletonDimFound = true;
    }
    if (nonSingletonDimFound) {
      nonSingletonDimFound = true;
    } else {
      nonSingletonDimFound = false;
    }
  } else {
    nonSingletonDimFound = false;
  }
  st.site = &ph_emlrtRSI;
  if (nonSingletonDimFound) {
    emlrtErrorWithMessageIdR2018a(
        &st, &y_emlrtRTEI, "Coder:FE:PotentialMatrixMatrix_VV_Logical",
        "Coder:FE:PotentialMatrixMatrix_VV_Logical", 0);
  }
}

void indexShapeCheck(const emlrtStack &sp, const int32_T indexSize[2])
{
  emlrtStack st;
  boolean_T nonSingletonDimFound;
  st.prev = &sp;
  st.tls = sp.tls;
  nonSingletonDimFound = (indexSize[0] != 1);
  if (indexSize[1] != 1) {
    if (nonSingletonDimFound) {
      nonSingletonDimFound = false;
    } else {
      nonSingletonDimFound = true;
    }
  }
  if (nonSingletonDimFound && ((indexSize[0] == 1) || (indexSize[1] != 1))) {
    nonSingletonDimFound = true;
  } else {
    nonSingletonDimFound = false;
  }
  st.site = &ii_emlrtRSI;
  if (nonSingletonDimFound) {
    emlrtErrorWithMessageIdR2018a(&st, &y_emlrtRTEI,
                                  "Coder:FE:PotentialMatrixMatrix_VM",
                                  "Coder:FE:PotentialMatrixMatrix_VM", 0);
  }
}

void indexShapeCheck(const emlrtStack &sp, int32_T matrixSize,
                     const int32_T indexSize[2])
{
  emlrtStack st;
  boolean_T c;
  st.prev = &sp;
  st.tls = sp.tls;
  if ((matrixSize == 1) && (indexSize[1] != 1)) {
    c = true;
  } else {
    c = false;
  }
  st.site = &ue_emlrtRSI;
  if (c) {
    emlrtErrorWithMessageIdR2018a(&st, &y_emlrtRTEI,
                                  "Coder:FE:PotentialVectorVector",
                                  "Coder:FE:PotentialVectorVector", 0);
  }
}

} // namespace internal
} // namespace coder

// End of code generation (indexShapeCheck.cpp)
