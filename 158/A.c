#include <stdio.h>
#include <stdlib.h>

int main()
{
	int T,Q, *scores,i,count=0;
	scanf("%d%d",&T,&Q);
	scores = malloc(sizeof(int)*T);

	for(i=0;i<T;i++)
	{
		scanf("%d",&scores[i]);
	}

	Q = scores[Q-1];

	for(i=0;i<T;i++)
	{
		if(scores[i] >= Q && scores[i] != 0)
			count++;
	}

	printf("%d\n",count);
	return 0;

}