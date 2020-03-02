////寻找和绘制物体的凸包
#include "pch.h"
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <iostream>
//
////全局变量声明
//std::string WINDOW_NAME1 = "原始图";
//std::string WINDOW_NAME2 = "效果图";
//cv::Mat srcImg, grayImg;
//int threshVal = 50;
//int maxThresh = 255;
//cv::RNG g_rng(12345);
//cv::Mat srcImg_copy = srcImg.clone();
//cv::Mat thresholdImg;
//std::vector<std::vector<cv::Point>>  g_countours;
//std::vector<cv::Vec4i> g_hierachy;                       
//
//static void on_ThreshChange(int, void*);
//
//int main()
//{
//	//加载原图像
//	srcImg = cv::imread("./image/83.jpg");
//
//	//将原图转换为灰度图并降噪
//	cv::cvtColor(srcImg, grayImg, cv::COLOR_BGR2GRAY);
//	cv::blur(grayImg, grayImg, cv::Size(3, 3));
//
//	//创建窗口并显示
//	cv::namedWindow(WINDOW_NAME1, cv::WINDOW_AUTOSIZE);
//	cv::imshow(WINDOW_NAME1, srcImg);
//
//	//创建滑动条并初始化
//	cv::createTrackbar("阈值：", WINDOW_NAME1, &threshVal, maxThresh, on_ThreshChange);
//	on_ThreshChange(0, 0);
//
//	cv::waitKey(0);
//	return 0;
//}
//
//void on_ThreshChange(int, void *)
//{
//	//对图像进行二值化，控制阈值
//	cv::threshold(grayImg, thresholdImg, threshVal, 255, cv::THRESH_BINARY);
//
//	//寻找阈值
//	cv::findContours(thresholdImg, g_countours, g_hierachy, cv::RETR_TREE,
//		cv::CHAIN_APPROX_SIMPLE, cv::Point(0, 0));
//
//	//遍历每个轮廓，寻找其凸包
//	std::vector<std::vector<cv::Point>> hull(g_countours.size()); //凸包的集合
//	for (unsigned int i = 0; i < g_countours.size(); i++)
//	{
//		cv::convexHull(cv::Mat(g_countours[i]), hull[i], false);
//	}
//	//绘制轮廓及其凸包
//	cv::Mat drawing = cv::Mat::zeros(thresholdImg.size(), CV_8UC3);
//	for (unsigned int i = 0; i < g_countours.size(); i++)
//	{
//		cv::Scalar color(g_rng.uniform(0, 255), g_rng.uniform(0, 255),
//			g_rng.uniform(0, 255));
//		cv::drawContours(drawing, g_countours, i, color, 1, 8,
//			std::vector<cv::Vec4i>(), 0, cv::Point());
//		/*cv::drawContours(drawing, hull, i, color, 1, 8,
//			std::vector<cv::Vec4i>(), 0, cv::Point());*/
//	}
//	//显示效果图
//	cv::imshow(WINDOW_NAME2, drawing);
//}
