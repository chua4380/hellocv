////多重映射
#include "pch.h"
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <iostream>
//
//std::string WINDOW_NAME = "程序窗口";
//cv::Mat srcImg, dstImg, map_x, map_y;
//
//int update_map(int key);
//
//int main()
//{
//	//改变console字体颜色
//	system("color 2f");
//	//载入原始图
//	srcImg = cv::imread("./image/78.jpg");
//	if (!srcImg.data)
//	{
//		std::cout << "加载原图失败" << std::endl;
//		return false;
//	}
//	cv::imshow("原始图", srcImg);
//
//	//创建和原始图一样大小的映射图
//	dstImg.create(srcImg.size(), srcImg.type());
//	map_x.create(srcImg.size(), CV_32FC1);
//	map_y.create(srcImg.size(), CV_32FC1);
//
//	//创建窗口
//	cv::namedWindow(WINDOW_NAME, cv::WINDOW_AUTOSIZE);
//	cv::imshow(WINDOW_NAME, srcImg);
//
//	//按键轮询
//	while (1)
//	{
//		//获取键盘按键
//		int key = cv::waitKey(0);
//		if ((key & 255) == 27)
//		{
//			std::cout << "程序退出" << std::endl;
//			break;
//		}
//		//根据按键来更新map_x和map_y的值，然后调用remap函数进行重映射
//		update_map(key);
//		cv::remap(srcImg, dstImg, map_x, map_y, cv::INTER_LINEAR, cv::BORDER_CONSTANT, cv::Scalar(0, 0, 0));
//		cv::imshow(WINDOW_NAME, dstImg);
//	}
//	return 0;
//}
//
//int update_map(int key)
//{
//	for (int j = 0; j < srcImg.rows; j++)
//	{
//		for (int i = 0; i < srcImg.cols; i++)
//		{
//			switch (key)
//			{
//			case '1':
//				if (i > srcImg.cols*0.25 && i<srcImg.cols*0.75
//					&& j>srcImg.rows*0.25 && j < srcImg.rows*0.75)
//				{
//					map_x.at<float>(j, i) = static_cast<float>(2 * (i - srcImg.cols*0.25) + 0.5);
//					map_y.at<float>(j, i) = static_cast<float>(2 * (j - srcImg.rows*0.25) + 0.5);
//				}
//				else
//				{
//					map_x.at<float>(j, i) = 0;
//					map_y.at<float>(j, i) = 0;
//				}
//				break;
//			case '2':
//				map_x.at<float>(j, i) = static_cast<float>(i);
//				map_y.at<float>(j, i) = static_cast<float>(srcImg.rows - j);
//				break;
//			case '3':
//				map_x.at<float>(j, i) = static_cast<float>(srcImg.cols - i);
//				map_y.at<float>(j, i) = static_cast<float>(j);
//				break;
//			case '4':
//				map_x.at<float>(j, i) = static_cast<float>(srcImg.cols - i);
//				map_y.at<float>(j, i) = static_cast<float>(srcImg.rows - j);
//				break;
//			}
//		}
//	}
//	return 1;
//}
