////图像修补
#include "pch.h"
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <opencv2/photo/photo.hpp>
//#include <iostream>
//
//std::string WINDOW_NAME1 = "原始图";
//std::string WINDOW_NAME2 = "效果图";
//
//cv::Mat srcImg, inpaintMask;
//cv::Point prePt(-1, -1);
//
//static void on_Mouse(int event, int x, int y, int flags, void*)
//{
//	//鼠标左键弹起
//	if (event == cv::EVENT_LBUTTONUP || !(flags&cv::EVENT_FLAG_LBUTTON))
//		prePt = cv::Point(-1, -1);
//	//鼠标左键按下消息
//	else if (event == cv::EVENT_LBUTTONDOWN)
//		prePt = cv::Point(x, y);
//
//	//鼠标按下并移动，进行绘制
//
//	else if (event == cv::EVENT_MOUSEMOVE && (flags & cv::EVENT_FLAG_LBUTTON))
//	{
//		cv::Point pt(x,y);
//		if (prePt.x < 0)
//		{
//			prePt=pt;
//		}
//		//绘制白色线条
//		cv::line(inpaintMask, prePt, pt, cv::Scalar::all(255), 5, 8, 0);
//		cv::line(srcImg, prePt, pt, cv::Scalar::all(255), 5, 8, 0);
//		prePt = pt;
//		cv::imshow(WINDOW_NAME1, srcImg);
//	}
//}
//
//int main()
//{
//	cv::Mat src = cv::imread("./image/87.jpg",-1);
//	if (!src.data)
//		return false;
//	srcImg = src.clone();
//	inpaintMask = cv::Mat::zeros(srcImg.size(), CV_8U);
//
//	//显示原始图
//	cv::imshow(WINDOW_NAME1, srcImg);
//
//	//设置鼠标回调函数
//	cv::setMouseCallback(WINDOW_NAME1, on_Mouse, 0);
//
//	//根据不同按键进行处理
//	while (1)
//	{
//		//获取按键值
//		char c = (char)cv::waitKey();
//		if (c == 27)
//			break;
//		//键值为2，恢复原始图像
//		if (c == '2')
//		{
//			inpaintMask = cv::Scalar::all(0);
//			src.copyTo(srcImg);
//			cv::imshow(WINDOW_NAME1, srcImg);
//		}
//		//键值为1，进行图像修补操作
//		if (c == '1')
//		{
//			cv::Mat inpaintedImg;
//			cv::inpaint(srcImg, inpaintMask, inpaintedImg, 3, cv::INPAINT_TELEA);
//			cv::imshow(WINDOW_NAME2, inpaintedImg);
//		}
//	}
//	return 0;
//}