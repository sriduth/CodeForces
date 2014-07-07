#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int B,P,temp;

	cin >> B >> P;

	int lights[B];
	
	/*
		lol memset()
	*/
	fill_n(lights,B,0);

	/*
		Mark down all numbers from behind.
	*/
	while(P--)
	{	
		cin >> temp;
		for(int i = B-1;i >= temp-1 ;i--)
		{
			if(lights[i] == 0)
				lights[i] = temp;
		}
	}

	for(int i=0;i<B;i++)
		cout << lights[i] << " ";

	return 0;
}