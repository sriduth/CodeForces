#include <cstdio>
#include <vector>

using namespace std;

vector<int> x,y;

int matrix[100][100];
int sol[100][100];
int r,c;

bool check()
{
	if(matrix[0][0] == 1)
	{
		if(matrix[0][1] == 0 && matrix[1][0] == 0)
			return false;
	}
	if(matrix[r-1][c-1] == 1)
	{
		if(matrix[r-2][c-1] == 0 && matrix[r-1][c-2] == 0)
			return false;
	}
	if(matrix[r-1][0])
	{
		if(matrix[r-2][0] == 0 && matrix[r-1][1] == 0)
			return false;
	}
	if(matrix[0][c-1])
	{
		if(matrix[0][c-2] == 0 && matrix[1][c-1] == 0)
			return false;
	}

	for(int i=1;i<c-1;i++)
	{
		if(matrix[0][i-1] == 0 && matrix[0][i+1] == 0 && matrix[1][i] == 0)
			return false;
		if(matrix[r-1][i-1] == 0 && matrix[r-1][i+1] == 0 && matrix[r-2][i] == 0)
			return false;
	}

	for(int i=1;i<r-1;i++)
	{
		if(matrix[0][i] == 1)
		{
			if(matrix[0][i-1] == 0 && matrix[0][i+1] == 0 && matrix[1][i] == 0)
				return false;
			if(matrix[c-1][i-1] == 0 && matrix[c-1][i+1] == 0 && matrix[c-2][i] == 0)
				return false;
		}
	}

	for(int i=1;i<r-1;i++)
	{
		for(int j=1;j<c-1;j++)
		{
			if(matrix[i][j] == 1)
			{
				if(matrix[i-1][j] == 0 && matrix[i+1][j] == 0 && matrix[i][j-1] == 0 && matrix[i][j+1] == 0)
					return false;
			}
		}
	}
	return true;
}

void full_row_scan()
{
	for(int i=0;i<r;i++)
	{
		bool is_one = true;
		for(int j=0;j<c;j++)
		{
			if(matrix[i][j] == 0)
			{
				is_one = false;
				break;
			}
		}
		if(is_one)
			x.push_back(i);
	}
}

void full_column_scan()
{
	vector<int> a;
	for(int i=0;i<c;i++)
	{
		bool is_one = true;
		for(int j=0;j<r;j++)
		{
			if(matrix[j][i] == 0)
			{
				is_one = false;
				break;
			}
		}
	if(is_one)
		y.push_back(i);
	}
}

int main()
{
	scanf("%d %d",&r,&c);

	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
		{
			sol[i][j] = 0;
			matrix[i][j] = 0;
			scanf("%d",&matrix[i][j]);
		}
	if(!check())
	{
		printf("NO\n");
		return 0;
	}

	full_row_scan();
	full_column_scan();

	for(int i : x)
	{
		for(int j : y)
			sol[i][j] = 1;
	}

	printf("YES\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			printf("%d ",sol[i][j]);
		printf("\n");
	}
	return 0;
}