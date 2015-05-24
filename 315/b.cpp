#include <cstdio>

using namespace std;

int main()
{
	int length,queries,increment = 0;

	scanf("%d%d",&length,&queries);

	int seq[length];

	for(int i=0;i<length;i++)
		scanf("%d",&seq[i]);

	for(int i=0;i<queries;i++)
	{
		int q_type,temp;

		scanf("%d",&q_type);

		if(q_type == 3)
		{
			scanf("%d",&temp);
			printf("%d\n",seq[temp-1]+increment);
		}

		else if(q_type == 2){
			scanf("%d",&temp);
			increment += temp;
		}

		else
		{
			scanf("%d",&temp);
			scanf("%d",&seq[temp-1]);
			seq[temp-1] -= increment;
		}
		
	}

	return 0;
}