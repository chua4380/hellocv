////Canny��Ե���
#include "pch.h"`
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	cv::Mat srcImg, grayImg, edgeImg, dstImg;
//	srcImg = cv::imread("./image/71.jpg");
//	//��ʾԭʼͼ
//	cv::imshow("ԭͼ", srcImg);
//	//������srcImgͬ��С�ľ���
//	dstImg.create(srcImg.size(), srcImg.type());
//	//ת�ɻҶ�ͼ����Ե
//	cv::cvtColor(srcImg, grayImg, cv::COLOR_BGR2GRAY);
//	//�þ�ֵ�˲����н���
//	cv::blur(grayImg, edgeImg, cv::Size(3, 3));
//	//����Canny����
//	cv::Canny(edgeImg, edgeImg, 3, 9, 5);
//	//��ʾ�Ҷ�Canny���ͼ
//	cv::imshow("�Ҷ�Canny���ͼ", edgeImg);
//	//��dstImg������Ԫ�ض�����Ϊ0
//	dstImg = cv::Scalar::all(0);
//	//ʹ��Canny��������ı�ԵͼedgeImg��Ϊ���룬����ԭͼ������dstImg��
//	srcImg.copyTo(dstImg, edgeImg);
//	//��ʾ��ɫCanny���ͼ
//	cv::imshow("��ɫCanny���ͼ", dstImg);
//
//	cv::waitKey(0);
//	return 0;
//
//
//
//}