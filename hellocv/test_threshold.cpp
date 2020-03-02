////基本阈值操作
#include "pch.h"
//#include <opencv2/imgproc/imgproc.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <iostream>
//
//std::string WINDOW_NAME = "程序窗口";
//
//int thresholdVal = 100;
//int thresholdType = 3;
//cv::Mat srcImg, grayImg, dstImg;
//
//void on_Threshold(int, void *);
//
//int main()
//{
//	srcImg = cv::imread("./image/6.jpg");
//	if (!srcImg.data)
//	{
//		std::cout << "加载图片失败" << std::endl;
//		return false;
//	}
//	cv::imshow("原图", srcImg);
//	cv::cvtColor(srcImg, grayImg, cv::COLOR_RGB2GRAY);
//	cv::namedWindow(WINDOW_NAME, cv::WINDOW_AUTOSIZE);
//
//	cv::createTrackbar("模式", WINDOW_NAME, &thresholdType, 4, on_Threshold);
//	cv::createTrackbar("参数值", WINDOW_NAME, &thresholdVal, 255, on_Threshold);
//
//	on_Threshold(0, 0);
//
//	while(cv::waitKey(0) != 27){}
//	
//	return 0;
//}
//
//void on_Threshold(int, void *)
//{
//	cv::threshold(grayImg, dstImg, thresholdVal, 255, thresholdType);
//	cv::imshow(WINDOW_NAME, dstImg);
//}
