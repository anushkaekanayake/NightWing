/*
*uses to control the processing of all text processing related things
*author:nightwing
*date:30/03/2015
***********generated images should delete inside the distructor of the class**********
*don't use using namespace std within this class or included header files. Because there will be ambiguity problem
*/


#include "stdafx.h"
#include "TextProcessingController.h"
#include <tesseract\baseapi.h>
#include <leptonica\allheaders.h>
#include <iostream>
#include "core\core.hpp"
#include "highgui\highgui.hpp"





/*
*process the given noise reduced image frame from noise reducer function and extracts the data and return as a string
*/
std::string TextProcessingController::recognizeText(std::string imagePath)
{
	//uses to store the extracted data from the given image
	std::string extractedData = "";

	//selected language 
	const char* lang = "eng";
	noiseReducer(imagePath);
	const char* filename = imagePath.c_str();

	tesseract::TessBaseAPI tess;
	tess.Init(NULL, lang, tesseract::OEM_DEFAULT);
	tess.SetPageSegMode(tesseract::PSM_SINGLE_BLOCK);

	FILE* fin = fopen(filename, "rb");
	if (fin == NULL)
	{
		std::cout << "Cannot open " << filename << std::endl;
	}
	fclose(fin);

	STRING text;
	if (!tess.ProcessPages(filename, NULL, 0, &text))
	{
		std::cout << "Error during processing." << std::endl;

	}
	else
	{
		extractedData = text.string();
		std::cout << extractedData << std::endl;

	}


	return extractedData;
}

/*
* process the given raw data and generate information(score card data..etc.)
*/
void TextProcessingController::processText(std::string rawData)
{
	//std::cout << "inside the processTextFunction " << rawData << std::endl;

}

void TextProcessingController::noiseReducer(std::string imagePath)
{
	
	

}
