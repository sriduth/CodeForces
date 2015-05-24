#include <iostream>

using namespace std;

int main()
{
	int T,i=1;

	cin >> T;

	T = T*T;

	while(i < T)
	{
		cout << i++ << " " << T-- << endl;
	}

	return 0;
}