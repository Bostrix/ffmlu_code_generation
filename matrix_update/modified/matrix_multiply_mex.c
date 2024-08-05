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

// Gateway function to be called from MATLAB
void mexFunction(int nlhs, mxArray* plhs[], int nrhs, const mxArray* prhs[]) {
    if (nrhs != 4) {
        mexErrMsgIdAndTxt("MATLAB:mexFunction:invalidNumInputs", "Four inputs required.");
    }
    if (nlhs != 1) {
        mexErrMsgIdAndTxt("MATLAB:mexFunction:invalidNumOutputs", "One output required.");
    }

    // Input arguments
    double* tmp1 = mxGetPr(prhs[0]);
    double* tmp2 = mxGetPr(prhs[1]);
    int tmp1_rows = mxGetM(prhs[0]);
    int tmp1_cols = mxGetN(prhs[0]);
    int tmp2_cols = mxGetN(prhs[1]);

    // Allocate memory for the result
    plhs[0] = mxCreateDoubleMatrix(tmp1_rows, tmp2_cols, mxREAL);
    double* result = mxGetPr(plhs[0]);

    // Perform matrix multiplication
    matrix_multiply(result, tmp1, tmp1_rows, tmp1_cols, tmp2, tmp2_cols);
}
