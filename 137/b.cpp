#include <iostream>

using namespace std;

/*
	Geting very rusty.
	10 tries. Need to start over again.
*/
int main()
{
	int T,temp;
	cin >> T;

	bool data[T];
	int count=0;

	for(int i=0;i<T;i++)
		data[i] = false;

	/*
		If we get the number twice or more times, we have extra numbers in the permutation to be replaced.
		If we get a number outside the permutation.We must change that also.
	*/
	for(int i=0;i<T;i++)
	{
		cin >> temp;
		if(temp <= T)
		{
			if(!data[temp-1])
				data[temp-1] = true;
			else
				count++;
		}
		else
			count++;
	}

	cout << count << endl;
	return 0;
}