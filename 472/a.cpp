#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	if(a%2 == 0)
	{
		cout << a - 8 << " " << 8 << endl;
		return 0;
	}
	else
		cout << a - 9 << " " << 9 << endl;

	return 0;
}