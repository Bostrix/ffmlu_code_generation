#include "mex.h"
#include <cmath>
#include <algorithm>

// The function signature for a MEX function
void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {
    // Check for the proper number of arguments
    if (nrhs != 2) {
        mexErrMsgIdAndTxt("MATLAB:computeKernel:invalidNumInputs", "Two inputs required.");
    }
    if (nlhs != 1) {
        mexErrMsgIdAndTxt("MATLAB:computeKernel:invalidNumOutputs", "One output required.");
    }

    // Get the inputs
    double *rdotn = mxGetPr(prhs[0]);
    double *dr = mxGetPr(prhs[1]);

    size_t n = std::max(mxGetM(prhs[0]), mxGetN(prhs[0])); // assuming rdotn is a vector
    size_t m = std::max(mxGetM(prhs[1]), mxGetN(prhs[1])); // assuming dr is a vector

    if (n != m) {
        mexErrMsgIdAndTxt("MATLAB:computeKernel:dimensionMismatch", "Input vectors must have the same length.");
    }

    // Create the output
    plhs[0] = mxCreateDoubleMatrix(n, 1, mxREAL);
    double *K = mxGetPr(plhs[0]);

    // Compute the kernel
    const double factor = -1.0 / (4 * M_PI);
    for (size_t i = 0; i < n; ++i) {
        if (dr[i] != 0) {
            K[i] = factor * rdotn[i] / (dr[i] * dr[i] * dr[i]);
        } else {
            K[i] = 0;
        }
    }
}
