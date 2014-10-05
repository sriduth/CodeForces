#include <cstdio>
#include <unordered_map>
#include <unordered_set>

using namespace std;

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
	int T;
	unordered_map<int,int> data;
	unordered_set<int> dp;

	scanf("%d",&T);

	int seq[T];
	int gcd_seq[T-1];

	for(int i=0;i<T;i++)
		scanf("%d",&seq[i]);

	for(int i=0;i<T-1;i++)
		gcd_seq[i] = gcd(seq[i],seq[i+1]);

	int queries,length,query;

	scanf("%d",&queries);

	while(queries--)
	{
		length = 0;
		scanf("%d",&query);
		for(int i=0;i<T-1;i++)
		{
			if(gcd_seq[i] == gcd_seq[i+1] && gcd_seq[i] == query)
				length++;
			else if(seq[i] == query)
			{
				dp.insert(1);
				length = 0;
			}
			
			else
			{
				dp.insert(length);
				length = 0;
			}
		}

		int count = 0;
		for(int len : dp)
		{
			count += (len)*(len-1)/2 + 1;
		}		
		dp.clear();
		printf("Sol = %d\n",count);
	}

	return 0;
}