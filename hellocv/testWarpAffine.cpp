////����WarpAffine��getRotationMatrix2D����ʵ�ַ���任
#include "pch.h"
//#include <opencv2/opencv.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <opencv2/highgui/highgui.hpp>
//
//std::string WINDOW_NAME1 = "ԭʼͼ";
//std::string WINDOW_NAME2 = "����wrapЧ��ͼ";
//std::string WINDOW_NAME3 = "����wrap��rotate���Ч��ͼ";
//
//int main()
//{
//	system("color 2F");
//
//	//����׼��
//	cv::Point2f srcTriangle[3];
//	cv::Point2f dstTriangle[3];
//
//	cv::Mat rotMat(2, 3, CV_32FC1);
//	cv::Mat warpMat(2, 3, CV_32FC1);
//	cv::Mat srcImg, dstImg_warp, dstImg_warp_rotate;
//
//	//����ԭͼ�����г�ʼ��
//	srcImg = cv::imread("./image/79.jpg");
//	if (!srcImg.data)
//	{
//		std::cout << "��ȡͼƬʧ��" << std::endl;
//		return false;
//	}
//
//	//����Ŀ��ͼ��ԴͼĿ��һ��
//	dstImg_warp = cv::Mat::zeros(srcImg.rows, srcImg.cols, srcImg.type());
//
//	//����ԭͼ��Ŀ��ͼ����������Լ������任
//	srcTriangle[0] = cv::Point2f(0, 0);
//	srcTriangle[1] = cv::Point2f(static_cast<float>(srcImg.cols - 1), 0);
//	srcTriangle[2] = cv::Point2f(0, static_cast<float>(srcImg.rows - 1));
//
//	dstTriangle[0] = cv::Point2f(static_cast<float>(srcImg.cols*0.0), static_cast<float>(srcImg.rows*0.33));
//	dstTriangle[1] = cv::Point2f(static_cast<float>(srcImg.cols*0.65), static_cast<float>(srcImg.rows*0.35));
//	dstTriangle[2] = cv::Point2f(static_cast<float>(srcImg.cols*0.15), static_cast<float>(srcImg.rows*0.6));
//
//	//��÷���任
//	warpMat = cv::getAffineTransform(srcTriangle, dstTriangle);
//	//��ͼ��Ӧ�øո���õķ���任
//	cv::warpAffine(srcImg, dstImg_warp, warpMat, dstImg_warp.size());
//	//��ͼ��������ź�����ת
//	cv::Point center = cv::Point(dstImg_warp.cols / 2, dstImg_warp.rows / 2);
//	double angle = 60.0;
//	double scale = 0.8;
//	//ͨ���������תϸ����Ϣ�����ת����
//	rotMat = cv::getRotationMatrix2D(center, angle, scale);
//	cv::warpAffine(srcImg, dstImg_warp_rotate, rotMat, dstImg_warp_rotate.size());
//
//	//��ʾЧ��
//	cv::imshow(WINDOW_NAME1, srcImg);
//	cv::imshow(WINDOW_NAME2, dstImg_warp);
//	cv::imshow(WINDOW_NAME3, dstImg_warp_rotate);
//
//	//������˳�
//	cv::waitKey(0);
//
//	return 0;
//}