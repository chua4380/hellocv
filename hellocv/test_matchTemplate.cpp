////ģ��ʾ��
#include "pch.h"
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <iostream>
//
//std::string WINDOW_NAME1 = "ԭʼͼƬ";
//std::string WINDOW_NAME2 = "Ч��ͼƬ";
//
//cv::Mat g_srcImg, g_templateImg, g_resultImg;
//int g_matchMethod;
//int g_max_matchMethod=5;
//
//void on_Matching(int, void*);
//
//int main()
//{
//	//����ԭͼ���ģ���
//	g_srcImg = cv::imread("./image/95.jpg");
//	g_templateImg = cv::imread("./image/96.jpg");
//
//	//��������
//	cv::namedWindow(WINDOW_NAME1, cv::WINDOW_AUTOSIZE);
//	cv::namedWindow(WINDOW_NAME2, cv::WINDOW_AUTOSIZE);
//
//	//����������������һ�γ�ʼ��
//	cv::createTrackbar("����:", WINDOW_NAME1, &g_matchMethod, g_max_matchMethod, on_Matching);
//	on_Matching(0, 0);
//	cv::waitKey(0);
//	return 0;
//}
//
//void on_Matching(int, void*)
//{
//	//�ֲ�������ʼ��
//	cv::Mat srcImg;
//	g_srcImg.copyTo(srcImg);
//
//	//��ʼ�����ڽ��������ľ���
//	int resImg_rows = g_srcImg.rows - g_templateImg.rows + 1;
//	int resImg_cols = g_srcImg.cols - g_templateImg.cols + 1;
//	g_resultImg.create(resImg_rows, resImg_cols, CV_32FC1);
//
//	//����ƥ��ͱ�׼��
//	cv::matchTemplate(g_srcImg, g_templateImg, g_resultImg, g_matchMethod);
//	cv::normalize(g_resultImg, g_resultImg, 0, 1, cv::NORM_MINMAX, -1, cv::Mat());
//
//	//ͨ������minMaxLoc��λ��ƥ���λ��
//	double minVal, maxVal;
//	cv::Point minLocation, maxLocation, matchLocation;
//
//	cv::minMaxLoc(g_resultImg, &minVal, &maxVal, &minLocation, &maxLocation, cv::Mat());
//
//	if (g_matchMethod == cv::TM_SQDIFF || g_matchMethod == cv::TM_SQDIFF_NORMED)
//		matchLocation = minLocation;
//	else
//		matchLocation = maxLocation;
//
//	//���Ƴ����Σ�����ʾ���ս��
//	cv::rectangle(srcImg, matchLocation, cv::Point(matchLocation.x + g_templateImg.cols,
//		matchLocation.y + g_templateImg.rows), cv::Scalar(0, 0, 255), 2, 8, 0);
//	cv::rectangle(g_resultImg, matchLocation, cv::Point(matchLocation.x + g_templateImg.cols,
//		matchLocation.y + g_templateImg.rows), cv::Scalar(0, 0, 255), 2, 8, 0);
//	cv::imshow(WINDOW_NAME1, srcImg);
//	cv::imshow(WINDOW_NAME2, g_resultImg);
//	
//}
