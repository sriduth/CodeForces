#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *data = malloc(sizeof(char)*1001);
	scanf("%s",data);
	data[0] = toupper(data[0]);
	printf("%s\n",data);
	return 0;
}