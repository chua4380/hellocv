//基本图形的绘制
#include "pch.h"
/*
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#define WINDOW_WIDTH 600

using cv::Mat;
using cv::Point;
//方法声明
void drawEllipse(Mat img, double angle);
void drawFilledCircle(Mat img, Point center);
void drawPolygon(Mat img);
void drawLine(Mat img, Point start, Point end);

using std::string;
string window_name1 = "【绘制图1】";
string window_name2 = "【绘制图2】";
const int window_width = 600;

int main()
{
	//创建空白的Mat图像
	Mat atomImage = Mat::zeros(window_width, window_width, CV_8UC3);
	Mat rookImage = Mat::zeros(window_width, window_width, CV_8UC3);

	//绘制椭圆（电子的运动轨迹）
	drawEllipse(atomImage, 90);
	drawEllipse(atomImage, 0);
	drawEllipse(atomImage, 45);
	drawEllipse(atomImage, -45);

	//绘制圆心（原子核）
	drawFilledCircle(atomImage, Point(WINDOW_WIDTH / 2, WINDOW_WIDTH / 2));

	//绘制多边形
	drawPolygon(rookImage);

	//绘制矩形
	cv::rectangle(rookImage, Point(0, 7 * WINDOW_WIDTH / 8), Point(WINDOW_WIDTH, WINDOW_WIDTH), cv::Scalar(0, 200, 200), -1);

	//绘制一些线段
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
	//创建一些点
	Point rookPoints[1][20];  //这样创建的原因是可以用rookPoints[0]表示所有点
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