#include<iostream>
#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/videoio.hpp"
#include "GrayRatio.h"
using namespace std;
using namespace cv;
int main(int argc, char const *argv[])
{
	/*
		If it's your first time to open this solution in VS2017, you need to set the properties of
		this project.
		
		VC++ Directory -> Include Directory and Library Directory -> Set the OpenCV path in your computer.
		
		Then you need to navigate to the project folder in cmd or powershell, run
		
		git update-index --assume-unchanged image2text.vcxproj
		
		manually, to pretend the conflicts of the VS configuration for each contributor.(too complex..>_<)
		
		if you are coding in Linux, unless you had modified the installation path of OpenCV, our cmake script
		had been configured all the lib path and include path correctly. Just tap your kb!
			
		This is a simple function that convert a colorful photo to gray.
		if it popups a window normally, means that you have configured all the environment
		successfully.
	*/
	Mat Result(600, 800, CV_8UC3);
	imshow("Result", Result);
	waitKey();
    return 0;
}
