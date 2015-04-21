/*
*Uses to main function handler for the system
*author:nightwing
*date:30/03/2015
*/

#include "stdafx.h"
#include <iostream>
#include "SystemController.h"
#include "IoController.h"
#include "SystemProperties.h"
#include "TextProcessingController.h"
#include "core\core.hpp"



using namespace std;
int main()
{

	std::cout << "welcome" << std::endl;

	IoController ioCOntrollerObj;

	ioCOntrollerObj.generateAudio();

	TextProcessingController textProcessingControllerObj;
	string returnedData = textProcessingControllerObj.recognizeText("F:\\project pront screens\\4.png");//Resources\\7.png
	textProcessingControllerObj.processText(returnedData);

	
	//wait until press a key
	system("Pause");
	return 0;
}

 