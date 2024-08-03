#include "mex.h"
#include <string.h>  // Include string.h for memcpy

// Function to concatenate rows from two matrices based on provided indices
void concatenate_rows(double* result, double* E, double* C, int* idxI1, int idxI1_size, int* idxI2, int idxI2_size, int cols) {
    int i, j;
    // Copy rows from E to result
    for (i = 0; i < idxI1_size; ++i) {
        for (j = 0; j < cols; ++j) {
            result[i * cols + j] = E[(idxI1[i] - 1) * cols + j];  // Adjust for 1-based indexing
        }
    }
    // Copy rows from C to result
    for (i = 0; i < idxI2_size; ++i) {
        for (j = 0; j < cols; ++j) {
            result[(idxI1_size + i) * cols + j] = C[(idxI2[i] - 1) * cols + j];  // Adjust for 1-based indexing
        }
    }
}

// MEX function
void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {
    // Check for proper number of arguments
    if (nrhs != 4) {
        mexErrMsgIdAndTxt("MATLAB:concatenate_rows:invalidNumInputs", "Four inputs required.");
    }

    // Extract inputs
    double* E = mxGetPr(prhs[0]);
    double* C = mxGetPr(prhs[1]);
    int* idxI1 = (int*)mxGetData(prhs[2]);
    int* idxI2 = (int*)mxGetData(prhs[3]);

    int idxI1_size = mxGetN(prhs[2]);
    int idxI2_size = mxGetN(prhs[3]);
    int cols = mxGetN(prhs[0]);

    // Create output matrix
    plhs[0] = mxCreateDoubleMatrix(idxI1_size + idxI2_size, cols, mxREAL);
    double* result = mxGetPr(plhs[0]);

    // Perform row concatenation
    concatenate_rows(result, E, C, idxI1, idxI1_size, idxI2, idxI2_size, cols);
}
