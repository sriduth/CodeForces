#include <stdio.h>
#include <stdlib.h>

/*
	Comparison function make const arguments to 
	prevent any pointer changes.
*/
int compare(const void *a,const void *b)
{
	return ( *(int*)a  - *(int*)b);
}


int main()
{
	int T,i, *data,sum=0,count=0;
	scanf("%d",&T);

	data = malloc(sizeof(int)*T);

	/*
		Calculate sum of all inputs.
	*/
	for(i=0;i<T;i++)
	{
		scanf("%d",&data[i]);
		sum += data[i];
	}

	qsort(data,T,sizeof(int),compare);

	i = 0;

	/*
		Split the coins, using the sum of all coins,
		and the largest denominations.
	*/
	while(i <= (sum-i))
	{
		/*
			T-- works on desktop but not in GNU C4.
		*/
		i += data[--T];
		count++;
	}

	printf("%d\n",count);

	return 0;
}