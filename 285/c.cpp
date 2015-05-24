#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int permutation_length;

	cin >> permutation_length;

	int perm[permutation_length];

	for(int i=0;i<permutation_length;i++)
		cin >> perm[i];

	sort(perm,perm+permutation_length);

	long long count = 0;

	for(int i=0;i<permutation_length;i++)
		count += abs(i+1 - perm[i]);

	cout << count << endl;
	return 0;
}