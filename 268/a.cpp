#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);

	int T,i,temp,count=0;
	vector<int> home;
	vector<int> away;

	cin >> T;

	for(i=0;i<T;i++)
	{
		cin >> temp;
		home.push_back(temp);
		cin >> temp;
		away.push_back(temp);
	}

	/*  Compare Each home kit with ALL away kits. */
	for(i=0;i<T;i++)
	{
		for(temp = 0;temp<T;temp++)
		{
			/*
				We can afford to compare the same team's
				as no team can ever hame same home and away kits.
			*/
			if(home[i] == away[temp])
				count++;
		}
	}

	cout << count << endl;

	return 0;
}