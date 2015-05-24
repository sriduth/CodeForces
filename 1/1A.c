#include <stdio.h>
#include <stdlib.h>

int main()
{
	long long n,m,a;
	scanf("%lld%lld%lld",&n,&m,&a);
	
	m = (n/a +(n%a > 0 ?1:0))*(m/a + (m%a > 0 ? 1:0));

	// So much  for knapsack
	/*
		n/a, m/a fit the square tiles where there is space
		the offsets, which are artial are taken care of by m%a > 0 
		condition.
	*/

	printf("%d\n",m);
			
	return 0;
}