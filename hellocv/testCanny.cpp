////Canny边缘检测
#include "pch.h"`
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	cv::Mat srcImg, grayImg, edgeImg, dstImg;
//	srcImg = cv::imread("./image/71.jpg");
//	//显示原始图
//	cv::imshow("原图", srcImg);
//	//创建与srcImg同大小的矩阵
//	dstImg.create(srcImg.size(), srcImg.type());
//	//转成灰度图检测边缘
//	cv::cvtColor(srcImg, grayImg, cv::COLOR_BGR2GRAY);
//	//用均值滤波进行降噪
//	cv::blur(grayImg, edgeImg, cv::Size(3, 3));
//	//运行Canny算子
//	cv::Canny(edgeImg, edgeImg, 3, 9, 5);
//	//显示灰度Canny检测图
//	cv::imshow("灰度Canny检测图", edgeImg);
//	//将dstImg的所有元素都设置为0
//	dstImg = cv::Scalar::all(0);
//	//使用Canny算子输出的边缘图edgeImg作为掩码，来将原图拷贝到dstImg中
//	srcImg.copyTo(dstImg, edgeImg);
//	//显示彩色Canny检测图
//	cv::imshow("彩色Canny检测图", dstImg);
//
//	cv::waitKey(0);
//	return 0;
//
//
//
//}