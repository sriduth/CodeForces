#include <iostream>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);

	int T,i,j,x,y,sol=0;
	bool a,b,c,d;
	cin >> T;
	int X[T];
	int Y[T];

	for(i=0;i<T;i++)
	{
		cin >> X[i] >> Y[i];
	}

	for(i=0;i<T;i++)
	{
		x = X[i];
		y = Y[i];

		a=false;
		b=false;
		c=false;
		d=false;

		for(j=0;j<T;j++)
		{
			if(X[j] == x && Y[j] > y)
				a=true;
			else if(X[j] == x && Y[j] < y)
				b=true;
			else if(Y[j] == y && X[j] > x)
				c=true;
			else if(Y[j] == y && X[j] < x)
				d=true;
			
			if(a&&b&&c&&d)
			{
				sol++;
				break;
			}
		}
	}

	cout << sol << endl;

	return 0;
}