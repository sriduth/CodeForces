#include <stdio.h>
#include <stdlib.h>

int main()
{
	int T,i;
	int primes [] = {2,3,5,7,11,13};
	scanf("%d",&T);

	i=0;
	while(T != 1)
	{
		if(T%primes[i] == 0)
		{
			T = T/primes[i];
			printf("%d ",primes[i]);
		}
		else
			i++;
	}
	return 0;
}

// Not submitted , solution expected in some esoteric toungue -_- hah