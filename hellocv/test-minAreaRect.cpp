////创建包围轮廓的矩形边界
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
//	//循环，按Esc键退出
//	while (1)
//	{
//		//参数初始化
//		int count = rng.uniform(3, 103);
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
//		//对于给定的2D点集，寻找最小面积的包围矩形
//		cv::RotatedRect box = cv::minAreaRect(cv::Mat(points));
//		cv::Point2f vertex[4];	//用来存储最小矩形的四个顶点
//		box.points(vertex);
//
//		//绘制出随机颜色的点
//		image = cv::Scalar::all(0);
//		for (int i = 0; i < count; i++)
//		{
//			cv::circle(image, points[i], 3, cv::Scalar(rng.uniform(0, 255),
//				rng.uniform(0, 255), rng.uniform(0, 255)),cv::FILLED,cv::LINE_AA);
//		}
//
//		//绘制出最小面积的包围矩形
//		for (int i = 0; i < 4; i++)
//		{
//			cv::line(image, vertex[i], vertex[(i + 1) % 4], cv::Scalar(100, 200, 200), 2, cv::LINE_AA);
//		}
//
//		//显示窗口
//		cv::imshow("矩形包围示例", image);
//
//		//按下Esc或Q(q)键，程序退出
//		char key = (char)cv::waitKey(0);
//		if (key == 27 || key == 'q' || key == 'Q')
//		{
//			break;
//		}
//	}
//
//	return 0;
//}
