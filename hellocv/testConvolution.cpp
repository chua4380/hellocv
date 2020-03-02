////计算两副图像的傅里叶卷积
#include "pch.h"
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <iostream>
//using cv::Mat;
//
//int main()
//{
//	Mat srcImg1, srcImg2, dstImg;
//	srcImg1 = cv::imread("./image/image.jpg", CV_LOAD_IMAGE_GRAYSCALE);
//	//srcImg2 = cv::imread("./image/logo.jpg", CV_LOAD_IMAGE_GRAYSCALE);
//	//srcImg1 = (cv::Mat_<double>(3, 3) << 1, 1, 1, 1, 1, 1, 1, 1, 1);
//	srcImg2 = (cv::Mat_<double>(3, 3) << 0, 1, 0, 0, 1, 1, 0, 1, 0);
//	srcImg1 = cv::Mat_<double>(srcImg1);
// 	//srcImg2 = cv::Mat_<double>(srcImg2);
//	dstImg.create(abs(srcImg1.rows - srcImg2.rows) + 1, abs(srcImg1.cols - srcImg2.cols) + 1, srcImg1.type());
//	cv::Size dftSize;
//	dftSize.width = cv::getOptimalDFTSize(srcImg1.cols + srcImg2.cols - 1);
//	dftSize.height = cv::getOptimalDFTSize(srcImg1.rows + srcImg2.rows - 1);
//
//	//分配临时缓冲区并初始化为零
//	Mat temp1(dftSize, srcImg1.type(), cv::Scalar::all(0));
//	Mat temp2(dftSize, srcImg2.type(), cv::Scalar::all(0));
//
//	//分别复制srcImg1和srcImg2到temp1和temp2的左上角
//	Mat roi1(temp1, cv::Rect(0, 0, srcImg1.cols, srcImg1.rows));
//	srcImg1.copyTo(roi1);
//	Mat roi2(temp2, cv::Rect(0, 0, srcImg2.cols, srcImg2.rows));
//	srcImg2.copyTo(roi2);
//
//	//就地操作，进行快速傅里叶变换
//	cv::dft(temp1, temp1, 0, temp1.rows);
//	cv::dft(temp2, temp2, 0, temp2.rows);
//
//	//将得到的频谱相乘
//	cv::mulSpectrums(temp1, temp2, temp1, cv::DFT_COMPLEX_OUTPUT);
//	
//	//将结果变换为频域
//	cv::dft(temp1, temp1, cv::DFT_INVERSE + cv::DFT_SCALE, dstImg.rows);
//
//	//将结果复制到dstImg中
//	srcImg1(cv::Rect(0, 0, dstImg.cols, dstImg.rows)).copyTo(dstImg);
//
//	cv::normalize(dstImg, dstImg, 0, 1, CV_MINMAX);
//
//	cv::imshow("【卷积结果】", dstImg);
//	cv::waitKey(0);
//
//	return 0;
//}