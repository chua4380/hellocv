////创建包围轮廓的圆形边界
#include "pch.h"
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	//初始化变量和随机值
//	cv::Mat image(600, 600, CV_8UC3);
//	cv::RNG& rng = cv::theRNG();
//
//	//循环
//	while (1)
//	{
//		//参数初始化
//		int count = rng.uniform(3,103);   //随机点的数量
//		std::vector<cv::Point> points;    //生成点的集合
//
//		for (int i = 0; i < count; i++)
//		{
//			cv::Point point;
//			point.x = rng.uniform(image.cols / 4, image.cols * 3 / 4);
//			point.y = rng.uniform(image.rows / 4, image.rows * 3 / 4);
//
//			points.push_back(point);
//		}
//
//		//对给定的2D点集，寻找最小面积的包围圆
//		cv::Point2f center;
//		float radius = 0;
//		cv::minEnclosingCircle(cv::Mat(points), center, radius);
//
//		//绘制出随机颜色的点
//		image = cv::Scalar::all(0);
//		for (int i = 0; i < count; i++)
//		{
//			cv::circle(image, points[i], 3, cv::Scalar(rng.uniform(0, 255),
//				rng.uniform(0, 255), rng.uniform(0, 255)),-1,cv::LINE_AA);
//		}
//
//		//绘制出最小面积的包围圆
//		cv::circle(image, center, radius, cv::Scalar(rng.uniform(0, 255),
//			rng.uniform(0, 255), rng.uniform(0, 255)), 2, cv::LINE_AA);
//
//		//显示窗口
//		cv::imshow("圆形包围示例", image);
//
//		//按下Esc退出
//		if (cv::waitKey() == 27)
//			break;
//	}
//	
//	return 0;
//}