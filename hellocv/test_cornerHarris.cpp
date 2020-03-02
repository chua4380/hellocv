////harris角点检测
#include "pch.h"
//#include <opencv2/opencv.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	cv::Mat srcImg = cv::imread("./image/101.jpg", 0);
//	cv::imshow("原始图", srcImg);
//
//	//找出角点
//	cv::Mat corners;
//	cv::cornerHarris(srcImg, corners, 2, 3, 0.01);
//
//	//阈值化
//	cv::Mat harrisCorner;
//	cv::threshold(corners, harrisCorner, 0.00001, 255, cv::THRESH_BINARY);
//	cv::imshow("角点检测后的二值效果图", harrisCorner);
//	
//	cv::waitKey(0);
//	return 0;
//}