#include <cstdio>
#include <climits>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main()
{
	int n,max_tower_height= -INT_MAX;
	unordered_map<int,int> blocks;

	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		int temp;
		scanf("%d",&temp);
		blocks[temp]++;
		max_tower_height = max(max_tower_height,blocks[temp]);
	}

	printf("%d %d\n",max_tower_height,blocks.size());

	return 0;
}