/*
*Uses to main function handler for the system
*author:nightwing
*date:30/03/2015
*/

#include "stdafx.h"
#include <iostream>
/*#include "SystemController.h"
#include "IoController.h"
#include "SystemProperties.h"*/
#include <tesseract\baseapi.h>
#include <leptonica\allheaders.h>






int main()
{

	std::cout << "welcome" << std::endl;

	/*IoController ioCOntrollerObj;

	ioCOntrollerObj.generateAudio();

*/
	
	const char* lang = "eng";
	const char* filename = "Resources\\1.png";

	tesseract::TessBaseAPI tess;
	tess.Init(NULL, lang, tesseract::OEM_DEFAULT);
	tess.SetPageSegMode(tesseract::PSM_SINGLE_BLOCK);

	FILE* fin = fopen(filename, "rb");
	if (fin == NULL)
	{
		std::cout << "Cannot open " << filename << std::endl;
		return -1;
	}
	fclose(fin);

	STRING text;
	if (!tess.ProcessPages(filename, NULL, 0, &text))
	{
		std::cout << "Error during processing." << std::endl;
		return -1;
	}
	else
		std::cout << text.string() << std::endl;

	//wait until press a key
	system("Pause");
	return 0;
}

