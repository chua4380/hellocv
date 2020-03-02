////模板示例
#include "pch.h"
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <iostream>
//
//std::string WINDOW_NAME1 = "原始图片";
//std::string WINDOW_NAME2 = "效果图片";
//
//cv::Mat g_srcImg, g_templateImg, g_resultImg;
//int g_matchMethod;
//int g_max_matchMethod=5;
//
//void on_Matching(int, void*);
//
//int main()
//{
//	//载入原图像和模板块
//	g_srcImg = cv::imread("./image/95.jpg");
//	g_templateImg = cv::imread("./image/96.jpg");
//
//	//创建窗口
//	cv::namedWindow(WINDOW_NAME1, cv::WINDOW_AUTOSIZE);
//	cv::namedWindow(WINDOW_NAME2, cv::WINDOW_AUTOSIZE);
//
//	//创建滑动条并进行一次初始化
//	cv::createTrackbar("方法:", WINDOW_NAME1, &g_matchMethod, g_max_matchMethod, on_Matching);
//	on_Matching(0, 0);
//	cv::waitKey(0);
//	return 0;
//}
//
//void on_Matching(int, void*)
//{
//	//局部变量初始化
//	cv::Mat srcImg;
//	g_srcImg.copyTo(srcImg);
//
//	//初始化用于结果和输出的矩阵
//	int resImg_rows = g_srcImg.rows - g_templateImg.rows + 1;
//	int resImg_cols = g_srcImg.cols - g_templateImg.cols + 1;
//	g_resultImg.create(resImg_rows, resImg_cols, CV_32FC1);
//
//	//进行匹配和标准化
//	cv::matchTemplate(g_srcImg, g_templateImg, g_resultImg, g_matchMethod);
//	cv::normalize(g_resultImg, g_resultImg, 0, 1, cv::NORM_MINMAX, -1, cv::Mat());
//
//	//通过函数minMaxLoc定位最匹配的位置
//	double minVal, maxVal;
//	cv::Point minLocation, maxLocation, matchLocation;
//
//	cv::minMaxLoc(g_resultImg, &minVal, &maxVal, &minLocation, &maxLocation, cv::Mat());
//
//	if (g_matchMethod == cv::TM_SQDIFF || g_matchMethod == cv::TM_SQDIFF_NORMED)
//		matchLocation = minLocation;
//	else
//		matchLocation = maxLocation;
//
//	//绘制出矩形，并显示最终结果
//	cv::rectangle(srcImg, matchLocation, cv::Point(matchLocation.x + g_templateImg.cols,
//		matchLocation.y + g_templateImg.rows), cv::Scalar(0, 0, 255), 2, 8, 0);
//	cv::rectangle(g_resultImg, matchLocation, cv::Point(matchLocation.x + g_templateImg.cols,
//		matchLocation.y + g_templateImg.rows), cv::Scalar(0, 0, 255), 2, 8, 0);
//	cv::imshow(WINDOW_NAME1, srcImg);
//	cv::imshow(WINDOW_NAME2, g_resultImg);
//	
//}
