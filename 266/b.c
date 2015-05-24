#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int N,T,i,j;

	scanf("%d%d",&N,&T);
	char *queue = malloc(sizeof(char)*N);
	scanf("%s",queue);

	for(j=0;j<T;j++)
	{
		for(i=0;i<(N-1);)
		{
			/*
				Compare pairs of elements, if BG pair is found,
				swap, goto next pair,else consider next two elements.
			*/
			if(queue[i] == 'B' && queue[i+1] == 'G')
			{
				queue[i] = 'G';
				queue[i+1] = 'B';
				i += 2;
			}
			else
				i++;
		}
	}	

	printf("%s",queue);

	return 0;
}