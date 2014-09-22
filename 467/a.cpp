#include <iostream>

using namespace std;

int main()
{
	int T,count = 0;

	cin >> T;

	while(T--)
	{
		int a,b;
		cin >> a >> b;

		if(b - a >= 2)
			count++;
	}

	cout << count << endl;
	return 0;
}