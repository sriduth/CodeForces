#include <iostream>

using namespace std;

int main()
{
	int T,i,sum=0,temp,x=0,y=0;

	cin >> T;
	if(T%2 != 0)
	{
		while(T--)
		{
			cin >> temp;
			sum += temp;
		}

		cout << sum;
	}

	else
	{
		for(i=1;i<=T;i++)
		{
			cin >> temp;
			sum += temp;
			if(i%2==0)
				x+=temp;
			else
				y+=temp;
		}

		if(T > 4)
			cout << max(max(x,y),sum) << endl;
		else
			cout << sum << endl;
	}
	return 0;
}