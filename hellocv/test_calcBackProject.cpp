////反向投影
#include "pch.h"
//#include <opencv2/imgproc/imgproc.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <iostream>
//
//std::string WINDOW_NAMW1 = "原始图";
//cv::Mat g_srcImg, g_hsvImg, g_hueImg;
////直方图组距
//int g_bins = 30;
//
//void on_BinChange(int, void *);
//
//int main()
//{
//	//读取原图像，并转换为HSV空间
//	g_srcImg = cv::imread("./image/94.jpg");
//	if (!g_srcImg.data)
//		return false;
//	cv::cvtColor(g_srcImg, g_hsvImg, cv::COLOR_BGR2HSV);
//	//显示HSV图像
//	cv::imshow("HSV图像", g_hsvImg);
//	//分离Hue色调通道
//	g_hueImg.create(g_hsvImg.size(), g_hsvImg.depth());
//	int ch[] = { 0,0 };
//	cv::mixChannels(&g_hsvImg, 1, &g_hueImg, 1, ch, 1);
//	//显示Hue图像
//	cv::imshow("hue图像", g_hueImg);
//	//创建Trackbar来输入bin的数目
//	cv::namedWindow(WINDOW_NAMW1, cv::WINDOW_AUTOSIZE);
//	cv::createTrackbar("色调组距：", WINDOW_NAMW1, &g_bins, 180, on_BinChange);
//
//	on_BinChange(0, 0);
//
//	//显示效果图
//	cv::imshow(WINDOW_NAMW1, g_srcImg);
//	cv::waitKey(0);
//	return 0;
//}
//
//void on_BinChange(int, void*)
//{
//	cv::MatND hist;
//	int histSize = MAX(g_bins, 2);
//	float hue_range[] = { 0,180 };
//	const float* ranges = { hue_range };
//
//	//计算直方图并归一化
//	cv::calcHist(&g_hueImg, 1, 0, cv::Mat(), hist, 1, &histSize, &ranges, true, false);
//	cv::normalize(hist, hist, 0, 255, cv::NORM_MINMAX, -1, cv::Mat());
//
//	//计算反向投影
//	cv::MatND backproj;
//	cv::calcBackProject(&g_hueImg, 1, 0, hist, backproj, &ranges, 1, true);
//
//	//显示反向投影
//	cv::imshow("反向投影图", backproj);
//
//	//绘制直方图的参数准备
//	int w = 400;
//	int h = 400;
//	int bin_w = cvRound((double)w / histSize);
//	cv::Mat histImg = cv::Mat::zeros(w, h, CV_8UC3);
//
//	//绘制直方图
//	for (int i = 0; i < g_bins; i++) {
//		cv::rectangle(histImg, cv::Point(i*bin_w, h), cv::Point((i + 1)*bin_w,
//			h - cvRound(hist.at<float>(i)*h / 255.0)), cv::Scalar(100, 123, 255), -1);
//	}
//
//	//显示直方图
//	cv::imshow("直方图",histImg);
//}