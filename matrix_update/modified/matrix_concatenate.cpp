#include "mex.h"
#include <Eigen/Dense>

using namespace Eigen;

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
    if (nrhs != 4) {
        mexErrMsgIdAndTxt("MyToolbox:matrixConcatenate:nrhs", "Four inputs required.");
    }
    if (nlhs != 1) {
        mexErrMsgIdAndTxt("MyToolbox:matrixConcatenate:nlhs", "One output required.");
    }

    // Input matrices
    Map<MatrixXd> E(mxGetPr(prhs[0]), mxGetM(prhs[0]), mxGetN(prhs[0]));
    Map<MatrixXd> C(mxGetPr(prhs[1]), mxGetM(prhs[1]), mxGetN(prhs[1]));
    Map<VectorXi> idxI1(reinterpret_cast<int*>(mxGetData(prhs[2])), mxGetNumberOfElements(prhs[2]));
    Map<VectorXi> idxI2(reinterpret_cast<int*>(mxGetData(prhs[3])), mxGetNumberOfElements(prhs[3]));

    // Concatenate the matrices
    MatrixXd tmp1(idxI1.size() + idxI2.size(), E.cols());
    tmp1 << E(idxI1, all), C(idxI2, all);

    // Set the output
    plhs[0] = mxCreateDoubleMatrix(tmp1.rows(), tmp1.cols(), mxREAL);
    memcpy(mxGetPr(plhs[0]), tmp1.data(), tmp1.size() * sizeof(double));
}
