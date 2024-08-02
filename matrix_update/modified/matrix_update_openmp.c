#include "mex.h"
#include <omp.h>
#include <string.h>  // Include string.h for memcpy

// Function to perform matrix multiplication with OpenMP
void matrix_multiply_openmp(double* result, double* mat1, int mat1_rows, int mat1_cols, double* mat2, int mat2_cols) {
    #pragma omp parallel for collapse(2)
    for (int i = 0; i < mat1_rows; ++i) {
        for (int j = 0; j < mat2_cols; ++j) {
            result[i * mat2_cols + j] = 0;
            for (int k = 0; k < mat1_cols; ++k) {
                result[i * mat2_cols + j] += mat1[i * mat1_cols + k] * mat2[k * mat2_cols + j];
            }
        }
    }
}

// MEX function
void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {
    // Check for proper number of arguments
    if (nrhs != 5) {
        mexErrMsgIdAndTxt("MATLAB:matrix_update_openmp:invalidNumInputs", "Five inputs required.");
    }

    // Extract inputs
    double* A = mxGetPr(prhs[0]);
    double* subI = mxGetPr(prhs[1]);
    double* tmp1 = mxGetPr(prhs[2]);
    double* tmp2 = mxGetPr(prhs[3]);
    int A_cols = (int)mxGetScalar(prhs[4]);

    int subI_size = mxGetN(prhs[1]);
    int tmp1_rows = mxGetM(prhs[2]);
    int tmp1_cols = mxGetN(prhs[2]);
    int tmp2_rows = mxGetM(prhs[3]);
    int tmp2_cols = mxGetN(prhs[3]);

    // Check matrix dimensions
    if (tmp1_cols != tmp2_rows) {
        mexErrMsgIdAndTxt("MATLAB:matrix_update_openmp:dimMismatch", "Inner dimensions of matrices do not match.");
    }

    // Create output matrix
    mxArray* result_mx = mxCreateDoubleMatrix(subI_size, subI_size, mxREAL);
    double* result = mxGetPr(result_mx);

    // Perform matrix multiplication
    matrix_multiply_openmp(result, tmp1, tmp1_rows, tmp1_cols, tmp2, tmp2_cols);

    // Create output for the updated A
    plhs[0] = mxCreateDoubleMatrix(mxGetM(prhs[0]), mxGetN(prhs[0]), mxREAL);
    double* A_out = mxGetPr(plhs[0]);
    memcpy(A_out, A, mxGetM(prhs[0]) * mxGetN(prhs[0]) * sizeof(double));

    // Update A matrix
    for (int i = 0; i < subI_size; ++i) {
        for (int j = 0; j < subI_size; ++j) {
            int adjusted_i = (int)subI[i] - 1;  // Adjust for 1-based indexing
            int adjusted_j = (int)subI[j] - 1;  // Adjust for 1-based indexing
            A_out[adjusted_i * A_cols + adjusted_j] -= result[i * subI_size + j];
        }
    }
}
