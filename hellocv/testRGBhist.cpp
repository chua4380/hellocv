////����RGB��ɫֱ��ͼ
#include "pch.h"
//#include <opencv2/opencv.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	cv::Mat srcImg = cv::imread("./image/93.jpg");
//	cv::imshow("�ز�ͼ", srcImg);
//
//	int bins = 256;
//	int hist_size[] = {bins};
//	float range[] = { 0,256 };
//	const float* ranges[] = { range };
//	cv::MatND redHist, greenHist, blueHist;
//	int channels_r[] = { 0 };
//
//	//����ֱ��ͼ�ļ��㣨��ɫ�������֣�
//	cv::calcHist(&srcImg, 1, channels_r, cv::Mat(), redHist, 1, hist_size, ranges, true, false);
//
//	//����ֱ��ͼ�ļ��㣨��ɫ�������֣�
//	int channels_g[] = { 1 };
//	cv::calcHist(&srcImg, 1, channels_g, cv::Mat(), greenHist, 1, hist_size, ranges, true, false);
//
//	//����ֱ��ͼ�ļ��㣨��ɫ�������֣�
//	int channels_b[] = { 2 };
//	cv::calcHist(&srcImg, 1, channels_b, cv::Mat(), blueHist, 1, hist_size, ranges, true, false);
//
//	//--------------���Ƴ���ɫֱ��ͼ---------------------
//	//����׼��
//	double maxVal_red, maxVal_green, maxVal_blue;
//	cv::minMaxLoc(redHist, 0, &maxVal_red, 0, 0);
//	cv::minMaxLoc(greenHist, 0, &maxVal_green, 0, 0);
//	cv::minMaxLoc(blueHist, 0, &maxVal_blue, 0, 0);
//	int scale = 1;
//	int histHeight = 256;
//
//	cv::Mat histImg = cv::Mat::zeros(histHeight, bins * 3, CV_8UC3);
//	//��ʼ����
//	for (int i = 0; i < bins; i++)
//	{
//		float binVal_red = redHist.at<float>(i);
//		float binVal_green = greenHist.at<float>(i);
//		float binVal_blue = blueHist.at<float>(i);
//		int intensity_red = cvRound(binVal_red*histHeight / maxVal_red);
//		int intensity_green = cvRound(binVal_green*histHeight / maxVal_green);
//		int intensity_blue = cvRound(binVal_blue*histHeight / maxVal_blue);
//
//		//���ƺ�ɫ������ֱ��ͼ
//		cv::rectangle(histImg, cv::Point(i*scale, histHeight - 1),
//			cv::Point((i + 1)*scale-1, histHeight - intensity_red), cv::Scalar(0, 0, 255));
//
//		//������ɫ������ֱ��ͼ
//		cv::rectangle(histImg, cv::Point((i + bins) * scale, histHeight - 1),
//			cv::Point((i + bins + 1)*scale-1, histHeight - intensity_green), cv::Scalar(0, 255, 0));
//
//		//������ɫ������ֱ��ͼ
//		cv::rectangle(histImg, cv::Point((i + bins * 2) * scale, histHeight - 1),
//			cv::Point((i + bins * 2 + 1)*scale-1, histHeight - intensity_blue), cv::Scalar(255, 0, 0));
//	}
//
//	//�ڴ�������ʾ�����ƺõ�ֱ��ͼ
//	cv::imshow("ͼ���RGBֱ��ͼ", histImg);
//
//	cv::waitKey(0);
//	return 0;
//}