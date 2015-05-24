/*
	Consumes less memory than the C++0x solution.
	Same time taken.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i,count=0;
	char ch;

	/*
		mark used characters.
	*/
	char *bucket = malloc(sizeof(char)*26);
	memset(bucket,'~',26);

	while((ch =getchar()) !='\n')
	{
		bucket[ch-97] = '*';
	}

	/*
		Count # of unique characters.
	*/
	for(i=0;i<26;i++)
	{
		if(bucket[i] == '*')
			count++;
	}

	/*
		Presto!.
	*/
	if(count%2 == 0)
		printf("CHAT WITH HER!\n");
	else
		printf("IGNORE HIM!\n");

	return 0;

}
