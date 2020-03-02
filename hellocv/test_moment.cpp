////查找和绘制图形轮廓矩
#include "pch.h"
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <iostream>
//
//std::string WINDOW_NAME1 = "原始图";
//std::string WINDOW_NAME2 = "图像轮廓";
//
//cv::Mat srcImg, grayImg;
//int g_thresh = 100;
//int g_max_thresh = 255;
//cv::RNG g_rng(12345);
//cv::Mat cannyMat;
//std::vector<std::vector<cv::Point>> g_contours;
//std::vector<cv::Vec4i> g_hierachy;
//
//void on_ThreshChange(int, void*);
//
//int main()
//{
//	system("color 1E");
//	srcImg = cv::imread("./image/85.jpg");
//	if (!srcImg.data)
//	{
//		std::cout << "加载原图片失败" << std::endl;
//		return false;
//	}
//	//把原图转化为灰度图像进行降噪
//	cv::cvtColor(srcImg, grayImg, cv::COLOR_BGR2GRAY);
//	cv::blur(grayImg, grayImg, cv::Size(3, 3));
//	//创建新窗口
//	cv::namedWindow(WINDOW_NAME1, cv::WINDOW_AUTOSIZE);
//	cv::imshow(WINDOW_NAME1, srcImg);
//
//	//创建滑动条并进行初始化
//	cv::createTrackbar("阈值：", WINDOW_NAME1, &g_thresh, g_max_thresh, on_ThreshChange);
//	on_ThreshChange(0, 0);
//
//	cv::waitKey(0);
//	return 0;
//}
//
//void on_ThreshChange(int, void *)
//{
//	//使用Canny边缘检测
//	cv::Canny(grayImg, cannyMat, g_thresh, g_thresh * 2, 3);
//
//	//找到轮廓
//	cv::findContours(cannyMat, g_contours, g_hierachy, cv::RETR_TREE,
//		cv::CHAIN_APPROX_SIMPLE, cv::Point(0, 0));
//
//	//计算矩
//	std::vector<cv::Moments> mu(g_contours.size());
//	for (unsigned int i = 0; i < g_contours.size(); i++)
//	{
//		mu[i] = cv::moments(g_contours[i], false);
//	}
//	//计算中心矩
//	std::vector<cv::Point2f> mc(g_contours.size());
//	for (int i = 0; i < g_contours.size(); i++)
//	{
//		mc[i] = cv::Point2f(static_cast<float>(mu[i].m10 / mu[i].m00),
//			static_cast<float>(mu[i].m01 / mu[i].m00));
//	}
//	//绘制轮廓
//	cv::Mat drawing = cv::Mat::zeros(cannyMat.size(), CV_8UC3);
//	for (int i = 0; i < g_contours.size(); i++)
//	{
//		cv::Scalar color(g_rng.uniform(0, 255), g_rng.uniform(0, 255), g_rng.uniform(0, 255));
//		cv::drawContours(drawing, g_contours, i, color, 2, 8, g_hierachy, 0, cv::Point());
//
//	//	cv::circle(drawing, mc[i], 4, color, -1, 8, 0);
//	}
//	//显示到窗口中
//	cv::namedWindow(WINDOW_NAME2, cv::WINDOW_AUTOSIZE);
//	cv::imshow(WINDOW_NAME2, drawing);
//
//	//通过m00计算轮廓面积并且和OpenCV函数比较
//	std::cout << "输出内容：面积和轮廓长度" << std::endl;
//	for (int i = 0; i < g_contours.size(); i++)
//	{
//		printf(" >通过m00计算出轮廓[%d]的面积: (M_00) = %.2f \n OpenCV函数计算出的面积=%.2f , 长度: %.2f \n\n",
//			i, mu[i].m00, cv::contourArea(g_contours[i]), cv::arcLength(g_contours[i], true));
//		cv::Scalar color(g_rng.uniform(0, 255), g_rng.uniform(0, 255), g_rng.uniform(0, 255));
//		cv::drawContours(drawing, g_contours, i, color, 2, 8, g_hierachy, 0, cv::Point());
//		cv::circle(drawing, mc[i], 4, color, -1, 8, 0);
//	}
//}
