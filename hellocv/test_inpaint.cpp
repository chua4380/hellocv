////ͼ���޲�
#include "pch.h"
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <opencv2/photo/photo.hpp>
//#include <iostream>
//
//std::string WINDOW_NAME1 = "ԭʼͼ";
//std::string WINDOW_NAME2 = "Ч��ͼ";
//
//cv::Mat srcImg, inpaintMask;
//cv::Point prePt(-1, -1);
//
//static void on_Mouse(int event, int x, int y, int flags, void*)
//{
//	//����������
//	if (event == cv::EVENT_LBUTTONUP || !(flags&cv::EVENT_FLAG_LBUTTON))
//		prePt = cv::Point(-1, -1);
//	//������������Ϣ
//	else if (event == cv::EVENT_LBUTTONDOWN)
//		prePt = cv::Point(x, y);
//
//	//��갴�²��ƶ������л���
//
//	else if (event == cv::EVENT_MOUSEMOVE && (flags & cv::EVENT_FLAG_LBUTTON))
//	{
//		cv::Point pt(x,y);
//		if (prePt.x < 0)
//		{
//			prePt=pt;
//		}
//		//���ư�ɫ����
//		cv::line(inpaintMask, prePt, pt, cv::Scalar::all(255), 5, 8, 0);
//		cv::line(srcImg, prePt, pt, cv::Scalar::all(255), 5, 8, 0);
//		prePt = pt;
//		cv::imshow(WINDOW_NAME1, srcImg);
//	}
//}
//
//int main()
//{
//	cv::Mat src = cv::imread("./image/87.jpg",-1);
//	if (!src.data)
//		return false;
//	srcImg = src.clone();
//	inpaintMask = cv::Mat::zeros(srcImg.size(), CV_8U);
//
//	//��ʾԭʼͼ
//	cv::imshow(WINDOW_NAME1, srcImg);
//
//	//�������ص�����
//	cv::setMouseCallback(WINDOW_NAME1, on_Mouse, 0);
//
//	//���ݲ�ͬ�������д���
//	while (1)
//	{
//		//��ȡ����ֵ
//		char c = (char)cv::waitKey();
//		if (c == 27)
//			break;
//		//��ֵΪ2���ָ�ԭʼͼ��
//		if (c == '2')
//		{
//			inpaintMask = cv::Scalar::all(0);
//			src.copyTo(srcImg);
//			cv::imshow(WINDOW_NAME1, srcImg);
//		}
//		//��ֵΪ1������ͼ���޲�����
//		if (c == '1')
//		{
//			cv::Mat inpaintedImg;
//			cv::inpaint(srcImg, inpaintMask, inpaintedImg, 3, cv::INPAINT_TELEA);
//			cv::imshow(WINDOW_NAME2, inpaintedImg);
//		}
//	}
//	return 0;
//}