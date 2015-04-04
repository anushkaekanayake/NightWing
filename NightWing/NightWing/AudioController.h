/*
*uses to control the processing of all audio related things
*author:nightwing
*date:30/03/2015
*/
#include <string>

using namespace std;
class AudioController
{

	//processing of audio
	public:
	void processingAudio();
	/*
	*reduce the background noises up to some extent.
	*@param:full file path to the extracted audio file
	*@param:path to the folder
	*@param:name of the original video file
	*/
	public:
	void noiseReguction(string audioRef, string path, string originalVideoName);
};
