#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);
	int S,P,temp,i;
	vector<int> V;

	cin >> S >> P;
	for(i=0;i<P;i++)
	{
		cin >> temp;
		V.push_back(temp);
	}

	/* LOL DP
		sort V and check intervals
		choose smallest interval.
	*/
	sort(V.begin(),V.end());
	temp = 999999999;
	S--;
	for(i=0;S+i< P;i++)
	{
		if(V[S+i] - V[i] <= temp)
			temp = V[S+i] - V[i];
	}

	cout << temp << endl;
	return 0;
}
