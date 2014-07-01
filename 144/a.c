#include <stdio.h>
#include <stdlib.h>

int main()
{
	int T,min=100,max=-1,min_index,max_index; // Main Variables
	int i,temp; // Utility
	scanf("%d",&T);

	for(i=0;i<T;i++)
	{
		scanf("%d",&temp);
		if(temp <= min)
		{
			min_index = i;
			min = temp;
		}
		if(temp > max)
		{
			max_index = i;
			max = temp;
		}
	}

	if(min_index < max_index)
		/*
			Here, we take the largest # and bring it to the first place,
			pushing the location of the last occurrence of the smallest # by one.
		*/	
		printf("%d\n",(T-1)-(min_index+1)+max_index);
	else
		printf("%d\n",(T-1)-min_index+max_index);

	return 0;
}