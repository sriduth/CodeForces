#include <cstdio>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
	int n,sol = -INT_MAX;
	scanf("%d",&n);

	int seq[n];

	for(int i=0;i<n;i++)
		scanf("%d",&seq[i]);

	for(int i=3;i<=n;i++)
	{
		if(n%i == 0)
		{
			for(int j=0;j<n/i;j++)
			{
				int temp = 0;
				for(int k=0;k<i;k++)
					temp += seq[j +n/i*k];
				sol = max(sol,temp);
			}
		}
	}

	printf("%d\n",sol);	
	return 0;
}