#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int k;
	cin >> k;

	char mine[k][k]; 
	memset(mine,'D',sizeof(mine));

	for(int i=0;i<k/2;i++)
	{
		for(int j=0;j<k/2 - i;j++)
		{
			mine[i][j] = '*';
			mine[i][k - j - 1] = '*';
			mine[k-i-1][j] = '*';
			mine[k-i-1][k - j - 1] = '*';
		}
	}

	for(int i=0;i<k;i++)
	{
		for(int j=0;j<k;j++)
			cout << mine[i][j];
		cout << endl;
	}

	return 0;
}