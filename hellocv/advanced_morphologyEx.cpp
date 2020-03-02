////形态学滤波：开运算、闭运算、形态学梯度、顶帽、黑帽
#include "pch.h"
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
////声明全局变量
//cv::Mat srcImg, dstImg1, dstImg2, dstImg3;
////元素结构形状
//int elementShape = cv::MORPH_RECT;	
////TrackBar位置参数
//int numMaxIterator = 10;
//int numOpenClose = 0;
//int numErodeDilate = 0;
//int numTopBlackHat = 0;
//
////声明回调函数
//static void  on_OpenClose(int, void *);
//static void on_ErodeDilate(int, void *);
//static void on_TopBlackHat(int, void *);
//
//int main()
//{
//	//加载原始图片
//	srcImg = cv::imread("./image/4.png");
//	if (!srcImg.data)	return false;
//
//	dstImg1 = srcImg.clone();
//	dstImg2 = srcImg.clone();
//	dstImg3 = srcImg.clone();
//
//	//创建窗口
//	cv::namedWindow("原图");
//	cv::namedWindow("开运算/闭运算");
//	cv::namedWindow("腐蚀/膨胀");
//	cv::namedWindow("顶帽/黑帽");
//
//	//显示原图
//	cv::imshow("原图", srcImg);
//
//	//参数赋值
//	numOpenClose = 9;
//	numErodeDilate = 9;
//	numTopBlackHat = 2;
//
//	//创建滑动条
//	cv::createTrackbar("迭代值", "开运算/闭运算", &numOpenClose, 
//		numMaxIterator * 2 + 1, on_OpenClose);
//	cv::createTrackbar("迭代值", "腐蚀/膨胀", &numErodeDilate,
//		numMaxIterator * 2 + 1, on_ErodeDilate);
//	cv::createTrackbar("迭代值", "顶帽/黑帽", &numTopBlackHat,
//		numMaxIterator * 2 + 1, on_TopBlackHat);
//
//	//轮询获取按键信息
//	while (1)
//	{
//		int c = cv::waitKey(0);
//		on_OpenClose(numOpenClose, 0);
//		on_ErodeDilate(numErodeDilate, 0);
//		on_TopBlackHat(numTopBlackHat, 0);
//
//		if ((char)c == 'q' || (char)c == 27)
//			break;
//		if ((char)c == 49)	//判断是否按下了按键1
//			elementShape = cv::MORPH_ELLIPSE;
//		else if ((char)c == 50)
//			elementShape = cv::MORPH_RECT;
//		else if ((char)c == 51)
//			elementShape = cv::MORPH_CROSS;
//		else if ((char)c == ' ')
//			elementShape = (elementShape + 1) / 3;
//	}
//	cv::moveWindow("原图", 200 + srcImg.cols, 0);
//	cv::moveWindow("开运算/闭运算", 200, srcImg.rows);
//	cv::moveWindow("腐蚀/膨胀", 200+srcImg.cols, srcImg.rows);
//	cv::moveWindow("顶帽/黑帽", 200+srcImg.cols*2, srcImg.rows);
//	return 0;
//}
//
//void on_OpenClose(int, void *)
//{
//	//计算偏移量
//	int offset = numOpenClose - numMaxIterator;
//	int absolute_offset = offset > 0 ? offset : -offset;
//	//自定义核
//	cv::Mat element = cv::getStructuringElement(elementShape,
//		cv::Size(absolute_offset * 2 + 1, absolute_offset * 2 + 1),
//		cv::Point(absolute_offset, absolute_offset));
//	//进行腐蚀/膨胀
//	if (offset < 0)
//		cv::erode(srcImg, dstImg1, element);
//	else
//		cv::dilate(srcImg, dstImg1, element);
//	//显示图像
//	cv::imshow("开运算/闭运算", dstImg1);
//}
//
//void on_ErodeDilate(int, void *)
//{
//	//计算偏移量
//	int offset = numErodeDilate - numMaxIterator;
//	int absolute_offset = offset > 0 ? offset : -offset;
//	//自定义核
//	cv::Mat element = cv::getStructuringElement(elementShape,
//		cv::Size(absolute_offset * 2 + 1, absolute_offset * 2 + 1),
//		cv::Point(absolute_offset, absolute_offset));
//	//进行开运算/闭运算
//	if (offset < 0)
//		cv::morphologyEx(srcImg, dstImg2, cv::MORPH_OPEN, element);
//	else
//		cv::morphologyEx(srcImg, dstImg2, cv::MORPH_CLOSE, element);
//	//显示图像
//	cv::imshow("腐蚀/膨胀", dstImg2);
//}
//
//void on_TopBlackHat(int, void *)
//{
//	//计算偏移量
//	int offset = numTopBlackHat - numMaxIterator;
//	int absolute_offset = offset > 0 ? offset : -offset;
//	//自定义核
//	cv::Mat element = cv::getStructuringElement(elementShape,
//		cv::Size(absolute_offset * 2 + 1, absolute_offset * 2 + 1),
//		cv::Point(absolute_offset, absolute_offset));
//	//进行顶帽/黑帽
//	if (offset < 0)
//		cv::morphologyEx(srcImg, dstImg3, cv::MORPH_TOPHAT, element);
//	else
//		cv::morphologyEx(srcImg, dstImg3, cv::MORPH_BLACKHAT, element);
//	//显示图像
//	cv::imshow("顶帽/黑帽", dstImg3);
//}
