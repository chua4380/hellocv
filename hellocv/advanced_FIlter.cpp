////�û��������������˲���
//
#include "pch.h"
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <iostream>
//
////����ȫ�ֱ���
//cv::Mat srcImg, dstImg1, dstImg2, dstImg3, dstImg4;
//int boxFilterVal = 3;
//int blurFilterVal = 3;
//int gaussianFilterVal = 3;
//int medianFilterVal = 3;
//const int MAX_VAL = 40;
//
////�����������Ļص�����
//static void on_BoxFilter(int, void *);
//static void on_BlurFilter(int, void *);
//static void on_GaussianFilter(int, void *);
//static void on_MedianFilter(int, void *);
//int main()
//{
//	//����ͼ��
//	srcImg = cv::imread("./image/3.jpg");
//	if (!srcImg.data)
//	{
//		std::cout << "ͼƬ����ʧ��" << std::endl;
//		return false;
//	}
//
//	//����ԭͼ��Ҫ�����Mat��
//	dstImg1 = srcImg.clone();
//	dstImg2 = srcImg.clone();
//	dstImg3 = srcImg.clone();
//	dstImg4 = srcImg.clone();
//
//	//��������
//	cv::namedWindow("��ԭͼ��");
//	cv::namedWindow("�������˲�Ч��ͼ��");
//	cv::namedWindow("����ֵ�˲�Ч��ͼ��");
//	cv::namedWindow("����˹�˲�Ч��ͼ��");
//	cv::namedWindow("����ֵ�˲�Ч��ͼ��");
//
//	cv::imshow("��ԭͼ��", srcImg);
//
//	//����������
//	cv::createTrackbar("�ں�ֵ��", "�������˲�Ч��ͼ��", &boxFilterVal, MAX_VAL, on_BoxFilter);
//	cv::createTrackbar("�ں�ֵ��", "����ֵ�˲�Ч��ͼ��", &blurFilterVal, MAX_VAL, on_BlurFilter);
//	cv::createTrackbar("�ں�ֵ��", "����˹�˲�Ч��ͼ��", &gaussianFilterVal, MAX_VAL, on_GaussianFilter);
//	cv::createTrackbar("�ں�ֵ��", "����ֵ�˲�Ч��ͼ��",&medianFilterVal, MAX_VAL, on_MedianFilter);
//
//	//��ʼ��
//	on_BoxFilter(boxFilterVal, 0);
//	on_BlurFilter(blurFilterVal, 0);
//	on_GaussianFilter(gaussianFilterVal, 0);
//	on_MedianFilter(medianFilterVal, 0);
//
//	//����
//	while (cv::waitKey(0) != 27) {}
//
//	return 0;
//}
//
//void on_BoxFilter(int, void *)
//{
//	cv::boxFilter(srcImg, dstImg1, -1, cv::Size(boxFilterVal+1, boxFilterVal+1));
//	cv::imshow("�������˲�Ч��ͼ��", dstImg1);
//}
//
//void on_BlurFilter(int, void *)
//{
//	cv::blur(srcImg, dstImg2, cv::Size(blurFilterVal+1, blurFilterVal+1));
//	cv::imshow("����ֵ�˲�Ч��ͼ��", dstImg2);
//}
//
//void on_GaussianFilter(int, void *)
//{
//	cv::GaussianBlur(srcImg, dstImg3, cv::Size(gaussianFilterVal*2+1, gaussianFilterVal*2+1), 0, 0);
//	cv::imshow("����˹�˲�Ч��ͼ��", dstImg3);
//}
//
//void on_MedianFilter(int, void *)
//{
//	cv::medianBlur(srcImg, dstImg4, medianFilterVal);
//	cv::imshow("����ֵ�˲�Ч��ͼ��", dstImg4);
//}
//
//void on_BilaFilter(int, void *)
//{
//	cv::bilateralFilter(srcImg,dstImg5,)
//}
