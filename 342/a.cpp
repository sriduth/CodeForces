#include <iostream>
using namespace std;

int main()
{
	cin.sync_with_stdio(false);
	int k;

	cin >> k;

	int one=0,two=0,three=0,four=0,six=0;
	while(k--)
	{
		int temp;
		cin >> temp;
		if(temp == 5 || temp == 7)
		{
			cout << "-1" << endl;
			return 0;
		}
		else if(temp == 1)
			one++;
		else if(temp == 2)
			two++;
		else if(temp == 3)
			three++;
		else if(temp == 4)
			four++;
		else if(temp == 6)
			six++;
	}


	if(ones == (two + three + four + six))
	{
		if(two == (four + six))

		if(three = (six - four))
	}
}