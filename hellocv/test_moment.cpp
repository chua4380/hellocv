////���Һͻ���ͼ��������
#include "pch.h"
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <iostream>
//
//std::string WINDOW_NAME1 = "ԭʼͼ";
//std::string WINDOW_NAME2 = "ͼ������";
//
//cv::Mat srcImg, grayImg;
//int g_thresh = 100;
//int g_max_thresh = 255;
//cv::RNG g_rng(12345);
//cv::Mat cannyMat;
//std::vector<std::vector<cv::Point>> g_contours;
//std::vector<cv::Vec4i> g_hierachy;
//
//void on_ThreshChange(int, void*);
//
//int main()
//{
//	system("color 1E");
//	srcImg = cv::imread("./image/85.jpg");
//	if (!srcImg.data)
//	{
//		std::cout << "����ԭͼƬʧ��" << std::endl;
//		return false;
//	}
//	//��ԭͼת��Ϊ�Ҷ�ͼ����н���
//	cv::cvtColor(srcImg, grayImg, cv::COLOR_BGR2GRAY);
//	cv::blur(grayImg, grayImg, cv::Size(3, 3));
//	//�����´���
//	cv::namedWindow(WINDOW_NAME1, cv::WINDOW_AUTOSIZE);
//	cv::imshow(WINDOW_NAME1, srcImg);
//
//	//���������������г�ʼ��
//	cv::createTrackbar("��ֵ��", WINDOW_NAME1, &g_thresh, g_max_thresh, on_ThreshChange);
//	on_ThreshChange(0, 0);
//
//	cv::waitKey(0);
//	return 0;
//}
//
//void on_ThreshChange(int, void *)
//{
//	//ʹ��Canny��Ե���
//	cv::Canny(grayImg, cannyMat, g_thresh, g_thresh * 2, 3);
//
//	//�ҵ�����
//	cv::findContours(cannyMat, g_contours, g_hierachy, cv::RETR_TREE,
//		cv::CHAIN_APPROX_SIMPLE, cv::Point(0, 0));
//
//	//�����
//	std::vector<cv::Moments> mu(g_contours.size());
//	for (unsigned int i = 0; i < g_contours.size(); i++)
//	{
//		mu[i] = cv::moments(g_contours[i], false);
//	}
//	//�������ľ�
//	std::vector<cv::Point2f> mc(g_contours.size());
//	for (int i = 0; i < g_contours.size(); i++)
//	{
//		mc[i] = cv::Point2f(static_cast<float>(mu[i].m10 / mu[i].m00),
//			static_cast<float>(mu[i].m01 / mu[i].m00));
//	}
//	//��������
//	cv::Mat drawing = cv::Mat::zeros(cannyMat.size(), CV_8UC3);
//	for (int i = 0; i < g_contours.size(); i++)
//	{
//		cv::Scalar color(g_rng.uniform(0, 255), g_rng.uniform(0, 255), g_rng.uniform(0, 255));
//		cv::drawContours(drawing, g_contours, i, color, 2, 8, g_hierachy, 0, cv::Point());
//
//	//	cv::circle(drawing, mc[i], 4, color, -1, 8, 0);
//	}
//	//��ʾ��������
//	cv::namedWindow(WINDOW_NAME2, cv::WINDOW_AUTOSIZE);
//	cv::imshow(WINDOW_NAME2, drawing);
//
//	//ͨ��m00��������������Һ�OpenCV�����Ƚ�
//	std::cout << "������ݣ��������������" << std::endl;
//	for (int i = 0; i < g_contours.size(); i++)
//	{
//		printf(" >ͨ��m00���������[%d]�����: (M_00) = %.2f \n OpenCV��������������=%.2f , ����: %.2f \n\n",
//			i, mu[i].m00, cv::contourArea(g_contours[i]), cv::arcLength(g_contours[i], true));
//		cv::Scalar color(g_rng.uniform(0, 255), g_rng.uniform(0, 255), g_rng.uniform(0, 255));
//		cv::drawContours(drawing, g_contours, i, color, 2, 8, g_hierachy, 0, cv::Point());
//		cv::circle(drawing, mc[i], 4, color, -1, 8, 0);
//	}
//}
