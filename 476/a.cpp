#include <iostream>
#include <climits>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int n,di;

	cin >> n >> di;

	if(n < di)
	{
		cout << -1 << endl;
		return 0;
	}
	if(n == di)
	{
		cout << n << endl;
		return 0;
	}
	int k = n;

	int mi = INT_MAX;
	while(true)
	{
		if(k%di == 0)
			mi = min(mi,k);

		if(k > ceil(n/2))
			k--;
		else
			break;
	}

	if(mi == INT_MAX)
		cout << -1 << endl;
	else
		cout << mi << endl;
}