////用滑动条控制线性滤波核
//
#include "pch.h"
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <iostream>
//
////声明全局变量
//cv::Mat srcImg, dstImg1, dstImg2, dstImg3, dstImg4;
//int boxFilterVal = 3;
//int blurFilterVal = 3;
//int gaussianFilterVal = 3;
//int medianFilterVal = 3;
//const int MAX_VAL = 40;
//
////声明滑动条的回调函数
//static void on_BoxFilter(int, void *);
//static void on_BlurFilter(int, void *);
//static void on_GaussianFilter(int, void *);
//static void on_MedianFilter(int, void *);
//int main()
//{
//	//加载图像
//	srcImg = cv::imread("./image/3.jpg");
//	if (!srcImg.data)
//	{
//		std::cout << "图片加载失败" << std::endl;
//		return false;
//	}
//
//	//复制原图到要处理的Mat中
//	dstImg1 = srcImg.clone();
//	dstImg2 = srcImg.clone();
//	dstImg3 = srcImg.clone();
//	dstImg4 = srcImg.clone();
//
//	//创建窗口
//	cv::namedWindow("【原图】");
//	cv::namedWindow("【方框滤波效果图】");
//	cv::namedWindow("【均值滤波效果图】");
//	cv::namedWindow("【高斯滤波效果图】");
//	cv::namedWindow("【中值滤波效果图】");
//
//	cv::imshow("【原图】", srcImg);
//
//	//创建滑动条
//	cv::createTrackbar("内核值：", "【方框滤波效果图】", &boxFilterVal, MAX_VAL, on_BoxFilter);
//	cv::createTrackbar("内核值：", "【均值滤波效果图】", &blurFilterVal, MAX_VAL, on_BlurFilter);
//	cv::createTrackbar("内核值：", "【高斯滤波效果图】", &gaussianFilterVal, MAX_VAL, on_GaussianFilter);
//	cv::createTrackbar("内核值：", "【中值滤波效果图】",&medianFilterVal, MAX_VAL, on_MedianFilter);
//
//	//初始化
//	on_BoxFilter(boxFilterVal, 0);
//	on_BlurFilter(blurFilterVal, 0);
//	on_GaussianFilter(gaussianFilterVal, 0);
//	on_MedianFilter(medianFilterVal, 0);
//
//	//阻塞
//	while (cv::waitKey(0) != 27) {}
//
//	return 0;
//}
//
//void on_BoxFilter(int, void *)
//{
//	cv::boxFilter(srcImg, dstImg1, -1, cv::Size(boxFilterVal+1, boxFilterVal+1));
//	cv::imshow("【方框滤波效果图】", dstImg1);
//}
//
//void on_BlurFilter(int, void *)
//{
//	cv::blur(srcImg, dstImg2, cv::Size(blurFilterVal+1, blurFilterVal+1));
//	cv::imshow("【均值滤波效果图】", dstImg2);
//}
//
//void on_GaussianFilter(int, void *)
//{
//	cv::GaussianBlur(srcImg, dstImg3, cv::Size(gaussianFilterVal*2+1, gaussianFilterVal*2+1), 0, 0);
//	cv::imshow("【高斯滤波效果图】", dstImg3);
//}
//
//void on_MedianFilter(int, void *)
//{
//	cv::medianBlur(srcImg, dstImg4, medianFilterVal);
//	cv::imshow("【中值滤波效果图】", dstImg4);
//}
//
//void on_BilaFilter(int, void *)
//{
//	cv::bilateralFilter(srcImg,dstImg5,)
//}
