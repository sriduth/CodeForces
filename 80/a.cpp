#include <iostream>

using namespace std;

int main()
{
	/*
		Given constraint : n and m (2 ≤ n < m ≤ 50)
		Better to write 50 primes into code than seive them out.
	*/
	int primes [] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229};
	int lower,upper;

	/*
		In case lower is a composite number.
	*/
	bool flag = false;

	cin >> lower >> upper;

	for(int i=0;i<49;i++)
	{
		if(primes[i] == lower)
		{
			flag = true;
			if(primes[i+1] == upper)
			{
				cout << "YES" << endl;
				break;
			}
			else
			{
				cout << "NO" << endl;
				break;
			}
		}
	}

	if(!flag)
		cout << "NO" << endl;

	return 0;
}