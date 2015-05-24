#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int T,moves=0,i=1;
	scanf("%d",&T);

	moves = T;

	while (T--)
	{
		moves += T*i;
		i++;
	}
	
	printf("%d\n",moves);

	return 0;
}