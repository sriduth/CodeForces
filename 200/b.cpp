#include <iostream>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);
	cout.precision(15);
	int T;
	float drink,cocktail=0;
	cin >> T;

	for(int i=0;i<T;i++)
	{
		cin >> drink;
		cocktail += drink;
	}

	cout << cocktail/T << endl;
	return 0;
}