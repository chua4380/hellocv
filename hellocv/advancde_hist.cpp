////���㲢���ͼ���һάֱ��ͼ
#include "pch.h"
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <iostream>
//
//int main()
//{
//	//����ԭʼͼ����ʾ
//	cv::Mat srcImg = cv::imread("./image/92.jpg",0);
//	cv::imshow("ԭͼ", srcImg);
//	if (!srcImg.data)	return false;
//
//	cv::MatND dstHist;
//	int dims = 1;
//	float hranges[] = { 0,255 };
//	const float* ranges[] = { hranges };
//	int size = 256;
//	int channels = 0;
//
//	//����ͼ���ֱ��ͼ
//	cv::calcHist(&srcImg, 1, &channels, cv::Mat(), dstHist, dims, &size, ranges);
//	int scale = 1;
//	cv::Mat dstImg(size*scale, size, CV_8U, cv::Scalar(0));
//
//	//��ȡ���ֵ����Сֵ
//	double minVal = 0;
//	double maxVal = 0;
//	cv::minMaxLoc(dstHist, &minVal, &maxVal, 0, 0);
//
//	//���Ƴ�ֱ��ͼ(saturate_cast��ֹ�������)
//	int hpt = cv::saturate_cast<int>(0.9*size);
//	for (int i = 0; i < 256; i++)
//	{
//		float binVal = dstHist.at<float>(i);
//		int realVal = cv::saturate_cast<int>(binVal*hpt / maxVal);
//		cv::rectangle(dstImg, cv::Point(i*scale, size-1), cv::Point((i + 1)*scale, size-realVal),
//			cv::Scalar(255));
//	}
//
//	cv::imshow("һάֱ��ͼ", dstImg);
//	cv::waitKey(0);
//
//	return 0;
//}
