#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *A = malloc(sizeof(char)*100);
	char *B = malloc(sizeof(char)*100);
	scanf("%s%s",A,B);

	int i,a,b;

	for(i=0;i<strlen(A);i++)
	{
		a = tolower(A[i]);
		b = tolower(B[i]);

		if( a > b)
		{			
			printf("1\n");
			i = -666;
			break;
		}	
		else if( a < b)
		{
			printf("-1\n");
			i = -666;
			break;
		}	
	}

	if(i != -666)
		printf("0\n");

	return 0;
}