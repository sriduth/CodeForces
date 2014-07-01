#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{	
	char *data, *output;
	int i;
	data = malloc(sizeof(char)*100);
	scanf("%s",data);

	// Destroy Vowels
	for(i=0;i<strlen(data);i++)
	{
		// -_- READ THE F*******G QUESTION ARRRGHHHH
		if(data[i] == 'A' || data[i] == 'a' || data[i] == 'E' || data[i] == 'e' || data[i] == 'I' || data[i] == 'i' || data[i] == 'O' || data[i] == 'o' || data[i] == 'U' || data[i] == 'u' || data[i] == 'Y' || data[i] == 'y')
			data[i] = '_';
	}

	for(i=0;i<strlen(data);i++)
	{
		if(data[i] != '_')
			printf(".%c",tolower(data[i]));
	}

	printf("\n");

	return 0;
}