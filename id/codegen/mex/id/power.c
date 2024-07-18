/*
 * power.c
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "power.h"
#include "rt_nonfinite.h"
#include <emmintrin.h>

/* Function Definitions */
int32_T b_power(const real_T a_data[], int32_T a_size, real_T y_data[])
{
  int32_T i;
  int32_T scalarLB;
  int32_T vectorUB;
  int32_T y_size;
  y_size = a_size;
  scalarLB = a_size / 2 * 2;
  vectorUB = scalarLB - 2;
  for (i = 0; i <= vectorUB; i += 2) {
    __m128d r;
    r = _mm_loadu_pd(&a_data[i]);
    r = _mm_mul_pd(r, r);
    _mm_storeu_pd(&y_data[i], r);
  }
  for (i = scalarLB; i < a_size; i++) {
    real_T varargin_1;
    varargin_1 = a_data[i];
    y_data[i] = varargin_1 * varargin_1;
  }
  return y_size;
}

void c_power(const real_T a_data[], const int32_T a_size[2], real_T y_data[],
             int32_T y_size[2])
{
  int32_T i;
  int32_T loop_ub;
  int32_T scalarLB;
  int32_T vectorUB;
  y_size[0] = 1;
  loop_ub = a_size[1];
  y_size[1] = a_size[1];
  scalarLB = loop_ub / 2 * 2;
  vectorUB = scalarLB - 2;
  for (i = 0; i <= vectorUB; i += 2) {
    __m128d r;
    r = _mm_loadu_pd(&a_data[i]);
    r = _mm_mul_pd(r, r);
    _mm_storeu_pd(&y_data[i], r);
  }
  for (i = scalarLB; i < loop_ub; i++) {
    real_T varargin_1;
    varargin_1 = a_data[i];
    y_data[i] = varargin_1 * varargin_1;
  }
}

void power(const real_T a_data[], const int32_T a_size[2], real_T y_data[],
           int32_T y_size[2])
{
  int32_T i;
  int32_T loop_ub;
  int32_T scalarLB;
  int32_T vectorUB;
  y_size[0] = a_size[0];
  y_size[1] = a_size[1];
  loop_ub = a_size[0] * a_size[1];
  scalarLB = loop_ub / 2 * 2;
  vectorUB = scalarLB - 2;
  for (i = 0; i <= vectorUB; i += 2) {
    __m128d r;
    r = _mm_loadu_pd(&a_data[i]);
    r = _mm_mul_pd(r, r);
    _mm_storeu_pd(&y_data[i], r);
  }
  for (i = scalarLB; i < loop_ub; i++) {
    real_T varargin_1;
    varargin_1 = a_data[i];
    y_data[i] = varargin_1 * varargin_1;
  }
}

/* End of code generation (power.c) */
