#include <unordered_map>
#include <cstdio>
#include <utility>

using namespace std;

int main()
{
	unordered_map<char,int> bucket;
	char ch;

	while((ch = getchar()) != '\n')
		bucket[ch]++;

	while((ch = getchar()) != '\n')
		bucket[ch]++;

	while((ch = getchar()) != '\n')
		bucket[ch]--;

	for(pair<char,int> X : bucket)
	{
		if(X.second == 0)
			ch = '~';
		else
		{
			ch = '*';
			break;
		}
	}

	if(ch == '~')
		printf("YES\n");
	else
		printf("NO\n");

	
	return 0;
}