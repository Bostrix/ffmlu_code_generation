//
// id_mexutil.h
//
// Code generation for function 'id_mexutil'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId, char_T ret[14]);

const mxArray *b_sprintf(const emlrtStack &sp, const mxArray *m1,
                         const mxArray *m2, emlrtMCInfo &location);

void emlrt_marshallIn(const emlrtStack &sp,
                      const mxArray *a__output_of_sprintf_,
                      const char_T *identifier, char_T y[14]);

void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                      const emlrtMsgIdentifier *parentId, char_T y[14]);

const mxArray *emlrt_marshallOut(const real_T u);

// End of code generation (id_mexutil.h)
