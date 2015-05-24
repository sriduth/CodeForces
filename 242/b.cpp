#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main()
{
	int T,a,b,c;
	int lower=INT_MAX,upper= -1;
	int lo=INT_MAX,hi=-1;

	cin >> T;

	for(int i=0;i<T;i++)
	{
		cin >> a >> b;

		if(a <= lower && b >= upper)
		{
			lower = a;
			upper = b;
			c = i;
		}
		
		lo = min(lo,a);
		hi = max(hi,b);
	}

	if(lo == lower && hi == upper)
		cout << c+1 << endl;
	else
		cout << -1 << endl;


	return 0;
}