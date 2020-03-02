////使用多边形包围轮廓
#include "pch.h"
//#include <opencv2/imgproc/imgproc.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <iostream>
//
////定义全局变量
//std::string WINDOW_NAME1 = "原始图窗口";
//std::string WINDOW_NAME2 = "效果图窗口";
//
//cv::Mat srcImg, grayImg;
//int g_thresh = 50;
//int g_max_thresh = 255;
//cv::RNG g_rng(12345);
//
//void on_ContoursChange(int, void*);
//
//int main()
//{
//	system("color 1A");
//	srcImg = cv::imread("./image/84.jpg");
//	if (!srcImg.data)
//	{
//		std::cout << "读取图片错误" << std::endl;
//		return false;
//	}
//
//	cv::cvtColor(srcImg, grayImg, cv::COLOR_BGR2GRAY);
//	cv::blur(grayImg, grayImg, cv::Size(3, 3));
//
//	cv::namedWindow(WINDOW_NAME1, cv::WINDOW_AUTOSIZE);
//	cv::imshow(WINDOW_NAME1, srcImg);
//
//	cv::createTrackbar("阈值：", WINDOW_NAME1, &g_thresh, g_max_thresh, on_ContoursChange);
//	on_ContoursChange(0, 0);
//	
//	cv::waitKey(0);
//	return 0;
//}
//
//void on_ContoursChange(int, void *)
//{
//	cv::Mat thresh_out;
//	std::vector<std::vector<cv::Point>> contours;
//	std::vector<cv::Vec4i> hierachy;
//
//	cv::threshold(grayImg, thresh_out, g_thresh, 255, cv::THRESH_BINARY);
//
//	cv::findContours(thresh_out, contours, hierachy, cv::RETR_TREE,
//		cv::CHAIN_APPROX_SIMPLE, cv::Point(0, 0));
//
//	//多边形逼近轮廓，获取矩形和圆形边界框
//	std::vector<std::vector<cv::Point>> contours_poly(contours.size());
//	std::vector<cv::Rect> boundRect(contours.size());
//	std::vector<cv::Point2f> center(contours.size());
//	std::vector<float> radius(contours.size());
//
//	//一个循环，遍历所有部分
//	for (int i = 0; i < contours.size(); i++)
//	{
//		//用制定精度逼近多边形曲线
//		cv::approxPolyDP(cv::Mat(contours[i]), contours_poly[i], 3, true);
//		//计算点集最外面的矩形边界
//		boundRect[i] = cv::boundingRect(cv::Mat(contours_poly[i]));
//		//寻找最小面积的包围圆形
//		cv::minEnclosingCircle(contours_poly[i], center[i], radius[i]);
//
//	}
//
//	//绘制多边形轮廓
//	cv::Mat drawing = cv::Mat::zeros(thresh_out.size(), CV_8UC3);
//	for (unsigned int i = 0; i < contours.size(); i++)
//	{
//		cv::Scalar color(g_rng.uniform(0, 255), g_rng.uniform(0, 255),
//			g_rng.uniform(0, 255));
//		//绘制轮廓
//		cv::drawContours(drawing, contours_poly, i, color, 1, 8, hierachy, 0, cv::Point());
//		//绘制矩形
//		cv::rectangle(drawing, boundRect[i].tl(), boundRect[i].br(), color, 2, 8, 0);
//		//绘制圆
//		cv::circle(drawing, center[i], (int)radius[i], color, 2, 8, 0);
//
//	}
//
//	cv::namedWindow(WINDOW_NAME2, cv::WINDOW_AUTOSIZE);
//	cv::imshow(WINDOW_NAME2, drawing);
//}
