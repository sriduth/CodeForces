#include <iostream>

int gcd(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = a % b;

        a = b;
        b = temp;
    }
    return a;
}

using namespace std;

/*
	Initial Appoach was correct
*/
int main()
{
	int n,k,a,b;
	long count;

	cin >> n >> k >> a >> b;

	// Missed gcd
	// kudos : https://github.com/DionysiosB/CodeForces/blob/master/340A-TheWall.cpp
	long z = (n*k)/gcd(n,k);

	cout << b/z - (a-1)/z << endl;
	return 0;
}