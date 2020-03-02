////����watershed����ʵ�ֻ��ڱ�ǵķ�ˮ���㷨
#include "pch.h"
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <iostream>
//
////����ȫ�ֱ���
//std::string WINDOW_NAME1 = "���򴰿�";
//cv::Mat g_srcImg, g_maskImg;
//cv::Point prevPt(-1, -1);
//
//static void on_Mouse(int event, int x, int y, int flags, void*);
//
//int main()
//{
//	//����ԭͼ����ʾ
//	g_srcImg = cv::imread("./image/86.jpg");
//	if (!g_srcImg.data) {
//		std::cout << "����ͼ��ʧ��" << std::endl;
//		return false;
//	}
//	cv::imshow(WINDOW_NAME1, g_srcImg);
//	cv::Mat srcImg, grayImg;
//	g_srcImg.copyTo(srcImg);
//
//	//��ʼ����ģ�ͻҶ�ͼ
//	cv::cvtColor(g_srcImg, g_maskImg, cv::COLOR_BGR2GRAY);
//	cv::cvtColor(g_maskImg, grayImg, cv::COLOR_GRAY2BGR);
//	g_maskImg = cv::Scalar::all(0);
//
//	//�������ص�����
//	cv::setMouseCallback(WINDOW_NAME1, on_Mouse, 0);
//
//	//��ѯ���������д���
//	while (1)
//	{
//		//��ȡ��ֵ
//		int c = cv::waitKey(0);
//		if (c == 27)
//			break;
//
//		//����Ϊ2���ָ�ԭͼ
//		if ((char)c == '2')
//		{
//			g_maskImg = cv::Scalar::all(0);
//			srcImg.copyTo(g_srcImg);
//			cv::imshow("image", g_srcImg);
//		}
//
//		if ((char)c == '1' || (char)c == ' ')
//		{
//			int i, j, compCount = 0;
//			std::vector<std::vector<cv::Point>> contours;
//			std::vector<cv::Vec4i> hierachy;
//
//			//Ѱ������
//			cv::findContours(g_maskImg, contours, hierachy, cv::RETR_CCOMP, cv::CHAIN_APPROX_SIMPLE);
//
//			//����Ϊ��ʱ�Ĵ���
//			if (contours.empty())
//				continue;
//
//			//������ģ
//			cv::Mat maskImg(g_maskImg.size(), CV_32S);
//			maskImg = cv::Scalar::all(0);
//
//			//ѭ�����Ƴ�����
//			for (int index = 0; index >= 0; index = hierachy[index][0], compCount++)
//			{
//				//��marks���б�ǣ��Բ�ͬ������������б�ţ��൱������עˮ�㣬�ж������������ж���עˮ��
//				cv::drawContours(maskImg, contours, index, cv::Scalar::all(compCount + 1),
//					1, 8, hierachy, INT_MAX);
//			}
//
//			//compCountΪ��ʱ�Ĵ���
//			if (compCount == 0)
//				continue;
//
//			//���������ɫ
//			std::vector<cv::Vec3b> colorTab;
//			for (int i = 0; i < compCount; i++)
//			{
//				int b = cv::theRNG().uniform(0, 255);
//				int g = cv::theRNG().uniform(0, 255);
//				int r = cv::theRNG().uniform(0, 255);
//
//				colorTab.push_back(cv::Vec3b((uchar)b, (uchar)g, (uchar)r));
//			}
//
//			//���㴦��ʱ�䲢�����������
//			double dTime = (double)cv::getTickCount();
//			cv::watershed(srcImg, maskImg);
//			dTime = (double)cv::getTickCount() - dTime;
//			printf("\t����ʱ�� = %gms\n", dTime*1000. / cv::getTickFrequency());
//
//			//˫��ѭ��������ˮ��ͼ���������watershedImage��
//			cv::Mat watershedImage(maskImg.size(), CV_8UC3);
//
//			for (i = 0; i < maskImg.rows; i++)
//			{
//				for (j = 0; j < maskImg.cols; j++)
//				{
//					int index = maskImg.at<int>(i, j);
//					if (index == -1)
//						watershedImage.at < cv::Vec3b >(i, j) = cv::Vec3b(255, 255, 255);
//					else if(index==0||index>compCount)
//						watershedImage.at < cv::Vec3b >(i, j) = cv::Vec3b(0, 0, 0);
//					else
//						watershedImage.at < cv::Vec3b >(i, j) = colorTab[index-1];
//				}
//			}
//
//			//��ϻҶ�ͼ�ͷ�ˮ��Ч��ͼ����ʾ���յĴ���
//			watershedImage = watershedImage * 0.5 + grayImg * 0.5;
//			cv::imshow("watershed transform", watershedImage);
//		}
//	}
//	return 0;
//}
//
//void on_Mouse(int event, int x, int y, int flags, void *)
//{
//	//������겻�ڴ����е����
//	if (x < 0 || x >= g_srcImg.cols || y < 0 || y >= g_srcImg.rows)
//		return;
//
//	//���������������Ϣ
//	if (event == cv::EVENT_LBUTTONUP || !(flags&cv::EVENT_FLAG_LBUTTON))
//		prevPt = cv::Point(-1, -1);
//	else if (event == CV_EVENT_RBUTTONDOWN)
//		prevPt = cv::Point(x, y);
//	//���������²��ƶ������Ƴ���ɫ����
//	else if (event == cv::EVENT_MOUSEMOVE && (flags&cv::EVENT_FLAG_LBUTTON))
//	{
//		cv::Point pt(x, y);
//		if (prevPt.x < 0)
//			prevPt = pt;
//		cv::line(g_maskImg, prevPt, pt, cv::Scalar::all(255), 5, 8, 0);
//		cv::line(g_srcImg, prevPt, pt, cv::Scalar::all(255), 5, 8, 0);
//		prevPt = pt;
//		cv::imshow(WINDOW_NAME1, g_srcImg);
//	}
//}
