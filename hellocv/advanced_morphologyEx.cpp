////��̬ѧ�˲��������㡢�����㡢��̬ѧ�ݶȡ���ñ����ñ
#include "pch.h"
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
////����ȫ�ֱ���
//cv::Mat srcImg, dstImg1, dstImg2, dstImg3;
////Ԫ�ؽṹ��״
//int elementShape = cv::MORPH_RECT;	
////TrackBarλ�ò���
//int numMaxIterator = 10;
//int numOpenClose = 0;
//int numErodeDilate = 0;
//int numTopBlackHat = 0;
//
////�����ص�����
//static void  on_OpenClose(int, void *);
//static void on_ErodeDilate(int, void *);
//static void on_TopBlackHat(int, void *);
//
//int main()
//{
//	//����ԭʼͼƬ
//	srcImg = cv::imread("./image/4.png");
//	if (!srcImg.data)	return false;
//
//	dstImg1 = srcImg.clone();
//	dstImg2 = srcImg.clone();
//	dstImg3 = srcImg.clone();
//
//	//��������
//	cv::namedWindow("ԭͼ");
//	cv::namedWindow("������/������");
//	cv::namedWindow("��ʴ/����");
//	cv::namedWindow("��ñ/��ñ");
//
//	//��ʾԭͼ
//	cv::imshow("ԭͼ", srcImg);
//
//	//������ֵ
//	numOpenClose = 9;
//	numErodeDilate = 9;
//	numTopBlackHat = 2;
//
//	//����������
//	cv::createTrackbar("����ֵ", "������/������", &numOpenClose, 
//		numMaxIterator * 2 + 1, on_OpenClose);
//	cv::createTrackbar("����ֵ", "��ʴ/����", &numErodeDilate,
//		numMaxIterator * 2 + 1, on_ErodeDilate);
//	cv::createTrackbar("����ֵ", "��ñ/��ñ", &numTopBlackHat,
//		numMaxIterator * 2 + 1, on_TopBlackHat);
//
//	//��ѯ��ȡ������Ϣ
//	while (1)
//	{
//		int c = cv::waitKey(0);
//		on_OpenClose(numOpenClose, 0);
//		on_ErodeDilate(numErodeDilate, 0);
//		on_TopBlackHat(numTopBlackHat, 0);
//
//		if ((char)c == 'q' || (char)c == 27)
//			break;
//		if ((char)c == 49)	//�ж��Ƿ����˰���1
//			elementShape = cv::MORPH_ELLIPSE;
//		else if ((char)c == 50)
//			elementShape = cv::MORPH_RECT;
//		else if ((char)c == 51)
//			elementShape = cv::MORPH_CROSS;
//		else if ((char)c == ' ')
//			elementShape = (elementShape + 1) / 3;
//	}
//	cv::moveWindow("ԭͼ", 200 + srcImg.cols, 0);
//	cv::moveWindow("������/������", 200, srcImg.rows);
//	cv::moveWindow("��ʴ/����", 200+srcImg.cols, srcImg.rows);
//	cv::moveWindow("��ñ/��ñ", 200+srcImg.cols*2, srcImg.rows);
//	return 0;
//}
//
//void on_OpenClose(int, void *)
//{
//	//����ƫ����
//	int offset = numOpenClose - numMaxIterator;
//	int absolute_offset = offset > 0 ? offset : -offset;
//	//�Զ����
//	cv::Mat element = cv::getStructuringElement(elementShape,
//		cv::Size(absolute_offset * 2 + 1, absolute_offset * 2 + 1),
//		cv::Point(absolute_offset, absolute_offset));
//	//���и�ʴ/����
//	if (offset < 0)
//		cv::erode(srcImg, dstImg1, element);
//	else
//		cv::dilate(srcImg, dstImg1, element);
//	//��ʾͼ��
//	cv::imshow("������/������", dstImg1);
//}
//
//void on_ErodeDilate(int, void *)
//{
//	//����ƫ����
//	int offset = numErodeDilate - numMaxIterator;
//	int absolute_offset = offset > 0 ? offset : -offset;
//	//�Զ����
//	cv::Mat element = cv::getStructuringElement(elementShape,
//		cv::Size(absolute_offset * 2 + 1, absolute_offset * 2 + 1),
//		cv::Point(absolute_offset, absolute_offset));
//	//���п�����/������
//	if (offset < 0)
//		cv::morphologyEx(srcImg, dstImg2, cv::MORPH_OPEN, element);
//	else
//		cv::morphologyEx(srcImg, dstImg2, cv::MORPH_CLOSE, element);
//	//��ʾͼ��
//	cv::imshow("��ʴ/����", dstImg2);
//}
//
//void on_TopBlackHat(int, void *)
//{
//	//����ƫ����
//	int offset = numTopBlackHat - numMaxIterator;
//	int absolute_offset = offset > 0 ? offset : -offset;
//	//�Զ����
//	cv::Mat element = cv::getStructuringElement(elementShape,
//		cv::Size(absolute_offset * 2 + 1, absolute_offset * 2 + 1),
//		cv::Point(absolute_offset, absolute_offset));
//	//���ж�ñ/��ñ
//	if (offset < 0)
//		cv::morphologyEx(srcImg, dstImg3, cv::MORPH_TOPHAT, element);
//	else
//		cv::morphologyEx(srcImg, dstImg3, cv::MORPH_BLACKHAT, element);
//	//��ʾͼ��
//	cv::imshow("��ñ/��ñ", dstImg3);
//}
