#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	int luck=0;

	/* Count the 7's and 4's. */
	while((ch = getchar()) != '\n')
	{
		if(ch == '4' || ch == '7')
			luck++;
	}

	/* Check if count is lucky. */
	while(luck)
	{
		if(luck%10 == 4 || luck%10 == 7)
		{
			ch = 'L';
			luck /= 10;
		}
		else
			break;
	}

	if(ch == 'L')
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}