#include <iostream>

using namespace std;

int main()
{
	int n,k;
	cin >> n >> k;

	if(k == 1)
	{
		for(int i=1;i<=n;i++)
			cout << i << " ";
		
		return 0;
	}

	int a = n;
	int b =1;

	int z = k;
	int i =0;
	if(k%2 == 0)
		z /= 2;
	else
		z = (z-1)/2;

	while(z--)
	{
		cout << a-- << " " << b++ << " ";
		i+=2;
	}
	

	if(k%2 == 0)
	{
		for(int j=i;j<n;j++)
			cout << b++ <<" ";		
	}

	else
	{
		for(int j=i;j<n;j++)
			cout << a-- << " ";
	}
	return 0;
}