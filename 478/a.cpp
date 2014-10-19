#include <iostream>

using namespace std;

int main()
{
	int a[5];

	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];

	a[0] += a[1] + a[2] +a[3] +a[4];

	if(a[0]%5 == 0 && a[0] != 0)
		cout << a[0]/5 << endl;
	else
		cout << -1 << endl;
	return 0;
}