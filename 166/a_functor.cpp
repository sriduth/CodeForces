#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

/*
	using functor
*/
struct comparison_functor
{
	bool operator() (const pair<int,int> x,const pair<int,int> y)
	{
		if(x.first > y.first)
			return true;
		else if(x.first < y.first) 
			return false;
		else if(x.first == y.first)
		{
			if(x.second > y.second)
				return false;
			else if(x.second < y.second)
				return true;
			else
				return true;
		}
		
	}
}compare_pair;

int main()
{
	cin.sync_with_stdio(false);

	int T,P,x,y,count=0;
	cin >> T >> P;

	vector< pair<int,int> > data;

	for(int i=0;i<T;i++)
	{
		cin >> x >> y;
		data.push_back(make_pair(x,y));
	}

	sort(data.begin(),data.end(),compare_pair);

	x = data[P-1].first;
	y = data[P-1].second;


	for(int i = 0;i<T;i++)
	{
		if(data[i].first == x && data[i].second == y )
		{
			count++;
		}
	}

	cout << count << endl;

	return 0;
}