//���ø���Ȥ����
#include "pch.h"
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//
//int main()
//{
//	using cv::Mat;
//	Mat srcImage = cv::imread("./image/image.PNG");
//	Mat logoImage = cv::imread("./image/logo.PNG");
//	//��srcImage��imageROI��������
//	Mat imageROI = srcImage(cv::Rect(0, 0, logoImage.cols, logoImage.rows));
//	//������Ĥ
//	Mat mask = cv::imread("./image/logo.PNG", 0);
//	//����Ĥ���Ƶ�imageROI
//	logoImage.copyTo(imageROI, mask);
//	
//	cv::imshow("����ROIͼ�����Ч��ͼ", srcImage);
//	cv::waitKey(0);
//
//	return 0;
//}