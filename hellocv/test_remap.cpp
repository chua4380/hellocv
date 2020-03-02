////基本重映射
#include "pch.h"
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	cv::Mat srcImg, dstImg, map_x, map_y;
//
//	srcImg = cv::imread("./image/77.jpg");
//	if (!srcImg.data)
//	{
//		printf("加载图片失败\n");
//		return false;
//	}
//	cv::imshow("原始图", srcImg);
//
//	dstImg.create(srcImg.size(), srcImg.type());
//	map_x.create(srcImg.size(), CV_32FC1);
//	map_y.create(srcImg.size(), CV_32FC1);
//
//	for (int j = 0; j < srcImg.rows; j++)
//	{
//		for (int i = 0; i < srcImg.cols; i++)
//		{
//			map_x.at<float>(j, i) = static_cast<float>(srcImg.cols - i);	//表示32FC1的X值
//			map_y.at<float>(j, i) = static_cast<float>(j);	//按Y轴方向进行旋转
//		}
//	}
//
//	//进行重映射操作
//	cv::remap(srcImg, dstImg, map_x, map_y, cv::INTER_LINEAR,cv::BORDER_CONSTANT,cv::Scalar(0,0,0));
//
//	cv::imshow("程序窗口", dstImg);
//	cv::waitKey(0);
//
//	return 0;
//}