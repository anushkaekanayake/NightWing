/*
*uses to filter the results and generate output
*author:nightwing
*date:30/03/2015
*/

class FilteringController
{
	//call the relevent filter
	public:
	void callFilter(char* filter);
	//load results
	public:
	void loadResults();
	//present the output results to UI(optional)
	public:
	void presentResults();
};