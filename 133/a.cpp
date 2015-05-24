#include <iostream>
#include <string>

using namespace std;

int main()
{
	string data;
	int i;
	cin >> data;

	for(i=0;i<data.length();i++)
	{

		if(data[i] == 'H' || data[i] == 'Q' || data[i] == '9')
		{
			cout << "YES" << endl;
			i = -666;
			break;
		}
	}

	if(i != -666)
		cout << "NO" << endl;

	return 0;
}
