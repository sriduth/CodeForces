// Referred to : https://github.com/jcazevedo/codeforces/blob/master/src/327a.cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int count_ones(const int *dp,int T)
{
	int MAX=0,ones=0;
	for(int i =0;i<T;i++)
	{
		for(int j=i;j<T;j++)
		{
			ones = 0;
			for(int k=0;k<T;k++)
			{
				if(k >= i && k <= j)
				{
					if(dp[k] != 1){
						ones++;
					}
				}
				else
					ones += dp[k];
			}
			MAX = max(MAX,ones);
		}
	}

	return MAX;
}

int main()
{
	int T,data;

	cin >> T;
	vector<int> dp;

	for(int i =0;i<T;i++)
	{
		cin >> data;
		dp.push_back(data);
	}

	data = count_ones(dp.data(),T);

	cout << data << endl;
	return 0;
}