#include "mex.h"
#include "matrix.h"
#include "cblas.h"  // Include BLAS header for optimized matrix multiplication

// Function to perform matrix multiplication using BLAS
void matrix_multiply(double* result, double* mat1, int mat1_rows, int mat1_cols, double* mat2, int mat2_cols) {
    cblas_dgemm(CblasRowMajor, CblasNoTrans, CblasNoTrans, 
                mat1_rows, mat2_cols, mat1_cols, 
                1.0, mat1, mat1_cols, mat2, mat2_cols, 
                0.0, result, mat2_cols);
}

// MEX function
void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {
    // Check for proper number of arguments
    if (nrhs != 4) {
        mexErrMsgIdAndTxt("MATLAB:manipulation:invalidNumInputs", "Four inputs required.");
    }

    // Extract inputs
    double* subI = mxGetPr(prhs[0]);
    double* subJ = mxGetPr(prhs[1]);
    double* tmp1 = mxGetPr(prhs[2]);
    double* tmp2 = mxGetPr(prhs[3]);

    int subI_size = mxGetN(prhs[0]);
    int subJ_size = mxGetN(prhs[1]);
    int tmp1_rows = mxGetM(prhs[2]);
    int tmp1_cols = mxGetN(prhs[2]);
    int tmp2_rows = mxGetM(prhs[3]);
    int tmp2_cols = mxGetN(prhs[3]);

    // Check matrix dimensions
    if (tmp1_cols != tmp2_rows) {
        mexErrMsgIdAndTxt("MATLAB:manipulation:dimMismatch", "Inner dimensions of matrices do not match.");
    }

    // Create output matrix
    plhs[0] = mxCreateDoubleMatrix(subI_size, subJ_size, mxREAL);
    double* result = mxGetPr(plhs[0]);

    // Perform matrix multiplication
    matrix_multiply(result, tmp1, tmp1_rows, tmp1_cols, tmp2, tmp2_cols);

    // Update result matrix
    for (int i = 0; i < subI_size; ++i) {
        for (int j = 0; j < subJ_size; ++j) {
            int adjusted_i = (int)subI[i] - 1;  // Adjust for 1-based indexing
            int adjusted_j = (int)subJ[j] - 1;  // Adjust for 1-based indexing
            result[i * subJ_size + j] -= result[i * subJ_size + j];
        }
    }
}