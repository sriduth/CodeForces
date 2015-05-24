#include <iostream>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);
	
	long int sol,the_dead=0;
	int the_survivors=0;

	cin >> sol;

	/*
		Problem can be reduces to this :
		n pairs of soldoers where each pair consists of
		2 soldiers on each side. Count casualities for each such pair,
		not forgetting to send the survivors back to war.
		
		If a pair of soldiers remains, one musk kill the other.
	*/

	while(sol != 0 && sol != 1)
	{
		the_survivors = sol%2;
		sol = (sol-sol%2)/2;
		the_dead += sol*3;

		sol = the_survivors;
	}

	cout << the_dead  + the_survivors << endl;

	return 0;
}