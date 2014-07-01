#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);

	int T,sum,temp=0;
	unordered_map<int,int> M;

	cin >> T;

	for(int i=0;i<T;i++)
	{
		cin >> temp;
		M[temp]++;
		sum += temp;
	}

	temp = 0;

	// Check if even and subtract
	for(auto X : M)
	{
		if( (sum - X.first)%2 == 0 )
			temp += X.second;
	}

	cout << temp << endl;

	return 0;
}