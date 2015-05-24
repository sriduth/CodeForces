#include <cstdio>
#include <unordered_map>

using namespace std;

int main()
{
	unordered_map<char,int> C;
	int temp; 
	char ch;

	scanf("%d",&temp);
	C['1'] = temp;
	scanf("%d",&temp);
	C['2'] = temp;
	scanf("%d",&temp);
	C['3'] = temp;
	scanf("%d",&temp);
	C['4'] = temp;

	temp = 0;

	ch = getchar();
	
	while((ch = getchar()) != '\n')
	{
		temp += C[ch];
	}

	C.clear();
	printf("%d",temp);

	return 0;
}