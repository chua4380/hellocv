////图像的傅里叶变换
#include "pch.h"
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <iostream>
//using cv::Mat;
//
//int main()
//{
//	Mat srcImage = cv::imread("./image/rice.jpg", 0);
//	if (!srcImage.data)
//	{
//		std::cout << "加载图片失败，请检查路径是否正确" << std::endl;
//		return false;
//	}
//	cv::imshow("原图", srcImage);
//
//	//将输入图像扩延到最佳尺寸，边界用0填充
//	int m = cv::getOptimalDFTSize(srcImage.rows);
//	int n = cv::getOptimalDFTSize(srcImage.cols);
//
//	//将添加的像素初始化为0
//	Mat padded;
//	cv::copyMakeBorder(srcImage, padded, 0, m - srcImage.rows, 0,
//		n - srcImage.cols, cv::BORDER_CONSTANT, cv::Scalar::all(0));
//
//	//为傅里叶变换的结果分配空间
//	Mat planes[] = { cv::Mat_<float>(padded),Mat::zeros(padded.size(),CV_32F) };
//	//将planes数组合并成一个多通道的数组
//	Mat complexI;
//	cv::merge(planes, 2, complexI);
//
//	//进行就地离散傅里叶变换
//	cv::dft(complexI, complexI);
//
//	//将结果转换为幅值
//	cv::split(complexI, planes);
//	cv::magnitude(planes[0], planes[1], planes[0]);
//	Mat magnitudeImage = planes[0];
//
//	//进行对数尺度缩放
//	magnitudeImage += cv::Scalar::all(1);
//	log(magnitudeImage, magnitudeImage);
//
//	//剪切和重分布幅度图象限
//	magnitudeImage = magnitudeImage(cv::Rect(0, 0, magnitudeImage.cols & -2,
//		magnitudeImage.rows & -2));
//
//	int cx = magnitudeImage.cols / 2;
//	int cy = magnitudeImage.rows / 2;
//	Mat q0(magnitudeImage, cv::Rect(0, 0, cx, cy));
//	Mat q1(magnitudeImage, cv::Rect(cx, 0, cx, cy));
//	Mat q2(magnitudeImage, cv::Rect(0, cy, cx, cy));
//	Mat q3(magnitudeImage, cv::Rect(cx, cy, cx, cy));
//
//	Mat tmp;
//	q0.copyTo(tmp);
//	q3.copyTo(q0);
//	tmp.copyTo(q3);
//
//	q1.copyTo(tmp);
//	q2.copyTo(q1);
//	tmp.copyTo(q2);
//
//	//归一化
//	cv::normalize(magnitudeImage, magnitudeImage, 0, 1, CV_MINMAX);
//
//	cv::imshow("傅里叶变换频谱图", magnitudeImage);
//	cv::waitKey();
//	return 0;
//}