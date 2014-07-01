#include <iostream>
#include <list>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);

	int S=0,D=0,T,temp;
	bool P;
	list<int> L;

	cin >> T;

	while(T--)
	{
		cin >> temp;
		L.push_back(temp);
	}

	P = true;
	while(!L.empty())
	{
		if(L.front() > L.back())
		{
			if(P == true)
			{
				S += L.front();
				P = false;
				L.pop_front();
			}
			else
			{	
				D += L.front();
				P = true;
				L.pop_front();
			}
		}
		else
		{
			if(P == true)
			{
				S += L.back();
				P = false;
				L.pop_back();
			}
			else
			{	
				D += L.back();
				P = true;
				L.pop_back();
			}
		}
	}

	cout << S << " " << D << endl;

	return 0;
}