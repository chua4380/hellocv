//����ͼ�εĻ���
#include "pch.h"
/*
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#define WINDOW_WIDTH 600

using cv::Mat;
using cv::Point;
//��������
void drawEllipse(Mat img, double angle);
void drawFilledCircle(Mat img, Point center);
void drawPolygon(Mat img);
void drawLine(Mat img, Point start, Point end);

using std::string;
string window_name1 = "������ͼ1��";
string window_name2 = "������ͼ2��";
const int window_width = 600;

int main()
{
	//�����հ׵�Matͼ��
	Mat atomImage = Mat::zeros(window_width, window_width, CV_8UC3);
	Mat rookImage = Mat::zeros(window_width, window_width, CV_8UC3);

	//������Բ�����ӵ��˶��켣��
	drawEllipse(atomImage, 90);
	drawEllipse(atomImage, 0);
	drawEllipse(atomImage, 45);
	drawEllipse(atomImage, -45);

	//����Բ�ģ�ԭ�Ӻˣ�
	drawFilledCircle(atomImage, Point(WINDOW_WIDTH / 2, WINDOW_WIDTH / 2));

	//���ƶ����
	drawPolygon(rookImage);

	//���ƾ���
	cv::rectangle(rookImage, Point(0, 7 * WINDOW_WIDTH / 8), Point(WINDOW_WIDTH, WINDOW_WIDTH), cv::Scalar(0, 200, 200), -1);

	//����һЩ�߶�
	drawLine(rookImage, Point(0, 15 * WINDOW_WIDTH / 16), Point(WINDOW_WIDTH, 15 * WINDOW_WIDTH / 16));
	drawLine(rookImage, Point(WINDOW_WIDTH / 4, 7 * WINDOW_WIDTH / 8), Point(WINDOW_WIDTH / 4, WINDOW_WIDTH));
	drawLine(rookImage, Point(WINDOW_WIDTH / 2, 7 * WINDOW_WIDTH / 8), Point(WINDOW_WIDTH / 2, WINDOW_WIDTH));
	drawLine(rookImage, Point(3 * WINDOW_WIDTH / 4, 7 * WINDOW_WIDTH / 8), Point(3 * WINDOW_WIDTH / 4, WINDOW_WIDTH));

	imshow(window_name1, atomImage);
	cv::moveWindow(window_name1, 0, 200);
	imshow(window_name2, rookImage);
	cv::moveWindow(window_name2, WINDOW_WIDTH, 200);

	cv::waitKey(0);
	return(0);
}

void drawEllipse(Mat img, double angle)
{
	int thickness = 2;
	cv::ellipse(img, Point(window_width / 2, window_width / 2), cv::Size(window_width / 4, window_width / 16),
		angle, 0, 360, cv::Scalar(234, 32, 5), thickness);
}

void drawFilledCircle(Mat img, Point center)
{
	cv::circle(img, center, window_width / 32, cv::Scalar(0, 0, 245), -1);
}

void drawPolygon(Mat img)
{
	//����һЩ��
	Point rookPoints[1][20];  //����������ԭ���ǿ�����rookPoints[0]��ʾ���е�
	rookPoints[0][0] = Point(WINDOW_WIDTH / 4, 7 * WINDOW_WIDTH / 8);
	rookPoints[0][1] = Point(3 * WINDOW_WIDTH / 4, 7 * WINDOW_WIDTH / 8);
	rookPoints[0][2] = Point(3 * WINDOW_WIDTH / 4, 13 * WINDOW_WIDTH / 16);
	rookPoints[0][3] = Point(11 * WINDOW_WIDTH / 16, 13 * WINDOW_WIDTH / 16);
	rookPoints[0][4] = Point(19 * WINDOW_WIDTH / 32, 3 * WINDOW_WIDTH / 8);
	rookPoints[0][5] = Point(3 * WINDOW_WIDTH / 4, 3 * WINDOW_WIDTH / 8);
	rookPoints[0][6] = Point(3 * WINDOW_WIDTH / 4, WINDOW_WIDTH / 8);
	rookPoints[0][7] = Point(26 * WINDOW_WIDTH / 40, WINDOW_WIDTH / 8);
	rookPoints[0][8] = Point(26 * WINDOW_WIDTH / 40, WINDOW_WIDTH / 4);
	rookPoints[0][9] = Point(22 * WINDOW_WIDTH / 40, WINDOW_WIDTH / 4);
	rookPoints[0][10] = Point(22 * WINDOW_WIDTH / 40, WINDOW_WIDTH / 8);
	rookPoints[0][11] = Point(18 * WINDOW_WIDTH / 40, WINDOW_WIDTH / 8);
	rookPoints[0][12] = Point(18 * WINDOW_WIDTH / 40, WINDOW_WIDTH / 4);
	rookPoints[0][13] = Point(14 * WINDOW_WIDTH / 40, WINDOW_WIDTH / 4);
	rookPoints[0][14] = Point(14 * WINDOW_WIDTH / 40, WINDOW_WIDTH / 8);
	rookPoints[0][15] = Point(WINDOW_WIDTH / 4, WINDOW_WIDTH / 8);
	rookPoints[0][16] = Point(WINDOW_WIDTH / 4, 3 * WINDOW_WIDTH / 8);
	rookPoints[0][17] = Point(13 * WINDOW_WIDTH / 32, 3 * WINDOW_WIDTH / 8);
	rookPoints[0][18] = Point(5 * WINDOW_WIDTH / 16, 13 * WINDOW_WIDTH / 16);
	rookPoints[0][19] = Point(WINDOW_WIDTH / 4, 13 * WINDOW_WIDTH / 16);

	const Point* ppt[1] = { rookPoints[0] };
	int npt[] = { 20 };
	cv::fillPoly(img, ppt, npt, 1, cv::Scalar(255, 255, 255));
}

void drawLine(Mat img, Point start, Point end)
{
	cv::line(img, start, end, cv::Scalar(0, 0, 0), 2);
}
*/