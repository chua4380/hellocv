////XML��YAML�ļ���д��
//
#include "pch.h"
//#include <opencv2/opencv.hpp>
//using cv::Mat;
//
//int main()
//{
//	//��ʼ��
//	cv::FileStorage fs("test.yaml", cv::FileStorage::WRITE);
//
//	//��ʼд���ļ�
//	Mat R = cv::Mat_<uchar>::eye(3, 3);
//	Mat T = cv::Mat_<uchar>::zeros(3, 3);
//	fs << "R" << R;
//	fs << "T" << T;
//
//	//д���ַ�������
//	fs << "strings" << "[";
//	fs << "lioney" << "carlos" << "animal";
//	fs << "]";
//
//	//д��Map
//	fs << "Mapping" << "{";
//	fs << "One" << 1;
//	fs << "Two" << 2;
//	fs << "}";
//}