#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char fl='~';
	char ch = '*';
	int N,count=0;
	
	scanf("%d",&N);

	/*
		N = N*3 to accept 10\n or 01\n
	*/
	N = N*3;

	while(N--)
	{
		ch = getchar();
		if(ch == '1' || ch == '0')
		{
			if(ch != fl)
			/*
				A simple FSM.
			*/
					fl = ch;
			else
			{
				count++;
			}
		}
	}

	printf("%d\n",count+1);
	
	return 0;
}