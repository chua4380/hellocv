////harris�ǵ���
#include "pch.h"
//#include <opencv2/opencv.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	cv::Mat srcImg = cv::imread("./image/101.jpg", 0);
//	cv::imshow("ԭʼͼ", srcImg);
//
//	//�ҳ��ǵ�
//	cv::Mat corners;
//	cv::cornerHarris(srcImg, corners, 2, 3, 0.01);
//
//	//��ֵ��
//	cv::Mat harrisCorner;
//	cv::threshold(corners, harrisCorner, 0.00001, 255, cv::THRESH_BINARY);
//	cv::imshow("�ǵ����Ķ�ֵЧ��ͼ", harrisCorner);
//	
//	cv::waitKey(0);
//	return 0;
//}