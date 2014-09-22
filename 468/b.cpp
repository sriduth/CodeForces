#include <iostream>
#include <set>

using namespace std;

int main()
{
	int p,q,l,r;
	set< pair<int,int> > times;
	set< pair<int,int> > new_times;

	set<int> sol;
	cin >> p >> q >> l >> r;

	for(int i=0;i<p;i++)
	{
		int a,b;
		cin >> a >> b;
		times.insert(make_pair(a,b));
	}

	for(int i=0;i<q;i++)
	{
		int a,b;
		cin >> a >> b;
		new_times.insert(make_pair(a,b));
	}


	for(int i=l;i<=r;i++)
	{
		for(pair<int,int> X : times)
		{
			bool flag = false;
			for(pair<int,int> Y : new_times)
			{
				if((X.first <= Y.first+i && Y.first + i <= X.second)|| (X.first <= Y.second + i && X.second >= Y.second + i))
				{
					sol.insert(i);
					flag = true;
					break;
				}	
			}
			if(flag)
				break;
		}
	}

	

	cout << sol.size() << endl;
	return 0;
}