#include <iostream>

using namespace std;

int main()
{
	unsigned long t,change = 0,money;

	cin >> t;

	cin >> money;

	if(money > 25)
	{
		cout << "NO" << endl;
		return 0;
	}

	change = 25;

	for(int i=1;i<t;i++)
	{
		cin >> money;
		if(money - 25 > change)
		{
			cout << "NO" << endl;
			return 0;
		}
		else
		{
			change += 25;
			change -= (money - 25);
		}
	}

	cout << "YES" << endl;

	return 0;
}