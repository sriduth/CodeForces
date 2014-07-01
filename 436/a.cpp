#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);

	int T,J,h,m,count=0,i,f=-666;
	bool type,current,flag;
	vector< pair<bool, pair<int,int> > > D;
	vector< pair<bool, pair<int,int> > > :: iterator X;
	
	cin >> T >> J;

	for(i=0;i<T;i++)
	{
		cin >> type >> h >> m;

		if(type != f && J >= h)
		{
			count++;
			J += m;
			f = type;
		}
		else
			D.push_back(make_pair(type,make_pair(h,m)));
	}

	current = type;

	T = D.size();
	i = (T*(T-1))/2;

	// no hope :(
	while(i--)
	{	
		flag = false;
		for(X=D.begin();X!=D.end();++X)
		{
			if(X->second.first <= J && X->first != current )
			{
				J += X->second.second;
				current = X->first;
				X->second.first = -1;
				count++;
				T--;
				flag = true;
			}
			if(T == 0)
			{
				flag = false;
				i=0;
				break;
			}
		}

		if(T == 0 && flag == false)
			break;
	}

	cout << count << endl;

	return 0;
}