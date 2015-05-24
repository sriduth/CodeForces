#include <iostream>
#include <cstdio>
#include <unordered_set>

using namespace std;

int main()
{
	int T,K,count=0;
	int ch;
	unordered_set<int> s;

	cin >> T >> K;

	/*
		Get rid of \n after T and K
	*/
	ch = getchar();

	while(T--)
	{
		s.clear();
		while((ch = getchar()) != '\n')
		{
			int temp = ch - '0';
			if(temp <= K)
				s.insert(temp);
		}
		if(s.size() == K+1)
			count++;
	}

	cout << count << endl;
	return 0;
}