////���ͼ����Ҷ����֮���Ƶ�׷�ֵ
#include "pch.h"
//#include "opencv2/core/core.hpp"
//#include "opencv2/imgproc/imgproc.hpp"
//#include "opencv2/highgui/highgui.hpp"
//#include <iostream>
//using namespace cv;
//
//
//int main()
//{
//
//	//��1���ԻҶ�ģʽ��ȡԭʼͼ����ʾ
//	Mat srcImage = imread("./image/rice.jpg", 0);
//	if (!srcImage.data) { printf("��ȡͼƬ������ȷ��Ŀ¼���Ƿ���imread����ָ��ͼƬ����~�� \n"); return false; }
//	imshow("ԭʼͼ��", srcImage);
//
//	//��2��������ͼ����������ѵĳߴ磬�߽���0����
//	int m = getOptimalDFTSize(srcImage.rows);
//	int n = getOptimalDFTSize(srcImage.cols);
//	//�����ӵ����س�ʼ��Ϊ0.
//	Mat padded;
//	copyMakeBorder(srcImage, padded, 0, m - srcImage.rows, 0, n - srcImage.cols, BORDER_CONSTANT, Scalar::all(0));
//
//	//��3��Ϊ����Ҷ�任�Ľ��(ʵ�����鲿)����洢�ռ䡣
//	//��planes������Ϻϲ���һ����ͨ��������complexI
//	Mat planes[] = { Mat_<float>(padded), Mat::zeros(padded.size(), CV_32F) };
//	Mat complexI;
//	merge(planes, 2, complexI);
//
//	//��4�����о͵���ɢ����Ҷ�任
//	dft(complexI, complexI);
//
//	//��5��������ת��Ϊ��ֵ����=> log(1 + sqrt(Re(DFT(I))^2 + Im(DFT(I))^2))
//	split(complexI, planes); // ����ͨ������complexI����ɼ�����ͨ�����飬planes[0] = Re(DFT(I), planes[1] = Im(DFT(I))
//	magnitude(planes[0], planes[1], planes[0]);// planes[0] = magnitude  
//	Mat magnitudeImage = planes[0];
//
//	//��6�����ж����߶�(logarithmic scale)����
//	magnitudeImage += Scalar::all(1);
//	log(magnitudeImage, magnitudeImage);//����Ȼ����
//
//	//��7�����к��طֲ�����ͼ����
//	//���������л������У�����Ƶ�ײü�      
//	magnitudeImage = magnitudeImage(Rect(0, 0, magnitudeImage.cols & -2, magnitudeImage.rows & -2));
//	//�������и���Ҷͼ���е����ޣ�ʹ��ԭ��λ��ͼ������  
//	int cx = magnitudeImage.cols / 2;
//	int cy = magnitudeImage.rows / 2;
//	Mat q0(magnitudeImage, Rect(0, 0, cx, cy));   // ROI���������
//	Mat q1(magnitudeImage, Rect(cx, 0, cx, cy));  // ROI���������
//	Mat q2(magnitudeImage, Rect(0, cy, cx, cy));  // ROI���������
//	Mat q3(magnitudeImage, Rect(cx, cy, cx, cy)); // ROI���������
//	//�������ޣ����������½��н�����
//	Mat tmp;
//	q0.copyTo(tmp);
//	q3.copyTo(q0);
//	tmp.copyTo(q3);
//	//�������ޣ����������½��н�����
//	q1.copyTo(tmp);
//	q2.copyTo(q1);
//	tmp.copyTo(q2);
//	//��8����һ������0��1֮��ĸ���ֵ������任Ϊ���ӵ�ͼ���ʽ
//	//�˾�����OpenCV2��Ϊ��
//	//normalize(magnitudeImage, magnitudeImage, 0, 1, CV_MINMAX); 
//	//�˾�����OpenCV3��Ϊ:
//	normalize(magnitudeImage, magnitudeImage, 0, 1, NORM_MINMAX);
//
//	//��9����ʾЧ��ͼ
//	imshow("Ƶ�׷�ֵ", magnitudeImage);
//	waitKey();
//
//	return 0;
//}