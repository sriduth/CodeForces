#include <iostream>
#include <string>

using namespace std;

int main()
{
	string pattern;

	cin >> pattern;

	int dp[pattern.length()];
	int T,a,b;

	dp[1] = 0;

	/*
		Memoize the previous number of
		like pairs and move ahead.
	*/
	for(int i=1;i<pattern.length();i++)
	{
		if(pattern[i] == pattern[i-1])
		{
			dp[i+1] = dp[i] + 1;
		}
		else
		{
			dp[i+1] = dp[i];
		}
	}

	cin >> T;

	while(T--)
	{
		cin >> a >> b;
		cout << dp[b] - dp[a] << endl;
	}

	return 0;
}