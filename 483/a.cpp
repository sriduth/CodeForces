#include <iostream>
#include <climits>

using namespace std;

long int  gcd(long int a, long int b)
{
    long int temp;
    while (b != 0)
    {
        temp = a % b;

        a = b;
        b = temp;
    }
    return a;
}

int main()
{
	long int x,y;

	cin >> x >> y;

	for(long int i=x;i<=y;i++)
	{
		for(long int j=i+1;j<=y;j++)
		{
			if(gcd(i,j) == 1)
			{
				for(long int k=j+1;k<=y;k++)
				{
					if(gcd(j,k) == 1)
					{
						if(gcd(i,k) != 1)
						{
							cout << i << " " << j << " " << k << endl;
							return 0;							
						}
					}
				}
			}
		}
	}

	cout << -1 << endl;
	return 0;
}