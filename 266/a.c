#include <stdio.h>
#include <stdlib.h>

int main()
{
	int T,i,count=0;
	scanf("%d",&T); 

	char *data = malloc(sizeof(char)*T);
	scanf("%s",data);

	for(i=0;i<T-1;i++)
	{
		/*
			Parse the string left to right.
			Insert a * for a character which is repated :

			e.x :

				(RR)GRR -> *(RG)RR -> *R(GR)R -> *RG(RR) -> *RG*R 
		*/

		if(data[i] == data[i+1])
		{
			data[i] = '*';
			count++;
		}
	}

	printf("%d\n",count);

	return 0;
}