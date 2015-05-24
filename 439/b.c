#include <stdio.h>
#include <stdlib.h>

/*
	Inline declaration gives error?
*/
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
	/*
		N : Number of Subjects.
		I : Initial learning curve.
	*/

	int N,I,i;
	scanf("%d%d",&N,&I);

	long long T=0;
	int *subjects = malloc(sizeof(int)*N);

	/*
		Get the number of chapter in each subject.
	*/
	for(i=0;i<N;i++)
	{
		scanf("%d",&subjects[i]);
	}

	/*
		Sort the subjects in ascending order of quantity.
	*/
	qsort(subjects,N,sizeof(int), compare);

	/*
		Calculate time.
	*/

	for(i=0;i<N;i++)
	{
		T += I*subjects[i];

		if(I > 1)
			I--;
	}

	printf("%I64d",T);
	return 0;
}