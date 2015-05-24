#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
	int n,m, *A, *B, moves=0;
	scanf("%d%d",&n,&m);

	A = malloc(sizeof(int)*n);
	B = malloc(sizeof(int)*m);

	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}

	for(i=0;i<m;i++)
	{
		scanf("%d",&B[i]);
	}

	sort(A,n;sizeof(int),compare);
	sort(B,m;sizeof(int),compare);

	if(m>n)
	{
		for(i=0;i<n;i++)
		{
			moves += abs(A[i] - B[i]);
		}

		for(i=n;i<m;i++)
		{
			moves += abs(B[i]);
		}
	}

	else
	{
		for(i=0;i<n;i++)
		{
			moves += abs(A[i] - B[i]);
		}
	}

	printf("%d\n",moves);

	return 0;

}