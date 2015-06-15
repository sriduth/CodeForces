#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int k,n,w;

	cin >> k >> n >> w;

	k = k*(w*(w+1))/2;

	w = (n - k > 0) ?  0 : abs(n - k);

	cout << w << endl;
}