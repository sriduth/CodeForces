#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);

	int T,count=0;
	bool temp;
	vector<int> dat;

	cin >> T;
	for(int i=0;i<T;i++)
	{
		cin >> temp;
		if(temp)
		{
			dat.push_back(i);
			count++;
		}
	}

	if(count == 0)
	{
		cout << 0 << endl;
		return 0;
	}
	for(int i=0;i<dat.size()-1;i++)
	{
		if(dat[i+1] - dat[i] > 1)
			count++;
	}

	cout << count << endl;
}