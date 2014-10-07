#include <iostream>
#include <cstring>

using namespace std;

int horizontal,vertical;
char hor_streets[20],vert_streets[20];

bool visited[20][20];

void search(int x,int y)
{
	if(visited[x][y])
		return;

	if( (y < 0) || (x < 0) || (x >= horizontal) || (y >= vertical) )
		return;

	visited[x][y] = true;

	if(hor_streets[x] == '>')
		search(x,y+1);
	if(hor_streets[x] == '<')
		search(x,y-1);
	if(vert_streets[y] == '^')
		search(x-1,y);
	if(vert_streets[y] == 'v')
		search(x+1,y);

}

bool check_if_visited_all()
{
	bool visited_all = true;

	for(int i=0;i<horizontal;i++)
	{
		for(int j=0;j<vertical;j++)
		{
			if(!visited[i][j])
			{
				visited_all = false;
				break;
			}
		}
		if(!visited_all)
			break;
	}

	return visited_all;
}

void clear_array()
{
	for(int i=0;i<horizontal;i++)
	{
		for(int j=0;j<vertical;j++)
			visited[i][j] = false;
	}
}

void print_array()
{
	for(int i=0;i<horizontal;i++)
	{
		for(int j=0;j<vertical;j++)
			cout << visited[i][j] << " ";
		cout << endl;
	}
}
int main()
{
	cin >> horizontal >> vertical;

	for(int i=0;i<horizontal;i++)
		cin >> hor_streets[i];

	for(int i=0;i<vertical;i++)
		cin >> vert_streets[i];

	bool sol = true;
	for(int i=0;i<horizontal;i++)
	{
		for(int j=0;j<vertical;j++)
		{
			clear_array();
			search(i,j);
			sol &= check_if_visited_all();
		}
	}

	if(sol)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}