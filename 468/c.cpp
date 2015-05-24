#include <iostream>

using namespace std;

int main()
{
	int T;

	cin >> T;

	if(T < 4)
	{
		cout << "NO" << endl;
		return 0;
	}
	if(T%2 == 0)
	{
		cout << "YES" << endl;
		for(int i=T;i!=4;i= i - 2)
		{
			cout << i << " - " << i-1 << " = " << 1 << endl;
			cout << "4 * 1 = 4" << endl;
		}

		cout << "1 * 2 = 2" << endl;
		cout << "3 * 4 = 12" << endl;
		cout << "12 * 2 = 24" << endl;

	}
	else
	{
		cout << "YES" << endl;
		for(int i=T;i!=5;i -= 2)
		{
			cout << i << " - " << i-1 << "  = " << 1 << endl;
			cout << "5 * 1 = 5" << endl;
		}

		cout << "5 - 1 = 4" << endl;
		cout << "4 - 2 = 2" << endl;
		cout << "2 * 3 = 6" << endl;
		cout << "6 * 4 = 24" << endl;
	}
	return 0;
}