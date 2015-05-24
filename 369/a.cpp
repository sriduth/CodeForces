#include <iostream>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);
	int D,B,P,wash=0;
	char dish;

	cin >> D >> B >> P;

	while(D--)
	{
		cin >> dish;
		if(dish == '1')
		{
			if(B == 0)
			{
				wash++;
			}
			else if( B > 0)
			{
				B--;
			}


		}
		else
		{
			if(P > 0)
			{
				P--;
			}
			else if (P == 0 && B > 0)
			{
				B--;
			}
			else if(P == 0 && B == 0)
			{
				wash ++;
			}
		}
	}

	cout << wash << endl;

	return 0;	
}

