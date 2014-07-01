/*
	Gravity rearrangement same as sorting in 
	ascending order.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int T,temp,i;
	vector< int > V;
	cin >> T;

	for(i=0;i<T;i++)
	{
		cin >> temp;
		V.push_back(temp);
	}
	
	sort(V.begin(),V.end());

	for(i=0;i<T;i++)
	{
		cout << V[i] << " " ;
	}

	return 0;
}