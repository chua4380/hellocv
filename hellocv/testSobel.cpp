////Sobel算子的使用
#include "pch.h"
//#include <opencv2/opencv.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	//创建grad_x和grad_y矩阵
//	cv::Mat grad_x, grad_y;
//	cv::Mat abs_grad_x, abs_grad_y, dstImg;
//	//载入原图
//	cv::Mat srcImg = cv::imread("./image/72.jpg");
//	//显示原始图
//	cv::imshow("原图", srcImg);
//
//	//求x方向梯度
//	cv::Sobel(srcImg, grad_x, CV_16S, 1, 0, 3, 1, 1, cv::BORDER_DEFAULT);
//	cv::convertScaleAbs(grad_x, abs_grad_x);
//	cv::imshow("效果图（x方向上的Sobel）", abs_grad_x);
//	
//	//求y方向的梯度
//	cv::Sobel(srcImg, grad_y, CV_16S, 0, 1, 3, 1, 1, cv::BORDER_DEFAULT);
//	cv::convertScaleAbs(grad_y, abs_grad_y);
//	cv::imshow("效果图（y方向上的Sobel）", abs_grad_y);
//
//	//合并梯度(计算公式 dst = abs_grad_x*0.5 + abs_grad_y*0.5 + 0 )
//	cv::addWeighted(abs_grad_x, 0.5, abs_grad_y, 0.5, 0, dstImg);
//	cv::imshow("整体方向上的Sobel", dstImg);
//
//	cv::waitKey(0);
//	return 0;
//} 