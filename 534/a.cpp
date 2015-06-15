#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	if(n == 1)
	{
		cout << 1 << endl << 1 << endl;
		return 0;
	}
	else if(n == 2)
	{
		cout << 1 << endl << 1 << endl;
		return 0;
	}
	else if(n == 3)
	{
		cout << 2 << endl << "1 3" << endl; 
		return 0;
	}
	else if(n == 4)
	{
		cout << 4 << endl << "3 1 4 2";
		return 0;
	}

	cout << n << endl;
		
	for(int i=1;i<=n;i++)
	{
		if(i%2 != 0)
			cout << i << " ";
	}
	for (int i = 1; i <= n; ++i)
	{
		if(i%2 == 0)
			cout << i << " ";
	}

	return 0;
}