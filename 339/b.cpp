#include <iostream>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);

	// F**K
	long long H,T,temp,C=1,distance=0;

	cin >> H >> T;

	while(T--)
	{
		cin >> temp;

		// Move ahead
		if(temp >= C)
		{
			distance += temp - C;
			C = temp;
		}

		// Move ahead and rotate
		else
		{
			distance += H - C;
			distance += temp;
			C = temp;
		}

	}

	cout << distance << endl;

	return 0;
}