#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;


int main()
{
	long long pylons,max_height=-1;
	long long cost = 0;

	cin >> pylons;

	int heights[pylons+1];
	heights[0] = 0;

	for(int i=1;i<=pylons;i++){
		cin >> heights[i];
		if(heights[i] > max_height)
			max_height = heights[i];
	}

	int jump_height = 0;
	for(int i=0;i<pylons;i++)
	{
		if(heights[i] - heights[i+1] < 0)
		{
			cost += abs(jump_height - (heights[i] - heights[i+1]));
		}
		else
		{
			jump_height =  heights[i] - heights[i+1];
		}
	}

	cout << min(max_height,cost) << endl;
	return 0;
}