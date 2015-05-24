#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	long long int a,b;

	cin >> a >> b;

	long long sum = 0;

	for(int i=1;i<=a;i++)
	{
		sum += (((i*b+1)%1000000007)*(((b)*(b-1))%1000000007)/2)%1000000007;
		sum %= 1000000007 ;
	}

	cout << sum << endl;
	return 0;
}