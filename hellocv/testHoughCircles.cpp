////����Բ�任
#include "pch.h"
//#include <opencv2/opencv.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	//����ԭʼͼ
//	cv::Mat srcImg = cv::imread("./image/71.jpg");
//	cv::Mat midImg, dstImg;
//
//	//��ʾԭʼͼ8
//	cv::imshow("ԭʼͼ", srcImg);
//
//	//ת��Ϊ�Ҷ�ͼ������ͼ��ƽ��
//	cv::cvtColor(srcImg, midImg, cv::COLOR_BGRA2GRAY);
//	cv::GaussianBlur(midImg, midImg, cv::Size(3, 3), 2, 2);
//
//	//���л���԰�任
//	std::vector<cv::Vec3f> circles;
//	cv::HoughCircles(midImg, circles, cv::HOUGH_GRADIENT, 1.5, 10, 200, 100, 0, 0);
//
//	//������;�л��Ƴ�Բ
//	for (size_t i = 0; i < circles.size(); i++)
//	{
//		//��������
//		cv::Point center(cvRound(circles[i][0]), cvRound(circles[i][1]));
//		int radius = cvRound(circles[i][2]);
//		//����Բ��
//		cv::circle(srcImg, center, 3, cv::Scalar(0, 255, 0), -1, 8, 0);
//		//����Բ����
//		cv::circle(srcImg, center, radius, cv::Scalar(155, 50, 255), 3, 8, 0);
//	}
//
//	//��ʾЧ��ͼ
//	cv::imshow("Ч��ͼ", srcImg);
//	cv::waitKey(0);
//
//	return 0;
//}