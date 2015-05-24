#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *data, *temp;
	int i;
	data = malloc(sizeof(char)*100);
	temp = malloc(sizeof(char)*100);

	scanf("%s",data);

	strcpy(temp,data); // Hmm EOL perhaps? Very Strange
	
	for(i=0;data[i]!='\0';i++)
	{
		temp[i] = toupper(data[i]);
	}


	if(strcmp(data,temp) == 0)
	{
		// Convert everything to small case
		for(i=0;i<strlen(data);i++)
		{
			printf("%c",tolower(data[i]));
		}

		printf("\n");

		i = -666; // \m/
	}

	temp[0] = tolower(temp[0]);

	if(strcmp(data,temp) == 0)
	{
		// First is caps everyting else small
		printf("%c",toupper(data[0]));
		for(i=1;i<strlen(data);i++)
		{
			printf("%c",tolower(data[i])) ;
		}
		printf("\n");

		i = -666;
	}

	if(i != -666)
	{
		printf("%s",data);
	}

	free(data);
	free(temp);
	
	return 0;
}