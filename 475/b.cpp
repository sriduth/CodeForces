#include <iostream>
#include <cstring>
using namespace std;

char street_LR[20];
char street_UD[20];
bool visited[20][20];
int vcount;

int x,y;

void dfs(int a,int b)
{
	if(visited[b][a] || a >= y || b >= x || a < 0 || b < 0)
		return;

	visited[b][a] = true;
	vcount++;

	if(street_LR[b] == '>')
	{
		dfs(a,b+1);
		
		if(street_UD[a] == '^')
			dfs(a-1,b);
		else
			dfs(a+1,b);
	}
	else if(street_LR[b] == '<')
	{
		dfs(a,b-1);
		if(street_UD[a] == '^')
			dfs(a-1,b);
		else
			dfs(a+1,b);
	}
	
}
int main()
{
	int a,b;
	memset(visited,0,sizeof(visited));

	cin >> a >> b;

	x = b;
	y = a;

	for(int i=0;i<x;i++)
		cin >> street_LR[i];
	
	for(int i=0;i<y;i++)
		cin >> street_UD[i];

	if
	( 
		(street_UD[0] == '^' && street_LR[0] == '<') 	 ||
		(street_UD[x-1] == 'v' && street_LR[y-1] == '>') ||
		(street_UD[0] == 'v' && street_LR[y-1] == '<')   ||
		(street_UD[x-1] == '^' && street_LR[0] == '>')
	)
	{
		cout << "NO" << endl;
		return 0;
	}
	else
	{
		for(int i=0;i<x;i++)
		{
			for(int j=0;j<y;j++)
			{
				dfs(i,j);
				for(int k=0;k<y;k++)
				{
					for(int l=0;l<x;l++)
					{
						cout << visited[k][l] << " ";
					}
					cout << endl;
				}

				memset(visited,0,sizeof(visited));
				if(vcount != x*y)
				{
					cout << "NO" << endl;
				}

			}
		}
	}

	cout << "YES" << endl;
	return 0;
}