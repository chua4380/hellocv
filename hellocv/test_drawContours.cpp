////��������
#include "pch.h"
//#include <opencv2/opencv.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	//����ԭͼ,�ұ����Զ�ֵͼģʽ����
//	cv::Mat srcImg = cv::imread("./image/81.jpg",0);
//	cv::imshow("ԭʼͼ", srcImg);
//
//	//��ʼ�����ͼ
//	cv::Mat dstImg = cv::Mat::zeros(srcImg.rows, srcImg.cols, CV_8UC3);
//
//	//srcImgȡ������ֵ119���ǲ���
//	srcImg = srcImg > 119;
//	cv::imshow("ȡ��ֵ���ԭʼͼ", srcImg);
//
//	//���������Ͳ�νṹ
//	std::vector<std::vector<cv::Point>> contours;
//	std::vector<cv::Vec4i> hierachy;
//	cv::findContours(srcImg, contours, hierachy, cv::RETR_CCOMP, cv::CHAIN_APPROX_SIMPLE);
//	
//	//�������ж�����������������ɫ���Ƴ�ÿ�����������ɫ
//	int index = 0;
//	for (; index >= 0; index = hierachy[index][0])
//	{
//		cv::Scalar color(rand() & 255, rand() & 255, rand() & 255);
//		cv::drawContours(dstImg, contours, index, color, cv::FILLED, 8, hierachy);
//	}
//
//	//��ʾ��������ͼ
//	cv::imshow("����ͼ", dstImg);
//
//	cv::waitKey(0);
//	return 0;
//}