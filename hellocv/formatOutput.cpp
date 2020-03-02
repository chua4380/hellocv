//格式化输出

#include "pch.h"
//#include <opencv2/opencv.hpp>
//
//int main()
//{
//	cv::Mat m = cv::Mat(10, 3, CV_8UC3);
//	//randu()函数用来产生随机数
//	cv::randu(m, cv::Scalar::all(0), cv::Scalar::all(255));
//	//opencv默认风格输出
//	std::cout << "m (opencv默认风格)" << std::endl << m << std::endl;
//	//Python风格
//	std::cout << "m (python风格)" << std::endl << cv::format(m, cv::Formatter::FMT_PYTHON) << std::endl;
//	//逗号分隔风格
//	std::cout << "m (逗号风格)" << std::endl << cv::format(m, cv::Formatter::FMT_CSV) << std::endl;
//	//Numpy风格
//	std::cout << "m (Numpy风格)" << std::endl << cv::format(m, cv::Formatter::FMT_NUMPY) << std::endl;
//	//C语言风格
//	std::cout << "m (python风格)" << std::endl << cv::format(m, cv::Formatter::FMT_C) << std::endl;
//
//	return 0;
//}