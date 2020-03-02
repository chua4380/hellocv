////综合示例:漫水填充
#include "pch.h"
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <iostream>
//
////定义原始图、目标图、灰度图和掩模图
//cv::Mat srcImg, dstImg, grayImg, maskImg;
////漫水填充的模式
//int fillMode = 1;
////负差最大值，正差最大值
//int lowDiff = 20, upDiff = 20;
////flag的第八位连通值
//int connectivity = 4;
////是否是彩色图的标识符
//int isColor = true;
////是否显示掩模窗口的布尔值
//bool useMask = false;
////重新绘制的像素值
//int newMaskVal = 255;
//
////鼠标消息onMouse的回调函数
//static void onMouse(int event, int x, int y, int, void*)
//{
//	//若鼠标左键没有按下，便返回
//	if (event != cv::EVENT_LBUTTONDOWN)
//		return;
//	//调用floodFill之前的参数准备
//	cv::Point seed = cv::Point(x, y);
//	int lowDiffVal = fillMode == 0 ? 0 : lowDiff;
//	int upDiffVal = fillMode == 0 ? 0 : upDiff;
//	//flag标识符的低8位为connectivity，中间8位为newMaskVal左移8位的值，后8位为FLOODFILL_FIXED_RANGE或0
//	int flags = connectivity + (newMaskVal << 8) + (fillMode == 1 ? cv::FLOODFILL_FIXED_RANGE : 0);
//	//随机生成bgr值
//	int b = (unsigned)cv::theRNG() & 255;
//	int g = (unsigned)cv::theRNG() & 255;
//	int r = (unsigned)cv::theRNG() & 255;
//	//定义重绘区域的最小边界矩形区域
//	cv::Rect ccomp;
//	cv::Scalar newVal = isColor ? cv::Scalar(b, g, r) : cv::Scalar(r*0.299, g*0.587, b*0.144);
//	//目标图的赋值
//	cv::Mat dst = isColor ? dstImg : grayImg;
//	int area;
//	//调用floodFill函数
//	if (useMask)
//	{
//		//threshold函数用于从灰度图像中获取二值图像
//		cv::threshold(maskImg, maskImg, 1, 128, cv::THRESH_BINARY);
//		area = cv::floodFill(dst, maskImg, seed, newVal, &ccomp, cv::Scalar(lowDiffVal, lowDiffVal, lowDiffVal),
//			cv::Scalar(upDiffVal, upDiffVal, upDiffVal), flags);
//		cv::imshow("mask", maskImg);
//	}
//	else
//	{
//		area = cv::floodFill(dst, seed, newVal, &ccomp, cv::Scalar(lowDiffVal, lowDiffVal, lowDiffVal),
//			cv::Scalar(upDiffVal, upDiffVal, upDiffVal), flags);
//	}
//	cv::imshow("效果图", dst);
//	std::cout << area << " 个像素被重绘\n";
//}
//
//int main()
//{
//	srcImg = cv::imread("./image/1.jpg",1);
//	if (!srcImg.data)
//	{
//		std::cout << "读取图片失败" << std::endl;
//		return false;
//	}
//
//	srcImg.copyTo(dstImg);
//	cv::cvtColor(srcImg, grayImg, cv::COLOR_BGR2GRAY);
//	maskImg.create(srcImg.rows + 2, srcImg.cols + 2, CV_8UC1);
//	cv::namedWindow("效果图", cv::WINDOW_AUTOSIZE);
//	
//	cv::createTrackbar("负差最大值", "效果图", &lowDiff, 255, 0);
//	cv::createTrackbar("正差最大值", "效果图", &upDiff, 255, 0);
//
//	cv::setMouseCallback("效果图", onMouse, 0);
//	
//	while (1)
//	{
//		cv::imshow("效果图", isColor ? dstImg : grayImg);
//
//		//获取键盘按键
//		int c = cv::waitKey(0);
//		//判读Esc是否按下，按下则退出
//		if ((c & 255) == 27)
//		{
//			std::cout << "程序退出" << std::endl;
//			break;
//		}
//		//根据按键选择不同的操作
//		switch (char(c))
//		{
//			//如果按下键盘1，效果图在灰度图和彩色图之间转换
//		case '1':
//			if (isColor)
//			{
//				std::cout << "键盘1被按下，将切换彩色/灰度模式，当前是彩色模式,将切换为灰度模式" << std::endl;
//				cv::cvtColor(srcImg, grayImg, cv::COLOR_BGR2GRAY);
//				//将mask所有元素都设置为0
//				maskImg = cv::Scalar::all(0);
//				//将彩色标识符设为false
//				isColor = false;
//			}	
//			else
//			{
//				std::cout << "键盘1被按下，将切换彩色/灰度模式，当前是灰度模式,将切换为彩色模式" << std::endl;
//				srcImg.copyTo(dstImg);
//				//将mask所有元素都设置为0
//				maskImg = cv::Scalar::all(0);
//				//将彩色标识符设为true
//				isColor = true;
//			}
//			break;
//			//如果键盘2被按下，显示/隐藏掩模窗口
//		case '2':
//			if (useMask)
//			{
//				cv::destroyWindow("mask");
//				useMask = false;
//			}
//			else
//			{
//				cv::namedWindow("mask", 0);
//				maskImg = cv::Scalar::all(0);
//				cv::imshow("mask", maskImg);
//				useMask = true;
//			}
//			break;
//			//如果键盘3被按下，恢复原始图像
//		case '3':
//			std::cout << "键盘3被按下，恢复原始图像" << std::endl;
//			srcImg.copyTo(dstImg);
//			cv::cvtColor(dstImg, grayImg, cv::COLOR_BGR2GRAY);
//			maskImg = cv::Scalar::all(0);
//			break;
//			//如果键盘4被按下，使用空范围的漫水填充
//		case '4':
//			std::cout << "键盘4被按下，使用空范围的漫水填充" << std::endl;
//			fillMode = 0;
//			break;
//			//如果键盘5被按下，使用渐变、固定范围的漫水填充
//		case '5':
//			std::cout << "如果键盘5被按下，使用渐变、固定范围的漫水填充" << std::endl;
//			fillMode = 1;
//			break;
//			//如果键盘5被按下，使用渐变、浮动范围的漫水填充
//		case '6':
//			std::cout << "如果键盘6被按下，使用渐变、浮动范围的漫水填充" << std::endl;
//			fillMode = 2;
//			break;
//			//如果按键7被按下，操作符的低8位使用4位的连接模式
//		case '7':
//			std::cout << "如果按键7被按下，操作符的低8位使用4位的连接模式" << std::endl;
//			connectivity = 4;
//			break;
//		case '8':
//			std::cout << "如果按键7被按下，操作符的低8位使用8位的连接模式" << std::endl;
//			connectivity = 8;
//			break;
//		}
//	}
//	return 0;
//}