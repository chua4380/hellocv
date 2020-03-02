//将logo图片添加到image图片上
#include "pch.h"
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <iostream>
//int main()
//{
//	double alphaValue = 0.5;
//	double betaValue = 0.3;
//	cv::Mat srcImg2, srcImg3, dstImg;
//	srcImg2 = cv::imread("./image/logo.PNG");
//	srcImg3 = cv::imread("./image/image.PNG");
//	//dstImg.create(srcImg3.rows, srcImg3.cols, srcImg3.type());
//	//打印两幅图片的尺寸大小
//	std::cout << "image: " << srcImg3.rows << " " << srcImg3.cols << std::endl;
//	std::cout << "logo: " << srcImg2.rows << " " << srcImg2.cols << std::endl;
//	cv::Mat imgROI = srcImg3(cv::Rect(660, 280, srcImg2.cols, srcImg2.rows));
//	cv::addWeighted(imgROI, alphaValue, srcImg2, betaValue, 0.0, imgROI);
//	//cv::imshow("原画图", srcImg3);
//	cv::imshow("dota图标", srcImg2);
//	cv::imshow("原图+dota图标", srcImg3);
//	//cv::imwrite("./image/addWeighted生成的图片.png", srcImg3);
//	cv::waitKey(0);
//}