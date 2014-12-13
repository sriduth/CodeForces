#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);

	int T;
	vector<int> a,b,c;

	cin >> T;

	for(int i=1;i<=T;i++)
	{
		int code;
		cin >> code;

		if(code == 1)
			a.push_back(i);
		if(code == 2)
			b.push_back(i);
		if(code == 3)
			c.push_back(i);
	}

	int size = 0;

	if(a.size() && b.size() && c.size() )
		size = min(a.size(),min(b.size(),c.size()));

	cout << size << endl;

	for(int i=0;i<size;i++)
		cout << a[i] << " " << b[i] << " " << c[i] << endl;

	return 0;
}