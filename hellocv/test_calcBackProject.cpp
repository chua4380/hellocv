////����ͶӰ
#include "pch.h"
//#include <opencv2/imgproc/imgproc.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <iostream>
//
//std::string WINDOW_NAMW1 = "ԭʼͼ";
//cv::Mat g_srcImg, g_hsvImg, g_hueImg;
////ֱ��ͼ���
//int g_bins = 30;
//
//void on_BinChange(int, void *);
//
//int main()
//{
//	//��ȡԭͼ�񣬲�ת��ΪHSV�ռ�
//	g_srcImg = cv::imread("./image/94.jpg");
//	if (!g_srcImg.data)
//		return false;
//	cv::cvtColor(g_srcImg, g_hsvImg, cv::COLOR_BGR2HSV);
//	//��ʾHSVͼ��
//	cv::imshow("HSVͼ��", g_hsvImg);
//	//����Hueɫ��ͨ��
//	g_hueImg.create(g_hsvImg.size(), g_hsvImg.depth());
//	int ch[] = { 0,0 };
//	cv::mixChannels(&g_hsvImg, 1, &g_hueImg, 1, ch, 1);
//	//��ʾHueͼ��
//	cv::imshow("hueͼ��", g_hueImg);
//	//����Trackbar������bin����Ŀ
//	cv::namedWindow(WINDOW_NAMW1, cv::WINDOW_AUTOSIZE);
//	cv::createTrackbar("ɫ����ࣺ", WINDOW_NAMW1, &g_bins, 180, on_BinChange);
//
//	on_BinChange(0, 0);
//
//	//��ʾЧ��ͼ
//	cv::imshow(WINDOW_NAMW1, g_srcImg);
//	cv::waitKey(0);
//	return 0;
//}
//
//void on_BinChange(int, void*)
//{
//	cv::MatND hist;
//	int histSize = MAX(g_bins, 2);
//	float hue_range[] = { 0,180 };
//	const float* ranges = { hue_range };
//
//	//����ֱ��ͼ����һ��
//	cv::calcHist(&g_hueImg, 1, 0, cv::Mat(), hist, 1, &histSize, &ranges, true, false);
//	cv::normalize(hist, hist, 0, 255, cv::NORM_MINMAX, -1, cv::Mat());
//
//	//���㷴��ͶӰ
//	cv::MatND backproj;
//	cv::calcBackProject(&g_hueImg, 1, 0, hist, backproj, &ranges, 1, true);
//
//	//��ʾ����ͶӰ
//	cv::imshow("����ͶӰͼ", backproj);
//
//	//����ֱ��ͼ�Ĳ���׼��
//	int w = 400;
//	int h = 400;
//	int bin_w = cvRound((double)w / histSize);
//	cv::Mat histImg = cv::Mat::zeros(w, h, CV_8UC3);
//
//	//����ֱ��ͼ
//	for (int i = 0; i < g_bins; i++) {
//		cv::rectangle(histImg, cv::Point(i*bin_w, h), cv::Point((i + 1)*bin_w,
//			h - cvRound(hist.at<float>(i)*h / 255.0)), cv::Scalar(100, 123, 255), -1);
//	}
//
//	//��ʾֱ��ͼ
//	cv::imshow("ֱ��ͼ",histImg);
//}