////�ۼƸ��ʻ���任
#include "pch.h"
//#include <opencv2/opencv.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	cv::Mat srcImg = cv::imread("./image/75.jpg");
//	cv::Mat midImg, dstImg;
//
//	cv::Canny(srcImg, midImg, 50, 200, 3);
//	cv::cvtColor(midImg, dstImg, cv::COLOR_GRAY2BGR);
//
//	std::vector<cv::Vec4i> lines;
//	cv::HoughLinesP(midImg, lines, 1, CV_PI / 180, 80, 50, 10);
//
//	for (int i = 0; i < lines.size(); i++)
//	{
//		cv::Vec4i line = lines[i];
//		cv::line(dstImg, cv::Point(line[0], line[1]), cv::Point(line[2], line[3]), cv::Scalar(186, 88, 255), 1, cv::LINE_AA);
//	}
//
//	cv::imshow("ԭͼ", srcImg);
//	cv::imshow("��Ե���Ч��ͼ", midImg);
//	cv::imshow("�ۼƸ��ʻ���任Ч��ͼ", dstImg);
//
//	cv::waitKey(0);
//	return 0;
//}