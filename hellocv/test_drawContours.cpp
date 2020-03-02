////轮廓查找
#include "pch.h"
//#include <opencv2/opencv.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	//加载原图,且必须以二值图模式载入
//	cv::Mat srcImg = cv::imread("./image/81.jpg",0);
//	cv::imshow("原始图", srcImg);
//
//	//初始化结果图
//	cv::Mat dstImg = cv::Mat::zeros(srcImg.rows, srcImg.cols, CV_8UC3);
//
//	//srcImg取大于阈值119的那部分
//	srcImg = srcImg > 119;
//	cv::imshow("取阈值后的原始图", srcImg);
//
//	//定义轮廓和层次结构
//	std::vector<std::vector<cv::Point>> contours;
//	std::vector<cv::Vec4i> hierachy;
//	cv::findContours(srcImg, contours, hierachy, cv::RETR_CCOMP, cv::CHAIN_APPROX_SIMPLE);
//	
//	//遍历所有顶层的轮廓，以随机颜色绘制出每个连接组件颜色
//	int index = 0;
//	for (; index >= 0; index = hierachy[index][0])
//	{
//		cv::Scalar color(rand() & 255, rand() & 255, rand() & 255);
//		cv::drawContours(dstImg, contours, index, color, cv::FILLED, 8, hierachy);
//	}
//
//	//显示最后的轮廓图
//	cv::imshow("轮廓图", dstImg);
//
//	cv::waitKey(0);
//	return 0;
//}