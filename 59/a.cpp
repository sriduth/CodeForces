#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string input;
	int l=0;

	cin >> input;

	for(char X : input)
	{
		if(islower(X))
			l++;
	}

	if(l >= input.length()-l)
	{
		transform(input.begin(),input.end(),input.begin(),::tolower);
	}
	else
	{
		transform(input.begin(),input.end(),input.begin(),::toupper);
	}

	cout << input;

	return 0;
}