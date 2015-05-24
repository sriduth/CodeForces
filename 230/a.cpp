#include <iostream>
#include <map>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);

	int S,N,HP,B;
	map<int,int> M;
	map<int,int>::iterator it;

	cin >> S >> N;

	while(N--)
	{
		//Nerve gear loading dragons.
		cin >> HP >> B;
		M[HP] += B;
	}

	it = M.begin();
	while(it != M.end())
	{
		// KIRITO CARELESS!
		if(it->first < S)
			S += it->second;
		else
		{
			S = -1;
			cout << "NO" << endl;
			break;
		}
		it++;
	}

	if(S != -1)
		cout << "YES" << endl;
	/*
	  \(^.^)/
	  Now for gun gale online.
	*/


	return 0;
}

