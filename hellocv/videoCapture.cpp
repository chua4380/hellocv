// 读取（摄像头）并播放视频，并用Canny算子进行边缘检测
#include "pch.h"
#include <opencv2/opencv.hpp>


int main()
{
	//读入视频
	cv::VideoCapture capture(0);    //读取摄像头视频
	//cv::VideoCapture capture(argv[1]);
	//cv::VideoCapture capture("./image/video1.flv");
	cv::Mat edges;
	//循环显示每一帧
	while (1)
	{ 
		cv::Mat frame;    //Mat变量用来存储每一帧图像
		capture >> frame;    //读取当前帧
		if(frame.empty())
			break;
		cv::imshow("读取视频", frame);
		/*cv::waitKey(10);
		cv::cvtColor(frame, edges, cv::COLOR_BGR2GRAY);
		cv::blur(edges, edges, cv::Size(7, 7));
		cv::Canny(edges, edges, 0, 30, 3);
		cv::imshow("Canny算子处理后的视频", edges);*/
		/*if (frame.empty())
			break;*/
		//cv::imshow("读取视频", frame);
		if (cv::waitKey(5) == 27)
			break;
	}
	return 0;
}