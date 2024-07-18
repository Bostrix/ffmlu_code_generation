/*
 * inv.c
 *
 * Code generation for function 'inv'
 *
 */

/* Include files */
#include "inv.h"
#include "id_data.h"
#include "id_mexutil.h"
#include "norm.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "blas.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo pd_emlrtRSI =
    {
        27,       /* lineNo */
        "xgetrf", /* fcnName */
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgetrf.m" /* pathName */
};

static emlrtRSInfo qd_emlrtRSI =
    {
        91,             /* lineNo */
        "ceval_xgetrf", /* fcnName */
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgetrf.m" /* pathName */
};

static emlrtRSInfo sd_emlrtRSI =
    {
        67,      /* lineNo */
        "xtrsm", /* fcnName */
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+blas/"
        "xtrsm.m" /* pathName */
};

static emlrtRSInfo if_emlrtRSI = {
    22,                                                            /* lineNo */
    "inv",                                                         /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                    */
};

static emlrtRSInfo jf_emlrtRSI = {
    21,                                                            /* lineNo */
    "inv",                                                         /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                    */
};

static emlrtRSInfo kf_emlrtRSI = {
    173,                                                           /* lineNo */
    "invNxN",                                                      /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                    */
};

static emlrtRSInfo lf_emlrtRSI = {
    177,                                                           /* lineNo */
    "invNxN",                                                      /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                    */
};

static emlrtRSInfo mf_emlrtRSI = {
    180,                                                           /* lineNo */
    "invNxN",                                                      /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                    */
};

static emlrtRSInfo nf_emlrtRSI = {
    183,                                                           /* lineNo */
    "invNxN",                                                      /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                    */
};

static emlrtRSInfo of_emlrtRSI = {
    190,                                                           /* lineNo */
    "invNxN",                                                      /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                    */
};

static emlrtRSInfo pf_emlrtRSI = {
    42,                                                            /* lineNo */
    "checkcond",                                                   /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                    */
};

static emlrtRSInfo qf_emlrtRSI = {
    46,                                                            /* lineNo */
    "checkcond",                                                   /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/inv.m" /* pathName
                                                                    */
};

static emlrtRTEInfo h_emlrtRTEI = {
    14,                                                            /* lineNo */
    15,                                                            /* colNo */
    "inv",                                                         /* fName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/inv.m" /* pName */
};

/* Function Definitions */
void inv(const emlrtStack *sp, const real_T x_data[], const int32_T x_size[2],
         real_T y_data[], int32_T y_size[2])
{
  static const int32_T b_iv[2] = {1, 6};
  static const char_T rfmt[6] = {'%', '1', '4', '.', '6', 'e'};
  ptrdiff_t tmp_data[5];
  ptrdiff_t ipiv_t_data[4];
  ptrdiff_t info_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *m;
  const mxArray *y;
  real_T b_x_data[16];
  real_T n1x;
  real_T n1xinv;
  real_T rc;
  int32_T ipiv_data[4];
  int32_T i;
  int32_T k;
  int32_T n_tmp;
  int32_T pipk;
  int32_T tmp_size;
  int32_T x_size_idx_0;
  int32_T yk;
  int16_T p_data[4];
  char_T DIAGA1;
  char_T SIDE1;
  char_T TRANSA1;
  char_T UPLO1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (x_size[0] != x_size[1]) {
    emlrtErrorWithMessageIdR2018a(sp, &h_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  st.site = &jf_emlrtRSI;
  n_tmp = x_size[0];
  y_size[0] = x_size[0];
  y_size[1] = x_size[1];
  pipk = x_size[0] * x_size[1];
  if (pipk - 1 >= 0) {
    memset(&y_data[0], 0, (uint32_T)pipk * sizeof(real_T));
  }
  b_st.site = &kf_emlrtRSI;
  x_size_idx_0 = x_size[0];
  if (pipk - 1 >= 0) {
    memcpy(&b_x_data[0], &x_data[0], (uint32_T)pipk * sizeof(real_T));
  }
  c_st.site = &pd_emlrtRSI;
  tmp_size = repmat((ptrdiff_t)0.0, muIntScalarMin_sint32(x_size[0], x_size[0]),
                    tmp_data);
  info_t =
      LAPACKE_dgetrf_work(102, (ptrdiff_t)x_size[0], (ptrdiff_t)x_size[0],
                          &b_x_data[0], (ptrdiff_t)x_size[0], &ipiv_t_data[0]);
  d_st.site = &qd_emlrtRSI;
  if ((int32_T)info_t < 0) {
    if ((int32_T)info_t == -1010) {
      emlrtErrorWithMessageIdR2018a(&d_st, &e_emlrtRTEI, "MATLAB:nomem",
                                    "MATLAB:nomem", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&d_st, &d_emlrtRTEI,
                                    "Coder:toolbox:LAPACKCallErrorInfo",
                                    "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                    19, &cv[0], 12, (int32_T)info_t);
    }
  }
  i = tmp_size - 1;
  for (k = 0; k <= i; k++) {
    ipiv_data[k] = (int32_T)ipiv_t_data[k];
  }
  pipk = (uint8_T)(x_size[0] - 1) + 1;
  p_data[0] = 1;
  yk = 1;
  for (k = 2; k <= pipk; k++) {
    yk++;
    p_data[k - 1] = (int16_T)yk;
  }
  for (k = 0; k < tmp_size; k++) {
    i = ipiv_data[k];
    if (i > k + 1) {
      pipk = p_data[i - 1];
      p_data[i - 1] = p_data[k];
      p_data[k] = (int16_T)pipk;
    }
  }
  b_st.site = &lf_emlrtRSI;
  for (k = 0; k < n_tmp; k++) {
    int16_T i1;
    i1 = p_data[k];
    y_data[k + y_size[0] * (i1 - 1)] = 1.0;
    b_st.site = &mf_emlrtRSI;
    for (pipk = k + 1; pipk <= n_tmp; pipk++) {
      if (y_data[(pipk + y_size[0] * (i1 - 1)) - 1] != 0.0) {
        i = pipk + 1;
        b_st.site = &nf_emlrtRSI;
        for (tmp_size = i; tmp_size <= n_tmp; tmp_size++) {
          yk = (tmp_size + y_size[0] * (i1 - 1)) - 1;
          y_data[yk] -= y_data[(pipk + y_size[0] * (i1 - 1)) - 1] *
                        b_x_data[(tmp_size + x_size_idx_0 * (pipk - 1)) - 1];
        }
      }
    }
  }
  b_st.site = &of_emlrtRSI;
  c_st.site = &sd_emlrtRSI;
  n1x = 1.0;
  DIAGA1 = 'N';
  TRANSA1 = 'N';
  UPLO1 = 'U';
  SIDE1 = 'L';
  info_t = (ptrdiff_t)x_size[0];
  n_t = (ptrdiff_t)x_size[0];
  lda_t = (ptrdiff_t)x_size[0];
  ldb_t = (ptrdiff_t)x_size[0];
  dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &info_t, &n_t, &n1x, &b_x_data[0],
        &lda_t, &y_data[0], &ldb_t);
  st.site = &if_emlrtRSI;
  n1x = b_norm(x_data, x_size);
  n1xinv = b_norm(y_data, y_size);
  rc = 1.0 / (n1x * n1xinv);
  if ((n1x == 0.0) || (n1xinv == 0.0) || (rc == 0.0)) {
    b_st.site = &pf_emlrtRSI;
    warning(&b_st);
  } else if (muDoubleScalarIsNaN(rc) || (rc < 2.2204460492503131E-16)) {
    char_T str[14];
    b_st.site = &qf_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, &b_iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
    emlrtAssign(&y, m);
    c_st.site = &kh_emlrtRSI;
    emlrt_marshallIn(&c_st,
                     b_sprintf(&c_st, y, g_emlrt_marshallOut(rc), &f_emlrtMCI),
                     "<output of sprintf>", str);
    b_st.site = &qf_emlrtRSI;
    c_warning(&b_st, str);
  }
}

/* End of code generation (inv.c) */
