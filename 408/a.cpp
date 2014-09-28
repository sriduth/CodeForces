#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);
	int counters,min_cost = INT_MAX;

	cin >> counters;

	int people[counters];

	for(int i=0;i<counters;i++)
		cin >> people[i];

	for(int i=0;i<counters;i++)
	{
		int checkout_cost = 0;
		for(int j=0;j<people[i];j++)
		{
			int temp;
			cin >> temp;

			checkout_cost += temp*5 + 15;
		}
		min_cost = min(min_cost,checkout_cost);
	}

	cout << min_cost << endl;

	return 0;
}
