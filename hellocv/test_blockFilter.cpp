////方框滤波
//
#include "pch.h"
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	cv::Mat srcImage = cv::imread("./image/3.jpg");
//	cv::Mat dstImg1, dstImg2, dstImg3;
//
//	//方框滤波
//	cv::boxFilter(srcImage, dstImg1, -1, cv::Size(5, 5));
//
//	//均值滤波
//	cv::blur(srcImage, dstImg2, cv::Size(15, 15));
//
//	//高斯滤波
//	cv::GaussianBlur(srcImage, dstImg3, cv::Size(3, 3), 0, 0);
//
//	cv::imshow("原图像", srcImage);
//	cv::imshow("方框滤波效果图", dstImg1);
//	cv::imshow("均值滤波效果图", dstImg2);
//	cv::imshow("高斯滤波效果图", dstImg3);
//
//	cv::waitKey(0);
//	return 0;
//}
