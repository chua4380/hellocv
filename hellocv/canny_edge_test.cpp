// canny��Ե���
#include "pch.h"
//#include <opencv2/opencv.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	cv::Mat srcImage = cv::imread("./image/test2.jpg");
//	cv::imshow("ԭͼ", srcImage);
//	cv::Mat edge, grayImage;
//	//��ԭͼ��ת���ɻҶ�ͼ��
//	cv::cvtColor(srcImage, grayImage, cv::COLOR_BGR2GRAY);
//	//����3x3�ں�������
//	cv::blur(grayImage, edge, cv::Size(3, 3));
//	//����cancy����
//	cv::Canny(edge, edge, 3, 9, 3);
//	
//	cv::imshow("canny��Ե���Ч��", edge);
//	cv::waitKey(0);
//}s