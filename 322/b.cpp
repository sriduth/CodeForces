#include <iostream>
using namespace std;

int main()
{
	cin.sync_with_stdio(false);
	int r,g,b;
	int boquets = 0;

	cin >> r >> g >> b;

	/*
		Calculate number of boquets of third flower first.
		else we miss possible cases.
	 */
	while(r > 0 && g > 0 && b > 0)
	{
		boquets++;
		--r;
		--g;
		--b;
	}

	boquets += (r-r%3)/3 + (g-g%3)/3 + (b-b%3)/3;
	r = r%3;
	g = g%3;
	b = b%3;

	cout << boquets << endl;
	return 0;
}