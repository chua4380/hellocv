////������ֵ����
#include "pch.h"
//#include <opencv2/imgproc/imgproc.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <iostream>
//
//std::string WINDOW_NAME = "���򴰿�";
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
//		std::cout << "����ͼƬʧ��" << std::endl;
//		return false;
//	}
//	cv::imshow("ԭͼ", srcImg);
//	cv::cvtColor(srcImg, grayImg, cv::COLOR_RGB2GRAY);
//	cv::namedWindow(WINDOW_NAME, cv::WINDOW_AUTOSIZE);
//
//	cv::createTrackbar("ģʽ", WINDOW_NAME, &thresholdType, 4, on_Threshold);
//	cv::createTrackbar("����ֵ", WINDOW_NAME, &thresholdVal, 255, on_Threshold);
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
