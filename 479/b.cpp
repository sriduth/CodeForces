#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <utility>
#include <cmath>

using namespace std;

int main()
{
	int n,m;
	vector<int> towers;
	vector< pair<int,int> > solution;

	cin >> n >> m;

	towers.resize(n,-1);

	for(int i=0;i<n;i++)
		cin >> towers[i];

	int min_val = INT_MAX;
	int max_val = -1;

	while(m--)
	{
		int min_index = -1;
		int max_index = -1;
		min_val = INT_MAX;
		max_val = -1;
		for(int i=0;i<n;i++)
		{
			if(towers[i] < min_val)
			{
				min_val = towers[i];
				min_index = i;
			}
			if(towers[i] > max_val)
			{
				max_val = towers[i];
				max_index = i;
			}
		}
		if(min_val ==  max_val)
		{
			break;
		}
		towers[min_index]++;
		towers[max_index]--;
		solution.push_back(make_pair(max_index+1,min_index+1));
	}

	max_val = -1;
	min_val = INT_MAX;

	for(int i=0;i<n;i++)
	{
		max_val = max(max_val,towers[i]);
		min_val = min(min_val,towers[i]);
	}

	cout << abs(max_val-min_val) << " " << solution.size() << endl;

	for(pair<int,int> X : solution)
		cout << X.first << " " << X.second << endl;

	return 0;
}