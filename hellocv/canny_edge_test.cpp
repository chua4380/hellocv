// canny边缘检测
#include "pch.h"
//#include <opencv2/opencv.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	cv::Mat srcImage = cv::imread("./image/test2.jpg");
//	cv::imshow("原图", srcImage);
//	cv::Mat edge, grayImage;
//	//将原图像转换成灰度图像
//	cv::cvtColor(srcImage, grayImage, cv::COLOR_BGR2GRAY);
//	//先用3x3内核来降噪
//	cv::blur(grayImage, edge, cv::Size(3, 3));
//	//运行cancy算子
//	cv::Canny(edge, edge, 3, 9, 3);
//	
//	cv::imshow("canny边缘检测效果", edge);
//	cv::waitKey(0);
//}s