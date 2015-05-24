#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a,b,c;

	cin >> a >> b >> c;

	double deter = sqrt(b*b - 4*a*c);

	double r1 =  (deter - b)/(2*a);
	double r2 = (-deter - b)/(2*a);

	if(r1 == r2)
		cout << r1 << endl;
	else
		cout << r1 << " " << r2 << endl;
}