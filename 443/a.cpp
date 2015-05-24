#include <cstdio>
#include <cctype>
#include <unordered_set>

using namespace std;

int main()
{
	unordered_set<char> set;
	char S;
	int size;


	while((S = getchar()) != '}')
	{
		if(isalpha(S))
			set.insert(S);
	}

	printf("%d",set.size());

	return 0;
}