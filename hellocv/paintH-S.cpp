////����H-Sֱ��ͼ
#include "pch.h"
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	//����ԭͼ��ת��ΪHSV��ɫģ��
//	cv::Mat srcImg, hsvImg;
//	srcImg = cv::imread("./image/83.jpg");
//	cv::cvtColor(srcImg, hsvImg, cv::COLOR_BGR2HSV);
//
//	//����׼��
//	//��ɫ������Ϊ30���ȼ��������Ͷ�����Ϊ32���ȼ�
//	int hueBinNum = 30;     //ɫ��ֱ��ͼ��ֱ������
//	int satBinNum = 32; //���Ͷȵ�ֱ��ͼֱ������
//	int histSize[] = { hueBinNum,satBinNum };
//	//����ɫ����Χ�仯��ΧΪ0-179
//	float hueRange[] = { 0, 180 };
//	//���履�Ͷȵı仯��Χ
//	float satRange[] = { 0, 256 };
//	const float* ranges[] = { hueRange,satRange };
//	cv::MatND dstHist;
//	//����׼����calHist�����н������0ͨ���͵�1ͨ����ֱ��ͼ
//	int channels[] = { 0,1 }; 
//
//	//����calcHist������ֱ��ͼ����
//	cv::calcHist(&hsvImg, 1, channels, cv::Mat(), dstHist, 2, histSize, ranges, true, false);
//
//	//Ϊ����ֱ��ͼ׼������
//	double maxVal = 0;
//	cv::minMaxLoc(dstHist, 0, &maxVal, 0, 0);
//	int scale = 40;    //ֱ��ͼ�ļ��
//	cv::Mat histImg = cv::Mat::zeros(satBinNum*scale, hueBinNum*scale, CV_8UC3);
//
//	//˫��ѭ��������ֱ��ͼ����
//	for (int hue = 0; hue < hueBinNum; hue++)
//	{
//		for (int sat = 0; sat < satBinNum; sat++)
//		{
//			//ֱ��ͼֱ����ֵ
//			float binVal = dstHist.at<float>(hue, sat);
//			//ǿ��
//			int intensity = cvRound(binVal * 255 / maxVal);
//			//��ʽ���л���
//			cv::rectangle(histImg, cv::Point(hue*scale, sat*scale), cv::Point((hue + 1)*scale - 1, 
//				(sat + 1)*scale - 1), cv::Scalar::all(intensity), cv::FILLED);
//		}
//		//��ʾЧ��ͼ
//		
//	}
//	cv::imshow("ԭʼͼ", srcImg);
//	cv::imshow("H-Sֱ��ͼ", histImg);
//
//	cv::waitKey(0);
//}