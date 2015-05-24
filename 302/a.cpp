#include <iostream>

using namespace std;

int main()
{
	cin.sync_with_std(false);

	int length,queries,count_ones=0,count_mones=0;

	cin >> length;

	int ones[length];

	cin >> ones[0];

	if(ones[0] == 1)
		ones[0] = 1;
	else
		ones[0] = 0;

	for(int i=1;i<length;i++)
	{
		cin >> ones[i];
		if(ones[i] == 1)
		{
			count_ones++;
			ones[i] = ones[i-1] + 1; 
		}
		else
		{
			ones[i] = ones[i-1];
			count_mones++;
		}
	}
}