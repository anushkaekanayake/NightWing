/*
*uses to control the processing of all text processing related things
*uses OCR techniques
*author:nightwing
*date:30/03/2015
*/
#include <string>
#include <iostream>
#include <string>
#include "core\core.hpp"

class TextProcessingController
{
	//process the given raw data and generate information (score card data..etc.)
	public:
	void processText(std::string rawData);

	//uses to recognize the charcters on the given image frame and returs the extracted raw data
	public:
	std::string recognizeText(std::string imagePath);

	private:
	void noiseReducer(std::string imagePath);

};