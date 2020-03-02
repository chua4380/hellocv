////测试双边滤波
#include "pch.h"
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
////声明全局变量
//int dVal = 10;
//int sigmaColorVal = 10;
//int sigmalSpaceVal = 10;
//
//cv::Mat srcImg, dstImg;
//
////声明滑动条的回调函数
//static void on_Bilateral(int, void *);
//
//int main()
//{
//	//加载图片
//	srcImg = cv::imread("./image/3.jpg");
//	dstImg = srcImg.clone();
//	if (!srcImg.data) return false;
//
//	//创建显示窗口
//	cv::namedWindow("【双边滤波效果图】");
//	//创建滑动条
//	cv::createTrackbar("dVal:", "【双边滤波效果图】", &dVal, 100, on_Bilateral);
//	cv::createTrackbar("sigmaColorVal:", "【双边滤波效果图】", &sigmaColorVal, 400, on_Bilateral);
//	cv::createTrackbar("sigmaSpaceVal:", "【双边滤波效果图】", &sigmalSpaceVal, 400, on_Bilateral);
//	//初始化
//	on_Bilateral(dVal, 0);
//	on_Bilateral(sigmaColorVal, 0);
//	on_Bilateral(sigmalSpaceVal, 0);
//
//	while(cv::waitKey(0) != 27) {}	//按Esc键退出
//	return 0;
//}
//
//void on_Bilateral(int, void *)
//{
//	cv::bilateralFilter(srcImg, dstImg, dVal, sigmaColorVal, sigmalSpaceVal);
//	cv::imshow("【双边滤波效果图】", dstImg);
//}
