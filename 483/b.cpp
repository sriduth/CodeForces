#include <iostream>

using namespace std;

int main()
{
	int a,b,x,y;

	cin >> a >> b >> x >> y;

	int upper_lim = 0;
	while(true)
	{
		upper_lim++;
		if(upper_lim%x != 0 && a!=0)
		{
			cout << upper_lim << "Goes to A" << endl; 
			a--;
			if(a==0 && b ==0)
				break;
			else
				continue;
		}
		if(upper_lim%y != 0 && b != 0)
		{
			cout << upper_lim << "Goes to B" << endl; 			
			b--;
			if(a==0 && b ==0)
				break;
			else
				continue;
		}

		if(a==0 && b ==0)
			break;
	}

	cout << upper_lim << endl;
	return 0;
}