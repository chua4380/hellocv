////��YAML�ļ��ж�����
//
#include "pch.h"
//#include <opencv2/opencv.hpp>
//
//int main()
//{
//	//system("color,6F");
//	using std::cout;
//	using std::endl;
//	cv::FileStorage fs("test.yaml", cv::FileStorage::READ);
//
//	//��Mat
//	cv::Mat R, T;
//	fs["R"] >> R;
//	fs["T"] >> T;
//	cout << "R:" << endl << R << endl;
//	cout << "R:" << endl << T << endl;
//
//	//���ַ�������
//	cv::FileNode node = fs["strings"];
//	if (node.type() != cv::FileNode::SEQ)
//	{
//		std::cerr << "�ַ�������һ������";
//	}
//	cv::FileNodeIterator it = node.begin(), it_end = node.end();
//	for (; it != it_end; it++)
//	{
//		cout << (std::string)*it << endl;
//	}
//	cv::FileNode mapping = fs["Mapping"];
//	cout << "One: " << (int)mapping["One"] << endl;
//	cout << "Two: " << (int)mapping["Two"] << endl;
//	fs.release();
//	return 0;
//}