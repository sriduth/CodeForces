#include <iostream>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);

	int T,a,b;
	bool flippable=false;
	int u_sum=0,d_sum=0;

	cin >> T;

	while(T--)
	{
		cin >> a >> b;

		if((a%2) != (b%2))
			flippable = true;

		u_sum += a;
		d_sum += b;
	}

	if((u_sum%2) == (d_sum%2))
	{
		if(u_sum%2 == 0)
			cout << "0" << endl;
		else if(flippable)
			cout << "1" << endl;
		else
			cout << "-1" << endl;
	}
	else
		cout << "-1" << endl;

	return 0;
}