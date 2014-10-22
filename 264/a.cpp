#include <cstdio>
#include <vector>

using namespace std;

int main()
{
	vector<int> a,b;

	char ch;

	int i=1;
	while((ch = getchar()) != '\n')
	{
		if(ch == 'l')
			a.push_back(i++);
		else
			b.push_back(i++);
	}

	for(i=0;i<b.size();i++)
		printf("%d\n",b[i]);

	for(i=a.size()-1;i >= 0;i--)
		printf("%d\n",a[i]);

	return 0;
}