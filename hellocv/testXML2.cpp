////从YAML文件中读数据
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
//	//读Mat
//	cv::Mat R, T;
//	fs["R"] >> R;
//	fs["T"] >> T;
//	cout << "R:" << endl << R << endl;
//	cout << "R:" << endl << T << endl;
//
//	//读字符串序列
//	cv::FileNode node = fs["strings"];
//	if (node.type() != cv::FileNode::SEQ)
//	{
//		std::cerr << "字符串不是一个序列";
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