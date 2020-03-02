//访问图像中像素的三类方法
#include "pch.h"
/*
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using cv::Mat;
using std::cout;
using std::endl;

void colorReduce(Mat& inputImage, Mat& outputImage, int div);

int main()
{
	Mat srcImage = cv::imread("./image/image.jpg");
	cv::imshow("原图", srcImage);

	Mat dstImage;
	dstImage.create(srcImage.rows, srcImage.cols, srcImage.type());

	//记录起始时间
	double startTime = static_cast<double>(cv::getTickCount());
	//调用颜色空间衰减函数
	colorReduce(srcImage, dstImage, 32);
	//计算运行时间并输出
	double period = ((double)(cv::getTickCount()) - startTime) / cv::getTickFrequency();
	cout << "运行时间为：" << period << endl;

	cv::imshow("效果图", dstImage);
	cv::waitKey(0);
}

//用指针访问像素

void colorReduce(Mat & inputImage, Mat & outputImage, int div)
{
	outputImage = inputImage.clone();
	int rowNumber = outputImage.rows;
	int colNumber = outputImage.cols*outputImage.channels();

	//遍历每个像素点
	for (int i = 0; i < rowNumber; i++)
	{
		uchar* data = outputImage.ptr<uchar>(i);
		for (int j = 0; j < colNumber; j++)
			data[j] = data[j] / div * div + div / 2;
	}
}
*/

//用迭代器操作像素
/*
void colorReduce(Mat & inputImage, Mat & outputImage, int div)
{
	outputImage = inputImage.clone();
	//获取迭代器
	cv::Mat_<cv::Vec3b>::iterator it = outputImage.begin<cv::Vec3b>();
	cv::Mat_<cv::Vec3b>::iterator itEnd = outputImage.end<cv::Vec3b>();
	//处理每个像素单元
	for (; it != itEnd; it++)
	{
		(*it)[0] = (*it)[0] / div * div + div / 2;
		(*it)[1] = (*it)[1] / div * div + div / 2;
		(*it)[2] = (*it)[2] / div * div + div / 2;
	}

}


//动态地址计算
void colorReduce(Mat & inputImage, Mat & outputImage, int div)
{
	outputImage = inputImage.clone();
	int rowNumber = outputImage.rows;
	int colNumber = outputImage.cols;
	for (int i = 0; i < rowNumber; i++)
	{
		for (int j = 0; j < colNumber; j++)
		{
			outputImage.at<cv::Vec3b>(i, j)[0] = outputImage.at<cv::Vec3b>(i, j)[0] / div * div + div / 2;
			outputImage.at<cv::Vec3b>(i, j)[1] = outputImage.at<cv::Vec3b>(i, j)[1] / div * div + div / 2;
			outputImage.at<cv::Vec3b>(i, j)[2] = outputImage.at<cv::Vec3b>(i, j)[2] / div * div + div / 2;
		}
	}
}
*/