//
// sparse.cpp
//
// Code generation for function 'sparse'
//

// Include files
#include "sparse.h"
#include "Afun_lap_te_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo db_emlrtRSI{
    250,                     // lineNo
    "sparse/parenReference", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" // pathName
};

static emlrtRSInfo eb_emlrtRSI{
    20,                        // lineNo
    "sparse/parenReference2D", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenReference2D.m" // pathName
};

static emlrtRSInfo fb_emlrtRSI{
    81,                        // lineNo
    "parenReference2DColumns", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenReference2D.m" // pathName
};

static emlrtRSInfo gb_emlrtRSI{
    93,                        // lineNo
    "parenReference2DColumns", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenReference2D.m" // pathName
};

static emlrtRSInfo hb_emlrtRSI{
    104,                       // lineNo
    "parenReference2DColumns", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenReference2D.m" // pathName
};

static emlrtRSInfo ib_emlrtRSI{
    1476,                 // lineNo
    "sparse/spallocLike", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" // pathName
};

static emlrtRSInfo kb_emlrtRSI{
    176,             // lineNo
    "sparse/sparse", // fcnName
    "/Applications/MATLAB_R2024a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" // pathName
};

static emlrtRTEInfo c_emlrtRTEI{
    92,                        // lineNo
    1,                         // colNo
    "parenReference2DColumns", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/parenReference2D.m" // pName
};

static emlrtRTEInfo d_emlrtRTEI{
    11,                                   // lineNo
    27,                                   // colNo
    "sparse/sparse_validateNumericIndex", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/private/validateNumericIndex.m" // pName
};

static emlrtRTEInfo e_emlrtRTEI{
    1623,              // lineNo
    9,                 // colNo
    "assertValidSize", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" // pName
};

static emlrtRTEInfo x_emlrtRTEI{
    250,      // lineNo
    17,       // colNo
    "sparse", // fName
    "/Applications/MATLAB_R2024a.app/toolbox/shared/coder/coder/+coder/"
    "+internal/@sparse/sparse.m" // pName
};

// Function Definitions
namespace coder {
void sparse::parenReference(const emlrtStack &sp, const real_T varargin_2[5],
                            sparse &s) const
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T i;
  int32_T nd;
  int32_T numalloc;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &db_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &eb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  for (int32_T k{0}; k < 5; k++) {
    real_T b_d;
    b_d = varargin_2[k];
    if (!(muDoubleScalarFloor(b_d) == b_d)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                    "Coder:MATLAB:badsubscript",
                                    "Coder:MATLAB:badsubscript", 0);
    }
  }
  nd = 0;
  for (int32_T cidx{0}; cidx < 5; cidx++) {
    numalloc = static_cast<int32_T>(varargin_2[cidx]);
    nd = (nd + colidx[numalloc]) - colidx[numalloc - 1];
  }
  if (nd > 40000) {
    emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  c_st.site = &gb_emlrtRSI;
  d_st.site = &ib_emlrtRSI;
  e_st.site = &kb_emlrtRSI;
  if (nd < 0) {
    emlrtErrorWithMessageIdR2018a(&e_st, &e_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  numalloc = muIntScalarMax_sint32(nd, 1);
  s.d.set_size(&x_emlrtRTEI, &d_st, numalloc);
  for (i = 0; i < numalloc; i++) {
    s.d[i] = 0.0;
  }
  s.colidx.set_size(&x_emlrtRTEI, &d_st, 6);
  for (i = 0; i < 6; i++) {
    s.colidx[i] = 0;
  }
  s.colidx[0] = 1;
  s.rowidx.set_size(&x_emlrtRTEI, &d_st, numalloc);
  for (i = 0; i < numalloc; i++) {
    s.rowidx[i] = 0;
  }
  for (numalloc = 0; numalloc < 5; numalloc++) {
    s.colidx[numalloc + 1] = 1;
  }
  for (numalloc = 0; numalloc < 5; numalloc++) {
    s.colidx[numalloc] = 1;
  }
  s.colidx[5] = 1;
  if (nd != 0) {
    int32_T outIdx;
    outIdx = 0;
    for (int32_T cidx{0}; cidx < 5; cidx++) {
      int32_T colstart_tmp;
      numalloc = static_cast<int32_T>(varargin_2[cidx]);
      colstart_tmp = colidx[numalloc - 1];
      numalloc = colidx[numalloc] - colstart_tmp;
      c_st.site = &hb_emlrtRSI;
      if (numalloc > 2147483646) {
        d_st.site = &s_emlrtRSI;
        check_forloop_overflow_error(d_st);
      }
      for (int32_T k{0}; k < numalloc; k++) {
        i = (colstart_tmp + k) - 1;
        nd = outIdx + k;
        s.d[nd] = d[i];
        s.rowidx[nd] = rowidx[i];
      }
      if (numalloc - 1 >= 0) {
        outIdx += numalloc;
      }
      s.colidx[cidx + 1] = s.colidx[cidx] + numalloc;
    }
  }
}

} // namespace coder

// End of code generation (sparse.cpp)
