#include "pch.h"
//#include "opencv2/core/core.hpp"
//#include "opencv2/imgproc/imgproc.hpp"
//#include "opencv2/highgui/highgui.hpp"
//#include <iostream>
//
//using namespace cv;
//using namespace std;
//
//void convolveDFT(Mat A, Mat B, Mat& C)
//{
//	// reallocate the output array if needed
//	C.create(abs(A.rows - B.rows) + 1, abs(A.cols - B.cols) + 1, A.type());
//	Size dftSize;
//	// calculate the size of DFT transform
//	dftSize.width = getOptimalDFTSize(A.cols + B.cols - 1);
//	dftSize.height = getOptimalDFTSize(A.rows + B.rows - 1);
//
//	// allocate temporary buffers and initialize them with 0's
//	Mat tempA(dftSize, A.type(), Scalar::all(0));
//	Mat tempB(dftSize, B.type(), Scalar::all(0));
//
//	// copy A and B to the top-left corners of tempA and tempB, respectively
//	Mat roiA(tempA, Rect(0, 0, A.cols, A.rows));
//	A.copyTo(roiA);
//	Mat roiB(tempB, Rect(0, 0, B.cols, B.rows));
//	B.copyTo(roiB);
//
//	// now transform the padded A & B in-place;
//	// use "nonzeroRows" hint for faster processing
//	dft(tempA, tempA, 0, A.rows);
//	dft(tempB, tempB, 0, B.rows);
//
//	// multiply the spectrums;
//	// the function handles packed spectrum representations well
//	mulSpectrums(tempA, tempB, tempA, DFT_COMPLEX_OUTPUT);
//	//mulSpectrums(tempA, tempB, tempA, DFT_REAL_OUTPUT);
//
//	// transform the product back from the frequency domain.
//	// Even though all the result rows will be non-zero,
//	// you need only the first C.rows of them, and thus you
//	// pass nonzeroRows == C.rows
//	dft(tempA, tempA, DFT_INVERSE + DFT_SCALE, C.rows);
//
//	// now copy the result back to C.
//	tempA(Rect(0, 0, C.cols, C.rows)).copyTo(C);
//
//	// all the temporary buffers will be deallocated automatically
//}
//
//
//int main()
//{
//	//const char* filename = argc >= 2 ? argv[1] : "Lenna.png";
//
//	Mat I = imread("./image/image.jpg", CV_LOAD_IMAGE_GRAYSCALE);
//	if (I.empty())
//		return -1;
//
//	Mat kernel = (Mat_<float>(3, 3) << 1, 0, 1, 1, 0, 1, 1, 0, 1);
//	cout << kernel;
//	Mat floatI = Mat_<float>(I);// change image type into float
//	Mat filteredI;
//	convolveDFT(floatI, kernel, filteredI);
//
//	normalize(filteredI, filteredI, 0, 1, CV_MINMAX); // Transform the matrix with float values into a
//											// viewable image form (float between values 0 and 1).
//	cv::namedWindow("原图");
//	cv::namedWindow("卷积图");
//	cv::moveWindow("原图", 0, 200);
//	cv::moveWindow("卷积图", I.cols, 200);
//	imshow("原图", I);
//	imshow("卷积图", filteredI);
//	waitKey(0);
//
//}
//
//
