#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	int T;

	/*
		-_- %lld is mentioned in the question.
	*/
	long long count=0;
	unordered_map<long long,long long> pairs;
	unordered_map<long long,long long>::iterator it;

	cin >> T;

	for(int i=0;i<T;i++)
	{
		long long temp;

		cin >> temp;
		pairs[temp]++;
	}


	for(it=pairs.begin();it!=pairs.end();it++)
	{
		if(it->first > 0)
			count += (it->second)*(pairs[-(it->first)]);
	}

	count += (pairs[0]*(pairs[0]-1))/2;

	cout << count << endl;

	return 0;
}