#include "pch.h"
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <iostream>
//
//static void on_ConstrastAndBright(int, void *);
//int consVal, brightVal;    //�Աȶȣ�����
//
//using cv::Mat;
//using std::cout;
//using std::endl;
//
//Mat srcImage, dstImage;
//int main()
//{
//	srcImage = cv::imread("./image/dota.jpg");
//	dstImage = Mat::zeros(srcImage.size(), srcImage.type());
//	if (!srcImage.data || !dstImage.data)
//	{
//		cout << "����ͼƬ����" << endl;
//		return 0;
//	}
//	//���öԱȶȺ����ȵĳ�ʼֵ
//	consVal = 80;
//	brightVal = 80;
//	//������ʾ����
//	cv::namedWindow("��Ч��ͼ��");
//	//����������
//	cv::createTrackbar("�Աȶȣ�", "��Ч��ͼ��", &consVal, 300, on_ConstrastAndBright);
//	cv::createTrackbar("�� �ȣ�", "��Ч��ͼ��", &brightVal, 200, on_ConstrastAndBright);
//	//�Իص��������г�ʼ��
//	on_ConstrastAndBright(consVal, 0);
//	on_ConstrastAndBright(brightVal, 0);
//	while(cv::waitKey(10) != 27) {}    //"Esc"���˳�,whileѭ���ڴ���Ҫ��������
//
//	return 0;
//} 
// 
//void on_ConstrastAndBright(int, void *)
//{
//	for (int i = 0; i < srcImage.rows; i++) 
//	{
//		for (int j = 0; j < srcImage.cols; j++)
//		{
//			for (int c = 0; c < 3; c++)
//			{	
//				//saturate_cast<uchar>()���������������
//				dstImage.at<cv::Vec3b>(i, j)[c] =cv::saturate_cast<uchar>(
//					(consVal*0.01)*srcImage.at<cv::Vec3b>(i, j)[c] + brightVal);
//			}
//		}
//	}
//	cv::imshow("��ԭʼͼ��", srcImage);
//	cv::imshow("��Ч��ͼ��", dstImage);
//}
