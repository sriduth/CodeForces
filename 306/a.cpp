#include <iostream>
#include <string>

using namespace std;

int main()
{
	string in;

	cin >> in;

	if(in.length() <= 3)
	{
		cout << "NO" << endl;
		return 0;
	}
	else if(in.length() == 4)
	{
		if(in == "ABBA" || in == "BAAB")
		{
			cout << "YES" << endl; 
			return 0;
		}
		else 
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	for(int i=0;i<in.length()-2;i++) 
	{		
		if(s[i] == 'A' && s[i+1] == 'B') 
		{

		}
		else if(s[i] == 'B' && s[i+1] == 'A')
		{

		}
	}

	return 0;
}