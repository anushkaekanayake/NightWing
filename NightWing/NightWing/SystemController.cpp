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

using namespace std;

int main()
{

	cout << "welcome" << endl;
	
	IoController ioCOntrollerObj;
	
	ioCOntrollerObj.generateAudio();
	return 0;
}

