//
// srskelf_asym_new_mexutil.h
//
// Code generation for function 'srskelf_asym_new_mexutil'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId, char_T ret[14]);

void b_error(const emlrtStack &sp, const mxArray *m, const mxArray *m1,
             emlrtMCInfo &location);

void b_plus(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
            const coder::array<real_T, 2U> &in2);

const mxArray *b_sprintf(const emlrtStack &sp, const mxArray *m1,
                         const mxArray *m2, emlrtMCInfo &location);

const mxArray *c_emlrt_marshallOut(const emlrtStack &sp, const char_T u[38]);

void emlrt_marshallIn(const emlrtStack &sp,
                      const mxArray *a__output_of_sprintf_,
                      const char_T *identifier, char_T y[14]);

void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                      const emlrtMsgIdentifier *parentId, char_T y[14]);

real_T emlrt_marshallIn(const emlrtStack &sp,
                        const mxArray *a__output_of_feval_,
                        const char_T *identifier);

real_T emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId);

void feval(const emlrtStack &sp, const mxArray *m, const mxArray *m1,
           emlrtMCInfo &location);

const mxArray *feval(const emlrtStack &sp, const mxArray *m1, const mxArray *m2,
                     const mxArray *m3, const mxArray *m4,
                     emlrtMCInfo &location);

const mxArray *feval(const emlrtStack &sp, const mxArray *m1, const mxArray *m2,
                     const mxArray *m3, emlrtMCInfo &location);

real_T g_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                          const emlrtMsgIdentifier *msgId);

// End of code generation (srskelf_asym_new_mexutil.h)
