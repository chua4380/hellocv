////霍夫圆变换
#include "pch.h"
//#include <opencv2/opencv.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	//载入原始图
//	cv::Mat srcImg = cv::imread("./image/71.jpg");
//	cv::Mat midImg, dstImg;
//
//	//显示原始图8
//	cv::imshow("原始图", srcImg);
//
//	//转变为灰度图并进行图像平滑
//	cv::cvtColor(srcImg, midImg, cv::COLOR_BGRA2GRAY);
//	cv::GaussianBlur(midImg, midImg, cv::Size(3, 3), 2, 2);
//
//	//进行霍夫园变换
//	std::vector<cv::Vec3f> circles;
//	cv::HoughCircles(midImg, circles, cv::HOUGH_GRADIENT, 1.5, 10, 200, 100, 0, 0);
//
//	//依次在途中绘制出圆
//	for (size_t i = 0; i < circles.size(); i++)
//	{
//		//参数定义
//		cv::Point center(cvRound(circles[i][0]), cvRound(circles[i][1]));
//		int radius = cvRound(circles[i][2]);
//		//绘制圆心
//		cv::circle(srcImg, center, 3, cv::Scalar(0, 255, 0), -1, 8, 0);
//		//绘制圆轮廓
//		cv::circle(srcImg, center, radius, cv::Scalar(155, 50, 255), 3, 8, 0);
//	}
//
//	//显示效果图
//	cv::imshow("效果图", srcImg);
//	cv::waitKey(0);
//
//	return 0;
//}