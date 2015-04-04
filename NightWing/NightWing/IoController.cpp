/*
*uses to split the video and generate the highlight video
*author:nightwing
*date:30/03/2015
*/
#include "stdafx.h"
#include "IoController.h"
#include <fstream>
#include <iostream>
#include "SystemProperties.h"
#include <algorithm>


using namespace std;

string videoFileRef;
string audioFileRef;
SystemProperties obj;
void inputsFromUisimmulatorFunction();
bool fileExistenceChecker(string name);

//extract the audio as a mp3 file from the given cricket video
bool IoController::generateAudio()
{

	string ffmpegCommand;
	string audiofileNameStater = "audio-";
	//getting inputs from UI simmulator****should be removed
	inputsFromUisimmulatorFunction();

	videoFileRef = obj.getPath() + obj.getOrigninalVideoName();
	audioFileRef = obj.getPath() + audiofileNameStater + obj.getOrigninalVideoName() + ".mp3";
	//if audio file is not already exist
	if (!fileExistenceChecker(audioFileRef))
	{
		cout << "Executing ffmpeg command...\n";
		ffmpegCommand = "ffmpeg -i " + videoFileRef + " -vn -ar 44100 -ac 2 -ab 192k -f mp3 " + audioFileRef;
		//ffmpeg -i F:\\videos\\a.mp4 -vn -ar 44100 -ac 2 -ab 192k -f mp3 F:\\videos\\aa.mp3
		system(ffmpegCommand.c_str());
		cout << "Audio file for " << obj.getOrigninalVideoName() << " is generated" << endl;
	}
	else
	{
		cout << "Audio file is already generated" << endl;
	}
	return true;
}


//generate the final video file with filtered highlights
bool IoController::gnerateVideo() {}


 bool fileExistenceChecker(string name) {
	 ifstream file(name);
	 if (!file)            // If the file was not found, then file is 0, i.e. !file=1 or true.
		 return false;    // The file was not found.
	 else                 // If the file was found, then file is non-0.
		 return true;     // The file was found.
}


//********this should be removed
 void inputsFromUisimmulatorFunction()
{

	obj.setOriginalVideoName("a.mp4");
	obj.setPath("F:\\videos\\");

}
