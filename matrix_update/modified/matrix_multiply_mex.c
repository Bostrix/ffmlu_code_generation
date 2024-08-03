#include "mex.h"
#include "matrix.h"

void matrix_multiply(double* result, double* mat1, int mat1_rows, int mat1_cols, double* mat2, int mat2_cols) {
    for (int i = 0; i < mat1_rows; ++i) {
        for (int j = 0; j < mat2_cols; ++j) {
            result[i * mat2_cols + j] = 0;
            for (int k = 0; k < mat1_cols; ++k) {
                result[i * mat2_cols + j] += mat1[i * mat1_cols + k] * mat2[k * mat2_cols + j];
            }
        }
    }
}

void update_matrix(double* A, int* subI, int subI_size, int A_cols, double* result) {
    for (int i = 0; i < subI_size; ++i) {
        for (int j = 0; j < subI_size; ++j) {
            int adjusted_i = subI[i] - 1;  // Adjust for 1-based indexing
            int adjusted_j = subI[j] - 1;  // Adjust for 1-based indexing
            // Update the matrix A
            A[adjusted_i * A_cols + adjusted_j] -= result[i * subI_size + j];
        }
    }
}

// Gateway function to be called from MATLAB
void mexFunction(int nlhs, mxArray* plhs[], int nrhs, const mxArray* prhs[]) {
    if (nrhs != 5) {
        mexErrMsgIdAndTxt("MATLAB:mexFunction:invalidNumInputs", "Five inputs required.");
    }
    if (nlhs != 1) {
        mexErrMsgIdAndTxt("MATLAB:mexFunction:invalidNumOutputs", "One output required.");
    }

    // Input arguments
    double* A = mxGetPr(prhs[0]);
    int* subI = (int*)mxGetPr(prhs[1]);
    int subI_size = mxGetN(prhs[1]);
    double* tmp1 = mxGetPr(prhs[2]);
    double* tmp2 = mxGetPr(prhs[3]);
    int A_cols = (int)mxGetScalar(prhs[4]);

    // Determine dimensions of tmp1 and tmp2
    int tmp1_rows = mxGetM(prhs[2]);
    int tmp1_cols = mxGetN(prhs[2]);
    int tmp2_cols = mxGetN(prhs[3]);

    // Allocate memory for the result
    mxArray* result_array = mxCreateDoubleMatrix(tmp1_rows, tmp2_cols, mxREAL);
    double* result = mxGetPr(result_array);

    // Perform matrix multiplication
    matrix_multiply(result, tmp1, tmp1_rows, tmp1_cols, tmp2, tmp2_cols);

    // Update matrix A
    update_matrix(A, subI, subI_size, A_cols, result);

    // Set output
    plhs[0] = mxDuplicateArray(prhs[0]);

    // Clean up
    mxDestroyArray(result_array);
}
