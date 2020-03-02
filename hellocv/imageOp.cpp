//����ͼ�������ص����෽��
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
	cv::imshow("ԭͼ", srcImage);

	Mat dstImage;
	dstImage.create(srcImage.rows, srcImage.cols, srcImage.type());

	//��¼��ʼʱ��
	double startTime = static_cast<double>(cv::getTickCount());
	//������ɫ�ռ�˥������
	colorReduce(srcImage, dstImage, 32);
	//��������ʱ�䲢���
	double period = ((double)(cv::getTickCount()) - startTime) / cv::getTickFrequency();
	cout << "����ʱ��Ϊ��" << period << endl;

	cv::imshow("Ч��ͼ", dstImage);
	cv::waitKey(0);
}

//��ָ���������

void colorReduce(Mat & inputImage, Mat & outputImage, int div)
{
	outputImage = inputImage.clone();
	int rowNumber = outputImage.rows;
	int colNumber = outputImage.cols*outputImage.channels();

	//����ÿ�����ص�
	for (int i = 0; i < rowNumber; i++)
	{
		uchar* data = outputImage.ptr<uchar>(i);
		for (int j = 0; j < colNumber; j++)
			data[j] = data[j] / div * div + div / 2;
	}
}
*/

//�õ�������������
/*
void colorReduce(Mat & inputImage, Mat & outputImage, int div)
{
	outputImage = inputImage.clone();
	//��ȡ������
	cv::Mat_<cv::Vec3b>::iterator it = outputImage.begin<cv::Vec3b>();
	cv::Mat_<cv::Vec3b>::iterator itEnd = outputImage.end<cv::Vec3b>();
	//����ÿ�����ص�Ԫ
	for (; it != itEnd; it++)
	{
		(*it)[0] = (*it)[0] / div * div + div / 2;
		(*it)[1] = (*it)[1] / div * div + div / 2;
		(*it)[2] = (*it)[2] / div * div + div / 2;
	}

}


//��̬��ַ����
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