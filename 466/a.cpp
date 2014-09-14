#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n,m,a,b;

	cin >> n >> m >> a >> b;

	int one_ride = n*a;

	if(m >= n && one_ride <= b)
	{
		cout << b << endl;
		return 0;
	}
	
	int spl_ride = 0;

	int c = n/m;

	spl_ride = c*b + a*(n%m);
	cout << min(one_ride,min(spl_ride,(c+1)*b)) << endl;
}