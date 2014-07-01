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
	return 0;
}