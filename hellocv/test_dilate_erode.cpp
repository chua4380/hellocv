////���ͺ͸�ʴ
//
#include "pch.h"
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
////����ȫ�ֱ���
//int changeTrackbar = 1;	//1��ʾ���ͣ�0��ʾ��ʴ
//int structSize = 3;
//cv::Mat srcImg, dstImg, kernelMat;
//
////�ص������ʹ���������
//void process();
//void on_changeTrackbar(int, void *);
//void on_sizeChange(int, void *);
//
//int main()
//{
//	//����ͼƬ
//	srcImg = cv::imread("./image/logo.PNG");
//	if (!srcImg.data)	return false;
//
//	//������ʾ����
//	cv::namedWindow("��ԭͼ��");
//	cv::namedWindow("��Ч��ͼ��");
//
//	//��ʾԭͼ
//	cv::imshow("��ԭͼ��", srcImg);
//
//	//��ȡ�Զ����
//	kernelMat = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(2 * structSize + 1, 2 * structSize + 1),
//		cv::Point(structSize, structSize));
//	cv::erode(srcImg, dstImg, kernelMat);
//	cv::imshow("��Ч��ͼ��", dstImg);
//
//	//����������
//	cv::createTrackbar("����/��ʴ��", "��Ч��ͼ��", &changeTrackbar, 1, on_changeTrackbar);
//	cv::createTrackbar("�ں�ֵ��", "��Ч��ͼ��", &structSize, 20, on_sizeChange);
//
//	while(cv::waitKey(0) != 27) {}
//	return 0;
//}
//
//void process()
//{
//	//��ȡ�Զ����
//	kernelMat = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(2 * structSize + 1, 2 * structSize + 1),
//		cv::Point(structSize, structSize));
//	//�ж�Ҫ���еĲ���
//	if (changeTrackbar == 0)
//		cv::dilate(srcImg, dstImg, kernelMat);
//	else
//		cv::erode(srcImg, dstImg, kernelMat);
//	//��ʾЧ��ͼ
//	cv::imshow("��Ч��ͼ��", dstImg);
//}
//
//void on_changeTrackbar(int, void *)
//{
//	process();
//}
//
//void on_sizeChange(int, void *)
//{
//	process();
//}
