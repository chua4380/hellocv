// ��ȡ������ͷ����������Ƶ������Canny���ӽ��б�Ե���
#include "pch.h"
#include <opencv2/opencv.hpp>


int main()
{
	//������Ƶ
	cv::VideoCapture capture(0);    //��ȡ����ͷ��Ƶ
	//cv::VideoCapture capture(argv[1]);
	//cv::VideoCapture capture("./image/video1.flv");
	cv::Mat edges;
	//ѭ����ʾÿһ֡
	while (1)
	{ 
		cv::Mat frame;    //Mat���������洢ÿһ֡ͼ��
		capture >> frame;    //��ȡ��ǰ֡
		if(frame.empty())
			break;
		cv::imshow("��ȡ��Ƶ", frame);
		/*cv::waitKey(10);
		cv::cvtColor(frame, edges, cv::COLOR_BGR2GRAY);
		cv::blur(edges, edges, cv::Size(7, 7));
		cv::Canny(edges, edges, 0, 30, 3);
		cv::imshow("Canny���Ӵ�������Ƶ", edges);*/
		/*if (frame.empty())
			break;*/
		//cv::imshow("��ȡ��Ƶ", frame);
		if (cv::waitKey(5) == 27)
			break;
	}
	return 0;
}