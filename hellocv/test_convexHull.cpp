////利用convexHull()函数来寻找凸包
#include "pch.h"
//#include <opencv2/imgproc/imgproc.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <iostream>
//
//int main()
//{
//	//初始化变量和随机值
//	cv::Mat image(600, 600, CV_8UC3);
//	cv::RNG& rng = cv::theRNG();
//
//	//循环，按下Esc,Q,q键程序退出，否则有按键便一直更新
//	while (1)
//	{
//		//参数初始化
//		char key;
//		//随机生成点的数量
//		int count = (unsigned)rng % 200 + 3;
//		std::vector<cv::Point> points;
//
//		//随机生成点坐标
//		for (int i = 0; i < count; i++)
//		{
//			cv::Point point;
//			point.x = rng.uniform(image.cols / 4, image.cols * 3 / 4);
//			point.y = rng.uniform(image.rows / 4, image.rows * 3 / 4);
//
//			points.push_back(point);
//		}
//
//		//检测凸包
//		std::vector<int> hull;
//		cv::convexHull(cv::Mat(points), hull, true);
//
//		//绘制出随机颜色的点
//		image = cv::Scalar::all(0);
//		for (int i = 0; i < count; i++)
//		{
//			cv::circle(image, points[i], 3, cv::Scalar(rng.uniform(0, 255),
//				rng.uniform(0, 255), rng.uniform(0, 255)), -1, cv::LINE_AA);
//
//		}
//
//		//准备参数
//		int hullCount = (int)hull.size();
//		cv::Point point0 = points[hull[hullCount - 1]];
//
//		//绘制凸包的边
//		for (int i = 0; i < hullCount; i++)
//		{
//			cv::Point point = points[hull[i]];
//			cv::line(image, point0, point, cv::Scalar(255, 255, 255), 2, cv::LINE_AA);
//			point0 = point;
//		}
//
//		//显示效果图
//		cv::imshow("凸包检测示例", image);
//
//		//按下Esc或者Q(q)，程序退出
//		key = (char)cv::waitKey();
//		if (key == 27 || key == 'q' || key == 'Q')
//			break;
//	}
//
//	return 0;
//}