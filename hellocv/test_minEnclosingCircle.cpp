////������Χ������Բ�α߽�
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
//	//ѭ��
//	while (1)
//	{
//		//������ʼ��
//		int count = rng.uniform(3,103);   //����������
//		std::vector<cv::Point> points;    //���ɵ�ļ���
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
//		//�Ը�����2D�㼯��Ѱ����С����İ�ΧԲ
//		cv::Point2f center;
//		float radius = 0;
//		cv::minEnclosingCircle(cv::Mat(points), center, radius);
//
//		//���Ƴ������ɫ�ĵ�
//		image = cv::Scalar::all(0);
//		for (int i = 0; i < count; i++)
//		{
//			cv::circle(image, points[i], 3, cv::Scalar(rng.uniform(0, 255),
//				rng.uniform(0, 255), rng.uniform(0, 255)),-1,cv::LINE_AA);
//		}
//
//		//���Ƴ���С����İ�ΧԲ
//		cv::circle(image, center, radius, cv::Scalar(rng.uniform(0, 255),
//			rng.uniform(0, 255), rng.uniform(0, 255)), 2, cv::LINE_AA);
//
//		//��ʾ����
//		cv::imshow("Բ�ΰ�Χʾ��", image);
//
//		//����Esc�˳�
//		if (cv::waitKey() == 27)
//			break;
//	}
//	
//	return 0;
//}