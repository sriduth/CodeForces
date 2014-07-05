#include <iostream>
#include <string>

using namespace std;

int main()
{
	string stones,instructions;
	int l = 0;

	cin >> stones >> instructions;

	for(int i=0;i<instructions.length();i++)
	{
		/*
			Move ahead if possible else stay at l;
		*/
		if(stones[l] == instructions[i] && l < stones.length())
			l++;
	}

	cout << l+1 << endl;
	return 0;
}