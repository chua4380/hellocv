////��������ͼ��ĸ���Ҷ���
#include "pch.h"
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <iostream>
//using cv::Mat;
//
//int main()
//{
//	Mat srcImg1, srcImg2, dstImg;
//	srcImg1 = cv::imread("./image/image.jpg", CV_LOAD_IMAGE_GRAYSCALE);
//	//srcImg2 = cv::imread("./image/logo.jpg", CV_LOAD_IMAGE_GRAYSCALE);
//	//srcImg1 = (cv::Mat_<double>(3, 3) << 1, 1, 1, 1, 1, 1, 1, 1, 1);
//	srcImg2 = (cv::Mat_<double>(3, 3) << 0, 1, 0, 0, 1, 1, 0, 1, 0);
//	srcImg1 = cv::Mat_<double>(srcImg1);
// 	//srcImg2 = cv::Mat_<double>(srcImg2);
//	dstImg.create(abs(srcImg1.rows - srcImg2.rows) + 1, abs(srcImg1.cols - srcImg2.cols) + 1, srcImg1.type());
//	cv::Size dftSize;
//	dftSize.width = cv::getOptimalDFTSize(srcImg1.cols + srcImg2.cols - 1);
//	dftSize.height = cv::getOptimalDFTSize(srcImg1.rows + srcImg2.rows - 1);
//
//	//������ʱ����������ʼ��Ϊ��
//	Mat temp1(dftSize, srcImg1.type(), cv::Scalar::all(0));
//	Mat temp2(dftSize, srcImg2.type(), cv::Scalar::all(0));
//
//	//�ֱ���srcImg1��srcImg2��temp1��temp2�����Ͻ�
//	Mat roi1(temp1, cv::Rect(0, 0, srcImg1.cols, srcImg1.rows));
//	srcImg1.copyTo(roi1);
//	Mat roi2(temp2, cv::Rect(0, 0, srcImg2.cols, srcImg2.rows));
//	srcImg2.copyTo(roi2);
//
//	//�͵ز��������п��ٸ���Ҷ�任
//	cv::dft(temp1, temp1, 0, temp1.rows);
//	cv::dft(temp2, temp2, 0, temp2.rows);
//
//	//���õ���Ƶ�����
//	cv::mulSpectrums(temp1, temp2, temp1, cv::DFT_COMPLEX_OUTPUT);
//	
//	//������任ΪƵ��
//	cv::dft(temp1, temp1, cv::DFT_INVERSE + cv::DFT_SCALE, dstImg.rows);
//
//	//��������Ƶ�dstImg��
//	srcImg1(cv::Rect(0, 0, dstImg.cols, dstImg.rows)).copyTo(dstImg);
//
//	cv::normalize(dstImg, dstImg, 0, 1, CV_MINMAX);
//
//	cv::imshow("����������", dstImg);
//	cv::waitKey(0);
//
//	return 0;
//}