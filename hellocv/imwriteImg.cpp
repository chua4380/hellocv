//����imwrite����
#include "pch.h"
//#include <opencv2/opencv.hpp>
//#include <vector>
//
//using namespace std;
//
//void createAlphaMat(cv::Mat &mat)
//{
//	for (int i = 0; i < mat.rows; i++)
//	{
//		for (int j = 0; j < mat.cols; j++)
//		{
//			cv::Vec4b& rgba = mat.at<cv::Vec4b>(i, j);
//			rgba[0] = UCHAR_MAX / 2;	//��ɫ����
//			rgba[1] = cv::saturate_cast<uchar> ((float(mat.cols - j)) / ((float)mat.cols) * UCHAR_MAX);	//��ɫ����
//			rgba[2] = cv::saturate_cast<uchar> ((float(mat.rows - i)) / ((float)mat.rows) * UCHAR_MAX);	//��ɫ����
//			rgba[3] = cv::saturate_cast<uchar> (0.5 * (rgba[1] + rgba[2]));	//alpha����
//		}
//	}
//}
//
//int main()
//{
//	cv::Mat mat(480, 640, CV_8UC4);
//	createAlphaMat(mat);
//	vector<int> compression_parms;
//	compression_parms.push_back(cv::IMWRITE_PNG_COMPRESSION);
//	compression_parms.push_back(9);
//
//	try
//	{
//		cv::imwrite("./image/͸��Alphhaֵͼ.png", mat, compression_parms);
//		cv::imshow("���ɵ�pngͼ", mat);
//		cout << "ͼƬ�ļ���alpha�������ɲ�����ɹ�";
//		cv::waitKey(0);
//	}
//	catch (runtime_error& ex)
//	{
//		cout << ex.what() << endl;
//	}
//
//	return 0;
//}
