#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int T;
	char *data;
	data = malloc(sizeof(char)*100);
	scanf("%d",&T);
	while(T--)
	{
		scanf("%s",data);
		if(strlen(data) <= 10) // -_- STRICTLY MORE
		{
			printf("%s\n",data);		
		}
		else if(strlen(data) > 10) // (-_-)" 
		{
			printf("%c%d%c\n",data[0],strlen(data)-2,data[strlen(data)-1]);
		}
	}
	return 0;
}


