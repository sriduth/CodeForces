#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int n,l,x,y;

	// n - number of marks on rule
	// l - length of ruler
	// y - jump distance of boys
	// x - jump distance of girl

	scanf("%d%d%d%d",&n,&l,&x,&y);

	int marks[n];
	bool x_mes = false,y_mes = false;

	for(int i=0;i<n;i++)
	{
		scanf("%d",&marks[i]);
		if(marks[i] == x) 
			x_mes = true;
		if(marks[i] == y)
			y_mes = true;
	}

	if(x_mes && y_mes)
	{
		printf("0\n");
		return 0;
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(abs(marks[i] - marks[j]) == x)
				x_mes = true;
			if(abs(marks[i] - marks[j]) == y)
				y_mes = true;
		}
		if(x_mes && y_mes)
		{
			printf("0\n");
			return 0;
		}
	}

	if(!x_mes && ! y_mes)
	{
		printf("2\n%d %d\n",x,y);
		return 0;
	}
	else
	{
		if(!x_mes)
			printf("1\n%d\n",x);
		else
			printf("1\n%d\n",y);
	}
	return 0;
}