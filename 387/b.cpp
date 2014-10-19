#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{	
	cin.sync_with_stdio(false);

	int n,m;
	unordered_map<int,int> dat;

	cin >> n >> m;

	int prob[n];

	for(int i=0;i<n;i++)
		cin >> prob[i];

	int count = 0,temp;
	while(m--)
	{
		cin >> temp;
		dat[temp]++;
	}

	for(int i=0;i<min(m,n);i++)
	{
		if(dat[prob[i]] == 0)
			count ++;
	}

	cout << count << endl;

	return 0;
}