////Laplacian���ӵ�ʹ��
#include "pch.h"
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	cv::Mat srcImg, grayImg, dstImg, abs_dstImg;
//
//	//����ԭͼ
//	srcImg = cv::imread("./image/73.jpg");
//	//��ʾԭʼͼ
//	cv::imshow("ԭͼ", srcImg);
//
//	//ʹ�ø�˹�˲���������
//	cv::GaussianBlur(srcImg, srcImg, cv::Size(3, 3), 0, 0, cv::BORDER_DEFAULT);
//
//	//ת��Ϊ�Ҷ�ͼ
//	cv::cvtColor(srcImg, grayImg, cv::COLOR_BGR2GRAY);
//
//	//ʹ��Laplacian����
//	cv::Laplacian(grayImg, dstImg, CV_16S, 3, 1, 0, cv::BORDER_DEFAULT);
//	cv::imshow("Laplacianת��Ч��ͼ1", dstImg);
//	//�������ֵ���������ת��Ϊ8λ
//	cv::convertScaleAbs(dstImg, abs_dstImg);
//	//��ʾЧ��ͼ
//	cv::imshow("Laplacianת��Ч��ͼ2", abs_dstImg);
//	cv::waitKey(0);
//
//	return 0;
//}