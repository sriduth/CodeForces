#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int T;

	cin >> T;

	bool data[T];

	memset(data,0,sizeof(data));
	int k,temp;

	cin >> k;

	while(k--)
	{
		cin >> temp;
		data[temp-1] = true;
	}

	cin >> k;

	while(k--)
	{
		cin >> temp;
		data[temp-1] = true;
	}

	for(int i=0;i<T;i++)
	{
		if(!data[i])
		{
			cout << "Oh, my keyboard!" << endl;
			return 0;
		}
	}

	cout << "I become the guy." << endl;

	return 0;
}
