////����˫���˲�
#include "pch.h"
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
////����ȫ�ֱ���
//int dVal = 10;
//int sigmaColorVal = 10;
//int sigmalSpaceVal = 10;
//
//cv::Mat srcImg, dstImg;
//
////�����������Ļص�����
//static void on_Bilateral(int, void *);
//
//int main()
//{
//	//����ͼƬ
//	srcImg = cv::imread("./image/3.jpg");
//	dstImg = srcImg.clone();
//	if (!srcImg.data) return false;
//
//	//������ʾ����
//	cv::namedWindow("��˫���˲�Ч��ͼ��");
//	//����������
//	cv::createTrackbar("dVal:", "��˫���˲�Ч��ͼ��", &dVal, 100, on_Bilateral);
//	cv::createTrackbar("sigmaColorVal:", "��˫���˲�Ч��ͼ��", &sigmaColorVal, 400, on_Bilateral);
//	cv::createTrackbar("sigmaSpaceVal:", "��˫���˲�Ч��ͼ��", &sigmalSpaceVal, 400, on_Bilateral);
//	//��ʼ��
//	on_Bilateral(dVal, 0);
//	on_Bilateral(sigmaColorVal, 0);
//	on_Bilateral(sigmalSpaceVal, 0);
//
//	while(cv::waitKey(0) != 27) {}	//��Esc���˳�
//	return 0;
//}
//
//void on_Bilateral(int, void *)
//{
//	cv::bilateralFilter(srcImg, dstImg, dVal, sigmaColorVal, sigmalSpaceVal);
//	cv::imshow("��˫���˲�Ч��ͼ��", dstImg);
//}
