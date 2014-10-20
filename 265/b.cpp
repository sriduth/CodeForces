#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;

	cin >> n ;

	int current = 0,prev = 0,sum=0;

	/*
		current - prev : Cost of climbing up or down.
		+2 to eat nuts at the top of current and previous tree.
	 */
	for(int i=0;i<n;i++)
	{
		cin >> current;
		sum += abs(current - prev) + 2;
		prev = current;
	}

	/* 
		Because @ the 1st iteratoin of the loop, we eat 2 nuts when there
		is only one tree.
	*/
	sum -= 1;

	cout << sum << endl;

	return 0;
}