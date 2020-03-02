////霍夫线性变换
#include "pch.h"
//#include <opencv2/opencv.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	//载入原图
//	cv::Mat srcImg = cv::imread("./image/75.jpg");
//	if (!srcImg.data)
//	{
//		std::cout << "加载图片失败" << std::endl;
//		return false;
//	}
//	//定义临时变量和目标变量
//	cv::Mat midImg, edge, dstImg;
//	//进行边缘检测和转换为灰度图
//	cv::Canny(srcImg, midImg, 50, 200, 3);
//	//srcImg.copyTo(edge, midImg);
//	cv::cvtColor(midImg, dstImg, cv::COLOR_GRAY2BGR);
//	//srcImg.copyTo(dstImg, midImg);
//	//进行霍夫线性变换
//	std::vector<cv::Vec2f> lines;	//定义一个矢量结构lines用来存放得到的线段矢量集合
//	cv::HoughLines(midImg, lines, CV_PI / 180, 150, 150, 0, 0);
//
//	//依次在途中绘制出每条线段
//	for (size_t i = 0; i < lines.size(); i++)
//	{
//		float rho = lines[i][0], theta = lines[i][1];
//		cv::Point pt1, pt2;
//		double a = cos(theta), b = sin(theta);
//		double x0 = a * rho, y0 = b * rho;
//		pt1.x = cvRound(x0 + 1000 * (-b));
//		pt1.y = cvRound(y0 + 1000 * (a));
//		pt2.x = cvRound(x0 - 1000 * (-b));
//		pt2.y = cvRound(y0 - 1000 * (a));
//		cv::line(dstImg, pt1, pt2, cv::Scalar(3, 200, 0), 1, CV_AA);
//	}
//
//	//显示原图
//	cv::imshow("原图", srcImg);
//	//显示边缘检测后的图
//	cv::imshow("边缘检测效果图", midImg);
//	//显示效果图
//	cv::imshow("霍夫变换效果图", dstImg);
//
//	cv::waitKey(0);
//	return 0;
//}