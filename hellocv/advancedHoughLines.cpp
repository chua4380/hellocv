////带滑动条的霍夫变换
#include "pch.h"
//#include <opencv2/opencv.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
////声明全局变量
//cv::Mat srcImg, midImg, dstImg;
//std::vector<cv::Vec4i> lines;
//int thresholdVal = 100;
//
////声明回调函数
//static void on_HoughLines(int, void *);
//
//int main()
//{
//	system("color 3F");
//	srcImg = cv::imread("./image/77.jpg");
//
//	cv::imshow("原始图", srcImg);
//
//	cv::namedWindow("效果图", 1);
//
//	cv::createTrackbar("阈值:", "效果图", &thresholdVal, 200, on_HoughLines);
//
//	//进行边缘检测和转化为灰度图
//	cv::Canny(srcImg, midImg, 50, 200, 3);
//	cv::cvtColor(midImg, dstImg, cv::COLOR_GRAY2BGR);
//
//	//调用回调函数进行初始化
//	on_HoughLines(thresholdVal, 0);
//	cv::HoughLinesP(midImg, lines, 1, CV_PI / 180, 80, 50, 10);
//
//	//显示效果图
//	cv::imshow("效果图", dstImg);
//	cv::waitKey(0);
//
//	return 0;
//}
//
//void on_HoughLines(int, void *)
//{
//	//定义局部变量存储全局变量
//	cv::Mat dst = dstImg.clone();
//	cv::Mat mid = midImg.clone();
//
//	//调用HoughLinesP函数
//	std::vector<cv::Vec4i> mylines;
//	cv::HoughLinesP(mid, mylines, 1, CV_PI / 180, thresholdVal + 1, 50, 10);
//
//	//循环遍历每一条线段
//	for (size_t i = 0; i < mylines.size(); i++)
//	{
//		cv::Vec4i l = mylines[i];
//		cv::line(dst, cv::Point(l[0], l[1]), cv::Point(l[2], l[3]), cv::Scalar(23, 180, 55), 1, cv::LINE_AA);
//	}
//
//	//显示图像
//	cv::imshow("效果图", dst);
//}
