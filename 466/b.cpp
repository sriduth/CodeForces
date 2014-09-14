#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	long long students,a,b;

	cin >> students >> a >> b;

	if((a*b)/students >= 6)
	{
		cout << a*b << endl << a << " " << b << endl;
	}
	else
	{
		int op1 = a*max(b,ceil((6*students)/a));
		int op2 = b*max(ceil((6*students)/b),a);

		if(op1 >= op2)
		{
			cout << op1 << endl;
			cout << a << " " << max(ceil((6*students)/a),b);
		}
		else
		{
			cout << op2 << endl;
			cout << b << " " << max(a,ceil((6*students)/b));
		}
	}
	return 0;
}