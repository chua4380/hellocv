////绘制H-S直方图
#include "pch.h"
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	//载入原图，转化为HSV颜色模型
//	cv::Mat srcImg, hsvImg;
//	srcImg = cv::imread("./image/83.jpg");
//	cv::cvtColor(srcImg, hsvImg, cv::COLOR_BGR2HSV);
//
//	//参数准备
//	//将色调量化为30个等级，将饱和度量化为32个等级
//	int hueBinNum = 30;     //色调直方图的直条数量
//	int satBinNum = 32; //饱和度的直方图直条数量
//	int histSize[] = { hueBinNum,satBinNum };
//	//定义色调范围变化范围为0-179
//	float hueRange[] = { 0, 180 };
//	//定义饱和度的变化范围
//	float satRange[] = { 0, 256 };
//	const float* ranges[] = { hueRange,satRange };
//	cv::MatND dstHist;
//	//参数准备，calHist函数中将计算第0通道和第1通道的直方图
//	int channels[] = { 0,1 }; 
//
//	//调用calcHist，进行直方图计算
//	cv::calcHist(&hsvImg, 1, channels, cv::Mat(), dstHist, 2, histSize, ranges, true, false);
//
//	//为绘制直方图准备参数
//	double maxVal = 0;
//	cv::minMaxLoc(dstHist, 0, &maxVal, 0, 0);
//	int scale = 40;    //直方图的间距
//	cv::Mat histImg = cv::Mat::zeros(satBinNum*scale, hueBinNum*scale, CV_8UC3);
//
//	//双层循环，进行直方图绘制
//	for (int hue = 0; hue < hueBinNum; hue++)
//	{
//		for (int sat = 0; sat < satBinNum; sat++)
//		{
//			//直方图直条的值
//			float binVal = dstHist.at<float>(hue, sat);
//			//强度
//			int intensity = cvRound(binVal * 255 / maxVal);
//			//正式进行绘制
//			cv::rectangle(histImg, cv::Point(hue*scale, sat*scale), cv::Point((hue + 1)*scale - 1, 
//				(sat + 1)*scale - 1), cv::Scalar::all(intensity), cv::FILLED);
//		}
//		//显示效果图
//		
//	}
//	cv::imshow("原始图", srcImg);
//	cv::imshow("H-S直方图", histImg);
//
//	cv::waitKey(0);
//}