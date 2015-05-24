#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
		Also, sudden realization: register keyword is
		USELESS AAAA
	*/
	int T,variable = 0;
	char *cmd = malloc(sizeof(char)*3);

	scanf("%d",&T);
	while(T--)
	{
		scanf("%s",cmd);

		/*
			In the hope that -variable- or +variable+
			does not come as a test case
		*/

		if(cmd[0] == '-' || cmd[2] == '-')
			variable--;
		if(cmd[0] == '+' || cmd[2] == '+')
			variable++;
	}	

	printf("%d\n",variable);
	free(cmd);
	return 0;
}