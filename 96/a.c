#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *data = malloc(sizeof(char)*100);
	int i;
	scanf("%s",data);

	if(strlen(data) < 7)
	{
		printf("NO\n");
		i = -666;
	}

	else
	{
		for(i=0;i<=strlen(data)-7;i++)
		{
			if(data[i] == data[i+1] && data[i+1] == data[i+2] && data[i+2] == data[i+3]&& data[i+3] == data[i+4] && data[i+4] == data[i+5] && data[i+5] == data[i+6])
			{ 
				printf("YES\n");
				i = -666;
				break;
			}
		}
	}

	if(i != -666)
		printf("NO\n");

	return 0;
}