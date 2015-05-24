#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N,V,n,temp,i,flag;
	vector<int> dealer;
	cin >> N >> V;
	for(i=0;i<N;i++)
	{
		flag = 666;
		cin >> n;
		while(n--)
		{
			cin >> temp;
			/* 
				If we do not set the flag, the next immediate number
				will be accepted as the argument !
				YOU PISS GOLE.
				347 !473|2 c0d3 n0W.
			*/
			if(temp < V && flag != -666)
			{
				dealer.push_back(i+1);
				flag = -666;
			}	
		}
	}

	cout << dealer.size() << endl;
	sort(dealer.begin(),dealer.end());
	
	for(i=0;i<dealer.size();i++)
	{
		cout << dealer[i] <<" ";
	}
	
	cout << endl;
	return 0;
}