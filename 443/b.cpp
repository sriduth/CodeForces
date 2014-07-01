#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	int T;
	char Z[2];
	unordered_map<string,int> M;
	unordered_map<char,int> S;
	cin >> T;

	while(T--)
	{
		cin >> Z;
		M[Z] += 1;
	}

	for(auto X : M)
	{
		S[X.first[1]] += X.second;
	}

	for(auto X : S)
	{
		cout << X.first << " " << X.second << endl;
	}
	return 0;
}