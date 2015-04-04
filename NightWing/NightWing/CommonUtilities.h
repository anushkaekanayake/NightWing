#include <string>
#include <fstream>

using namespace std;
class CommonUtilities
{
	//check the existence of a noise removed audio file in a given directory
	public:
	bool fileExistenceChecker(string name)
	{
		ifstream file(name);
		if (!file)            // If the file was not found, then file is 0
			return false;    // The file was not found.
		else                 // If the file was found, then file is non-0.
			return true;     // The file was found.
	}

};

