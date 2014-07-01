#include <iostream>
#include <unordered_map>
#include <string>
#include <utility>

using namespace std;

int main()
{
	int T,score,iteration=0;
	/*
		use unpordered map else strings will be in sorted order.
	*/
	unordered_map<string, pair<int,int> > M;
	string temp;

	cin >> T;
	while(T--)
	{
		cin >> temp >> score;
		iteration++;
		M[temp] = make_pair(M[temp].first+ score,iteration);
	}

	score = -1;
	T = -1;

	cout << "Final Standings" << endl;
	for(pair<string ,pair<int,int> > Y : M )
	{
		cout << " " <<  Y.first << " " << Y.second.first << " " << Y.second.second << endl;
	}
	cout<< "Result :" << endl;
	for(pair<string, pair<int,int> > X : M)
	{
		if(X.second.first > score)
		{
			score = X.second.first;
			temp = X.first;
			T = X.second.second;
		}
		else if(X.second.first == score)
		{
			if(X.second.second < T)
			{
				temp = X.first;
				T = X.second.second;
			}
		}

	}


	cout << temp << endl;
	return 0;
}