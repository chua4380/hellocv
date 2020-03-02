#include "pch.h"
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <iostream>
//
//static void on_ConstrastAndBright(int, void *);
//int consVal, brightVal;    //对比度，亮度
//
//using cv::Mat;
//using std::cout;
//using std::endl;
//
//Mat srcImage, dstImage;
//int main()
//{
//	srcImage = cv::imread("./image/dota.jpg");
//	dstImage = Mat::zeros(srcImage.size(), srcImage.type());
//	if (!srcImage.data || !dstImage.data)
//	{
//		cout << "加载图片错误" << endl;
//		return 0;
//	}
//	//设置对比度和亮度的初始值
//	consVal = 80;
//	brightVal = 80;
//	//创建显示窗口
//	cv::namedWindow("【效果图】");
//	//创建滑动条
//	cv::createTrackbar("对比度：", "【效果图】", &consVal, 300, on_ConstrastAndBright);
//	cv::createTrackbar("亮 度：", "【效果图】", &brightVal, 200, on_ConstrastAndBright);
//	//对回调函数进行初始化
//	on_ConstrastAndBright(consVal, 0);
//	on_ConstrastAndBright(brightVal, 0);
//	while(cv::waitKey(10) != 27) {}    //"Esc"键退出,while循环在此主要用于阻塞
//
//	return 0;
//} 
// 
//void on_ConstrastAndBright(int, void *)
//{
//	for (int i = 0; i < srcImage.rows; i++) 
//	{
//		for (int j = 0; j < srcImage.cols; j++)
//		{
//			for (int c = 0; c < 3; c++)
//			{	
//				//saturate_cast<uchar>()函数用于溢出保护
//				dstImage.at<cv::Vec3b>(i, j)[c] =cv::saturate_cast<uchar>(
//					(consVal*0.01)*srcImage.at<cv::Vec3b>(i, j)[c] + brightVal);
//			}
//		}
//	}
//	cv::imshow("【原始图】", srcImage);
//	cv::imshow("【效果图】", dstImage);
//}
