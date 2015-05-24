#include <cstdio>
#include <algorithm>
#include <vector>

/*
	Faster than the <map> solution.cy
*/
using namespace std;

int main()
{
	int T,i,j;
	vector<int> V;

 	scanf("%d",&T);
 	for(i=0;i<12;i++)
 	{
 		scanf("%d",&j);
 		V.push_back(j);
 	}

 	/* Sorting the data. */
 	sort(V.begin(),V.end());

 	i = 12;

 	while(T > 0)
 	{
 		i--;
 		T -= V[i];
 	}

 	if( i >= 0)
 		printf("%d",12-i);

 	else
 		printf("-1\n");

 	V.clear();

	return 0;
}