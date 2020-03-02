////harris角点检测与绘制
#include "pch.h"
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <iostream>
//
////声明全局变量
//std::string WINDOW_NAME1 = "操作窗口";
//std::string WINDOW_NAME2 = "效果图";
//
//cv::Mat g_srcImg, g_srcImg1, g_grayImg;
//int thresh = 30;
//int max_thresh = 175;
//
////声明回调函数
//void on_CornerHarris(int, void*);
//
//int main()
//{
//	g_srcImg = cv::imread("./image/102.jpg");
//	cv::imshow("原始图", g_srcImg);
//	//转灰度图
//	cv::cvtColor(g_srcImg, g_grayImg, cv::COLOR_BGR2GRAY);
//
//	//创建窗口和滑动条
//	cv::namedWindow(WINDOW_NAME1, cv::WINDOW_AUTOSIZE);
//	cv::createTrackbar("阈值：", WINDOW_NAME1, &thresh, max_thresh, on_CornerHarris);
//	//调用回调函数进行初始化
//	on_CornerHarris(0, 0);
//
//	cv::waitKey(0);
//	return 0;
//
//}
//
//void on_CornerHarris(int, void *)
//{
//	cv::Mat dstImg, normalImg, scaledImg;
//	dstImg = cv::Mat::zeros(g_srcImg.size(), CV_32FC1);
//	g_srcImg1 = g_srcImg.clone();
//
//	//进行角点检测
//	cv::cornerHarris(g_grayImg, dstImg, 2, 3, 0.04, cv::BORDER_DEFAULT);
//
//	//归一化
//	cv::normalize(dstImg, normalImg, 0, 255, cv::NORM_MINMAX, CV_32FC1);
//	//将归一化的后的线性图像转换成8位无符号整形
//	cv::convertScaleAbs(normalImg, scaledImg);
//	
//	//将检测到的，且符合阈值条件的角点绘制出来
//	for (int j = 0; j < normalImg.rows; j++)
//	{
//		for (int i = 0; i < normalImg.cols; i++)
//		{
//			if ((int)normalImg.at<float>(j, i) > thresh + 80)
//			{
//				cv::circle(g_srcImg1, cv::Point(i, j), 5, cv::Scalar(10, 10, 255), 2, 3, 0);
//				cv::circle(scaledImg, cv::Point(i, j), 5, cv::Scalar(0, 10, 255), 2, 8, 0);
//			}
//		}
//	}
//
//	cv::imshow(WINDOW_NAME1, g_srcImg1);
//	cv::imshow(WINDOW_NAME2, scaledImg);
//
//}
