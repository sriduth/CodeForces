#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	long long a[3];
	for (int i = 0; i < 3; i++)
		cin >> a[i];

	sort(a, a + 3);
	reverse(a, a + 3);

	long long r = a[0], g = a[1], b = a[2];
	if ((g + b) * 2 >= r)
		cout << (r + g + b) / 3 << endl;
	else
		cout << g + b << endl;

	return 0;
}