#include <stdio.h>

int main()

{
	// Since weights are in the range of 1 to 100, we can precalculate the outputs!
	char data[] = {'N','N','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y','N','Y'};

	int num;
	
	scanf("%d",&num);

	if(data[num-1] == 'Y')
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}