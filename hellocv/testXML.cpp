////XML和YAML文件的写入
//
#include "pch.h"
//#include <opencv2/opencv.hpp>
//using cv::Mat;
//
//int main()
//{
//	//初始化
//	cv::FileStorage fs("test.yaml", cv::FileStorage::WRITE);
//
//	//开始写入文件
//	Mat R = cv::Mat_<uchar>::eye(3, 3);
//	Mat T = cv::Mat_<uchar>::zeros(3, 3);
//	fs << "R" << R;
//	fs << "T" << T;
//
//	//写入字符串数组
//	fs << "strings" << "[";
//	fs << "lioney" << "carlos" << "animal";
//	fs << "]";
//
//	//写入Map
//	fs << "Mapping" << "{";
//	fs << "One" << 1;
//	fs << "Two" << 2;
//	fs << "}";
//}