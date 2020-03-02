////利用WarpAffine和getRotationMatrix2D函数实现仿射变换
#include "pch.h"
//#include <opencv2/opencv.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <opencv2/highgui/highgui.hpp>
//
//std::string WINDOW_NAME1 = "原始图";
//std::string WINDOW_NAME2 = "经过wrap效果图";
//std::string WINDOW_NAME3 = "经过wrap和rotate后的效果图";
//
//int main()
//{
//	system("color 2F");
//
//	//参数准备
//	cv::Point2f srcTriangle[3];
//	cv::Point2f dstTriangle[3];
//
//	cv::Mat rotMat(2, 3, CV_32FC1);
//	cv::Mat warpMat(2, 3, CV_32FC1);
//	cv::Mat srcImg, dstImg_warp, dstImg_warp_rotate;
//
//	//加载原图并进行初始化
//	srcImg = cv::imread("./image/79.jpg");
//	if (!srcImg.data)
//	{
//		std::cout << "读取图片失败" << std::endl;
//		return false;
//	}
//
//	//设置目标图与源图目标一致
//	dstImg_warp = cv::Mat::zeros(srcImg.rows, srcImg.cols, srcImg.type());
//
//	//设置原图与目标图像上三组点以计算仿射变换
//	srcTriangle[0] = cv::Point2f(0, 0);
//	srcTriangle[1] = cv::Point2f(static_cast<float>(srcImg.cols - 1), 0);
//	srcTriangle[2] = cv::Point2f(0, static_cast<float>(srcImg.rows - 1));
//
//	dstTriangle[0] = cv::Point2f(static_cast<float>(srcImg.cols*0.0), static_cast<float>(srcImg.rows*0.33));
//	dstTriangle[1] = cv::Point2f(static_cast<float>(srcImg.cols*0.65), static_cast<float>(srcImg.rows*0.35));
//	dstTriangle[2] = cv::Point2f(static_cast<float>(srcImg.cols*0.15), static_cast<float>(srcImg.rows*0.6));
//
//	//求得仿射变换
//	warpMat = cv::getAffineTransform(srcTriangle, dstTriangle);
//	//对图像应用刚刚求得的仿射变换
//	cv::warpAffine(srcImg, dstImg_warp, warpMat, dstImg_warp.size());
//	//对图像进行缩放后再旋转
//	cv::Point center = cv::Point(dstImg_warp.cols / 2, dstImg_warp.rows / 2);
//	double angle = 60.0;
//	double scale = 0.8;
//	//通过上面的旋转细节信息求得旋转矩阵
//	rotMat = cv::getRotationMatrix2D(center, angle, scale);
//	cv::warpAffine(srcImg, dstImg_warp_rotate, rotMat, dstImg_warp_rotate.size());
//
//	//显示效果
//	cv::imshow(WINDOW_NAME1, srcImg);
//	cv::imshow(WINDOW_NAME2, dstImg_warp);
//	cv::imshow(WINDOW_NAME3, dstImg_warp_rotate);
//
//	//任意键退出
//	cv::waitKey(0);
//
//	return 0;
//}