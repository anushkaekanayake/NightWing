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
	std::cout << "welcome to Automatic Cricket Highlight Generator.." << std::endl <<  std::endl;
	std::cout << "Extracted data from image : " ;
	IoController ioCOntrollerObj;

	//ioCOntrollerObj.generateAudio();

	TextProcessingController textProcessingControllerObj;
	string returnedData = textProcessingControllerObj.recognizeText("F:\\project pront screens\\Sri Lanka vs India World T20 2014 Final\\Duplicate.png");//Resources\\7.png
	textProcessingControllerObj.processText(returnedData);

	
	//wait until press a key
	system("Pause");
	return 0;
}

 