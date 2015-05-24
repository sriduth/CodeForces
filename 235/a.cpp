#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int T,g_max,temp,count=0;
	vector<int> Q;
	vector<int>::iterator it;
	cin >> T >> g_max;

	for(int i=0;i<T;i++)
	{
		cin >> temp;
		Q.push_back(temp);
	}

	temp = g_max;

	/*
		Fill the bus then send off.
		Assuming no group will have members more than g_max.
	*/
	for(int i=0;i<Q.size();i++)
	{
		if(Q[i] <= temp)
		{
			temp -= Q[i];
		}
		else
		{
			count ++;
			temp = g_max;
			--i;
		}
	}

	cout << count+1 << endl;

	return 0;
}