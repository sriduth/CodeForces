#include <cstdio>
#include <utility>
#include <map>

/*
	Using <map>
	This is a pain in the ass.
*/
using namespace std;

int main()
{
	int T,temp,i,j=0;
	map<int,int> M;
	map<int,int>::reverse_iterator it;

	scanf("%d",&T);

	if(T==0)
		T = -666;

	for(i=0;i<12;i++)
	{
		scanf("%d",&temp);
		M[temp]++;
	}

	/* rbegin() & rend() can only be used with reverse_iterators*/
	for(it = M.rbegin();it != M.rend(); it++ )
	{
		/*
			Don't iterate forward, we will miss one element.
		*/
		while((it->second != 0) && (T > 0))
		{	
			T -= it->first;
			it->second--;
			++j;
			
			if(T <= 0)
			{
				T = -666;
				break;
			}
		}

		if(T == -666)
			break;
	}

	if(T == -666)
		printf("%d\n",j);

	else
		printf("-1\n");

 	return 0;
}