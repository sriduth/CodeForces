#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);

	int T,length=-1,count=2;

	cin >> T;

	if(T <= 2)
	{
		cout << T << endl;
		return 0;
	}

	int data[T];

	for(int i=0;i<T;i++)
		cin >> data[i];

	for(int i=2;i<T;i++)
	{
		if(data[i] == (data[i-1] + data[i-2]))
			count++;

		else
		{
			length = max(length,count);
			count = 2;
		}
	}

	length = max(length,count);	

	cout << length << endl;
	return 0;
}