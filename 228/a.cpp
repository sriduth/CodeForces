#include <cstdio>
#include <unordered_set>

using namespace std;

int main()
{
	int x;
	/* unorderd_set to filter the colours in hand. */
	unordered_set<int> M;

	scanf("%d",&x);
	M.insert(x);
	scanf("%d",&x);
	M.insert(x);
	scanf("%d",&x);
	M.insert(x);
	scanf("%d",&x);
	M.insert(x);

	printf("%d\n",4 - M.size());

	return 0;
}