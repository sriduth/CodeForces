#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a1,a2,a3;
	int b1,b2,b3;
	int cups=0,medals=0;
	int shelves;

	cin >> a1 >> a2 >> a3;
	cin >> b1 >> b2 >> b3;
	cin >> shelves;

	cups = a1 + a2 + a3;
	medals = b1 + b2 + b3;

	if(cups%5 == 0)
		shelves -= cups/5;
	else
	{
		shelves -= ((cups-cups%5)/5 + 1);
	}

 
	if(medals%10 == 0)
		shelves -= medals/10;
	else
	{
		shelves -= ((medals-medals%10)/10 + 1);
	}

	if(shelves >= 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}