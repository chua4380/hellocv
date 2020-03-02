//设置感兴趣区域
#include "pch.h"
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//
//int main()
//{
//	using cv::Mat;
//	Mat srcImage = cv::imread("./image/image.PNG");
//	Mat logoImage = cv::imread("./image/logo.PNG");
//	//将srcImage和imageROI关联起来
//	Mat imageROI = srcImage(cv::Rect(0, 0, logoImage.cols, logoImage.rows));
//	//加载掩膜
//	Mat mask = cv::imread("./image/logo.PNG", 0);
//	//将掩膜复制到imageROI
//	logoImage.copyTo(imageROI, mask);
//	
//	cv::imshow("利用ROI图像叠加效果图", srcImage);
//	cv::waitKey(0);
//
//	return 0;
//}