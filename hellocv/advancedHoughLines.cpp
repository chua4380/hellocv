////���������Ļ���任
#include "pch.h"
//#include <opencv2/opencv.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
////����ȫ�ֱ���
//cv::Mat srcImg, midImg, dstImg;
//std::vector<cv::Vec4i> lines;
//int thresholdVal = 100;
//
////�����ص�����
//static void on_HoughLines(int, void *);
//
//int main()
//{
//	system("color 3F");
//	srcImg = cv::imread("./image/77.jpg");
//
//	cv::imshow("ԭʼͼ", srcImg);
//
//	cv::namedWindow("Ч��ͼ", 1);
//
//	cv::createTrackbar("��ֵ:", "Ч��ͼ", &thresholdVal, 200, on_HoughLines);
//
//	//���б�Ե����ת��Ϊ�Ҷ�ͼ
//	cv::Canny(srcImg, midImg, 50, 200, 3);
//	cv::cvtColor(midImg, dstImg, cv::COLOR_GRAY2BGR);
//
//	//���ûص��������г�ʼ��
//	on_HoughLines(thresholdVal, 0);
//	cv::HoughLinesP(midImg, lines, 1, CV_PI / 180, 80, 50, 10);
//
//	//��ʾЧ��ͼ
//	cv::imshow("Ч��ͼ", dstImg);
//	cv::waitKey(0);
//
//	return 0;
//}
//
//void on_HoughLines(int, void *)
//{
//	//����ֲ������洢ȫ�ֱ���
//	cv::Mat dst = dstImg.clone();
//	cv::Mat mid = midImg.clone();
//
//	//����HoughLinesP����
//	std::vector<cv::Vec4i> mylines;
//	cv::HoughLinesP(mid, mylines, 1, CV_PI / 180, thresholdVal + 1, 50, 10);
//
//	//ѭ������ÿһ���߶�
//	for (size_t i = 0; i < mylines.size(); i++)
//	{
//		cv::Vec4i l = mylines[i];
//		cv::line(dst, cv::Point(l[0], l[1]), cv::Point(l[2], l[3]), cv::Scalar(23, 180, 55), 1, cv::LINE_AA);
//	}
//
//	//��ʾͼ��
//	cv::imshow("Ч��ͼ", dst);
//}
