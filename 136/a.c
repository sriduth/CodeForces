#include <stdio.h>
#include <stdlib.h>

int main()
{
	int T, *data,i,temp;
	scanf("%d",&T);

	data = malloc(sizeof(int)*T);

	/* 
		! Hash at input time only.
		! Using data[data[i]-1] = i+1; DOES NOT WORK.
	*/

	for(i=0;i<T;i++)
	{
		scanf("%d",&temp);
		data[temp-1] = i+1;
	}

	for(i=0;i<T;i++)
	{
		printf("%d ",data[i]);
	}

	free(data);

	return 0;
}