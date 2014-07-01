#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{
	// Careful with fun if fun =0, max() will never process -ve numbers
	int n,k,f,t,fun=INT_MIN;

	cin >> n >> k;

	while(n--)
	{
		cin >> f >> t;

		if(t > k)
		{
			f = f - (t - k);
		}
		fun = max(f,fun);
	}

	cout << fun << endl;

	return 0;
}