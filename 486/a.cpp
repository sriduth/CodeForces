#include <iostream>

using namespace std;

int main()
{
	long t,sol=0;

	cin >> t;

	if(t%2 == 0)
	{
		long x = t/2;
		sol += x*(x+1);
		sol -= x*x;
	}

	else
	{
		long x = (t+1)/2;
		sol += x*x;
		sol -= (x+1)*x;
	}

	cout << sol << endl;

	return 0;
}