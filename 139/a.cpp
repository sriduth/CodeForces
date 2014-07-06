#include <iostream>

using namespace std;

int main()
{
	int pages,week_read=0;
	int days[6];

	cin >> pages;

	/*
		Hmm very wierd i<6 no?
	*/
	for(int i=0;i<7;i++){
		cin >> days[i];
		week_read += days[i];
	}

	/*
		Just to speed things up
	*/
	while(pages - week_read > 0)
	{
		pages -= week_read;
	}


	for(int i=0;i<7;i++)
	{			
		pages -= days[i];
		

		if(pages <= 0)
		{
			cout << i+1 << endl;
			break;
		}		

	}	

	return 0;
}
