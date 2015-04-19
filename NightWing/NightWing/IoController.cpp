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
#include "CommonUtilities.h"
#include "AudioController.h"


using namespace std;

string videoFileRef;
string audioFileRef;
SystemProperties obj;

void inputsFromUisimmulatorFunction();

//extract the audio as a mp3 file from the given cricket video
bool IoController::generateAudio()
{
	CommonUtilities commonUtilitiesObject;

	string ffmpegCommand;
	string audiofileNameStater = "audio-";
	//getting inputs from UI simmulator****should be removed
	inputsFromUisimmulatorFunction();
	string path = obj.getPath();
	string originalVideoName = obj.getOrigninalVideoName();

	videoFileRef = path + originalVideoName;
	audioFileRef = path + audiofileNameStater + originalVideoName + ".mp3";
	//if audio file is not already exist
	if (!commonUtilitiesObject.fileExistenceChecker(audioFileRef))
	{
		cout << "Executing ffmpeg command for extracting audio...\n\n";
		ffmpegCommand = "ffmpeg -i " + videoFileRef + " -vn -ar 44100 -ac 2 -ab 192k -f mp3 " + audioFileRef;
		//ffmpeg -i F:\\videos\\a.mp4 -vn -ar 44100 -ac 2 -ab 192k -f mp3 F:\\videos\\aa.mp3

		try
		{
			system(ffmpegCommand.c_str());
			cout << "Audio file for " << obj.getOrigninalVideoName() << " is generated" << endl;
			AudioController audioControllerObj;

			//call for noise reduction function and remove background noise
			audioControllerObj.noiseReduction(audioFileRef, path, originalVideoName);
		}
		catch (exception e)
		{
			cout << "Exception occured" << endl;
		}


	}
	else
	{
		cout << "Audio file is already generated" << endl;
	}
	return true;
}


//generate the final video file with filtered highlights
bool IoController::generateVideo() {
bool status=false;
return status;
}

//********this should be removed
void inputsFromUisimmulatorFunction()
{

	obj.setOriginalVideoName("a.mp4");
	obj.setPath("F:\\videos\\");

}
