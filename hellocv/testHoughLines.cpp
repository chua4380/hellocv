////�������Ա任
#include "pch.h"
//#include <opencv2/opencv.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
//int main()
//{
//	//����ԭͼ
//	cv::Mat srcImg = cv::imread("./image/75.jpg");
//	if (!srcImg.data)
//	{
//		std::cout << "����ͼƬʧ��" << std::endl;
//		return false;
//	}
//	//������ʱ������Ŀ�����
//	cv::Mat midImg, edge, dstImg;
//	//���б�Ե����ת��Ϊ�Ҷ�ͼ
//	cv::Canny(srcImg, midImg, 50, 200, 3);
//	//srcImg.copyTo(edge, midImg);
//	cv::cvtColor(midImg, dstImg, cv::COLOR_GRAY2BGR);
//	//srcImg.copyTo(dstImg, midImg);
//	//���л������Ա任
//	std::vector<cv::Vec2f> lines;	//����һ��ʸ���ṹlines������ŵõ����߶�ʸ������
//	cv::HoughLines(midImg, lines, CV_PI / 180, 150, 150, 0, 0);
//
//	//������;�л��Ƴ�ÿ���߶�
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
//	//��ʾԭͼ
//	cv::imshow("ԭͼ", srcImg);
//	//��ʾ��Ե�����ͼ
//	cv::imshow("��Ե���Ч��ͼ", midImg);
//	//��ʾЧ��ͼ
//	cv::imshow("����任Ч��ͼ", dstImg);
//
//	cv::waitKey(0);
//	return 0;
//}