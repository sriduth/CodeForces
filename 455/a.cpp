#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);

	int n,temp;

	long long sol[111111];

	map<int,int> count;
	vector< pair<int,int> > data;
	cin >> n;

	for(int i=0;i<n;i++)
	{
		cin >> temp;
		count[temp]++;
	}

	for(pair<int,int> p : count)
		data.push_back(p);
	

    for (int i = 0; i < (int)data.size(); i++) {
        int pr = i - 1;
        while (pr >= 0 && data[pr].first + 1 == data[i].first) pr--;
        if (pr == -1) sol[i] = 1LL * data[i].first * data[i].second;
        else sol[i] = sol[pr] + 1LL * data[i].first * data[i].second;
        if (i != 0)
            sol[i] = max(sol[i], sol[i - 1]);
    }

	cout << sol[data.size() - 1] << endl;

	cerr << "DP states : " << endl;
	for(int i=0;i<data.size();i++)
		cerr << sol[i] << endl;

	return 0;
}