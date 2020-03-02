////Laplacian算子的使用
#include "pch.h"
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	cv::Mat srcImg, grayImg, dstImg, abs_dstImg;
//
//	//载入原图
//	srcImg = cv::imread("./image/73.jpg");
//	//显示原始图
//	cv::imshow("原图", srcImg);
//
//	//使用高斯滤波消除噪声
//	cv::GaussianBlur(srcImg, srcImg, cv::Size(3, 3), 0, 0, cv::BORDER_DEFAULT);
//
//	//转换为灰度图
//	cv::cvtColor(srcImg, grayImg, cv::COLOR_BGR2GRAY);
//
//	//使用Laplacian函数
//	cv::Laplacian(grayImg, dstImg, CV_16S, 3, 1, 0, cv::BORDER_DEFAULT);
//	cv::imshow("Laplacian转换效果图1", dstImg);
//	//计算绝对值，并将结果转换为8位
//	cv::convertScaleAbs(dstImg, abs_dstImg);
//	//显示效果图
//	cv::imshow("Laplacian转换效果图2", abs_dstImg);
//	cv::waitKey(0);
//
//	return 0;
//}