#include "mex.h"

// Function to perform matrix update in pure C
void update_matrix_c(double* A_c, int rows_A, int cols_A, double* tmp1, double* tmp2, int* subI, int* subJ, int subI_size, int subJ_size, int tmp1_cols, int tmp2_cols) {
    // Perform the operations
    for (int i = 0; i < subI_size; i++) {
        int adjusted_i = subI[i] - 1;  // Adjust for 1-based indexing
        for (int j = 0; j < subJ_size; j++) {
            int adjusted_j = subJ[j] - 1;  // Adjust for 1-based indexing
            double sum = 0.0;
            for (int k = 0; k < tmp1_cols; k++) {
                // Accumulate the partial product
                sum += tmp1[i * tmp1_cols + k] * tmp2[k * subJ_size + j];
            }
            // Subtract the accumulated sum from the corresponding element in A_c
            A_c[adjusted_i + adjusted_j * rows_A] -= sum;
        }
    }
}

// The gateway function
void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {
    // Check for the proper number of arguments
    if (nrhs != 9) {
        mexErrMsgIdAndTxt("MATLAB:manipulation:invalidNumInputs", "Nine inputs required.");
    }
    if (nlhs != 0) {
        mexErrMsgIdAndTxt("MATLAB:manipulation:invalidNumOutputs", "No outputs required.");
    }

    // Get the inputs
    double *A_c = mxGetPr(prhs[0]);
    int rows_A = (int)mxGetScalar(prhs[1]);
    int cols_A = (int)mxGetScalar(prhs[2]);
    double *tmp1 = mxGetPr(prhs[3]);
    double *tmp2 = mxGetPr(prhs[4]);
    int *subI = (int *)mxGetData(prhs[5]);
    int *subJ = (int *)mxGetData(prhs[6]);
    int subI_size = (int)mxGetScalar(prhs[7]);
    int subJ_size = (int)mxGetScalar(prhs[8]);
    int tmp1_cols = (int)mxGetN(prhs[3]);
    int tmp2_cols = (int)mxGetN(prhs[4]);

    // Call the computational routine
    update_matrix_c(A_c, rows_A, cols_A, tmp1, tmp2, subI, subJ, subI_size, subJ_size, tmp1_cols, tmp2_cols);
}
