////harris�ǵ��������
#include "pch.h"
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <iostream>
//
////����ȫ�ֱ���
//std::string WINDOW_NAME1 = "��������";
//std::string WINDOW_NAME2 = "Ч��ͼ";
//
//cv::Mat g_srcImg, g_srcImg1, g_grayImg;
//int thresh = 30;
//int max_thresh = 175;
//
////�����ص�����
//void on_CornerHarris(int, void*);
//
//int main()
//{
//	g_srcImg = cv::imread("./image/102.jpg");
//	cv::imshow("ԭʼͼ", g_srcImg);
//	//ת�Ҷ�ͼ
//	cv::cvtColor(g_srcImg, g_grayImg, cv::COLOR_BGR2GRAY);
//
//	//�������ںͻ�����
//	cv::namedWindow(WINDOW_NAME1, cv::WINDOW_AUTOSIZE);
//	cv::createTrackbar("��ֵ��", WINDOW_NAME1, &thresh, max_thresh, on_CornerHarris);
//	//���ûص��������г�ʼ��
//	on_CornerHarris(0, 0);
//
//	cv::waitKey(0);
//	return 0;
//
//}
//
//void on_CornerHarris(int, void *)
//{
//	cv::Mat dstImg, normalImg, scaledImg;
//	dstImg = cv::Mat::zeros(g_srcImg.size(), CV_32FC1);
//	g_srcImg1 = g_srcImg.clone();
//
//	//���нǵ���
//	cv::cornerHarris(g_grayImg, dstImg, 2, 3, 0.04, cv::BORDER_DEFAULT);
//
//	//��һ��
//	cv::normalize(dstImg, normalImg, 0, 255, cv::NORM_MINMAX, CV_32FC1);
//	//����һ���ĺ������ͼ��ת����8λ�޷�������
//	cv::convertScaleAbs(normalImg, scaledImg);
//	
//	//����⵽�ģ��ҷ�����ֵ�����Ľǵ���Ƴ���
//	for (int j = 0; j < normalImg.rows; j++)
//	{
//		for (int i = 0; i < normalImg.cols; i++)
//		{
//			if ((int)normalImg.at<float>(j, i) > thresh + 80)
//			{
//				cv::circle(g_srcImg1, cv::Point(i, j), 5, cv::Scalar(10, 10, 255), 2, 3, 0);
//				cv::circle(scaledImg, cv::Point(i, j), 5, cv::Scalar(0, 10, 255), 2, 8, 0);
//			}
//		}
//	}
//
//	cv::imshow(WINDOW_NAME1, g_srcImg1);
//	cv::imshow(WINDOW_NAME2, scaledImg);
//
//}
