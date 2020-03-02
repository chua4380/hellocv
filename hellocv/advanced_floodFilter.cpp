////�ۺ�ʾ��:��ˮ���
#include "pch.h"
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <iostream>
//
////����ԭʼͼ��Ŀ��ͼ���Ҷ�ͼ����ģͼ
//cv::Mat srcImg, dstImg, grayImg, maskImg;
////��ˮ����ģʽ
//int fillMode = 1;
////�������ֵ���������ֵ
//int lowDiff = 20, upDiff = 20;
////flag�ĵڰ�λ��ֵͨ
//int connectivity = 4;
////�Ƿ��ǲ�ɫͼ�ı�ʶ��
//int isColor = true;
////�Ƿ���ʾ��ģ���ڵĲ���ֵ
//bool useMask = false;
////���»��Ƶ�����ֵ
//int newMaskVal = 255;
//
////�����ϢonMouse�Ļص�����
//static void onMouse(int event, int x, int y, int, void*)
//{
//	//��������û�а��£��㷵��
//	if (event != cv::EVENT_LBUTTONDOWN)
//		return;
//	//����floodFill֮ǰ�Ĳ���׼��
//	cv::Point seed = cv::Point(x, y);
//	int lowDiffVal = fillMode == 0 ? 0 : lowDiff;
//	int upDiffVal = fillMode == 0 ? 0 : upDiff;
//	//flag��ʶ���ĵ�8λΪconnectivity���м�8λΪnewMaskVal����8λ��ֵ����8λΪFLOODFILL_FIXED_RANGE��0
//	int flags = connectivity + (newMaskVal << 8) + (fillMode == 1 ? cv::FLOODFILL_FIXED_RANGE : 0);
//	//�������bgrֵ
//	int b = (unsigned)cv::theRNG() & 255;
//	int g = (unsigned)cv::theRNG() & 255;
//	int r = (unsigned)cv::theRNG() & 255;
//	//�����ػ��������С�߽��������
//	cv::Rect ccomp;
//	cv::Scalar newVal = isColor ? cv::Scalar(b, g, r) : cv::Scalar(r*0.299, g*0.587, b*0.144);
//	//Ŀ��ͼ�ĸ�ֵ
//	cv::Mat dst = isColor ? dstImg : grayImg;
//	int area;
//	//����floodFill����
//	if (useMask)
//	{
//		//threshold�������ڴӻҶ�ͼ���л�ȡ��ֵͼ��
//		cv::threshold(maskImg, maskImg, 1, 128, cv::THRESH_BINARY);
//		area = cv::floodFill(dst, maskImg, seed, newVal, &ccomp, cv::Scalar(lowDiffVal, lowDiffVal, lowDiffVal),
//			cv::Scalar(upDiffVal, upDiffVal, upDiffVal), flags);
//		cv::imshow("mask", maskImg);
//	}
//	else
//	{
//		area = cv::floodFill(dst, seed, newVal, &ccomp, cv::Scalar(lowDiffVal, lowDiffVal, lowDiffVal),
//			cv::Scalar(upDiffVal, upDiffVal, upDiffVal), flags);
//	}
//	cv::imshow("Ч��ͼ", dst);
//	std::cout << area << " �����ر��ػ�\n";
//}
//
//int main()
//{
//	srcImg = cv::imread("./image/1.jpg",1);
//	if (!srcImg.data)
//	{
//		std::cout << "��ȡͼƬʧ��" << std::endl;
//		return false;
//	}
//
//	srcImg.copyTo(dstImg);
//	cv::cvtColor(srcImg, grayImg, cv::COLOR_BGR2GRAY);
//	maskImg.create(srcImg.rows + 2, srcImg.cols + 2, CV_8UC1);
//	cv::namedWindow("Ч��ͼ", cv::WINDOW_AUTOSIZE);
//	
//	cv::createTrackbar("�������ֵ", "Ч��ͼ", &lowDiff, 255, 0);
//	cv::createTrackbar("�������ֵ", "Ч��ͼ", &upDiff, 255, 0);
//
//	cv::setMouseCallback("Ч��ͼ", onMouse, 0);
//	
//	while (1)
//	{
//		cv::imshow("Ч��ͼ", isColor ? dstImg : grayImg);
//
//		//��ȡ���̰���
//		int c = cv::waitKey(0);
//		//�ж�Esc�Ƿ��£��������˳�
//		if ((c & 255) == 27)
//		{
//			std::cout << "�����˳�" << std::endl;
//			break;
//		}
//		//���ݰ���ѡ��ͬ�Ĳ���
//		switch (char(c))
//		{
//			//������¼���1��Ч��ͼ�ڻҶ�ͼ�Ͳ�ɫͼ֮��ת��
//		case '1':
//			if (isColor)
//			{
//				std::cout << "����1�����£����л���ɫ/�Ҷ�ģʽ����ǰ�ǲ�ɫģʽ,���л�Ϊ�Ҷ�ģʽ" << std::endl;
//				cv::cvtColor(srcImg, grayImg, cv::COLOR_BGR2GRAY);
//				//��mask����Ԫ�ض�����Ϊ0
//				maskImg = cv::Scalar::all(0);
//				//����ɫ��ʶ����Ϊfalse
//				isColor = false;
//			}	
//			else
//			{
//				std::cout << "����1�����£����л���ɫ/�Ҷ�ģʽ����ǰ�ǻҶ�ģʽ,���л�Ϊ��ɫģʽ" << std::endl;
//				srcImg.copyTo(dstImg);
//				//��mask����Ԫ�ض�����Ϊ0
//				maskImg = cv::Scalar::all(0);
//				//����ɫ��ʶ����Ϊtrue
//				isColor = true;
//			}
//			break;
//			//�������2�����£���ʾ/������ģ����
//		case '2':
//			if (useMask)
//			{
//				cv::destroyWindow("mask");
//				useMask = false;
//			}
//			else
//			{
//				cv::namedWindow("mask", 0);
//				maskImg = cv::Scalar::all(0);
//				cv::imshow("mask", maskImg);
//				useMask = true;
//			}
//			break;
//			//�������3�����£��ָ�ԭʼͼ��
//		case '3':
//			std::cout << "����3�����£��ָ�ԭʼͼ��" << std::endl;
//			srcImg.copyTo(dstImg);
//			cv::cvtColor(dstImg, grayImg, cv::COLOR_BGR2GRAY);
//			maskImg = cv::Scalar::all(0);
//			break;
//			//�������4�����£�ʹ�ÿշ�Χ����ˮ���
//		case '4':
//			std::cout << "����4�����£�ʹ�ÿշ�Χ����ˮ���" << std::endl;
//			fillMode = 0;
//			break;
//			//�������5�����£�ʹ�ý��䡢�̶���Χ����ˮ���
//		case '5':
//			std::cout << "�������5�����£�ʹ�ý��䡢�̶���Χ����ˮ���" << std::endl;
//			fillMode = 1;
//			break;
//			//�������5�����£�ʹ�ý��䡢������Χ����ˮ���
//		case '6':
//			std::cout << "�������6�����£�ʹ�ý��䡢������Χ����ˮ���" << std::endl;
//			fillMode = 2;
//			break;
//			//�������7�����£��������ĵ�8λʹ��4λ������ģʽ
//		case '7':
//			std::cout << "�������7�����£��������ĵ�8λʹ��4λ������ģʽ" << std::endl;
//			connectivity = 4;
//			break;
//		case '8':
//			std::cout << "�������7�����£��������ĵ�8λʹ��8λ������ģʽ" << std::endl;
//			connectivity = 8;
//			break;
//		}
//	}
//	return 0;
//}