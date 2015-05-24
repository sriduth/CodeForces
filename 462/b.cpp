#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int T,K;
	char ch;
	/*
		Cleaning the array.
	*/
	int data[26] = {};

	cin >> T >> K;
	cin.get();

	/*
		No need of std::map here.
	*/
	while((ch = cin.get()) != '\n')
	{
		data[ch - 'A']++;
	}

	/*
		Sort in reverse order.
	*/
	sort(data,data+26,[](const int &x,const int &y){
		if(x > y)
			return true;
		else
			return false;
	});

	long long max = 0;
	for(int i=0;i<26 && K;i++)
	{
		if(data[i] >= K)
		{
			max += (long long)K*K;
			break;
		}
		else
		{
			max += (long long)data[i]*data[i];
			K -= data[i];
		}
	}

	cout << max << endl;
	return 0;
}