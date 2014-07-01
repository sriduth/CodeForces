#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,h=0,rem=0;
	scanf("%d%d",&a,&b);

	while(a)
	{
		/* Burnable candles */
		h += a;
		/* Left over wax*/
		rem += a%b;
		/* Moulding new candles */
		a = (a-a%b)/b + (rem-rem%b)/b;
		/* 
			Immediateley reuse leftover candle wax : (rem-rem%b)/b; 
			Do not accumulate the wax and do it outside the loop,
			we will miss possible candle formations.
		*/
		rem = rem%b;
	}

	printf("%d",h);

	return 0;
}