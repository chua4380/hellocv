////������ӳ��
#include "pch.h"
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	cv::Mat srcImg, dstImg, map_x, map_y;
//
//	srcImg = cv::imread("./image/77.jpg");
//	if (!srcImg.data)
//	{
//		printf("����ͼƬʧ��\n");
//		return false;
//	}
//	cv::imshow("ԭʼͼ", srcImg);
//
//	dstImg.create(srcImg.size(), srcImg.type());
//	map_x.create(srcImg.size(), CV_32FC1);
//	map_y.create(srcImg.size(), CV_32FC1);
//
//	for (int j = 0; j < srcImg.rows; j++)
//	{
//		for (int i = 0; i < srcImg.cols; i++)
//		{
//			map_x.at<float>(j, i) = static_cast<float>(srcImg.cols - i);	//��ʾ32FC1��Xֵ
//			map_y.at<float>(j, i) = static_cast<float>(j);	//��Y�᷽�������ת
//		}
//	}
//
//	//������ӳ�����
//	cv::remap(srcImg, dstImg, map_x, map_y, cv::INTER_LINEAR,cv::BORDER_CONSTANT,cv::Scalar(0,0,0));
//
//	cv::imshow("���򴰿�", dstImg);
//	cv::waitKey(0);
//
//	return 0;
//}