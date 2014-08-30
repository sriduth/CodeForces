#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{
	int alchemy[5];
	for(int i=0;i<5;i++)
		cin >> alchemy[i];

	int min_gold = INT_MAX;

	min_gold = min(min_gold,alchemy[0]);
	min_gold = min(min_gold,alchemy[1]);
	min_gold = min(min_gold,alchemy[2]/2);
	min_gold = min(min_gold,alchemy[3]/7);
	min_gold = min(min_gold,alchemy[4]/4);

	cout << min_gold << endl;

	return 0;
}