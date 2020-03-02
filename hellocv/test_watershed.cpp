////利用watershed函数实现基于标记的分水岭算法
#include "pch.h"
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <iostream>
//
////定义全局变量
//std::string WINDOW_NAME1 = "程序窗口";
//cv::Mat g_srcImg, g_maskImg;
//cv::Point prevPt(-1, -1);
//
//static void on_Mouse(int event, int x, int y, int flags, void*);
//
//int main()
//{
//	//载入原图并显示
//	g_srcImg = cv::imread("./image/86.jpg");
//	if (!g_srcImg.data) {
//		std::cout << "载入图像失败" << std::endl;
//		return false;
//	}
//	cv::imshow(WINDOW_NAME1, g_srcImg);
//	cv::Mat srcImg, grayImg;
//	g_srcImg.copyTo(srcImg);
//
//	//初始化掩模和灰度图
//	cv::cvtColor(g_srcImg, g_maskImg, cv::COLOR_BGR2GRAY);
//	cv::cvtColor(g_maskImg, grayImg, cv::COLOR_GRAY2BGR);
//	g_maskImg = cv::Scalar::all(0);
//
//	//设置鼠标回调函数
//	cv::setMouseCallback(WINDOW_NAME1, on_Mouse, 0);
//
//	//轮询按键，进行处理
//	while (1)
//	{
//		//获取键值
//		int c = cv::waitKey(0);
//		if (c == 27)
//			break;
//
//		//按键为2，恢复原图
//		if ((char)c == '2')
//		{
//			g_maskImg = cv::Scalar::all(0);
//			srcImg.copyTo(g_srcImg);
//			cv::imshow("image", g_srcImg);
//		}
//
//		if ((char)c == '1' || (char)c == ' ')
//		{
//			int i, j, compCount = 0;
//			std::vector<std::vector<cv::Point>> contours;
//			std::vector<cv::Vec4i> hierachy;
//
//			//寻找轮廓
//			cv::findContours(g_maskImg, contours, hierachy, cv::RETR_CCOMP, cv::CHAIN_APPROX_SIMPLE);
//
//			//轮廓为空时的处理
//			if (contours.empty())
//				continue;
//
//			//复制掩模
//			cv::Mat maskImg(g_maskImg.size(), CV_32S);
//			maskImg = cv::Scalar::all(0);
//
//			//循环绘制出轮廓
//			for (int index = 0; index >= 0; index = hierachy[index][0], compCount++)
//			{
//				//对marks进行标记，对不同区域的轮廓进行编号，相当于设置注水点，有多少轮廓，就有多少注水点
//				cv::drawContours(maskImg, contours, index, cv::Scalar::all(compCount + 1),
//					1, 8, hierachy, INT_MAX);
//			}
//
//			//compCount为零时的处理
//			if (compCount == 0)
//				continue;
//
//			//生成随机颜色
//			std::vector<cv::Vec3b> colorTab;
//			for (int i = 0; i < compCount; i++)
//			{
//				int b = cv::theRNG().uniform(0, 255);
//				int g = cv::theRNG().uniform(0, 255);
//				int r = cv::theRNG().uniform(0, 255);
//
//				colorTab.push_back(cv::Vec3b((uchar)b, (uchar)g, (uchar)r));
//			}
//
//			//计算处理时间并输出到窗口中
//			double dTime = (double)cv::getTickCount();
//			cv::watershed(srcImg, maskImg);
//			dTime = (double)cv::getTickCount() - dTime;
//			printf("\t处理时间 = %gms\n", dTime*1000. / cv::getTickFrequency());
//
//			//双层循环，将分水岭图像遍历存入watershedImage中
//			cv::Mat watershedImage(maskImg.size(), CV_8UC3);
//
//			for (i = 0; i < maskImg.rows; i++)
//			{
//				for (j = 0; j < maskImg.cols; j++)
//				{
//					int index = maskImg.at<int>(i, j);
//					if (index == -1)
//						watershedImage.at < cv::Vec3b >(i, j) = cv::Vec3b(255, 255, 255);
//					else if(index==0||index>compCount)
//						watershedImage.at < cv::Vec3b >(i, j) = cv::Vec3b(0, 0, 0);
//					else
//						watershedImage.at < cv::Vec3b >(i, j) = colorTab[index-1];
//				}
//			}
//
//			//混合灰度图和分水岭效果图并显示最终的窗口
//			watershedImage = watershedImage * 0.5 + grayImg * 0.5;
//			cv::imshow("watershed transform", watershedImage);
//		}
//	}
//	return 0;
//}
//
//void on_Mouse(int event, int x, int y, int flags, void *)
//{
//	//处理鼠标不在窗口中的情况
//	if (x < 0 || x >= g_srcImg.cols || y < 0 || y >= g_srcImg.rows)
//		return;
//
//	//处理鼠标左键相关消息
//	if (event == cv::EVENT_LBUTTONUP || !(flags&cv::EVENT_FLAG_LBUTTON))
//		prevPt = cv::Point(-1, -1);
//	else if (event == CV_EVENT_RBUTTONDOWN)
//		prevPt = cv::Point(x, y);
//	//鼠标左键按下并移动，绘制出白色线条
//	else if (event == cv::EVENT_MOUSEMOVE && (flags&cv::EVENT_FLAG_LBUTTON))
//	{
//		cv::Point pt(x, y);
//		if (prevPt.x < 0)
//			prevPt = pt;
//		cv::line(g_maskImg, prevPt, pt, cv::Scalar::all(255), 5, 8, 0);
//		cv::line(g_srcImg, prevPt, pt, cv::Scalar::all(255), 5, 8, 0);
//		prevPt = pt;
//		cv::imshow(WINDOW_NAME1, g_srcImg);
//	}
//}
