//�������Ĵ�����ʹ��
#include "pch.h"
//#include <opencv2/opencv.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <iostream>
//
//std::string WINDOW_NAME = "���������Ĵ���&���Ի��ʾ����";
//const int MaxAlpha = 100;
//int alphaSpider;	//��������Ӧ�ı���
//double tempAlpha, tempBeta;
//
////����ͼ��洢�ı���
//cv::Mat srcImg1, srcImg2, dstImg;
//
////��Ӧ�������Ļص�����
//void on_Trackbar(int, void *)
//{
//	//�����ǰ��alpha
//	tempAlpha = (double)alphaSpider / MaxAlpha;
//	//�����ǰ��beta
//	tempBeta = (double)(1.0 - tempAlpha);
//	//����alpha��betaֵ�������Ի��
//	cv::addWeighted(srcImg1, tempAlpha, srcImg2, tempBeta, 0.0, dstImg);
//	//��ʾЧ��ͼ
//	cv::imshow(WINDOW_NAME, dstImg);
//}
//
//int main()
//{
//	srcImg1 = cv::imread("./image/1.jpg");
//	srcImg2 = cv::imread("./image/2.jpg");
//
//	/*cv::imshow("1.jpg", srcImg1);
//	cv::imshow("2.jpg", srcImg2);*/
//	//���û������ĳ�ʼֵΪ70
//	alphaSpider = 70;
//
//	//��������
//	cv::namedWindow(WINDOW_NAME, 1);
//	std::string trackbarName = "͸��ֵ 100";
//	cv::createTrackbar(trackbarName, WINDOW_NAME, &alphaSpider, MaxAlpha, on_Trackbar);
//	//����ڻص���������ʾ(����������������������ͼ��ĳ�ʼֵû���κ���ɫ�ĻҶ�ͼ)
//	on_Trackbar(alphaSpider, 0);
//
//	cv::waitKey(0);
//	return 0;
//}
