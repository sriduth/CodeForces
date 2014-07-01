#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);

	int T,i,j;
	cin >> T;

	stack<char> path;
	int data[T][T];

	for(i=0;i<T;i++)
	{
		for(j=0;j<T;j++)
			cin >> data[i][j];
	}

	i = 0;
	j = 0;

	while(i != T-1 && j !=T-1)
	{
		if(data[i+1][j]%5 != 0 && i+1 < T)
		{
		
			if(data[i][j+1]%5 != 0 && j < T-1 && data[i][j+1]%2 != 0)
			{
				j++;
				path.push('R');
			}
			else if(data[i+1][j]%2 != 0)
			{	
				i++;
				path.push('D');
			}
			else
			{	
				i++;
				path.push('D');
			}	
		}
		else if(data[i][j+1]%5 != 0 && j+1 < T)
		{
			if(data[i+1][j]%5 != 0 && i < T-1 && data[i+1][j]%2 != 0)
			{
				j++;
				path.push('D');
			}
			else if(data[i][j+1]%2 != 0)
			{
				j++;
				path.push('R');
			}
			else
			{
				j++;
				path.push('R');
			}
		}
	}

	while(!path.empty())
	{
		cout << path.top();
		path.pop();
	}

	return 0;
}