//鼠标操作（画矩形）
#include "pch.h"
//#include <opencv2/opencv.hpp>
//
//void on_MouseHandle(int event, int x, int y, int flags, void* param);    //定义鼠标回调函数
//void drawRectangle(cv::Mat& img, cv::Rect rect);
//
//cv::Rect grectangle;
//bool isDrawingBox = false;
//cv::RNG rng(12345);    //生成的随机数每次都不变，如果不想这样，可以使用cv::RNG rng((unsigned)time(NULL))
//
//int main()
//{
//	//设置参数
//	grectangle = cv::Rect(-1, -1, 0, 0);
//	cv::Mat srcImage(600, 800, CV_8UC3), tempImage;
//	srcImage.copyTo(tempImage); 
//	srcImage = cv::Scalar::all(0);
//
//	//设置鼠标操作回调函数
//	cv::namedWindow("【程序窗口】");
//	cv::setMouseCallback("【程序窗口】", on_MouseHandle, (void*)&srcImage);
//	 
//	while (1)
//	{ 
//		srcImage.copyTo(tempImage);
//		//显示出画图的痕迹
//		if (isDrawingBox) drawRectangle(tempImage, grectangle);
//		cv::imshow("【程序窗口】", tempImage);
//		if (cv::waitKey(10) == 27) break;
//	} 
//
//	return 0;
//}
//
//void on_MouseHandle(int event, int x, int y, int flags, void* param)
//{
//	cv::Mat& image = *(cv::Mat*)param;
//	switch (event)
//	{
//	case cv::EVENT_MOUSEMOVE:
//	{
//		if (isDrawingBox)
//		{
//			grectangle.width = x - grectangle.x;
//			grectangle.height = y - grectangle.y;
//		}
//	}
//	break;
//	case cv::EVENT_LBUTTONDOWN:
//	{
//		isDrawingBox = true;
//		grectangle = cv::Rect(x, y, 0, 0);
//	}
//	break;
//	case cv::EVENT_LBUTTONUP:
//	{
//		isDrawingBox = false;
//		if (grectangle.width < 0)
//		{
//			grectangle.x += grectangle.width;
//			grectangle.width *= -1;
//		}
//
//		if (grectangle.height < 0)
//		{
//			grectangle.y += grectangle.height;
//			grectangle.height *= -1;
//		}
//		drawRectangle(image, grectangle);
//	}
//	break;
//	default:
//		break;
//	}
//}
//
//void drawRectangle(cv::Mat& img, cv::Rect rect)
//{
//	cv::rectangle(img, rect.tl(), rect.br(), cv::Scalar(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255)));
//}
