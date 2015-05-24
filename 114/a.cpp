#include <iostream>

using namespace std;

int main()
{
	int k,k_pow;

	cin >> k >> k_pow;

	if(k_pow < k_pow)
	{
		cout << "NO" << endl;
		return 0;
	}

	int count = 0;

	/*
		1 - Taking floor(log(k_pow)/log(k)) == ceil(log(k_pow)/log(k))
			will not work.
		2 - Increasing precision will also not work.
		3 - Ref : https://github.com/phrock/acm/blob/master/codeforces/114a/1.cpp
	*/
	while(k_pow != 1 && k_pow%k == 0)
	{
		k_pow /= k;
		count++;
	}

	if(k_pow == 1)
	{
		cout << "YES" << endl;
		cout << count - 1 << endl;
	}
	else
		cout << "NO" << endl;

	return 0;
}