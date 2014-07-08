#include <iostream>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);
	int l=0,r=0,temp;
	int T;

	cin >> T;

	/*
		Do a little preprocessing.
		Economy of flipping open doors: l and r
		Economy of flipping closed doors : T-l and T-r
	*/
		
	for(int i=0;i<T;i++)
	{
		cin >> temp;

		if(temp == 0)
			l++;

		cin >> temp;

		if(temp == 0)
			r++;
	}

	temp = 0;
	if(T-l > l)
		temp += l;
	else
		temp += T-l;

	if(T-r > r)
		temp += r;
	else
		temp += T-l;

	cout << temp << endl;

	return 0;
}
