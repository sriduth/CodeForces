#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = a % b;

        a = b;
        b = temp;
    }
    return a;
}

int main()
{
	int sim=0,asim=0,stones=0,temp=0;
	scanf("%d%d%d",&sim,&asim,&stones);
	do
	{

		/*
			Simon Plays first
		*/
		temp = gcd(sim,stones);
		if(temp <= stones)
		{
			stones = stones - temp;
		}
		else
		{
			printf("1\n");
			break;
		}

		/* Antisimon's turn*/
		temp = gcd(asim,stones);
		if(temp <= stones)
		{
			stones = stones - temp;
		}
		else
		{
			printf("0\n");
			break;
		}

	}while(1);

	return 0;
}

