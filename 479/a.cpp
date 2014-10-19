#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a,b,c;

	cin >> a >> b >> c;

	int sol[4];

	sol[0] = a*b*c;
	sol[1] = a+b+c;
	sol[2] = (a+b)*c;
	sol[3] = a*(b+c);

	sort(sol,sol+4);

	cout << sol[3] << endl;
}