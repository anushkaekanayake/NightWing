// NightWing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "opencv2\highgui\highgui.hpp"
#include "opencv2\core\core.hpp"

using namespace std;
using namespace cv;
int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Welcome" << endl;
	
	Mat image = imread("C:\\Users\\Anushka Ekanayake\\Pictures\\image.jpg");
	namedWindow("Display image");
	imshow("Display image",image);
	waitKey(0);
	
	return 0;
}

