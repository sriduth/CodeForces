#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

	long long n,m;
	cin >> n >> m;

	long long k = n/m, r = n%m;

	long long Min = r*k*(k + 1)/2 + (m - r)*k*(k - 1)/2, Max = (n - m)*(n - m + 1)/2;
	
	cout<<Min<<' '<<Max<<endl;

	return 0;
}