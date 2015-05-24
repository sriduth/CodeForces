#include <iostream>
using namespace std;

int main()
{
	int 
		cubes,
		count=0,
		level = 0;

	cin >> cubes;

	while(count <= cubes) 
	{
		level++;
		count += level*(level+1)/2;
	}

	cout << level-1 << endl;

	return 0;
}