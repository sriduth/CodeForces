#include <cstdio>

using namespace std;

int worm_pile[1000001];
int main()
{
	int piles;

	scanf("%d",&piles);
	int mark = 0;
	for(int i=0;i<piles;i++)
	{
		int pile;
		scanf("%d",&pile);
		for(int j=0;j<pile;j++)
			worm_pile[mark++] = i;
	}

	scanf("%d",&mark);
	for(int i=0;i<mark;i++)
	{
		scanf("%d",&piles);
		printf("%d\n",worm_pile[piles-1]+1);
	}
	return 0;
}
