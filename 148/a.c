#include <stdio.h>
#include <stdlib.h>

int main()
{
	int k,l,m,n,d,sol=0,i;
	scanf("%d%d%d%d%d",&k,&l,&m,&n,&d);

	if(k == 1)
		printf("%d\n",d);

	else
	{
		for(i=1;i<=d;i++)
		{
			if(i%k==0||i%l==0||i%m==0||i%n==0)
				sol++;
		}

		printf("%d\n",sol);
	}
	
	return 0;
}