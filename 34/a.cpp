#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int T,a,b;

	cin >> T;

	int sol[T];

	for(int i=0;i<T;i++)
		cin >> sol[i];

	int min_diff = abs(sol[0] - sol[T-1]);
	a = T;
	b = 1;

	for(int i=0;i<T-1;i++)
	{
		if(min_diff >= abs(sol[i] - sol[i+1]))
		{
			a = i+1;
			b = i+2;
			min_diff = abs(sol[i]-sol[i+1]);
		}
	}

	cout << a << "  " << b << endl;

	return 0;
}