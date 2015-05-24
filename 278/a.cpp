#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);

	int S,start,end,total_cost=0,path_cost=0;
	vector<int> V;

	cin >> S;

	while(S--)
	{
		// Using start as temporary variable
		cin >> start;
		V.push_back(start);
		total_cost += start;
	}

	cin >> start >> end;

	for(S=min(start,end)-1;S<max(start,end)-1;S++)
	{
		path_cost += V[S];
	}
	total_cost -= path_cost;	

	cout << min(total_cost,path_cost) << endl;
	return 0;
}