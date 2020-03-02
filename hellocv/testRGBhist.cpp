////绘制RGB三色直方图
#include "pch.h"
//#include <opencv2/opencv.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	cv::Mat srcImg = cv::imread("./image/93.jpg");
//	cv::imshow("素材图", srcImg);
//
//	int bins = 256;
//	int hist_size[] = {bins};
//	float range[] = { 0,256 };
//	const float* ranges[] = { range };
//	cv::MatND redHist, greenHist, blueHist;
//	int channels_r[] = { 0 };
//
//	//进行直方图的计算（红色分量部分）
//	cv::calcHist(&srcImg, 1, channels_r, cv::Mat(), redHist, 1, hist_size, ranges, true, false);
//
//	//进行直方图的计算（绿色分量部分）
//	int channels_g[] = { 1 };
//	cv::calcHist(&srcImg, 1, channels_g, cv::Mat(), greenHist, 1, hist_size, ranges, true, false);
//
//	//进行直方图的计算（蓝色分量部分）
//	int channels_b[] = { 2 };
//	cv::calcHist(&srcImg, 1, channels_b, cv::Mat(), blueHist, 1, hist_size, ranges, true, false);
//
//	//--------------绘制出三色直方图---------------------
//	//参数准备
//	double maxVal_red, maxVal_green, maxVal_blue;
//	cv::minMaxLoc(redHist, 0, &maxVal_red, 0, 0);
//	cv::minMaxLoc(greenHist, 0, &maxVal_green, 0, 0);
//	cv::minMaxLoc(blueHist, 0, &maxVal_blue, 0, 0);
//	int scale = 1;
//	int histHeight = 256;
//
//	cv::Mat histImg = cv::Mat::zeros(histHeight, bins * 3, CV_8UC3);
//	//开始绘制
//	for (int i = 0; i < bins; i++)
//	{
//		float binVal_red = redHist.at<float>(i);
//		float binVal_green = greenHist.at<float>(i);
//		float binVal_blue = blueHist.at<float>(i);
//		int intensity_red = cvRound(binVal_red*histHeight / maxVal_red);
//		int intensity_green = cvRound(binVal_green*histHeight / maxVal_green);
//		int intensity_blue = cvRound(binVal_blue*histHeight / maxVal_blue);
//
//		//绘制红色分量的直方图
//		cv::rectangle(histImg, cv::Point(i*scale, histHeight - 1),
//			cv::Point((i + 1)*scale-1, histHeight - intensity_red), cv::Scalar(0, 0, 255));
//
//		//绘制绿色分量的直方图
//		cv::rectangle(histImg, cv::Point((i + bins) * scale, histHeight - 1),
//			cv::Point((i + bins + 1)*scale-1, histHeight - intensity_green), cv::Scalar(0, 255, 0));
//
//		//绘制蓝色分量的直方图
//		cv::rectangle(histImg, cv::Point((i + bins * 2) * scale, histHeight - 1),
//			cv::Point((i + bins * 2 + 1)*scale-1, histHeight - intensity_blue), cv::Scalar(255, 0, 0));
//	}
//
//	//在窗口中显示出绘制好的直方图
//	cv::imshow("图像的RGB直方图", histImg);
//
//	cv::waitKey(0);
//	return 0;
//}