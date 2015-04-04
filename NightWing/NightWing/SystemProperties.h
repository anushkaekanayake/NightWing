/*
*use to store relevent system property data values
*authour:nightwing
*This should be singleton******************
*03/04/2015
*/

#include <string>

using namespace std;
 class SystemProperties
{
	private:
	 string origninalVideoName;
	 string path;

	public:
	 string getOrigninalVideoName()
	{
		return origninalVideoName;
	}
	public:
	 string getPath()
	{
		return path;
	}

	public:
	 void setOriginalVideoName(string videoName)
	{

		origninalVideoName = videoName;
	}

	public:
	 void setPath(string filePath)
	{
		path = filePath;
	}


	

};
