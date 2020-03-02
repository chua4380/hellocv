////����convexHull()������Ѱ��͹��
#include "pch.h"
//#include <opencv2/imgproc/imgproc.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <iostream>
//
//int main()
//{
//	//��ʼ�����������ֵ
//	cv::Mat image(600, 600, CV_8UC3);
//	cv::RNG& rng = cv::theRNG();
//
//	//ѭ��������Esc,Q,q�������˳��������а�����һֱ����
//	while (1)
//	{
//		//������ʼ��
//		char key;
//		//������ɵ������
//		int count = (unsigned)rng % 200 + 3;
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
//		//���͹��
//		std::vector<int> hull;
//		cv::convexHull(cv::Mat(points), hull, true);
//
//		//���Ƴ������ɫ�ĵ�
//		image = cv::Scalar::all(0);
//		for (int i = 0; i < count; i++)
//		{
//			cv::circle(image, points[i], 3, cv::Scalar(rng.uniform(0, 255),
//				rng.uniform(0, 255), rng.uniform(0, 255)), -1, cv::LINE_AA);
//
//		}
//
//		//׼������
//		int hullCount = (int)hull.size();
//		cv::Point point0 = points[hull[hullCount - 1]];
//
//		//����͹���ı�
//		for (int i = 0; i < hullCount; i++)
//		{
//			cv::Point point = points[hull[i]];
//			cv::line(image, point0, point, cv::Scalar(255, 255, 255), 2, cv::LINE_AA);
//			point0 = point;
//		}
//
//		//��ʾЧ��ͼ
//		cv::imshow("͹�����ʾ��", image);
//
//		//����Esc����Q(q)�������˳�
//		key = (char)cv::waitKey();
//		if (key == 27 || key == 'q' || key == 'Q')
//			break;
//	}
//
//	return 0;
//}