// ��ʾ����Mat��������ַ���

#include "pch.h"
//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//int main()
//{
//	//ʹ��Mat()���캯��
//	cv::Mat m(2, 2, CV_8UC3, cv::Scalar(0, 0, 255));
//	std::cout << "m = " << std::endl << m << std::endl;
//	//����Create()����
//	cv::Mat m3;
//	m3.create(4, 4, CV_8UC(2));
//	std::cout << "m3 = " << std::endl << m3 << std::endl;
//	//����Matlabʽ�ĳ�ʼ��
//	cv::Mat m4 = cv::Mat::eye(4, 4, CV_64F);
//	std::cout << "m4 = " << std::endl << m4 << std::endl;
//	cv::Mat m5 = cv::Mat::ones(2, 2, CV_32F);
//	std::cout << "m5 = " << std::endl << m5 << std::endl;
//	cv::Mat m6 = cv::Mat::zeros(3, 3, CV_8UC1);
//	std::cout << "m6 = " << std::endl << m6 << std::endl;
//	//��С����ʹ�ö��ŷָ�ʽ��ʼ������
//	cv::Mat m7 = (cv::Mat_<double>(3, 3) << 0, -1, 0, -1, 5, 1, 0, -1, 0);
//	std::cout << "m7 = " << std::endl << m7 << std::endl;
//	//����clone()����
//	cv::Mat m8 = m7.row(1).clone();
//	std::cout << "m8 = " << std::endl << m8 << std::endl;
//	
//	return 0;
//}