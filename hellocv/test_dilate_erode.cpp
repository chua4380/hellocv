////膨胀和腐蚀
//
#include "pch.h"
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
////声明全局变量
//int changeTrackbar = 1;	//1表示膨胀，0表示腐蚀
//int structSize = 3;
//cv::Mat srcImg, dstImg, kernelMat;
//
////回调函数和处理函数声明
//void process();
//void on_changeTrackbar(int, void *);
//void on_sizeChange(int, void *);
//
//int main()
//{
//	//加载图片
//	srcImg = cv::imread("./image/logo.PNG");
//	if (!srcImg.data)	return false;
//
//	//创建显示窗口
//	cv::namedWindow("【原图】");
//	cv::namedWindow("【效果图】");
//
//	//显示原图
//	cv::imshow("【原图】", srcImg);
//
//	//获取自定义核
//	kernelMat = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(2 * structSize + 1, 2 * structSize + 1),
//		cv::Point(structSize, structSize));
//	cv::erode(srcImg, dstImg, kernelMat);
//	cv::imshow("【效果图】", dstImg);
//
//	//创建滑动条
//	cv::createTrackbar("膨胀/腐蚀：", "【效果图】", &changeTrackbar, 1, on_changeTrackbar);
//	cv::createTrackbar("内核值：", "【效果图】", &structSize, 20, on_sizeChange);
//
//	while(cv::waitKey(0) != 27) {}
//	return 0;
//}
//
//void process()
//{
//	//获取自定义核
//	kernelMat = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(2 * structSize + 1, 2 * structSize + 1),
//		cv::Point(structSize, structSize));
//	//判断要进行的操作
//	if (changeTrackbar == 0)
//		cv::dilate(srcImg, dstImg, kernelMat);
//	else
//		cv::erode(srcImg, dstImg, kernelMat);
//	//显示效果图
//	cv::imshow("【效果图】", dstImg);
//}
//
//void on_changeTrackbar(int, void *)
//{
//	process();
//}
//
//void on_sizeChange(int, void *)
//{
//	process();
//}
