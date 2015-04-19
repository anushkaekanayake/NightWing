/*
*Uses to main function handler for the system
*author:nightwing
*date:30/03/2015
*/

#include "stdafx.h"
#include "SystemController.h"
#include <iostream>
#include "IoController.h"
#include "SystemProperties.h"
#include "core\core.hpp"
#include "highgui\highgui.hpp"


using namespace std;
using namespace cv;

int main()
{

	cout << "welcome" << endl;

	IoController ioCOntrollerObj;

	ioCOntrollerObj.generateAudio();

	//wait until press a key
	system("Pause");
	return 0;
}

