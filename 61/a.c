#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	char *one = malloc(sizeof(char)*100);
	char *two = malloc(sizeof(char)*100);

	scanf("%s%s",one,two);
	
	while(one[i] != '\0')
	{
		if(one[i] == two[i])
			printf("0");
		else
			printf("1");

		i++;
	}
}