////计算并输出图像的一维直方图
#include "pch.h"
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <iostream>
//
//int main()
//{
//	//载入原始图并显示
//	cv::Mat srcImg = cv::imread("./image/92.jpg",0);
//	cv::imshow("原图", srcImg);
//	if (!srcImg.data)	return false;
//
//	cv::MatND dstHist;
//	int dims = 1;
//	float hranges[] = { 0,255 };
//	const float* ranges[] = { hranges };
//	int size = 256;
//	int channels = 0;
//
//	//计算图像的直方图
//	cv::calcHist(&srcImg, 1, &channels, cv::Mat(), dstHist, dims, &size, ranges);
//	int scale = 1;
//	cv::Mat dstImg(size*scale, size, CV_8U, cv::Scalar(0));
//
//	//获取最大值和最小值
//	double minVal = 0;
//	double maxVal = 0;
//	cv::minMaxLoc(dstHist, &minVal, &maxVal, 0, 0);
//
//	//绘制出直方图(saturate_cast防止数据溢出)
//	int hpt = cv::saturate_cast<int>(0.9*size);
//	for (int i = 0; i < 256; i++)
//	{
//		float binVal = dstHist.at<float>(i);
//		int realVal = cv::saturate_cast<int>(binVal*hpt / maxVal);
//		cv::rectangle(dstImg, cv::Point(i*scale, size-1), cv::Point((i + 1)*scale, size-realVal),
//			cv::Scalar(255));
//	}
//
//	cv::imshow("一维直方图", dstImg);
//	cv::waitKey(0);
//
//	return 0;
//}
