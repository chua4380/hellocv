////ͼ��ĸ���Ҷ�任
#include "pch.h"
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <iostream>
//using cv::Mat;
//
//int main()
//{
//	Mat srcImage = cv::imread("./image/rice.jpg", 0);
//	if (!srcImage.data)
//	{
//		std::cout << "����ͼƬʧ�ܣ�����·���Ƿ���ȷ" << std::endl;
//		return false;
//	}
//	cv::imshow("ԭͼ", srcImage);
//
//	//������ͼ�����ӵ���ѳߴ磬�߽���0���
//	int m = cv::getOptimalDFTSize(srcImage.rows);
//	int n = cv::getOptimalDFTSize(srcImage.cols);
//
//	//����ӵ����س�ʼ��Ϊ0
//	Mat padded;
//	cv::copyMakeBorder(srcImage, padded, 0, m - srcImage.rows, 0,
//		n - srcImage.cols, cv::BORDER_CONSTANT, cv::Scalar::all(0));
//
//	//Ϊ����Ҷ�任�Ľ������ռ�
//	Mat planes[] = { cv::Mat_<float>(padded),Mat::zeros(padded.size(),CV_32F) };
//	//��planes����ϲ���һ����ͨ��������
//	Mat complexI;
//	cv::merge(planes, 2, complexI);
//
//	//���о͵���ɢ����Ҷ�任
//	cv::dft(complexI, complexI);
//
//	//�����ת��Ϊ��ֵ
//	cv::split(complexI, planes);
//	cv::magnitude(planes[0], planes[1], planes[0]);
//	Mat magnitudeImage = planes[0];
//
//	//���ж����߶�����
//	magnitudeImage += cv::Scalar::all(1);
//	log(magnitudeImage, magnitudeImage);
//
//	//���к��طֲ�����ͼ����
//	magnitudeImage = magnitudeImage(cv::Rect(0, 0, magnitudeImage.cols & -2,
//		magnitudeImage.rows & -2));
//
//	int cx = magnitudeImage.cols / 2;
//	int cy = magnitudeImage.rows / 2;
//	Mat q0(magnitudeImage, cv::Rect(0, 0, cx, cy));
//	Mat q1(magnitudeImage, cv::Rect(cx, 0, cx, cy));
//	Mat q2(magnitudeImage, cv::Rect(0, cy, cx, cy));
//	Mat q3(magnitudeImage, cv::Rect(cx, cy, cx, cy));
//
//	Mat tmp;
//	q0.copyTo(tmp);
//	q3.copyTo(q0);
//	tmp.copyTo(q3);
//
//	q1.copyTo(tmp);
//	q2.copyTo(q1);
//	tmp.copyTo(q2);
//
//	//��һ��
//	cv::normalize(magnitudeImage, magnitudeImage, 0, 1, CV_MINMAX);
//
//	cv::imshow("����Ҷ�任Ƶ��ͼ", magnitudeImage);
//	cv::waitKey();
//	return 0;
//}