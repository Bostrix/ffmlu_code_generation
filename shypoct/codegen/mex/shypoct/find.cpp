//
// find.cpp
//
// Code generation for function 'find'
//

// Include files
#include "find.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "shypoct_data.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo tb_emlrtRSI{
    144,                                                           // lineNo
    "eml_find",                                                    // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo ub_emlrtRSI{
    382,                                                           // lineNo
    "find_first_indices",                                          // fcnName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRTEInfo k_emlrtRTEI{
    392,                                                           // lineNo
    1,                                                             // colNo
    "find_first_indices",                                          // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo jc_emlrtRTEI{
    364,                                                           // lineNo
    24,                                                            // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo kc_emlrtRTEI{
    144,                                                           // lineNo
    9,                                                             // colNo
    "find",                                                        // fName
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

// Function Definitions
namespace coder {
void eml_find(const emlrtStack &sp, const array<boolean_T, 2U> &x,
              array<int32_T, 2U> &i)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T idx;
  int32_T ii;
  int32_T nx_tmp;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx_tmp = x.size(1);
  st.site = &tb_emlrtRSI;
  idx = 0;
  i.set_size(&jc_emlrtRTEI, &st, 1, x.size(1));
  b_st.site = &ub_emlrtRSI;
  if (x.size(1) > 2147483646) {
    c_st.site = &db_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= nx_tmp - 1)) {
    if (x[ii]) {
      idx++;
      i[idx - 1] = ii + 1;
      if (idx >= nx_tmp) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (idx > x.size(1)) {
    emlrtErrorWithMessageIdR2018a(&st, &k_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (x.size(1) == 1) {
    if (idx == 0) {
      i.set_size(&kc_emlrtRTEI, &st, 1, 0);
    }
  } else {
    if (idx < 1) {
      idx = 0;
    }
    i.set_size(&kc_emlrtRTEI, &st, i.size(0), idx);
  }
}

} // namespace coder

// End of code generation (find.cpp)
