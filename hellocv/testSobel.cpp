////Sobel���ӵ�ʹ��
#include "pch.h"
//#include <opencv2/opencv.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	//����grad_x��grad_y����
//	cv::Mat grad_x, grad_y;
//	cv::Mat abs_grad_x, abs_grad_y, dstImg;
//	//����ԭͼ
//	cv::Mat srcImg = cv::imread("./image/72.jpg");
//	//��ʾԭʼͼ
//	cv::imshow("ԭͼ", srcImg);
//
//	//��x�����ݶ�
//	cv::Sobel(srcImg, grad_x, CV_16S, 1, 0, 3, 1, 1, cv::BORDER_DEFAULT);
//	cv::convertScaleAbs(grad_x, abs_grad_x);
//	cv::imshow("Ч��ͼ��x�����ϵ�Sobel��", abs_grad_x);
//	
//	//��y������ݶ�
//	cv::Sobel(srcImg, grad_y, CV_16S, 0, 1, 3, 1, 1, cv::BORDER_DEFAULT);
//	cv::convertScaleAbs(grad_y, abs_grad_y);
//	cv::imshow("Ч��ͼ��y�����ϵ�Sobel��", abs_grad_y);
//
//	//�ϲ��ݶ�(���㹫ʽ dst = abs_grad_x*0.5 + abs_grad_y*0.5 + 0 )
//	cv::addWeighted(abs_grad_x, 0.5, abs_grad_y, 0.5, 0, dstImg);
//	cv::imshow("���巽���ϵ�Sobel", dstImg);
//
//	cv::waitKey(0);
//	return 0;
//} 