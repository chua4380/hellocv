////Shi_Tomasi�ǵ���
#include "pch.h"
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <iostream>
//
////����ȫ�ֱ���
//std::string WINDOW_NAME = "Ч��ͼ";
//cv::Mat g_srcImg, g_grayImg;
//int cornerNum = 30;
//int max_cornerNum = 500;
//cv::RNG g_rng(12345);
//
////�����ص�����
//void on_GoodFeature(int, void*);
//
//int main()
//{
//	g_srcImg = cv::imread("./image/103.jpg");
//	cv::cvtColor(g_srcImg, g_grayImg, cv::COLOR_BGR2GRAY);
//
//	cv::namedWindow(WINDOW_NAME, cv::WINDOW_AUTOSIZE);
//	cv::imshow(WINDOW_NAME, g_srcImg);
//	cv::createTrackbar("�ǵ�����", WINDOW_NAME, &cornerNum, max_cornerNum, on_GoodFeature);
//	on_GoodFeature(0, 0);
//	
//	cv::waitKey(0);
//	return 0;
//}
//
//void on_GoodFeature(int, void *)
//{
//	if (cornerNum <= 1)
//		cornerNum = 1;
//
//	std::vector<cv::Point2f> corners;
//	cv::Mat copy = g_srcImg.clone();
//
//	cv::goodFeaturesToTrack(g_grayImg, corners, cornerNum, 0.01, 10, cv::Mat(), 3, false, 0.04);
//	std::cout << "�˴μ��Ľǵ�����Ϊ:" << corners.size() << std::endl;
//
//	int radius = 4;
//	for (unsigned i = 0; i < corners.size(); i++)
//	{
//		cv::circle(copy, corners[i], radius, cv::Scalar(g_rng.uniform(0, 255), g_rng.uniform(0, 255),
//			g_rng.uniform(0, 255)), -1, 8, 0);
//	}
//
//	cv::imshow(WINDOW_NAME, copy);
//}
