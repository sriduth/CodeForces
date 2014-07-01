#include <stdio.h>
#include <stdlib.h>

int main()
{
	int T,e=2,i;
	int lucky[] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
	scanf("%d",&T);

	for(i=0;i<14;i++)
	{
		if(T == lucky[i])
		{
			e = 0;
			printf("YES\n");
			break;
		}
	}

	while(e)
	{
		if(T%e == 0 && e <= T)
		{
			for(i=0;i<14;i++)
			{
				if(T/e == lucky[i])
				{
					e = 0;
					printf("YES\n");
					break;
				}
			}
		}
		
		if(e > T)
			break; 

		if (e != 0)
			e += 1;
	}

	if(e != 0)
		printf("NO\n");

}