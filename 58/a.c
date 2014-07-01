#include <stdio.h>

int main()
{
	char data[] = {'h','e','l','l','o'};
	char ch;
	int pointer=0;

	while((ch = getchar()) != '\n')
	{
		if(ch == data[pointer])
			pointer++;
	}

	/* Equals FIVE */
	if(pointer == 5)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}