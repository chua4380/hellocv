//滑动条的创建和使用
#include "pch.h"
//#include <opencv2/opencv.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <iostream>
//
//std::string WINDOW_NAME = "【滑动条的创建&线性混合示例】";
//const int MaxAlpha = 100;
//int alphaSpider;	//滑动条对应的变量
//double tempAlpha, tempBeta;
//
////声明图像存储的变量
//cv::Mat srcImg1, srcImg2, dstImg;
//
////响应滑动条的回调函数
//void on_Trackbar(int, void *)
//{
//	//求出当前的alpha
//	tempAlpha = (double)alphaSpider / MaxAlpha;
//	//求出当前的beta
//	tempBeta = (double)(1.0 - tempAlpha);
//	//根据alpha和beta值进行线性混合
//	cv::addWeighted(srcImg1, tempAlpha, srcImg2, tempBeta, 0.0, dstImg);
//	//显示效果图
//	cv::imshow(WINDOW_NAME, dstImg);
//}
//
//int main()
//{
//	srcImg1 = cv::imread("./image/1.jpg");
//	srcImg2 = cv::imread("./image/2.jpg");
//
//	/*cv::imshow("1.jpg", srcImg1);
//	cv::imshow("2.jpg", srcImg2);*/
//	//设置滑动条的初始值为70
//	alphaSpider = 70;
//
//	//创建窗体
//	cv::namedWindow(WINDOW_NAME, 1);
//	std::string trackbarName = "透明值 100";
//	cv::createTrackbar(trackbarName, WINDOW_NAME, &alphaSpider, MaxAlpha, on_Trackbar);
//	//结果在回调函数中显示(如果不加下面这行命令，生成图像的初始值没有任何颜色的灰度图)
//	on_Trackbar(alphaSpider, 0);
//
//	cv::waitKey(0);
//	return 0;
//}
