#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);
	int mines,
		min_x = INT_MAX,
		min_y = INT_MAX,
		max_x = -INT_MAX,
		max_y = -INT_MAX;

	cin >> mines;
	long long sol = 0;
	while(mines--)
	{
		int x,y;

		cin >> x >> y;

		min_x = min(min_x,x);
		max_x = max(max_x,x);

		min_y = min(min_y,y);
		max_y = max(max_y,y);
	}

	int a = abs(max_y - min_y);
	int b = abs(max_x - min_x);

	int mx = max(a,b);

	sol = (long long)mx*mx;

	cout << sol << endl;
	return 0;
}