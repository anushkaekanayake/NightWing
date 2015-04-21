/*
*uses to control the processing of all audio related things
*author:nightwing
*date:30/03/2015
*/

#include "stdafx.h"
#include "AudioController.h"
#include <iostream>
#include <fstream>
#include "CommonUtilities.h"


/**
*reduce the background noises up to some extent.
*@param:full file path to the extracted audio file
*@param:path to the folder
*@param:name of the original video file
**/
void AudioController::noiseReduction(string audioRef, string path, string originalVideoName)
{
	CommonUtilities commonUtilituesObj;
	string nameModifire = "-normalized-audio";
	string normalizedAudioRef = path + nameModifire + originalVideoName + ".mp3";
	if (!commonUtilituesObj.fileExistenceChecker(normalizedAudioRef))
	{
		string ffmpegCommandNoiseRemover = "ffmpeg -i " + audioRef + " -af \"volume =5 dB \" " + normalizedAudioRef + ".mp3";
		cout << "Executing ffmpeg command for removing noise..." << endl;
		try
		{
			system(ffmpegCommandNoiseRemover.c_str());
			cout << "Generated the normalized audio file for the " << audioRef << "audio file" << endl;
		}
		catch (exception e)
		{
			cout << "Exception occured" << endl;
		}
	}
	else
	{
		cout << audioRef << " file is already generated." << endl;
	}
	
}


//processing of audio
void AudioController::processingAudio() {}


