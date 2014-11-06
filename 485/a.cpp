#include <iostream>
using namespace std;

int main()
{
	int a,b;

	cin >> a >> b;

	if(a%b == 0)
	{
		cout << "Yes" << endl;
		return 0;
	}
	
	while(b%2 == 0)
		b /=2;

	if(a%b == 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}