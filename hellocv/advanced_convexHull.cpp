////Ѱ�Һͻ��������͹��
#include "pch.h"
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <iostream>
//
////ȫ�ֱ�������
//std::string WINDOW_NAME1 = "ԭʼͼ";
//std::string WINDOW_NAME2 = "Ч��ͼ";
//cv::Mat srcImg, grayImg;
//int threshVal = 50;
//int maxThresh = 255;
//cv::RNG g_rng(12345);
//cv::Mat srcImg_copy = srcImg.clone();
//cv::Mat thresholdImg;
//std::vector<std::vector<cv::Point>>  g_countours;
//std::vector<cv::Vec4i> g_hierachy;                       
//
//static void on_ThreshChange(int, void*);
//
//int main()
//{
//	//����ԭͼ��
//	srcImg = cv::imread("./image/83.jpg");
//
//	//��ԭͼת��Ϊ�Ҷ�ͼ������
//	cv::cvtColor(srcImg, grayImg, cv::COLOR_BGR2GRAY);
//	cv::blur(grayImg, grayImg, cv::Size(3, 3));
//
//	//�������ڲ���ʾ
//	cv::namedWindow(WINDOW_NAME1, cv::WINDOW_AUTOSIZE);
//	cv::imshow(WINDOW_NAME1, srcImg);
//
//	//��������������ʼ��
//	cv::createTrackbar("��ֵ��", WINDOW_NAME1, &threshVal, maxThresh, on_ThreshChange);
//	on_ThreshChange(0, 0);
//
//	cv::waitKey(0);
//	return 0;
//}
//
//void on_ThreshChange(int, void *)
//{
//	//��ͼ����ж�ֵ����������ֵ
//	cv::threshold(grayImg, thresholdImg, threshVal, 255, cv::THRESH_BINARY);
//
//	//Ѱ����ֵ
//	cv::findContours(thresholdImg, g_countours, g_hierachy, cv::RETR_TREE,
//		cv::CHAIN_APPROX_SIMPLE, cv::Point(0, 0));
//
//	//����ÿ��������Ѱ����͹��
//	std::vector<std::vector<cv::Point>> hull(g_countours.size()); //͹���ļ���
//	for (unsigned int i = 0; i < g_countours.size(); i++)
//	{
//		cv::convexHull(cv::Mat(g_countours[i]), hull[i], false);
//	}
//	//������������͹��
//	cv::Mat drawing = cv::Mat::zeros(thresholdImg.size(), CV_8UC3);
//	for (unsigned int i = 0; i < g_countours.size(); i++)
//	{
//		cv::Scalar color(g_rng.uniform(0, 255), g_rng.uniform(0, 255),
//			g_rng.uniform(0, 255));
//		cv::drawContours(drawing, g_countours, i, color, 1, 8,
//			std::vector<cv::Vec4i>(), 0, cv::Point());
//		/*cv::drawContours(drawing, hull, i, color, 1, 8,
//			std::vector<cv::Vec4i>(), 0, cv::Point());*/
//	}
//	//��ʾЧ��ͼ
//	cv::imshow(WINDOW_NAME2, drawing);
//}
