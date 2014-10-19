#include <iostream>

using namespace std;

int main()
{
	int value = 10;
	cin >> value;

	if (value > 21)
	{
		cout << 0 << endl;
		return 0;
	}

	if(value <= 10)
	{
		cout << 0 << endl;
		return 0;
	}

	else
	{
		value -= 10;
		
		if(value == 1 || value == 11)
			cout << "4" << endl;
		else if (value == 10)
			cout << "15" << endl;
		else 
			cout << "4" << endl;
	}

	return 0;
}