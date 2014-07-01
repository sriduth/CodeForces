#include <stdio.h>
#include <stdlib.h>

int main()
{
	int songs,limit,jokes,min_time,i,times;
	scanf("%d%d",&songs,&limit);

	/*
		Calculate minimum time for singer to complete
	*/

	min_time = 0;
	for(i=0;i<songs;i++)
	{
		scanf("%d",&times);
		min_time = min_time + times + 10;
	}

	min_time = min_time - 10; // No need of rest for last 10 minutes? Lets see.

	/*
		Churu's performances between Devu's performances
	*/

	jokes = (songs-1)*2;

	/*
		Churus performances in rmaining availabe time.
	*/

	if(min_time <= limit)
	{
		limit = limit - min_time;
		jokes = jokes +(limit - limit%5)/5;
		printf("%d\n",jokes);
	}


	else
	{
		// If minimum time needed is greater than availabe time
		printf("-1\n");
	}
	
	return 0;
}