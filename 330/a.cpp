#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cin.sync_with_stdio(false);

	int R,C,i,j,count=0,ins=0;
	char temp;
	vector< vector<char> > CAKE;
	vector<char> SLICE;

	cin >> R >> C;

	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			cin >> temp;
			SLICE.push_back(temp);
		}
		CAKE.push_back(SLICE);
		SLICE.clear();
	}

	// Row Scan
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			if(CAKE[i][j] != 'S')
				temp = 'E';
			else
			{
				temp = 'D';
				break;
			}	
		}

		if(temp == 'E')
		{
			for(j=0;j<C;j++)
			{
				count++;
				CAKE[i][j] = '~';
			}
		}
	}

	// Column Scan
	for(i=0;i<C;i++)
	{
		for(j=0;j<R;j++)
		{
			if(CAKE[j][i] != 'S')
				temp = 'E';
			else
			{
				temp = 'D';
				break;
			}
		}

		if(temp == 'E')
		{
			for(j=0;j<R;j++)
			{
				if(CAKE[j][i] != '~')
				{
					count++;
					CAKE[j][i] = '~';
				}
			}
		}
	}

	cout << count << endl;
	
	return 0;
}