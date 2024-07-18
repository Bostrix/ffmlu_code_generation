/*
 * eml_qr.c
 *
 * Code generation for function 'eml_qr'
 *
 */

/* Include files */
#include "eml_qr.h"
#include "id_data.h"
#include "rt_nonfinite.h"
#include "xgemv.h"
#include "xgerc.h"
#include "xnrm2.h"
#include "xscal.h"
#include "xzlarf.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo nb_emlrtRSI = {
    81,        /* lineNo */
    "xzlarfg", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzlarfg.m" /* pathName */
};

static emlrtRSInfo pb_emlrtRSI = {
    68,        /* lineNo */
    "xzlarfg", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzlarfg.m" /* pathName */
};

static emlrtRSInfo qb_emlrtRSI = {
    53,        /* lineNo */
    "xzlarfg", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzlarfg.m" /* pathName */
};

static emlrtRSInfo sb_emlrtRSI = {
    20,        /* lineNo */
    "xzlarfg", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzlarfg.m" /* pathName */
};

static emlrtRSInfo yb_emlrtRSI = {
    50,       /* lineNo */
    "xzlarf", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzlarf.m" /* pathName */
};

static emlrtRSInfo ac_emlrtRSI = {
    68,       /* lineNo */
    "xzlarf", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzlarf.m" /* pathName */
};

static emlrtRSInfo bc_emlrtRSI = {
    75,       /* lineNo */
    "xzlarf", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzlarf.m" /* pathName */
};

static emlrtRSInfo mc_emlrtRSI = {
    34,        /* lineNo */
    "xzungqr", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzungqr.m" /* pathName */
};

static emlrtRSInfo nc_emlrtRSI = {
    41,        /* lineNo */
    "xzungqr", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzungqr.m" /* pathName */
};

static emlrtRSInfo oc_emlrtRSI = {
    46,        /* lineNo */
    "xzungqr", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzungqr.m" /* pathName */
};

static emlrtRSInfo qc_emlrtRSI =
    {
        19,       /* lineNo */
        "eml_qr", /* fcnName */
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/private/"
        "eml_qr.m" /* pathName */
};

static emlrtRSInfo rc_emlrtRSI =
    {
        164,       /* lineNo */
        "qr_econ", /* fcnName */
        "/usr/local/MATLAB/R2024a/toolbox/eml/lib/matlab/matfun/private/"
        "eml_qr.m" /* pathName */
};

static emlrtRSInfo sc_emlrtRSI =
    {
        67,       /* lineNo */
        "xgeqp3", /* fcnName */
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" /* pathName */
};

static emlrtRSInfo tc_emlrtRSI = {
    119,       /* lineNo */
    "xzgeqp3", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzgeqp3.m" /* pathName */
};

static emlrtRSInfo uc_emlrtRSI = {
    174,    /* lineNo */
    "qrpf", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzgeqp3.m" /* pathName */
};

static emlrtRSInfo vc_emlrtRSI = {
    186,    /* lineNo */
    "qrpf", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzgeqp3.m" /* pathName */
};

static emlrtRSInfo wc_emlrtRSI = {
    214,    /* lineNo */
    "qrpf", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzgeqp3.m" /* pathName */
};

static emlrtRSInfo xc_emlrtRSI = {
    229,    /* lineNo */
    "qrpf", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzgeqp3.m" /* pathName */
};

static emlrtRSInfo yc_emlrtRSI = {
    248,    /* lineNo */
    "qrpf", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzgeqp3.m" /* pathName */
};

static emlrtRSInfo ad_emlrtRSI = {
    255,    /* lineNo */
    "qrpf", /* fcnName */
    "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzgeqp3.m" /* pathName */
};

static emlrtRSInfo dd_emlrtRSI =
    {
        17,       /* lineNo */
        "xorgqr", /* fcnName */
        "/usr/local/MATLAB/R2024a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xorgqr.m" /* pathName */
};

/* Function Definitions */
void eml_qr(const emlrtStack *sp, const real_T A[25], real_T Q[25],
            real_T R[25], int32_T E[5])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T tau[5];
  real_T vn1[5];
  real_T vn2[5];
  real_T work[5];
  real_T absxk;
  real_T scale;
  real_T smax;
  int32_T A_tmp;
  int32_T i;
  int32_T iy;
  int32_T k;
  int32_T kend;
  int32_T lastv;
  int32_T pvt;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &qc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  b_st.site = &rc_emlrtRSI;
  memcpy(&Q[0], &A[0], 25U * sizeof(real_T));
  c_st.site = &sc_emlrtRSI;
  _mm_storeu_si128(
      (__m128i *)&E[0],
      _mm_add_epi32(_mm_add_epi32(_mm_set1_epi32(0),
                                  _mm_loadu_si128((const __m128i *)&iv[0])),
                    _mm_set1_epi32(1)));
  E[4] = 5;
  d_st.site = &tc_emlrtRSI;
  e_st.site = &uc_emlrtRSI;
  for (i = 0; i < 5; i++) {
    work[i] = 0.0;
  }
  for (lastv = 0; lastv < 5; lastv++) {
    e_st.site = &vc_emlrtRSI;
    pvt = lastv * 5;
    smax = 0.0;
    scale = 3.3121686421112381E-170;
    kend = pvt + 5;
    for (k = pvt + 1; k <= kend; k++) {
      absxk = muDoubleScalarAbs(A[k - 1]);
      if (absxk > scale) {
        real_T t;
        t = scale / absxk;
        smax = smax * t * t + 1.0;
        scale = absxk;
      } else {
        real_T t;
        t = absxk / scale;
        smax += t * t;
      }
    }
    absxk = scale * muDoubleScalarSqrt(smax);
    vn1[lastv] = absxk;
    vn2[lastv] = absxk;
  }
  for (i = 0; i < 5; i++) {
    int32_T ii;
    int32_T ip1;
    ip1 = i + 2;
    ii = i * 5 + i;
    kend = 5 - i;
    iy = 1;
    if (5 - i > 1) {
      smax = muDoubleScalarAbs(vn1[i]);
      for (k = 2; k <= kend; k++) {
        scale = muDoubleScalarAbs(vn1[(i + k) - 1]);
        if (scale > smax) {
          iy = k;
          smax = scale;
        }
      }
    }
    pvt = (i + iy) - 1;
    if (pvt != i) {
      kend = pvt * 5;
      iy = i * 5;
      for (k = 0; k < 5; k++) {
        lastv = kend + k;
        smax = Q[lastv];
        A_tmp = iy + k;
        Q[lastv] = Q[A_tmp];
        Q[A_tmp] = smax;
      }
      kend = (int8_T)E[pvt];
      E[pvt] = (int8_T)E[i];
      E[i] = kend;
      vn1[pvt] = vn1[i];
      vn2[pvt] = vn2[i];
    }
    if (i + 1 < 5) {
      scale = Q[ii];
      e_st.site = &wc_emlrtRSI;
      pvt = ii + 2;
      tau[i] = 0.0;
      f_st.site = &sb_emlrtRSI;
      smax = xnrm2(&f_st, 4 - i, Q, ii + 2);
      if (smax != 0.0) {
        absxk = Q[ii];
        smax = muDoubleScalarHypot(absxk, smax);
        if (absxk >= 0.0) {
          smax = -smax;
        }
        if (muDoubleScalarAbs(smax) < 1.0020841800044864E-292) {
          kend = 0;
          A_tmp = (ii - i) + 5;
          do {
            kend++;
            lastv = (((((A_tmp - ii) - 1) / 2) << 1) + ii) + 2;
            iy = lastv - 2;
            for (k = pvt; k <= iy; k += 2) {
              __m128d r;
              r = _mm_loadu_pd(&Q[k - 1]);
              _mm_storeu_pd(&Q[k - 1],
                            _mm_mul_pd(_mm_set1_pd(9.9792015476736E+291), r));
            }
            for (k = lastv; k <= A_tmp; k++) {
              Q[k - 1] *= 9.9792015476736E+291;
            }
            smax *= 9.9792015476736E+291;
            scale *= 9.9792015476736E+291;
          } while ((muDoubleScalarAbs(smax) < 1.0020841800044864E-292) &&
                   (kend < 20));
          f_st.site = &qb_emlrtRSI;
          smax = xnrm2(&f_st, 4 - i, Q, ii + 2);
          smax = muDoubleScalarHypot(scale, smax);
          if (scale >= 0.0) {
            smax = -smax;
          }
          tau[i] = (smax - scale) / smax;
          f_st.site = &pb_emlrtRSI;
          xscal(&f_st, 4 - i, 1.0 / (scale - smax), Q, ii + 2);
          for (k = 0; k < kend; k++) {
            smax *= 1.0020841800044864E-292;
          }
          scale = smax;
        } else {
          tau[i] = (smax - absxk) / smax;
          f_st.site = &nb_emlrtRSI;
          xscal(&f_st, 4 - i, 1.0 / (Q[ii] - smax), Q, ii + 2);
          scale = smax;
        }
      }
      Q[ii] = 1.0;
      e_st.site = &xc_emlrtRSI;
      if (tau[i] != 0.0) {
        lastv = 5 - i;
        kend = (ii - i) + 4;
        while ((lastv > 0) && (Q[kend] == 0.0)) {
          lastv--;
          kend--;
        }
        f_st.site = &yb_emlrtRSI;
        kend = ilazlc(&f_st, lastv, 4 - i, Q, ii + 6);
      } else {
        lastv = 0;
        kend = 0;
      }
      if (lastv > 0) {
        f_st.site = &ac_emlrtRSI;
        xgemv(&f_st, lastv, kend, Q, ii + 6, Q, ii + 1, work);
        f_st.site = &bc_emlrtRSI;
        xgerc(&f_st, lastv, kend, -tau[i], ii + 1, work, Q, ii + 6);
      }
      Q[ii] = scale;
    } else {
      tau[4] = 0.0;
    }
    for (lastv = ip1; lastv < 6; lastv++) {
      kend = i + (lastv - 1) * 5;
      absxk = vn1[lastv - 1];
      if (absxk != 0.0) {
        smax = muDoubleScalarAbs(Q[kend]) / absxk;
        smax = 1.0 - smax * smax;
        if (smax < 0.0) {
          smax = 0.0;
        }
        scale = absxk / vn2[lastv - 1];
        scale = smax * (scale * scale);
        if (scale <= 1.4901161193847656E-8) {
          if (i + 1 < 5) {
            e_st.site = &yc_emlrtRSI;
            absxk = xnrm2(&e_st, 4 - i, Q, kend + 2);
            vn1[lastv - 1] = absxk;
            vn2[lastv - 1] = absxk;
          } else {
            vn1[lastv - 1] = 0.0;
            vn2[lastv - 1] = 0.0;
          }
        } else {
          e_st.site = &ad_emlrtRSI;
          vn1[lastv - 1] = absxk * muDoubleScalarSqrt(smax);
        }
      }
    }
  }
  for (lastv = 0; lastv < 5; lastv++) {
    b_st.site = &jb_emlrtRSI;
    for (i = 0; i <= lastv; i++) {
      kend = i + 5 * lastv;
      R[kend] = Q[kend];
    }
    A_tmp = lastv + 2;
    if (A_tmp <= 5) {
      memset(&R[(lastv * 5 + A_tmp) + -1], 0,
             (uint32_T)(-A_tmp + 6) * sizeof(real_T));
    }
  }
  b_st.site = &kb_emlrtRSI;
  c_st.site = &kc_emlrtRSI;
  d_st.site = &dd_emlrtRSI;
  for (i = 0; i < 5; i++) {
    work[i] = 0.0;
  }
  for (i = 4; i >= 0; i--) {
    iy = i + i * 5;
    if (i + 1 < 5) {
      Q[iy] = 1.0;
      e_st.site = &mc_emlrtRSI;
      if (tau[i] != 0.0) {
        lastv = 5 - i;
        kend = iy - i;
        while ((lastv > 0) && (Q[kend + 4] == 0.0)) {
          lastv--;
          kend--;
        }
        f_st.site = &yb_emlrtRSI;
        kend = ilazlc(&f_st, lastv, 4 - i, Q, iy + 6);
      } else {
        lastv = 0;
        kend = 0;
      }
      if (lastv > 0) {
        f_st.site = &ac_emlrtRSI;
        xgemv(&f_st, lastv, kend, Q, iy + 6, Q, iy + 1, work);
        f_st.site = &bc_emlrtRSI;
        xgerc(&f_st, lastv, kend, -tau[i], iy + 1, work, Q, iy + 6);
      }
      e_st.site = &nc_emlrtRSI;
      xscal(&e_st, 4 - i, -tau[i], Q, iy + 2);
    }
    Q[iy] = 1.0 - tau[i];
    e_st.site = &oc_emlrtRSI;
    for (lastv = 0; lastv < i; lastv++) {
      Q[(iy - lastv) - 1] = 0.0;
    }
  }
}

/* End of code generation (eml_qr.c) */
