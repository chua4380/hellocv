////������Χ�����ľ��α߽�
#include "pch.h"
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	//��ʼ�����������ֵ
//	cv::Mat image(600, 600, CV_8UC3);
//	cv::RNG& rng = cv::theRNG();
//
//	//ѭ������Esc���˳�
//	while (1)
//	{
//		//������ʼ��
//		int count = rng.uniform(3, 103);
//		std::vector<cv::Point> points;
//
//		//������ɵ�����
//		for (int i = 0; i < count; i++)
//		{
//			cv::Point point;
//			point.x = rng.uniform(image.cols / 4, image.cols * 3 / 4);
//			point.y = rng.uniform(image.rows / 4, image.rows * 3 / 4);
//
//			points.push_back(point);
//		}
//
//		//���ڸ�����2D�㼯��Ѱ����С����İ�Χ����
//		cv::RotatedRect box = cv::minAreaRect(cv::Mat(points));
//		cv::Point2f vertex[4];	//�����洢��С���ε��ĸ�����
//		box.points(vertex);
//
//		//���Ƴ������ɫ�ĵ�
//		image = cv::Scalar::all(0);
//		for (int i = 0; i < count; i++)
//		{
//			cv::circle(image, points[i], 3, cv::Scalar(rng.uniform(0, 255),
//				rng.uniform(0, 255), rng.uniform(0, 255)),cv::FILLED,cv::LINE_AA);
//		}
//
//		//���Ƴ���С����İ�Χ����
//		for (int i = 0; i < 4; i++)
//		{
//			cv::line(image, vertex[i], vertex[(i + 1) % 4], cv::Scalar(100, 200, 200), 2, cv::LINE_AA);
//		}
//
//		//��ʾ����
//		cv::imshow("���ΰ�Χʾ��", image);
//
//		//����Esc��Q(q)���������˳�
//		char key = (char)cv::waitKey(0);
//		if (key == 27 || key == 'q' || key == 'Q')
//		{
//			break;
//		}
//	}
//
//	return 0;
//}
