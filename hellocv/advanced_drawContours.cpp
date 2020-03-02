////查找并绘制轮廓
#include "pch.h"
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <iostream>
//
////全局变量声明
//std::string WINDOW_NAME1 = "原始图";
//std::string WINDOW_NAME2 = "轮廓图";
//cv::Mat srcImg, grayImg, cannyMat;
//int threshVal = 80;
//int threshVal_max = 255;
//cv::RNG g_rng(12345);
//std::vector<std::vector<cv::Point>> g_contours;
//std::vector<cv::Vec4i> g_hierachy;  
//
//static void on_ThreshChange(int, void*);
//
//int main()
//{
//	system("color 1F");
//
//	//加载原图像
//	srcImg = cv::imread("./image/82.jpg");
//	if (!srcImg.data)
//	{
//		std::cout << "加载图片失败" << std::endl;
//		return false;
//	}
//
//	//转成灰度图并降噪
//	cv::cvtColor(srcImg, grayImg, cv::COLOR_BGR2GRAY);
//	cv::blur(grayImg, grayImg, cv::Size(3, 3));
//
//	//创建窗口
//	cv::namedWindow(WINDOW_NAME1, cv::WINDOW_AUTOSIZE);
//	cv::imshow(WINDOW_NAME1, srcImg);
//
//	//创建滑动条并初始化
//	cv::createTrackbar("canny阈值", WINDOW_NAME1, &threshVal, threshVal_max, on_ThreshChange);
//	on_ThreshChange(0, 0);
//
//	cv::waitKey(0);
//	return 0;
//}
//
//void on_ThreshChange(int, void *)
//{
//	//用canny算子检测边缘
//	cv::Canny(grayImg, cannyMat, threshVal, threshVal * 2, 3);
//
//	//寻找轮廓
//	cv::findContours(cannyMat, g_contours, g_hierachy,
//		cv::RETR_TREE, cv::CHAIN_APPROX_SIMPLE, cv::Point(0, 0));
//
//	//绘出轮廓
//	cv::Mat drawing = cv::Mat::zeros(cannyMat.size(), CV_8UC3);
//	for (int i = 0; i < g_contours.size(); i++)
//	{
//		cv::Scalar color(g_rng.uniform(0, 255), g_rng.uniform(0, 255),
//			g_rng.uniform(0, 255));
//		cv::drawContours(drawing, g_contours, i, color, 2, 8, g_hierachy, 0, cv::Point());
//	}
//	//显示效果图
//	cv::imshow(WINDOW_NAME2, drawing);
//}
