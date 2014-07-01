#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	int a=0,b=0,c=0,i,k=0;

	/* Braces around ch = getchar() ! DO NOT FORGET*/
	while((ch = getchar()) != '\n' )
	{
		i = ch - '0';
		if(i == 1)
			a++;
		if(i == 2)
			b++;
		if(i == 3)
			c++;
	}

	k = a+b+c-1;

	for(i=0;i<a;i++)
	{
		printf("1");
		if(k)
		{
			printf("+");
			k--;
		}
	}
	for(i=0;i<b;i++)
	{
		printf("2");
		if(k)
		{
			printf("+");
			k--;
		}
	}
	for(i=0;i<c;i++)
	{
		printf("3");
		if(k)
		{
			printf("+");
			k--;
		}
	}

	return 0;
}