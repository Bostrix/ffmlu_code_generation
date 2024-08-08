#include "mex.h"
#include <Eigen/Dense>

using namespace Eigen;

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
    if (nrhs != 3) {
        mexErrMsgIdAndTxt("MyToolbox:matrixUpdateDiagonal:nrhs", "Three inputs required.");
    }
    if (nlhs != 1) {
        mexErrMsgIdAndTxt("MyToolbox:matrixUpdateDiagonal:nlhs", "One output required.");
    }

    // Input matrices
    Map<MatrixXd> A(mxGetPr(prhs[0]), mxGetM(prhs[0]), mxGetN(prhs[0]));
    Map<MatrixXd> tmp1(mxGetPr(prhs[1]), mxGetM(prhs[1]), mxGetN(prhs[1]));
    Map<MatrixXd> tmp2(mxGetPr(prhs[2]), mxGetM(prhs[2]), mxGetN(prhs[2]));

    // Perform the operation
    A.noalias() -= tmp1 * tmp2;

    // Set the output
    plhs[0] = mxCreateDoubleMatrix(A.rows(), A.cols(), mxREAL);
    memcpy(mxGetPr(plhs[0]), A.data(), A.size() * sizeof(double));
}
