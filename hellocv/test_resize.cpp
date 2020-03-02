////用resize函数实现图片的尺寸缩放
#include "pch.h"
//#include <opencv2/opencv.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	cv::Mat srcImg = cv::imread("./image/1.jpg");
//	cv::Mat tmpImg, dstImg1, dstImg2, dstImg3, dstImg4;
//	tmpImg = srcImg;
//
//	cv::imshow("原始图", srcImg);
//	cv::resize(srcImg, dstImg1, cv::Size(tmpImg.cols * 2, tmpImg.rows * 2), 0, 0, 2);
//	cv::resize(srcImg, dstImg2, cv::Size(tmpImg.cols / 2, tmpImg.rows / 2), 0, 0, 3);
//	cv::pyrUp(srcImg, dstImg3, cv::Size(tmpImg.cols * 2, tmpImg.rows * 2));
//	cv::pyrDown(srcImg, dstImg4, cv::Size(tmpImg.cols / 2, tmpImg.rows / 2));
//	cv::imshow("效果图1", dstImg1);
//	cv::imshow("效果图2", dstImg2);
//	cv::imshow("效果图3", dstImg3);
//	cv::imshow("效果图4", dstImg4);
//
//	cv::waitKey(0);
//	return 0;
//}